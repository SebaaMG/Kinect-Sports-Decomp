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
extern int fn_826944C8();
extern int fn_82694700();


int * fn_826A7AD0(int *param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(*(int *)(param_3 + 0x78) + 8);
  iVar4 = *(int *)(iVar2 + 8);
  *param_1 = iVar2;
  *(int *)(iVar2 + 8) = iVar4 + 1;
  bVar1 = *(byte *)*param_2;
  if (((bVar1 & 1) != 0) && ((bVar1 & 4) == 0)) {
    iVar4 = fn_82694700((ulonglong)*(uint *)(param_3 + 0x78) + 0x254,(byte *)*param_2 + 7);
    iVar2 = *param_1;
    *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 2;
    lVar5 = (ulonglong)*(uint *)(iVar2 + 8) - 1;
    *(int *)(iVar2 + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8();
    }
    uVar3 = *(uint *)(iVar4 + 8);
    *param_1 = iVar4;
    lVar5 = (ulonglong)uVar3 - 1;
    *(int *)(iVar4 + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(iVar4);
    }
  }
  return param_1;
}

