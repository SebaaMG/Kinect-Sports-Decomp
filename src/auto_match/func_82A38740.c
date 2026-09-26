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
extern unsigned int *auStack_18;
extern unsigned int *auStack_20;


uint fn_82A38740(int *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint auStack_20 [2];
  undefined1 auStack_18 [8];
  
  uVar2 = 2;
  iVar1 = (**(code **)(*param_1 + 0x20))(param_2,auStack_18,auStack_20,4,0x1b);
  if (-1 < iVar1) {
    uVar2 = auStack_20[0] & 1;
  }
  return uVar2;
}

