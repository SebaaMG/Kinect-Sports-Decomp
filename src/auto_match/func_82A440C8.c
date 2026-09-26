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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82A43F70();
extern int fn_82F6E8D4();
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


undefined8 fn_82A440C8(int param_1,undefined8 param_2,int param_3,ulonglong param_4)

{
  float fVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int *piVar11;
  
  puVar2 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0xa0);
  *puVar2 = register0x0000000c;
  uVar8 = param_4;
  if ((param_4 & 0xffffffff) == 0) {
    uVar8 = 0x1337f001;
  }
  if (*(uint **)(param_1 + 0x34) == (uint *)0x0) {
    uVar3 = *(uint *)(param_1 + 0x3c);
  }
  else {
    uVar3 = **(uint **)(param_1 + 0x34);
  }
  uVar7 = ((ulonglong)uVar3 & 0x3fffffff) * -4 & 0xfffffff0;
  fn_82F6E8D4();
  lVar10 = (ZEXT48(&stack0x00000000) - 0xa0) + uVar7;
  *(undefined4 *)lVar10 = *puVar2;
  lVar10 = lVar10 + 0x50;
  if (lVar10 == 0) {
    uVar9 = 0xffffffff8007000e;
  }
  else {
    uVar9 = 0;
    uVar3 = 0;
    lVar5 = lVar10;
    while( true ) {
      if (*(uint **)(param_1 + 0x34) == (uint *)0x0) {
        uVar4 = *(uint *)(param_1 + 0x3c);
      }
      else {
        uVar4 = **(uint **)(param_1 + 0x34);
      }
      if (uVar4 <= uVar3) break;
      fVar1 = *(float *)(param_1 + 0x48);
      if ((*(uint *)(param_1 + 0x38) & 0x10) != 0) {
        fVar1 = *(float *)(*(int *)(param_1 + 0x30) + 0x210) * fVar1;
      }
      uVar3 = uVar3 + 1;
      *(float *)lVar5 = *(float *)((param_3 - (int)lVar10) + (int)(float *)lVar5) * fVar1;
      lVar5 = lVar5 + 4;
    }
    piVar11 = *(int **)(param_1 + 0x20);
    while (piVar11 != (int *)0x0) {
      if (piVar11 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar11;
        piVar11 = (int *)piVar11[1];
      }
      fn_82A43F70(*(undefined4 *)(iVar6 + 8),param_2,lVar10,uVar8);
    }
    if ((param_4 & 0xffffffff) == 0) {
      piVar11 = *(int **)(*(int *)(param_1 + 0x30) + 0xb0);
      uVar9 = (**(code **)(*piVar11 + 0x48))(piVar11,uVar8);
    }
  }
  return uVar9;
}

