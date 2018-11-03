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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/arxitektonikh1/RS_ar_control.vhd";
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_4173170879_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(28, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 6576);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 2U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6400);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4173170879_3212880686_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t2 = (t0 + 10243);
    t5 = 1;
    if (3U == 3U)
        goto LAB8;

LAB9:    t5 = 0;

LAB10:    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB20:    t21 = (t0 + 6640);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t21);

LAB2:    t26 = (t0 + 6416);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t16 = (t0 + 6640);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t16);
    goto LAB2;

LAB5:    t9 = (t0 + 3272U);
    t10 = *((char **)t9);
    t9 = (t0 + 10246);
    t12 = 1;
    if (3U == 3U)
        goto LAB14;

LAB15:    t12 = 0;

LAB16:    t1 = t12;
    goto LAB7;

LAB8:    t6 = 0;

LAB11:    if (t6 < 3U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB9;

LAB13:    t6 = (t6 + 1);
    goto LAB11;

LAB14:    t13 = 0;

LAB17:    if (t13 < 3U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t14 = (t10 + t13);
    t15 = (t9 + t13);
    if (*((unsigned char *)t14) != *((unsigned char *)t15))
        goto LAB15;

LAB19:    t13 = (t13 + 1);
    goto LAB17;

LAB21:    goto LAB2;

}

static void work_a_4173170879_3212880686_p_2(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(30, ng0);

LAB3:    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 10184U);
    t4 = (t0 + 3272U);
    t5 = *((char **)t4);
    t4 = (t0 + 10184U);
    t6 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (3U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 6704);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 3U);
    xsi_driver_first_trans_fast_port(t11);

LAB2:    t16 = (t0 + 6432);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(3U, t9, 0);
    goto LAB6;

}

static void work_a_4173170879_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 10293);
    t6 = (t0 + 6768);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t21 = (t14 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t1, 3U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 10296);
    t6 = (t0 + 6832);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t21 = (t14 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t1, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 10299);
    t6 = (t0 + 6896);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t21 = (t14 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t1, 5U);
    xsi_driver_first_trans_fast_port(t6);

LAB3:    t1 = (t0 + 6448);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2632U);
    t6 = *((char **)t1);
    t7 = (0 - 2);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t6 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB8;

LAB9:    t13 = (t0 + 3272U);
    t14 = *((char **)t13);
    t15 = (0 - 2);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t13 = (t14 + t18);
    t19 = *((unsigned char *)t13);
    t20 = (t19 == (unsigned char)3);
    t5 = t20;

LAB10:    if (t5 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t7 = (1 - 2);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t4 = *((unsigned char *)t1);
    t5 = (t4 == (unsigned char)2);
    if (t5 == 1)
        goto LAB13;

LAB14:    t6 = (t0 + 3272U);
    t13 = *((char **)t6);
    t15 = (1 - 2);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t6 = (t13 + t18);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;

LAB15:    if (t3 != 0)
        goto LAB11;

LAB12:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t7 = (2 - 2);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t4 = *((unsigned char *)t1);
    t5 = (t4 == (unsigned char)2);
    if (t5 == 1)
        goto LAB18;

LAB19:    t6 = (t0 + 3272U);
    t13 = *((char **)t6);
    t15 = (2 - 2);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t6 = (t13 + t18);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;

LAB20:    if (t3 != 0)
        goto LAB16;

LAB17:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 10282);
    t6 = (t0 + 6768);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t21 = (t14 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t1, 3U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 10285);
    t6 = (t0 + 6832);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t21 = (t14 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t1, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 10288);
    t6 = (t0 + 6896);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t21 = (t14 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t1, 5U);
    xsi_driver_first_trans_fast_port(t6);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(39, ng0);
    t21 = (t0 + 10249);
    t23 = (t0 + 6768);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t21, 3U);
    xsi_driver_first_trans_fast_port(t23);
    xsi_set_current_line(40, ng0);
    t1 = (t0 + 10252);
    t6 = (t0 + 6832);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t21 = (t14 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t1, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 10255);
    t6 = (t0 + 6896);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t21 = (t14 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t1, 5U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB6;

LAB8:    t5 = (unsigned char)1;
    goto LAB10;

LAB11:    xsi_set_current_line(44, ng0);
    t14 = (t0 + 10260);
    t22 = (t0 + 6768);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t14, 3U);
    xsi_driver_first_trans_fast_port(t22);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 10263);
    t6 = (t0 + 6832);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t21 = (t14 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t1, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 10266);
    t6 = (t0 + 6896);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t21 = (t14 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t1, 5U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB6;

LAB13:    t3 = (unsigned char)1;
    goto LAB15;

LAB16:    xsi_set_current_line(49, ng0);
    t14 = (t0 + 10271);
    t22 = (t0 + 6768);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t14, 3U);
    xsi_driver_first_trans_fast_port(t22);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 10274);
    t6 = (t0 + 6832);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t21 = (t14 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t1, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 10277);
    t6 = (t0 + 6896);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t21 = (t14 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t1, 5U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB6;

LAB18:    t3 = (unsigned char)1;
    goto LAB20;

}

static void work_a_4173170879_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(146, ng0);
    t1 = (t0 + 10455);
    t5 = (t0 + 7088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(147, ng0);
    t1 = (t0 + 10457);
    t5 = (t0 + 6960);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 5U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(148, ng0);
    t1 = (t0 + 10462);
    t5 = (t0 + 7024);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 3U);
    xsi_driver_first_trans_fast(t5);

LAB3:    t1 = (t0 + 6464);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t1 = (t0 + 10304);
    t7 = xsi_mem_cmp(t1, t5, 3U);
    if (t7 == 1)
        goto LAB6;

LAB14:    t8 = (t0 + 10307);
    t10 = xsi_mem_cmp(t8, t5, 3U);
    if (t10 == 1)
        goto LAB7;

LAB15:    t11 = (t0 + 10310);
    t13 = xsi_mem_cmp(t11, t5, 3U);
    if (t13 == 1)
        goto LAB8;

LAB16:    t14 = (t0 + 10313);
    t16 = xsi_mem_cmp(t14, t5, 3U);
    if (t16 == 1)
        goto LAB9;

LAB17:    t17 = (t0 + 10316);
    t19 = xsi_mem_cmp(t17, t5, 3U);
    if (t19 == 1)
        goto LAB10;

LAB18:    t20 = (t0 + 10319);
    t22 = xsi_mem_cmp(t20, t5, 3U);
    if (t22 == 1)
        goto LAB11;

LAB19:    t23 = (t0 + 10322);
    t25 = xsi_mem_cmp(t23, t5, 3U);
    if (t25 == 1)
        goto LAB12;

LAB20:
LAB13:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 10445);
    t5 = (t0 + 6960);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 5U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(141, ng0);
    t1 = (t0 + 10450);
    t5 = (t0 + 7024);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 10453);
    t5 = (t0 + 7088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t5);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(75, ng0);
    t26 = (t0 + 10325);
    t28 = (t0 + 6960);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t26, 5U);
    xsi_driver_first_trans_fast_port(t28);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 10330);
    t5 = (t0 + 7024);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 10333);
    t5 = (t0 + 7088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t5);
    goto LAB5;

LAB7:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 10335);
    t5 = (t0 + 6960);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 5U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 10340);
    t5 = (t0 + 7024);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 10343);
    t5 = (t0 + 7088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t5);
    goto LAB5;

LAB8:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 10345);
    t5 = (t0 + 6960);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 5U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 10350);
    t5 = (t0 + 7024);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 10353);
    t5 = (t0 + 7088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t5);
    goto LAB5;

LAB9:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 10365);
    t5 = (t0 + 6960);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 5U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 10370);
    t5 = (t0 + 7024);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 10373);
    t5 = (t0 + 7088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t5);

LAB23:    goto LAB5;

LAB10:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)0);
    if (t4 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 10385);
    t5 = (t0 + 6960);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 5U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 10390);
    t5 = (t0 + 7024);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 10393);
    t5 = (t0 + 7088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t5);

LAB26:    goto LAB5;

LAB11:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)0);
    if (t4 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 10405);
    t5 = (t0 + 6960);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 5U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(119, ng0);
    t1 = (t0 + 10410);
    t5 = (t0 + 7024);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 10413);
    t5 = (t0 + 7088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t5);

LAB29:    goto LAB5;

LAB12:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)0);
    if (t4 != 0)
        goto LAB31;

LAB33:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB34;

LAB35:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 10435);
    t5 = (t0 + 6960);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 5U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(134, ng0);
    t1 = (t0 + 10440);
    t5 = (t0 + 7024);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 10443);
    t5 = (t0 + 7088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t5);

LAB32:    goto LAB5;

LAB21:;
LAB22:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 10355);
    t6 = (t0 + 6960);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 5U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 10360);
    t5 = (t0 + 7024);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 10363);
    t5 = (t0 + 7088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t5);
    goto LAB23;

LAB25:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 10375);
    t6 = (t0 + 6960);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 5U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 10380);
    t5 = (t0 + 7024);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 10383);
    t5 = (t0 + 7088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t5);
    goto LAB26;

LAB28:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 10395);
    t6 = (t0 + 6960);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 5U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 10400);
    t5 = (t0 + 7024);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 10403);
    t5 = (t0 + 7088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t5);
    goto LAB29;

LAB31:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 10415);
    t6 = (t0 + 6960);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 5U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 10420);
    t5 = (t0 + 7024);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 10423);
    t5 = (t0 + 7088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t5);
    goto LAB32;

LAB34:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 10425);
    t6 = (t0 + 6960);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 5U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 10430);
    t5 = (t0 + 7024);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 10433);
    t5 = (t0 + 7088);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t5);
    goto LAB32;

}

static void work_a_4173170879_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(156, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 10465);
    t4 = 1;
    if (2U == 2U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 10467);
    t4 = 1;
    if (2U == 2U)
        goto LAB13;

LAB14:    t4 = 0;

LAB15:    if (t4 != 0)
        goto LAB11;

LAB12:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 10469);
    t4 = 1;
    if (2U == 2U)
        goto LAB21;

LAB22:    t4 = 0;

LAB23:    if (t4 != 0)
        goto LAB19;

LAB20:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 7152);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 6480);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(157, ng0);
    t8 = (t0 + 7152);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);
    goto LAB3;

LAB5:    t5 = 0;

LAB8:    if (t5 < 2U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB11:    xsi_set_current_line(159, ng0);
    t8 = (t0 + 7152);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t8);
    goto LAB3;

LAB13:    t5 = 0;

LAB16:    if (t5 < 2U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB14;

LAB18:    t5 = (t5 + 1);
    goto LAB16;

LAB19:    xsi_set_current_line(161, ng0);
    t8 = (t0 + 7152);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)0;
    xsi_driver_first_trans_fast(t8);
    goto LAB3;

LAB21:    t5 = 0;

LAB24:    if (t5 < 2U)
        goto LAB25;
    else
        goto LAB23;

LAB25:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB22;

LAB26:    t5 = (t5 + 1);
    goto LAB24;

}

static void work_a_4173170879_3212880686_p_6(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(171, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6496);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(172, ng0);
    t3 = (t0 + 2952U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 7216);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t3);
    goto LAB3;

}


extern void work_a_4173170879_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4173170879_3212880686_p_0,(void *)work_a_4173170879_3212880686_p_1,(void *)work_a_4173170879_3212880686_p_2,(void *)work_a_4173170879_3212880686_p_3,(void *)work_a_4173170879_3212880686_p_4,(void *)work_a_4173170879_3212880686_p_5,(void *)work_a_4173170879_3212880686_p_6};
	xsi_register_didat("work_a_4173170879_3212880686", "isim/RS_arithmetic_test_isim_beh.exe.sim/work/a_4173170879_3212880686.didat");
	xsi_register_executes(pe);
}
