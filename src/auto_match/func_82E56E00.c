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
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E56A88();


ulonglong fn_82E56E00(int param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_30 [48];
  
  fn_82E50CB8(param_1 + 8);
  if (*(uint *)(param_1 + 0xac) < 0x7f) {
    lVar1 = fn_82E56A88(param_1 + 0x44,(param_3 & 0xffff) << 0xf | param_2 & 0xffff,auStack_30);
    uVar2 = -(ulonglong)(lVar1 == 0) & 0xffffffff8007000e;
  }
  else {
    uVar2 = 0xffffffffc00d36b2;
  }
  fn_82E50F10(param_1 + 8);
  return uVar2;
}

