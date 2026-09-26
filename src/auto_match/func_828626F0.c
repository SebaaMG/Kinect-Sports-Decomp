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
extern int fn_828106A0();
extern int fn_8281D460();
extern int fn_828625D0();
extern int fn_82862648();


void fn_828626F0(int param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = (ulonglong)*(uint *)(param_1 + 0x54) + (ulonglong)*(uint *)(param_3 + 8);
  fn_828106A0(lVar1);
  fn_8281D460(lVar1 + 0xc);
  iVar2 = 0;
  if (*(short *)(param_1 + 0x38) != 0) {
    lVar1 = 0;
    do {
      fn_828625D0((ulonglong)*(uint *)(param_1 + 0x34) + lVar1,param_3);
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 0x2c;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x38));
  }
  iVar2 = 0;
  if (*(short *)(param_1 + 0x40) != 0) {
    lVar1 = 0;
    do {
      fn_82862648((ulonglong)*(uint *)(param_1 + 0x3c) + lVar1,param_2,param_3);
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 0x14;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x40));
  }
  return;
}

