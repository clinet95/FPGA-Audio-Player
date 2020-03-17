#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

const string LOAD = "Load s0, ascii_";
const string STORE = "Store s0, ";
const string PARAGRAPH[] = {"\txor s0, s0 ;initializes s0 to zero\nnext_letter", //here next_letter is supposed to be changed
                            "input s3, buffer_full	;check if buffer is full\n\tcompare s3, 01\n\tjump z, buffer_full_call", //here junmp is missing stuff
                            "fetch s1, (s0)	;fetch next instruction from scratchpad ram\n\tadd s0, 01	;increment to next address\nready_buffer", //here it is because of ready_buffer
                            "output s1, uart_data_tx	;	output letter to uart_tx\n\tcompare s0, ", //compare to i_max_count
                            "jump nz, next_letter", //missing the extension to label
                            "jump PLACEHOLDER!!!\nbuffer_full_call", //last label miising stuff
		                    "load sF, sF	;buffer full stall\n\tjump next_letter"}; // jump to label missing stuff

void getFileName(string& s)
{
    std::cout << "Please enter the name of the file you wish to convert (include file extension): ";
    cin >> s;

    while(cin.fail())
    {
        std::cout << "Invalid input. Please enter the name of the file you wish to convert over (include file extension): ";
        cin >> s;
    }

    return;
}

string getOutputName(string inName, string& extension)
{
    string out;

    out = inName;
    for(int i = 0; i < 4; i++)
        out.pop_back();

    //This creates the "_ext_" version of the extension of the 
    //files for use with the different paragraphs per lines
    extension = "_";
    for (size_t i = 10; i < out.length(); i++)
        extension.push_back(out[i]);
    extension.push_back('_');

    out += "(Converted).txt";
    
    return out;
}

void convertFile(ifstream& inputFile, ofstream& outputFile, const string& ext)
{
    int lineNumber = 1;
    string statement, out;
    ostringstream oss;
    string::iterator p;

    while(!inputFile.fail() && !inputFile.eof())
    {
        int i = 0;
        //statement = inputFile.getline();
        getline(inputFile, statement);
        std::cout << statement << endl;
        p = statement.begin();

        //Line String Breakdown
        while(*p != '\0'){
            if((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || (*p >= '0' && *p <= '9')){
                oss << LOAD + *p;
                oss << '\n';
                oss << STORE + to_string(i);
                oss << '\n';
            }
            else if(*p == ' '){
                oss << LOAD + "SPACE";
                oss << '\n';
                oss << STORE + to_string(i);
                oss << '\n';
            }
            else if(*p == '.'){
                oss << LOAD + "PERIOD";
                oss << '\n';
                oss << STORE + to_string(i);
                oss << '\n';
            }
            else if(*p == ':'){
                oss << LOAD + "COLON";
                oss << '\n';
                oss << STORE + to_string(i);
                oss << '\n';
            }
            else if(*p == ')'){
                oss << LOAD + "RPAREN";
                oss << '\n';
                oss << STORE + to_string(i);
                oss << '\n';
            }
            else if(*p == '/'){
                oss << LOAD + "FWDSLASH";
                oss << '\n';
                oss << STORE + to_string(i);
                oss << '\n';
            }
            else if(*p == '?'){
                oss << LOAD + "QUESTION";
                oss << '\n';
                oss << STORE + to_string(i);
                oss << '\n';
            }
            else{
                oss << LOAD + "DEFAULT";
                oss << '\n';
                oss << STORE + to_string(i);
                oss << '\n';
            }
            p++;
            i++;
        }
        
        oss << LOAD + "LF";
        oss << '\n';
        oss << STORE + to_string(i);
        oss << '\n'; 
        oss << '\n';

        //Managing Paragraph and Label Extensions
        for(size_t i = 0; i < 3; i++){
            oss << PARAGRAPH[i] + ext + to_string(lineNumber);
            if(i % 2 == 0)
                oss << ":";
            oss << "\n\t";
        }

        oss << PARAGRAPH[3] + to_string(i) + "\n\t";

        for (size_t i = 4; i < 7; i++){
            oss << PARAGRAPH[i] + ext + to_string(lineNumber);
            if(i % 2 == 1)
                oss << ":";
            if(i != 6)
                oss << "\n\t";
            else
                oss << "\n\n";
        }
        lineNumber++;
    }

    out += oss.str();
    outputFile << out;

    return;
}

int main()
{
    ifstream inputFile;
    ofstream outputFile;
    string fileName, ext;

    getFileName(fileName);

    string fileNameOut = getOutputName(fileName, ext);    

    //Open the input file
    inputFile.open(fileName);
    if(!inputFile.is_open())    //If file does not open, print error message and return
    {
        std::cout << "Unable to open the specified file. Please try again.\n";
        return -1;
    }

    //Open/Create the output file
    outputFile.open(fileNameOut);

    convertFile(inputFile, outputFile, ext);

    inputFile.close();
    outputFile.close();

    std::cout << "File successfully converted. The conversion has been written to output file " << fileNameOut;

    return 0;
}