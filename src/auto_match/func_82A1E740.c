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
extern int fn_82A1E650();


ulonglong fn_82A1E740(uint *param_1,uint *param_2,int param_3)

{
  int iVar2;
  ulonglong uVar1;
  
  if (*param_1 == 0x3e5) {
    if ((param_3 == 0) || (param_1[3] == 0)) {
      iVar2 = 0x102;
    }
    else {
      iVar2 = fn_82A1E650(param_1[3],0xffffffffffffffff);
    }
    if (iVar2 == 0x102) {
      return 0x3e4;
    }
    if (iVar2 != 0) {
      uVar1 = thunk_FUN_82a2b798();
      return uVar1;
    }
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = param_1[1];
  }
  return (ulonglong)*param_1;
}

