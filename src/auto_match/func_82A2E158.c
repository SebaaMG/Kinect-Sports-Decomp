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
extern int fn_82A2BAF0();
extern int fn_82A2D960();


longlong fn_82A2E158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  int aiStack_40 [16];
  
  lVar2 = 0;
  iVar1 = fn_82A2BAF0(param_1,param_2,0,param_4,aiStack_40);
  if ((iVar1 != 0) ||
     (lVar2 = fn_82A2D960(param_1,param_2,0,param_3,param_4,aiStack_40), -1 < lVar2)) {
    *(byte *)(aiStack_40[0] + 7) = *(byte *)(aiStack_40[0] + 7) | 0x40;
  }
  return lVar2;
}

