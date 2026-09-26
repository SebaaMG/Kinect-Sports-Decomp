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
extern int fn_82A1F2F8();
extern int fn_82BD8360();
extern int fn_82BD8488();
extern int fn_82BD8558();
extern int fn_82BD8628();
extern int fn_82F68CC0();


longlong fn_82BD8BE8(int param_1,ushort *param_2,undefined8 param_3)

{
  ushort uVar1;
  int *piVar2;
  byte bVar3;
  ushort uVar4;
  ulonglong uVar5;
  uint uVar7;
  longlong lVar6;
  undefined8 auStack_50 [10];
  
  uVar1 = *param_2;
  uVar4 = uVar1 >> 1 & 0x7ff;
  bVar3 = (byte)(uVar1 >> 0xc);
  if (*(int *)(param_1 + 0x4c) == 0) {
    uVar5 = fn_82A1F2F8();
    *(byte *)(param_1 + 0x134) = bVar3;
    *(ushort *)(param_1 + 0x20) = uVar4;
    *(ulonglong *)(param_1 + 0x18) = uVar5 & 0xffffffff;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 1;
  }
  if (uVar1 >> 0xc != (ushort)*(byte *)(param_1 + 0x134)) {
    fn_82BD8628(param_1);
    *(byte *)(param_1 + 0x134) = bVar3;
  }
  uVar7 = fn_82BD8360(param_1,uVar4,auStack_50);
  *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
  if (uVar7 != 0) {
    if (uVar7 == 1) {
      if (uVar1 >> 0xc == (ushort)*(byte *)(param_1 + 0x134)) {
        *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
        return 1;
      }
      return 1;
    }
    if (2 < uVar7) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x178) <= *(uint *)(param_1 + 0x17c)) {
      return 1;
    }
    fn_82BD8558(param_1);
    fn_82BD8360();
  }
  piVar2 = *(int **)(param_1 + 0x180);
  if (piVar2 != (int *)0x0) {
    if (piVar2 == *(int **)(param_1 + 0x184)) {
      *(undefined4 *)(param_1 + 0x184) = 0;
    }
    *(int *)(param_1 + 0x180) = piVar2[1];
    piVar2[1] = 0;
    *(undefined8 *)(*piVar2 + 0x18) = auStack_50[0];
    fn_82F68CC0(*(undefined4 *)(*piVar2 + 8),param_2,param_3);
    *(int *)(*piVar2 + 4) = (int)param_3;
    lVar6 = fn_82BD8488(param_1,piVar2);
    if (-1 < lVar6) {
      return lVar6;
    }
    piVar2[1] = 0;
    if (*(int *)(param_1 + 0x184) == 0) {
      *(int *)(param_1 + 0x180) = (int)piVar2;
    }
    else {
      *(int **)(*(int *)(param_1 + 0x184) + 4) = piVar2;
    }
    *(int **)(param_1 + 0x184) = piVar2;
    *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + -1;
  }
  return 1;
}

