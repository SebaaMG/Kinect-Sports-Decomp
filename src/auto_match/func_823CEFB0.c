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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_108;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_88;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_8227CB30();
extern int fn_822EFBF0();
extern int fn_82359C18();
extern int fn_823CF178();
extern int fn_823D2008();
extern int fn_823E6E98();
extern int fn_823EAA88();
extern int fn_82F68CC0();
extern unsigned int iStack_6c;
extern unsigned int iStack_b8;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_c0;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_ec;


void fn_823CEFB0(int param_1,undefined8 param_2)

{
  int in_r0;
  int iVar2;
  undefined8 uVar1;
  undefined4 *puVar3;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined1 auStack_108 [24];
  code *pcStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined8 uStack_c0;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [4];
  int iStack_6c;
  undefined1 auStack_60 [96];
  
  uStack_dc = 0;
  uStack_e0 = 0xffffffff;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  fn_823E6E98(param_1,param_2,&uStack_e0);
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  uStack_b0 = (undefined4)param_2;
  iStack_b8 = param_1;
  if (*(char *)(iVar2 + 4) == '\0') {
    uStack_ec = 0;
    pcStack_f0 = fn_823CF178;
    puVar3 = (undefined4 *)((int)&uStack_a0 + in_r0 & 0xfffffff0);
    *puVar3 = in_register_00010010;
    puVar3[1] = in_register_00010014;
    puVar3[2] = in_register_00010018;
    puVar3[3] = in_vr1;
    uStack_c0 = 0x823cf17800000000;
    fn_82F68CC0(&uStack_90,&uStack_e0,0x18);
    fn_82F68CC0(auStack_108,auStack_88,0x18);
    uVar1 = fn_823D2008(auStack_60,uStack_c0,CONCAT44(iStack_b8,uStack_b4),
                              CONCAT44(uStack_b0,uStack_ac),uStack_a8,uStack_a0,uStack_98,uStack_90)
    ;
    fn_8227CB30(param_1 + 0xb18,uVar1);
    fn_82359C18(uVar1);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x84);
    if (iVar2 != 0) {
      uStack_ec = 0;
      pcStack_f0 = fn_823CF178;
      uStack_c0 = 0x823cf17800000000;
      puVar3 = (undefined4 *)((int)&uStack_a0 + in_r0 & 0xfffffff0);
      *puVar3 = in_register_00010010;
      puVar3[1] = in_register_00010014;
      puVar3[2] = in_register_00010018;
      puVar3[3] = in_vr1;
      fn_82F68CC0(&uStack_90,&uStack_e0,0x18);
      fn_82F68CC0(auStack_108,auStack_88,0x18);
      uVar1 = fn_823D2008(auStack_60,uStack_c0,CONCAT44(iStack_b8,uStack_b4),
                                CONCAT44(uStack_b0,uStack_ac),uStack_a8,uStack_a0,uStack_98,
                                uStack_90);
      fn_8227CB30(param_1 + 0xb18,uVar1);
      fn_82359C18(uVar1);
      puVar3 = (undefined4 *)fn_822EFBF0(auStack_70,iVar2);
      fn_823EAA88(*puVar3,param_2,&uStack_e0);
      if (iStack_6c != 0) {
        fn_822315A0();
      }
    }
  }
  return;
}

