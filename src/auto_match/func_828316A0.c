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
extern int fn_8265CA60();
extern int fn_8282D300();
extern int fn_82835BE0();
extern int fn_82835BF0();


void fn_828316A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,ulonglong param_4)

{
  int *piVar1;
  longlong lVar2;
  uint *puVar4;
  undefined8 uVar3;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  uVar5 = (uint)param_4;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = uVar5;
  if (uVar5 == 0) {
    param_1[3] = 0;
  }
  else {
    lVar2 = -1;
    uVar6 = (param_4 & 0x1fffffff) << 3;
    if (0x1fffffff < uVar5) {
      uVar6 = 0xffffffffffffffff;
    }
    if ((uVar6 & 0xffffffff) < 0xfffffffc) {
      lVar2 = uVar6 + 4;
    }
    puVar4 = (uint *)fn_8265CA60(lVar2);
    if (puVar4 == (uint *)0x0) {
      puVar7 = (uint *)0x0;
    }
    else {
      puVar7 = puVar4 + 1;
      *puVar4 = uVar5;
      puVar4 = puVar7;
      while (param_4 = param_4 - 1, -1 < (longlong)param_4) {
        fn_82835BE0(puVar4);
        puVar4 = puVar4 + 2;
      }
    }
    iVar9 = 0;
    param_1[3] = puVar7;
    piVar1 = *(int **)(*(int *)*param_1 + 300);
    iVar8 = *(int *)(*(int *)*param_1 + 0xac) * 0x14 + *piVar1;
    iVar10 = piVar1[param_1[1] + -1];
    if (iVar10 != iVar8) {
      lVar2 = 0;
      do {
        uVar3 = fn_8282D300(*param_1,*(undefined4 *)(iVar10 + 4));
        fn_82835BF0((ulonglong)(uint)param_1[3] + lVar2,iVar10,uVar3);
        iVar9 = iVar9 + 1;
        lVar2 = lVar2 + 8;
        if (iVar9 == param_1[2]) {
          return;
        }
        iVar10 = iVar10 + 0x14;
      } while (iVar10 != iVar8);
    }
  }
  return;
}

