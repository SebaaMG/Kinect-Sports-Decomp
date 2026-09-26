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
extern unsigned int *auStack_30;
extern int fn_82791070();
extern unsigned int iStack_24;
extern unsigned int iStack_28;


longlong fn_8279A600(int param_1,longlong param_2)

{
  bool bVar1;
  uint auStack_30 [2];
  int iStack_28;
  int iStack_24;
  
  auStack_30[0] = 0xffffffff;
  fn_82791070(&iStack_28,*(undefined4 *)(param_1 + 8),param_2,auStack_30);
  if (((iStack_28 == 0) || (iStack_24 < 0)) || (bVar1 = false, *(int *)(iStack_28 + 4) <= iStack_24)
     ) {
    bVar1 = true;
  }
  if (bVar1) {
    param_2 = -1;
  }
  else {
    param_2 = param_2 - (ulonglong)auStack_30[0];
  }
  return param_2;
}

