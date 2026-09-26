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
extern int fn_826D69D0();
extern int fn_826F7EF0();


undefined8 fn_826DFB28(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar4;
  undefined8 uVar3;
  int *piVar5;
  
  iVar1 = *(int *)(param_1 + 0x20);
  piVar5 = (int *)(iVar1 + 8);
  uVar2 = param_2 + 10U & 0xfffffffc;
  if (*(uint *)(iVar1 + 0xc) < uVar2) {
    iVar4 = fn_826D69D0(piVar5);
  }
  else {
    iVar4 = *piVar5;
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) - uVar2;
    *piVar5 = iVar4 + uVar2;
  }
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_826F7EF0();
  }
  return uVar3;
}

