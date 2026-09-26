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
extern int fn_82A93C18();
extern unsigned int iStack_10;


uint fn_82A863D0(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iStack_10;
  
  uVar1 = param_2 & 0xffffffff;
  uVar2 = param_3 & 0xffffffff;
  uVar4 = 1;
  uVar3 = param_4;
  if (1 < (param_4 & 0xffffffff)) {
    do {
      uVar1 = uVar1 >> 1;
      uVar2 = uVar2 >> 1;
      if ((uVar1 == 0) && (uVar3 = uVar4, uVar2 == 0)) break;
      uVar4 = uVar4 + 1;
      uVar3 = param_4;
    } while ((uVar4 & 0xffffffff) < (param_4 & 0xffffffff));
  }
  fn_82A93C18(param_2,param_3,uVar3,0,param_1,0,0,0);
  return iStack_10 + 0xfffU & 0xfffff000;
}

