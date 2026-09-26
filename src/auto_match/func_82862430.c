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
extern int fn_82862388();


void fn_82862430(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (*(ushort *)(param_1 + 0x38) != 0) {
    do {
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x38));
  }
  iVar1 = 0;
  if (*(short *)(param_1 + 0x40) != 0) {
    lVar2 = 0;
    do {
      fn_82862388(lVar2 + (ulonglong)*(uint *)(param_1 + 0x3c),param_2,param_3);
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 0x14;
    } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x40));
  }
  return;
}

