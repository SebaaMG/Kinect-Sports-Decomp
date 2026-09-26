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
extern int fn_82E48D78();
extern int fn_82E50BE8();


ulonglong fn_82E49060(undefined4 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int *piVar3;
  uint auStack_20 [2];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    uVar1 = 0;
    auStack_20[0] = 0;
    uVar2 = fn_82E50BE8(0x78,0,0,0,0);
    if ((uVar2 & 0xffffffff) == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_82E48D78(uVar2,auStack_20);
      uVar1 = (ulonglong)auStack_20[0];
    }
    *param_1 = piVar3;
    if (piVar3 == (int *)0x0) {
      uVar1 = 0xffffffff8007000e;
    }
    if (((int)uVar1 < 0) && (piVar3 != (int *)0x0)) {
      (**(code **)(*piVar3 + 8))();
      *param_1 = 0;
    }
  }
  return uVar1;
}

