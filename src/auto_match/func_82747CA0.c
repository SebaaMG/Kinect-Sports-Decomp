typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_826BF638();
extern int fn_826C1FF8();
extern int fn_82747B98();
extern unsigned int iStack_c4;
extern unsigned int iStack_c8;
extern unsigned int iStack_cc;
extern unsigned int iStack_d0;
extern unsigned int iStack_d4;
extern unsigned int iStack_d8;
extern unsigned int lbl_820129E0;
extern unsigned int lbl_82012AD0;
extern unsigned int lbl_82012B24;
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_68;
extern unsigned int uStack_78;
extern unsigned int uStack_88;
extern unsigned int uStack_98;
extern unsigned int uStack_a8;
extern unsigned int uStack_d9;
extern unsigned int uStack_da;
extern unsigned int uStack_db;
extern unsigned int uStack_dc;
extern unsigned int uStack_dd;
extern unsigned int uStack_de;
extern unsigned int uStack_df;
extern unsigned int uStack_e0;


undefined4 * fn_82747CA0(undefined4 *param_1,uint *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 uStack_e0;
  undefined1 uStack_df;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  undefined1 uStack_dc;
  undefined1 uStack_db;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int aiStack_c0 [4];
  undefined1 auStack_b0 [8];
  undefined4 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined4 uStack_98;
  undefined1 auStack_90 [8];
  undefined4 uStack_88;
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  
  fn_82747B98();
  *param_1 = &lbl_82012B24;
  param_1[4] = &lbl_82012AD0;
  param_1[0xc] = &lbl_820129E0;
  uStack_dc = 6;
  puVar2 = param_1 + 4;
  fn_826BF638(param_1 + 0xc,param_1,param_2,0xffffffff82012960,&uStack_dc);
  uStack_de = 2;
  auStack_b0[0] = 4;
  uStack_a8 = 0;
  fn_82681728(&iStack_cc,(ulonglong)*param_2 + 0x254,0xffffffff821adae0);
  fn_826C1FF8(puVar2,param_2,&iStack_cc,auStack_b0,&uStack_de);
  lVar1 = (ulonglong)*(uint *)(iStack_cc + 8) - 1;
  *(int *)(iStack_cc + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_cc);
  }
  fn_82696330(auStack_b0);
  uStack_da = 2;
  auStack_60[0] = 4;
  uStack_58 = 0;
  fn_82681728(&iStack_c4,(ulonglong)*param_2 + 0x254,0xffffffff8201169c);
  fn_826C1FF8(puVar2,param_2,&iStack_c4,auStack_60,&uStack_da);
  lVar1 = (ulonglong)*(uint *)(iStack_c4 + 8) - 1;
  *(int *)(iStack_c4 + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_c4);
  }
  fn_82696330(auStack_60);
  uStack_e0 = 2;
  auStack_80[0] = 4;
  uStack_78 = 0;
  fn_82681728(&iStack_d8,(ulonglong)*param_2 + 0x254,0xffffffff821adae8);
  fn_826C1FF8(puVar2,param_2,&iStack_d8,auStack_80,&uStack_e0);
  lVar1 = (ulonglong)*(uint *)(iStack_d8 + 8) - 1;
  *(int *)(iStack_d8 + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_d8);
  }
  fn_82696330(auStack_80);
  uStack_df = 2;
  auStack_a0[0] = 4;
  uStack_98 = 0;
  fn_82681728(&iStack_d4,(ulonglong)*param_2 + 0x254,0xffffffff820116a0);
  fn_826C1FF8(puVar2,param_2,&iStack_d4,auStack_a0,&uStack_df);
  lVar1 = (ulonglong)*(uint *)(iStack_d4 + 8) - 1;
  *(int *)(iStack_d4 + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_d4);
  }
  fn_82696330(auStack_a0);
  uStack_dd = 2;
  auStack_90[0] = 4;
  uStack_88 = 0;
  fn_82681728(&iStack_d0,(ulonglong)*param_2 + 0x254,0xffffffff82012a08);
  fn_826C1FF8(puVar2,param_2,&iStack_d0,auStack_90,&uStack_dd);
  lVar1 = (ulonglong)*(uint *)(iStack_d0 + 8) - 1;
  *(int *)(iStack_d0 + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_d0);
  }
  fn_82696330(auStack_90);
  uStack_db = 2;
  auStack_70[0] = 4;
  uStack_68 = 0;
  fn_82681728(&iStack_c8,(ulonglong)*param_2 + 0x254,0xffffffff820129fc);
  fn_826C1FF8(puVar2,param_2,&iStack_c8,auStack_70,&uStack_db);
  lVar1 = (ulonglong)*(uint *)(iStack_c8 + 8) - 1;
  *(int *)(iStack_c8 + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_c8);
  }
  fn_82696330(auStack_70);
  uStack_d9 = 2;
  auStack_50[0] = 4;
  uStack_48 = 0;
  fn_82681728(aiStack_c0,(ulonglong)*param_2 + 0x254,0xffffffff82011754);
  fn_826C1FF8(puVar2,param_2,aiStack_c0,auStack_50,&uStack_d9);
  lVar1 = (ulonglong)*(uint *)(aiStack_c0[0] + 8) - 1;
  *(int *)(aiStack_c0[0] + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(aiStack_c0[0]);
  }
  fn_82696330(auStack_50);
  return param_1;
}

