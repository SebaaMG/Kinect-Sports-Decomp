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
#define _iStack00000018 ((*(U64*)&iStack00000018))
extern int fn_82A70960();
extern unsigned int iStack00000018;


undefined8 fn_82A709E0(int *param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int iStack00000018;
  
  uVar3 = 0;
  iStack00000018 = (int)((ulonglong)param_2 >> 0x20);
  if (param_3 != 1) {
    _iStack00000018 = param_2;
    if (param_3 == 2) {
      uVar2 = 0x18 - param_4;
      if ((int)uVar2 < 0) {
        iVar1 = iStack00000018 >> (-uVar2 & 0x3f);
        iStack00000018 = fn_82A70960(0xffffffff8208fe44,iVar1);
      }
      else {
        iVar1 = iStack00000018 << (uVar2 & 0x3f);
        iStack00000018 = fn_82A70960(0xffffffff8208fe44,iVar1);
      }
    }
    else if (param_3 == 3) {
      iVar1 = iStack00000018 << 8;
      iStack00000018 = fn_82A70960(0xffffffff8208fe44,iVar1);
    }
    else {
      uVar3 = 0xffffffff80070057;
      iStack00000018 = 0;
    }
  }
  if (param_1 != (int *)0x0) {
    *param_1 = iStack00000018;
  }
  return uVar3;
}

