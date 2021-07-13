/* EXECUTIVE DISASSEMBLING FUNCTIONS */
 
#ifndef __DISASM_H
#define __DISASM_H

extern int MODE;  /* used bits:  0,1, 2,3,4 */
extern void set_flag(_uchar flag);
extern _uchar is_flag(_uchar flag);

extern char* f_nop (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_bit (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_res (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_set (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_ld (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_call (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_reti (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_retn (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_ret (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_inc (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_dec (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_rrca (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_rra (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_rla (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_rlca (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_add (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_adc (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_sub (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_sbc (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_djnz (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_jp (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_jr (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_daa (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_cpl (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_scf (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_ccf (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_halt (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_sdc (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_and (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_xor (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_or (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_cp (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_pop (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_push (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_rst (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_out (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_in (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_exx (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_di (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_ei (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_rrc (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_rlc (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_ex (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_rr (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_rl (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_sla (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_sll (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_srl (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_neg (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_sra (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_im (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_rrd (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_rld (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_ldd (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_lddr (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_ldi (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_ldir (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_cpd (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_cpdr (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_cpi (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_cpir (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_ind (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_indr (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_ini (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_inir (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_outd (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_otdr (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_outi (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_otir (_ushort a1,_uchar t1,_ushort a2,_uchar t2);
extern char* f_nop2 (_ushort a1,_uchar t1,_ushort a2,_uchar t2);

#endif
