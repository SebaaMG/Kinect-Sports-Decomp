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
extern int fn_82725D88();


int fn_82725DF0(int param_1,undefined8 param_2,byte *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = fn_82725D88();
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    if ((*(int *)(iVar2 + 0xc) == param_4) &&
       (((uint)*param_3 & *(uint *)(iVar2 + 8)) == *(uint *)(iVar2 + 8))) break;
    iVar3 = iVar2 - *(int *)(param_1 + 0xc) >> 4;
    if ((*(uint *)(param_1 + 0x10) <= iVar3 + 1U) ||
       (piVar1 = (int *)(iVar2 + 4), iVar3 = iVar3 * 0x10 + *(int *)(param_1 + 0xc),
       iVar2 = iVar3 + 0x10, *(int *)(iVar3 + 0x14) != *piVar1)) {
      iVar2 = 0;
    }
  }
  return iVar2;
}

