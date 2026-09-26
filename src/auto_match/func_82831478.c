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
extern int fn_82835A40();


undefined4 * fn_82831478(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  *param_1 = param_2;
  uVar5 = *(uint *)(param_3 + 0xa0);
  param_1[1] = uVar5;
  lVar3 = ((ulonglong)uVar5 & 0x3fffffff) << 2;
  if (0x3fffffff < uVar5) {
    lVar3 = -1;
  }
  uVar4 = fn_8265CA60(lVar3);
  param_1[2] = uVar4;
  uVar5 = 0;
  if (param_1[1] != 0) {
    iVar6 = 0;
    lVar3 = 0;
    do {
      uVar4 = fn_82835A40(param_1,lVar3 + (ulonglong)*(uint *)(param_3 + 0x120));
      uVar5 = uVar5 + 1;
      lVar3 = lVar3 + 0x20;
      *(undefined4 *)(iVar6 + param_1[2]) = uVar4;
      iVar6 = iVar6 + 4;
    } while (uVar5 < (uint)param_1[1]);
  }
  uVar5 = 0;
  if (param_1[1] != 0) {
    iVar6 = 0;
    do {
      iVar2 = *(int *)(iVar6 + param_1[2]);
      iVar1 = **(int **)(iVar2 + 0x10);
      if (-1 < iVar1) {
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 * 4 + param_1[2]);
      }
      iVar1 = (*(int **)(iVar2 + 0x10))[1];
      if (-1 < iVar1) {
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 * 4 + param_1[2]);
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar5 < (uint)param_1[1]);
  }
  return param_1;
}

