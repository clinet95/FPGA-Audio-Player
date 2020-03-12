#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

const string LOAD = "Load s0, ascii_";
const string STORE = "Store s0, ";

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

string getOutputName(string inName)
{
    string out;

    out = inName;
    for(int i = 0; i < 4; i++)
        out.pop_back();
    out += "(Converted).txt";
    
    return out;
}

void convertFile(ifstream& inputFile, ofstream& outputFile)
{
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
    }

    out += oss.str();
    outputFile << out;

    return;
}

int main()
{
    ifstream inputFile;
    ofstream outputFile;
    string fileName;

    getFileName(fileName);

    string fileNameOut = getOutputName(fileName);    

    //Open the input file
    inputFile.open(fileName);
    if(!inputFile.is_open())    //If file does not open, print error message and return
    {
        std::cout << "Unable to open the specified file. Please try again.\n";
        return -1;
    }

    //Open/Create the output file
    outputFile.open(fileNameOut);

    convertFile(inputFile, outputFile);

    inputFile.close();
    outputFile.close();

    std::cout << "File successfully converted. The conversion has been written to output file " << fileNameOut;

    return 0;
}