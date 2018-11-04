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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    work_a_0290344353_3212880686_init();
    work_a_2453171190_3212880686_init();
    work_a_2895730147_3212880686_init();
    work_a_3230984351_3212880686_init();
    work_a_0002982409_3212880686_init();
    work_a_0200802635_3212880686_init();
    work_a_4108668482_3212880686_init();
    work_a_2306142521_3212880686_init();
    work_a_2537006236_3212880686_init();
    work_a_0330890280_1181938964_init();
    work_a_0377552751_3212880686_init();
    work_a_2207815486_3212880686_init();
    work_a_1762711874_3212880686_init();
    work_a_0533501198_1181938964_init();
    work_a_0213454609_3212880686_init();
    work_a_3720043404_3212880686_init();
    work_a_0922322361_1181938964_init();
    work_a_0038911295_3212880686_init();
    work_a_2081551473_3212880686_init();
    work_a_1625853307_3212880686_init();
    work_a_2668828412_3212880686_init();
    work_a_3759130379_3212880686_init();
    work_a_2545418251_3212880686_init();
    work_a_2615964831_3212880686_init();
    work_a_0028200735_2372691052_init();


    xsi_register_tops("work_a_0028200735_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");

    return xsi_run_simulation(argc, argv);

}
