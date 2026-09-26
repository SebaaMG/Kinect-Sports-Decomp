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
extern unsigned int *auStack_70;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_8256D3A8();
extern int fn_8256D798();
extern int fn_827D78D0();
extern int fn_827D9FB0();
extern int fn_827DC748();
extern int fn_82811400();
extern int fn_82A1EFC0();
extern unsigned int lbl_83156AA0;
extern unsigned int lbl_83265A24;
extern unsigned int lbl_8326B7C8;
extern unsigned int uStack_7c;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


void fn_825BE578(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 auStack_c0 [4];
  undefined1 auStack_b0 [32];
  undefined4 **appuStack_90 [5];
  uint uStack_7c;
  undefined1 auStack_70 [112];
  
  auStack_c0[0] = 0;
  bVar2 = false;
  fn_827D78D0(appuStack_90,lbl_83265A24,param_1 + 0x1f8,0xffffffffffffffff,0);
  iVar1 = *(int *)lbl_83156AA0;
  uVar3 = fn_82811400(auStack_b0,4);
  lVar4 = (**(code **)(iVar1 + 0xc))(lbl_83156AA0,0x68,uVar3);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    bVar2 = true;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0xffffffff;
    uStack_c4 = 1;
    auStack_c0[0] = 0;
    if (uStack_7c < 0x10) {
      appuStack_90[0] = appuStack_90;
    }
    fn_8256D3A8(auStack_70,appuStack_90[0]);
    uVar3 = fn_827D9FB0(lVar4,auStack_70,auStack_c0,&uStack_c4,&uStack_c8,&uStack_cc,
                              &uStack_d0);
  }
  if (bVar2) {
    fn_8256D798(auStack_70,1,0);
  }
  uVar5 = fn_827DC748(lbl_8326B7C8,uVar3);
  *(undefined4 *)(param_1 + 0x54) = uVar5;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 0x68,0,0x148);
}

