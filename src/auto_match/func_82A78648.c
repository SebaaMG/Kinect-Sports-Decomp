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
extern unsigned int *auStack_20;
extern int fn_82A77C10();


longlong fn_82A78648(int param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  uint auStack_20 [2];
  
  piVar1 = *(int **)(param_1 + 0x108);
  lVar2 = 0;
  auStack_20[0] = param_2;
  if ((piVar1 != (int *)0x0) &&
     (lVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,auStack_20), lVar2 < 0)) {
    return lVar2;
  }
  if ((auStack_20[0] & 0x1000) != 0) {
    fn_82A77C10(param_1);
  }
  return lVar2;
}

