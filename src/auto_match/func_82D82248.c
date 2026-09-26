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
extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern int fn_82CE5410();
extern int fn_82CE8B30();
extern int fn_82CFBAD8();
extern unsigned int iStack_68;
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_ca;
extern unsigned int uStack_cc;
extern unsigned int uStack_ce;
extern unsigned int uStack_cf;
extern unsigned int uStack_d0;
extern unsigned int uStack_d8;


void fn_82D82248(int param_1,int param_2,int param_3,undefined8 param_4,int *param_5,
                  undefined8 param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined2 uStack_cc;
  undefined2 uStack_ca;
  undefined4 uStack_c0;
  int *piStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 auStack_98 [2];
  undefined1 auStack_90 [40];
  int iStack_68;
  
  iVar1 = fn_82CE5410();
  piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x10);
  uVar4 = param_3 - 1;
  uStack_b8 = *(undefined4 *)(param_1 + 0x78);
  uStack_a4 = *(undefined4 *)(param_1 + 0x58);
  uStack_c0 = (undefined4)param_6;
  uStack_cc = 0x40;
  *piVar2 = ((int)uVar4 >> 6) + (uint)((int)uVar4 < 0 && (uVar4 & 0x3f) != 0) + 1;
  uStack_d0 = 4;
  uStack_cf = 2;
  uStack_ca = 0xffff;
  uStack_b4 = 0;
  uStack_b0 = 0x40;
  uStack_a0 = 0;
  uStack_9c = 0;
  auStack_98[0] = 0;
  piStack_bc = piVar2;
  iStack_ac = param_2;
  iStack_a8 = param_3;
  if ((*(int **)(param_1 + 0x5c) != (int *)0x0) &&
     (cVar3 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x10))(), cVar3 != '\0')) {
    uStack_a4 = 0;
    uStack_9c = *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0xc);
    auStack_98[0] = *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x10);
  }
  uStack_ce = 1;
  if (0 < param_3) {
    do {
      puVar5 = (undefined8 *)auStack_98;
      puVar6 = &uStack_d8;
      lVar7 = 8;
      do {
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
        *puVar5 = *puVar6;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      iStack_68 = param_3;
      if (param_7 <= param_3) {
        iStack_68 = param_7;
      }
      param_3 = param_3 - param_7;
      param_2 = param_7 * 0x30 + param_2;
      iStack_ac = param_2;
      iStack_a8 = param_3;
      fn_82CE8B30(param_4,auStack_90,1);
    } while (0 < param_3);
  }
  (**(code **)(*param_5 + 0xc))(param_5,param_4,0xb);
  (**(code **)(*param_5 + 0x10))(param_5);
  fn_82CFBAD8(param_6);
  iVar1 = fn_82CE5410();
  (**(code **)(**(int **)(iVar1 + 0x10) + 8))(*(int **)(iVar1 + 0x10),piVar2,0x10);
  return;
}

