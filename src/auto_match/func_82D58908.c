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
extern unsigned int *auStack_4a0;
extern int fn_82CFBB60();
extern int fn_82D6F1D8();
extern unsigned int uStack00000024;
extern unsigned int uStack00000044;


void fn_82D58908(int param_1,int param_2,ulonglong param_3,int param_4,int param_5,
                  undefined8 param_6,ulonglong param_7,int param_8)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uStack00000024;
  uint uStack00000044;
  int in_stack_00000054;
  undefined1 auStack_4a0 [1184];
  
  uStack00000024 = (uint)param_3;
  *(undefined1 *)(param_1 + 0x1e20) = 1;
  uStack00000044 = (uint)param_7;
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x1e28)) {
    iVar10 = 0;
    do {
      puVar11 = (undefined4 *)(*(int *)(param_1 + 0x1e24) + iVar10);
      if (puVar11[1] == param_4) {
        fn_82D58908(param_1,param_2,param_3,*puVar11,param_5,param_6,param_7,param_8);
      }
      if (puVar11[1] == param_5) {
        fn_82D58908(param_1,param_2,param_3,param_4,*puVar11,param_6,param_7,param_8);
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 8;
    } while (iVar9 < *(int *)(param_1 + 0x1e28));
  }
  iVar10 = param_4 + 1;
  iVar6 = param_5 + 1;
  iVar9 = param_4;
  if (param_4 == -1) {
    iVar9 = 1;
    iVar10 = 0x20;
    in_stack_00000054 = in_stack_00000054 + 1;
  }
  iVar7 = param_5;
  if (param_5 == -1) {
    iVar7 = 1;
    iVar6 = 0x20;
    in_stack_00000054 = in_stack_00000054 + 1;
  }
  if (iVar9 < iVar10) {
    iVar10 = iVar10 - iVar9;
    param_2 = iVar9 * 0x20 + param_2;
    puVar8 = (undefined1 *)((iVar9 * 0x20 + iVar7) * 3 + param_8 + 1);
    do {
      if (iVar7 < iVar6) {
        uVar1 = (undefined1)param_3;
        puVar12 = puVar8;
        iVar9 = iVar7;
        do {
          *(undefined1 *)(param_2 + iVar9) = uVar1;
          if (param_8 != 0) {
            if ((*(char *)(param_1 + 0x1e23) != '\0') && ((char)puVar12[1] < in_stack_00000054)) {
              uVar2 = fn_82D6F1D8(puVar12[-1]);
              uVar3 = fn_82D6F1D8(*puVar12);
              uVar4 = fn_82D6F1D8(param_4);
              uVar5 = fn_82D6F1D8(param_5);
              fn_82CFBB60(auStack_4a0,1000,0xffffffff82138c60,uVar4,uVar5,uVar2,uVar3);
              param_3 = (ulonglong)uStack00000024;
              param_7 = (ulonglong)uStack00000044;
            }
            puVar12[1] = (char)in_stack_00000054;
            puVar12[-1] = (char)param_6;
            *puVar12 = (char)param_7;
          }
          iVar9 = iVar9 + 1;
          puVar12 = puVar12 + 3;
        } while (iVar9 < iVar6);
      }
      iVar10 = iVar10 + -1;
      puVar8 = puVar8 + 0x60;
      param_2 = param_2 + 0x20;
    } while (iVar10 != 0);
  }
  return;
}

