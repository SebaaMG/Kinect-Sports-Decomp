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
extern int fn_82296E38();
extern unsigned int uStack00000018;


ulonglong * fn_82296328(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  short sVar1;
  ulonglong uStack00000018;
  
  uStack00000018 = param_2;
  if ((int)param_4 != 0) {
    do {
      if (((param_2 & 0xffffffff) == 0) ||
         (sVar1 = fn_82296E38(param_2 & 0xffffffff,param_3), sVar1 == -1)) {
        uStack00000018 = CONCAT17(1,(((U64)(uStack00000018) >> 8) & 0xFFFFFFFFFFFFFF));
      }
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  *param_1 = uStack00000018;
  return param_1;
}

