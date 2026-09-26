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
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f7;
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_826BF638();
extern int fn_826C1FF8();
extern int fn_82749668();
extern unsigned int iStack_d4;
extern unsigned int iStack_d8;
extern unsigned int iStack_dc;
extern unsigned int iStack_e0;
extern unsigned int iStack_e4;
extern unsigned int iStack_e8;
extern unsigned int iStack_ec;
extern unsigned int iStack_f0;
extern unsigned int iStack_f4;
extern unsigned int lbl_82012C60;
extern unsigned int lbl_82012D54;
extern unsigned int lbl_82012D58;
extern unsigned int uStack_100;
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_68;
extern unsigned int uStack_78;
extern unsigned int uStack_88;
extern unsigned int uStack_98;
extern unsigned int uStack_a8;
extern unsigned int uStack_b8;
extern unsigned int uStack_c8;
extern unsigned int uStack_f8;
extern unsigned int uStack_f9;
extern unsigned int uStack_fa;
extern unsigned int uStack_fb;
extern unsigned int uStack_fc;
extern unsigned int uStack_fd;
extern unsigned int uStack_fe;
extern unsigned int uStack_ff;


undefined4 * fn_82749748(undefined4 *param_1,uint *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  undefined1 uStack_fe;
  undefined1 uStack_fd;
  undefined1 uStack_fc;
  undefined1 uStack_fb;
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  undefined1 uStack_f8;
  undefined1 auStack_f7 [3];
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  undefined1 auStack_d0 [8];
  undefined4 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined4 uStack_b8;
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
  
  fn_82749668();
  *param_1 = &lbl_82012D58;
  param_1[4] = &lbl_82012C60;
  param_1[0x14] = &lbl_82012D54;
  uStack_f8 = 6;
  puVar2 = param_1 + 4;
  fn_826BF638(param_1 + 0x14,param_1,param_2,0xffffffff82012b48,&uStack_f8);
  uStack_fe = 2;
  auStack_d0[0] = 4;
  uStack_c8 = 0;
  fn_82681728(&iStack_d8,(ulonglong)*param_2 + 0x254,0xffffffff82012bc4);
  fn_826C1FF8(puVar2,param_2,&iStack_d8,auStack_d0,&uStack_fe);
  lVar1 = (ulonglong)*(uint *)(iStack_d8 + 8) - 1;
  *(int *)(iStack_d8 + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_d8);
  }
  fn_82696330(auStack_d0);
  uStack_fa = 2;
  auStack_80[0] = 4;
  uStack_78 = 0;
  fn_82681728(&iStack_e0,(ulonglong)*param_2 + 0x254,0xffffffff82012bb4);
  fn_826C1FF8(puVar2,param_2,&iStack_e0,auStack_80,&uStack_fa);
  lVar1 = (ulonglong)*(uint *)(iStack_e0 + 8) - 1;
  *(int *)(iStack_e0 + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_e0);
  }
  fn_82696330(auStack_80);
  uStack_fc = 2;
  auStack_a0[0] = 4;
  uStack_98 = 0;
  fn_82681728(&iStack_e8,(ulonglong)*param_2 + 0x254,0xffffffff82012ba4);
  fn_826C1FF8(puVar2,param_2,&iStack_e8,auStack_a0,&uStack_fc);
  lVar1 = (ulonglong)*(uint *)(iStack_e8 + 8) - 1;
  *(int *)(iStack_e8 + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_e8);
  }
  fn_82696330(auStack_a0);
  uStack_100 = 2;
  auStack_60[0] = 4;
  uStack_58 = 0;
  fn_82681728(&iStack_f4,(ulonglong)*param_2 + 0x254,0xffffffff82012b94);
  fn_826C1FF8(puVar2,param_2,&iStack_f4,auStack_60,&uStack_100);
  lVar1 = (ulonglong)*(uint *)(iStack_f4 + 8) - 1;
  *(int *)(iStack_f4 + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_f4);
  }
  fn_82696330(auStack_60);
  uStack_ff = 2;
  auStack_c0[0] = 4;
  uStack_b8 = 0;
  fn_82681728(&iStack_f0,(ulonglong)*param_2 + 0x254,0xffffffff82012b88);
  fn_826C1FF8(puVar2,param_2,&iStack_f0,auStack_c0,&uStack_ff);
  lVar1 = (ulonglong)*(uint *)(iStack_f0 + 8) - 1;
  *(int *)(iStack_f0 + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_f0);
  }
  fn_82696330(auStack_c0);
  uStack_fd = 2;
  auStack_b0[0] = 4;
  uStack_a8 = 0;
  fn_82681728(&iStack_ec,(ulonglong)*param_2 + 0x254,0xffffffff82012b7c);
  fn_826C1FF8(puVar2,param_2,&iStack_ec,auStack_b0,&uStack_fd);
  lVar1 = (ulonglong)*(uint *)(iStack_ec + 8) - 1;
  *(int *)(iStack_ec + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_ec);
  }
  fn_82696330(auStack_b0);
  uStack_fb = 2;
  auStack_90[0] = 4;
  uStack_88 = 0;
  fn_82681728(&iStack_e4,(ulonglong)*param_2 + 0x254,0xffffffff82012b70);
  fn_826C1FF8(puVar2,param_2,&iStack_e4,auStack_90,&uStack_fb);
  lVar1 = (ulonglong)*(uint *)(iStack_e4 + 8) - 1;
  *(int *)(iStack_e4 + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_e4);
  }
  fn_82696330(auStack_90);
  uStack_f9 = 2;
  auStack_70[0] = 4;
  uStack_68 = 0;
  fn_82681728(&iStack_dc,(ulonglong)*param_2 + 0x254,0xffffffff82012b64);
  fn_826C1FF8(puVar2,param_2,&iStack_dc,auStack_70,&uStack_f9);
  lVar1 = (ulonglong)*(uint *)(iStack_dc + 8) - 1;
  *(int *)(iStack_dc + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_dc);
  }
  fn_82696330(auStack_70);
  auStack_f7[0] = 2;
  auStack_50[0] = 4;
  uStack_48 = 0;
  fn_82681728(&iStack_d4,(ulonglong)*param_2 + 0x254,0xffffffff82012b60);
  fn_826C1FF8(puVar2,param_2,&iStack_d4,auStack_50,auStack_f7);
  lVar1 = (ulonglong)*(uint *)(iStack_d4 + 8) - 1;
  *(int *)(iStack_d4 + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_d4);
  }
  fn_82696330(auStack_50);
  return param_1;
}

