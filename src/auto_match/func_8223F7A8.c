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
#define CONCAT17(h,l) ((U64)((((U8)(h)) << 56) | ((U64)(l))))
extern int fn_8223FFB8();
extern unsigned int uStack00000020;


ulonglong *
fn_8223F7A8(ulonglong *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
             longlong param_5)

{
  int iVar1;
  ulonglong uStack00000020;
  
  uStack00000020 = param_3;
  if ((int)param_5 != 0) {
    do {
      if (((param_3 & 0xffffffff) == 0) ||
         (iVar1 = fn_8223FFB8(param_3 & 0xffffffff,param_4), iVar1 == -1)) {
        uStack00000020 = CONCAT17(1,(((U64)(uStack00000020) >> 8) & 0xFFFFFFFFFFFFFF));
      }
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  *param_1 = uStack00000020;
  return param_1;
}

