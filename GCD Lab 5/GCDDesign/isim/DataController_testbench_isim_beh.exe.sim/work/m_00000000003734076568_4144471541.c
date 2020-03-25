/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Xilinx/Projects/Lab 5/GCDDesign/Controller.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {11U, 0U};
static unsigned int ng11[] = {7U, 0U};
static unsigned int ng12[] = {8U, 0U};
static unsigned int ng13[] = {9U, 0U};
static unsigned int ng14[] = {10U, 0U};
static unsigned int ng15[] = {12U, 0U};



static void Always_46_0(char *t0)
{
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 5736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 6056);
    *((int *)t2) = 1;
    t3 = (t0 + 5768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 3296U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(51, ng0);

LAB10:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB36;

LAB37:
LAB38:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);

LAB9:    xsi_set_current_line(48, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4816);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    goto LAB8;

LAB12:    xsi_set_current_line(53, ng0);

LAB39:    xsi_set_current_line(54, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 4496);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB38;

LAB14:    xsi_set_current_line(58, ng0);

LAB40:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 2816U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB44;

LAB42:    if (*((unsigned int *)t3) == 0)
        goto LAB41;

LAB43:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;

LAB44:    t12 = (t14 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (~(t15));
    t17 = *((unsigned int *)t14);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(62, ng0);

LAB49:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB47:    goto LAB38;

LAB16:    xsi_set_current_line(68, ng0);

LAB50:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 4816);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB38;

LAB18:    xsi_set_current_line(72, ng0);

LAB51:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3856);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB38;

LAB20:    xsi_set_current_line(78, ng0);

LAB52:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4176);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB38;

LAB22:    xsi_set_current_line(85, ng0);

LAB53:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4336);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2976U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(90, ng0);

LAB58:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB56:    goto LAB38;

LAB24:    xsi_set_current_line(95, ng0);

LAB59:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 3136U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(99, ng0);

LAB64:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB62:    goto LAB38;

LAB26:    xsi_set_current_line(104, ng0);

LAB65:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 4016);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB38;

LAB28:    xsi_set_current_line(110, ng0);

LAB66:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 3856);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 4816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB38;

LAB30:    xsi_set_current_line(116, ng0);

LAB67:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4176);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 4816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB38;

LAB32:    xsi_set_current_line(122, ng0);

LAB68:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 4816);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB38;

LAB34:    xsi_set_current_line(126, ng0);

LAB69:    xsi_set_current_line(127, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 4496);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB38;

LAB36:    xsi_set_current_line(131, ng0);

LAB70:    xsi_set_current_line(132, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 4816);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB38;

LAB41:    *((unsigned int *)t14) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(59, ng0);

LAB48:    xsi_set_current_line(60, ng0);
    t20 = ((char*)((ng4)));
    t21 = (t0 + 4816);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 4);
    goto LAB47;

LAB54:    xsi_set_current_line(87, ng0);

LAB57:    xsi_set_current_line(88, ng0);
    t5 = ((char*)((ng9)));
    t11 = (t0 + 4816);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB56;

LAB60:    xsi_set_current_line(96, ng0);

LAB63:    xsi_set_current_line(97, ng0);
    t11 = ((char*)((ng11)));
    t12 = (t0 + 4816);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    goto LAB62;

}


extern void work_m_00000000003734076568_4144471541_init()
{
	static char *pe[] = {(void *)Always_46_0};
	xsi_register_didat("work_m_00000000003734076568_4144471541", "isim/DataController_testbench_isim_beh.exe.sim/work/m_00000000003734076568_4144471541.didat");
	xsi_register_executes(pe);
}
