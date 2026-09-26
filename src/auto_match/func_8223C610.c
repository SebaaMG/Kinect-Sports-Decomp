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
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();


undefined8 fn_8223C610(undefined8 param_1,ulonglong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  lVar1 = fn_828E9DA8();
  lVar2 = fn_828E9D90(param_1);
  uVar4 = ((param_2 & 0xffffffff) >> 0x1f) + (longlong)((int)(lVar1 - lVar2) >> 0x1f) +
          (ulonglong)(param_2 <= (ulonglong)(lVar1 - lVar2));
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = (char)uVar4;
  }
  if ((uVar4 & 0xff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_828E9FF8(param_1,param_2);
  }
  return uVar3;
}

