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
extern unsigned int lbl_820DF0C0;


undefined8 fn_82BA9118(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((((*(uint *)(param_1 + 0xe4) >> 3 & 1) != 0) || ((*(uint *)(param_1 + 0xe4) >> 4 & 1) != 0))
      || (*(int *)(param_1 + 0x50) == 0x1f)) ||
     (((*(int *)(param_1 + 0x80) != lbl_820DF0C0 ||
       (iVar1 = *(int *)(param_1 + 0x18), iVar1 == 0x2b)) ||
      ((iVar1 == 99 || (uVar2 = 1, iVar1 == 100)))))) {
    uVar2 = 0;
  }
  return uVar2;
}

