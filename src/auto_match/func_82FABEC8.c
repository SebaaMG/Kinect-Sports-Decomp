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
extern int fn_82FA97D0();
extern int fn_82FAD0A8();


undefined8 fn_82FABEC8(int *param_1,undefined8 param_2)

{
  int iVar3;
  ulonglong uVar1;
  undefined8 uVar2;
  
  iVar3 = (**(code **)(*param_1 + 0x18))();
  if ((iVar3 != 0) && (uVar1 = fn_82FAD0A8(), (uVar1 & 0xffffffff) != 0)) {
    uVar2 = fn_82FA97D0(uVar1,param_2);
    return uVar2;
  }
  return 2;
}

