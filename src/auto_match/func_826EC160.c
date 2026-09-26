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
extern int fn_826EBDE8();


void fn_826EC160(undefined4 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  int *piVar7;
  
  uVar1 = param_1[6];
  if ((ulonglong)uVar1 == 0) {
    param_1[1] = param_2;
    *param_1 = 1;
  }
  uVar6 = (ulonglong)*(uint *)(param_3 + 0x184);
  piVar7 = param_1 + 5;
  fn_826EBDE8(piVar7,uVar6 * 3 + (ulonglong)uVar1);
  uVar5 = 0;
  if (uVar6 != 0) {
    iVar3 = uVar1 << 1;
    do {
      uVar1 = uVar5 >> 8;
      uVar2 = uVar5 & 0x3ff;
      uVar5 = uVar5 + 1;
      puVar4 = (undefined4 *)(*(int *)((uVar1 & 0xfffffc) + *(int *)(param_3 + 400)) + uVar2 * 0xc);
      *(short *)(iVar3 + *piVar7) = (short)*puVar4;
      *(short *)(iVar3 + 2 + *piVar7) = (short)puVar4[1];
      *(short *)(iVar3 + 4 + *piVar7) = (short)puVar4[2];
      iVar3 = iVar3 + 6;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

