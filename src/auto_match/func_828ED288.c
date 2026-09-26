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
extern int fn_82CE1628();


ulonglong fn_828ED288(int param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  uint auStack_20 [2];
  undefined8 auStack_18 [3];
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  auStack_20[0] = param_3 & 0xff;
  auStack_18[0] = param_2;
  uVar1 = fn_82CE1628(*(undefined4 *)(param_1 + 0x58),1,auStack_18,auStack_20,0);
  if ((uVar1 & 0xffffffff) == 0x65b) {
    uVar1 = thunk_FUN_82a2b798();
  }
  return uVar1;
}

