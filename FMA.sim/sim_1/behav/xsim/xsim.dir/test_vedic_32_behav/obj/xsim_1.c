/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_3030(char*, char *);
extern void execute_9752(char*, char *);
extern void execute_9753(char*, char *);
extern void execute_9487(char*, char *);
extern void execute_9553(char*, char *);
extern void execute_9554(char*, char *);
extern void execute_9652(char*, char *);
extern void execute_9750(char*, char *);
extern void execute_9751(char*, char *);
extern void execute_4511(char*, char *);
extern void execute_4545(char*, char *);
extern void execute_4546(char*, char *);
extern void execute_4596(char*, char *);
extern void execute_4646(char*, char *);
extern void execute_4647(char*, char *);
extern void execute_3327(char*, char *);
extern void execute_3345(char*, char *);
extern void execute_3346(char*, char *);
extern void execute_3372(char*, char *);
extern void execute_3398(char*, char *);
extern void execute_3399(char*, char *);
extern void execute_3400(char*, char *);
extern void execute_3401(char*, char *);
extern void execute_3402(char*, char *);
extern void execute_3403(char*, char *);
extern void execute_3067(char*, char *);
extern void execute_3077(char*, char *);
extern void execute_3078(char*, char *);
extern void execute_3092(char*, char *);
extern void execute_3106(char*, char *);
extern void execute_3107(char*, char *);
extern void execute_3035(char*, char *);
extern void execute_3036(char*, char *);
extern void execute_3037(char*, char *);
extern void execute_3038(char*, char *);
extern void execute_3039(char*, char *);
extern void execute_3040(char*, char *);
extern void execute_3076(char*, char *);
extern void execute_3068(char*, char *);
extern void execute_3069(char*, char *);
extern void execute_3070(char*, char *);
extern void execute_3071(char*, char *);
extern void execute_3091(char*, char *);
extern void execute_3344(char*, char *);
extern void execute_3371(char*, char *);
extern void execute_4544(char*, char *);
extern void execute_4595(char*, char *);
extern void execute_9552(char*, char *);
extern void execute_9651(char*, char *);
extern void execute_3032(char*, char *);
extern void execute_3033(char*, char *);
extern void execute_3034(char*, char *);
extern void execute_9754(char*, char *);
extern void execute_9755(char*, char *);
extern void execute_9756(char*, char *);
extern void execute_9757(char*, char *);
extern void execute_9758(char*, char *);
extern void transaction_2(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_3(char*, char*, unsigned, unsigned, unsigned);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
funcp funcTab[60] = {(funcp)execute_3030, (funcp)execute_9752, (funcp)execute_9753, (funcp)execute_9487, (funcp)execute_9553, (funcp)execute_9554, (funcp)execute_9652, (funcp)execute_9750, (funcp)execute_9751, (funcp)execute_4511, (funcp)execute_4545, (funcp)execute_4546, (funcp)execute_4596, (funcp)execute_4646, (funcp)execute_4647, (funcp)execute_3327, (funcp)execute_3345, (funcp)execute_3346, (funcp)execute_3372, (funcp)execute_3398, (funcp)execute_3399, (funcp)execute_3400, (funcp)execute_3401, (funcp)execute_3402, (funcp)execute_3403, (funcp)execute_3067, (funcp)execute_3077, (funcp)execute_3078, (funcp)execute_3092, (funcp)execute_3106, (funcp)execute_3107, (funcp)execute_3035, (funcp)execute_3036, (funcp)execute_3037, (funcp)execute_3038, (funcp)execute_3039, (funcp)execute_3040, (funcp)execute_3076, (funcp)execute_3068, (funcp)execute_3069, (funcp)execute_3070, (funcp)execute_3071, (funcp)execute_3091, (funcp)execute_3344, (funcp)execute_3371, (funcp)execute_4544, (funcp)execute_4595, (funcp)execute_9552, (funcp)execute_9651, (funcp)execute_3032, (funcp)execute_3033, (funcp)execute_3034, (funcp)execute_9754, (funcp)execute_9755, (funcp)execute_9756, (funcp)execute_9757, (funcp)execute_9758, (funcp)transaction_2, (funcp)transaction_3, (funcp)vlog_transfunc_eventcallback};
const int NumRelocateId= 60;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/test_vedic_32_behav/xsim.reloc",  (void **)funcTab, 60);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/test_vedic_32_behav/xsim.reloc");
}

void simulate(char *dp)
{
	iki_schedule_processes_at_time_zero(dp, "xsim.dir/test_vedic_32_behav/xsim.reloc");
	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net
	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/test_vedic_32_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/test_vedic_32_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/test_vedic_32_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
