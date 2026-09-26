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
extern int fn_822CEE40();


undefined8 fn_822CF1C0(undefined8 param_1,int param_2)

{
  bool bVar1;
  int iVar3;
  undefined8 uVar2;
  uint uVar4;
  int iVar5;
  
  uVar4 = (uint)(*(int *)((int)param_1 + 0x24) != 0);
  iVar3 = fn_822CEE40();
  if (iVar3 != 0) {
    iVar3 = fn_822CEE40(param_1);
    iVar5 = (int)param_1;
    bVar1 = true;
    if (*(int *)(iVar3 + 0x24) != 0) goto code_r0x822cf208;
  }
  iVar5 = (int)param_1;
  bVar1 = false;
code_r0x822cf208:
  if ((uVar4 == 0) || (!bVar1)) {
    *(undefined4 *)(iVar5 + 0x2a0) = 1;
    if (param_2 != 0) {
      *(undefined4 *)(iVar5 + 0x2a0) = 0;
      *(uint *)(iVar5 + 0x2a4) = (uint)LZCOUNT(*(undefined4 *)(iVar5 + 0x2a4)) >> 5;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

