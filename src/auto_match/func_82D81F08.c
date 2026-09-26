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
extern unsigned int *auStack_a0;
extern int fn_82CE5410();
extern int fn_82CE8B30();
extern int fn_82CFBAD8();
extern unsigned int iStack_78;
extern unsigned int iStack_c8;
extern unsigned int iStack_cc;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;
extern unsigned int uStack_ea;
extern unsigned int uStack_ec;
extern unsigned int uStack_ee;
extern unsigned int uStack_ef;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;


void fn_82D81F08(int param_1,int param_2,int param_3,undefined8 param_4,int *param_5,
                  undefined8 param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined1 uStack_ee;
  undefined2 uStack_ec;
  undefined2 uStack_ea;
  undefined4 uStack_e0;
  int *piStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [40];
  int iStack_78;
  
  iVar1 = fn_82CE5410();
  piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x10);
  uStack_d4 = *(undefined4 *)(param_1 + 0x78);
  iVar1 = 1;
  uStack_bc = *(undefined4 *)(param_1 + 0x58);
  uStack_f0 = 1;
  uStack_d8 = 0;
  uStack_ef = 3;
  uStack_ec = 0x50;
  uStack_ea = 0xffff;
  uStack_ee = 1;
  uStack_d0 = 0x40;
  uStack_e0 = (undefined4)param_6;
  if (param_3 != 0) {
    uVar5 = param_3 - 1;
    iVar1 = ((int)uVar5 >> 6) + (uint)((int)uVar5 < 0 && (uVar5 & 0x3f) != 0) + 1;
  }
  *piVar2 = iVar1;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  piStack_dc = piVar2;
  iStack_cc = param_2;
  iStack_c8 = param_3;
  if ((*(int **)(param_1 + 0x5c) != (int *)0x0) &&
     (cVar3 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x10))(), cVar3 != '\0')) {
    uStack_bc = 0;
    uStack_b4 = *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0xc);
    uStack_b0 = *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x10);
  }
  if (0 < param_3) {
    do {
      puVar4 = &uStack_a8;
      puVar6 = &uStack_f8;
      lVar7 = 10;
      do {
        puVar6 = puVar6 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar6;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      iStack_78 = param_3;
      if (param_7 <= param_3) {
        iStack_78 = param_7;
      }
      param_3 = param_3 - param_7;
      param_2 = param_7 * 0x40 + param_2;
      iStack_cc = param_2;
      iStack_c8 = param_3;
      fn_82CE8B30(param_4,auStack_a0,1);
    } while (0 < param_3);
  }
  (**(code **)(*param_5 + 0xc))(param_5,param_4,0xb);
  (**(code **)(*param_5 + 0x10))(param_5);
  fn_82CFBAD8(param_6);
  iVar1 = fn_82CE5410();
  (**(code **)(**(int **)(iVar1 + 0x10) + 8))(*(int **)(iVar1 + 0x10),piVar2,0x10);
  return;
}

