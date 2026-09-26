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
extern int fn_82A2B4B8();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


ulonglong fn_82A29D80(undefined8 param_1,undefined4 *param_2)

{
  int iVar2;
  ulonglong uVar1;
  undefined4 uStack_20;
  uint uStack_1c;
  
  iVar2 = fn_82A2B4B8(param_1,&uStack_20);
  if (iVar2 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = uStack_20;
    }
    uVar1 = (ulonglong)uStack_1c;
    if (uStack_1c == 0xffffffff) {
      thunk_FUN_82a2b748(0);
      uVar1 = (ulonglong)uStack_1c;
    }
  }
  return uVar1;
}

