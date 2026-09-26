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
extern int fn_828EA180();


void fn_8223B610(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = fn_828E9DA8();
  lVar2 = fn_828E9D90(param_1);
  uVar3 = ((param_3 & 0xffffffff) >> 0x1c & 1) + (longlong)((int)(lVar1 - lVar2) >> 0x1f) +
          (ulonglong)((param_3 & 0x1fffffff) << 3 <= (ulonglong)(lVar1 - lVar2));
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (char)uVar3;
  }
  if ((uVar3 & 0xff) != 0) {
    fn_828EA180(param_1,param_2,param_3);
  }
  return;
}

