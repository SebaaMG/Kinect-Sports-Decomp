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
extern unsigned int lbl_821AAD20;


longlong fn_829E98F0(longlong param_1,longlong param_2,longlong param_3,int param_4,
                      undefined4 *param_5)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (param_4 == 0) {
    if (iVar1 < (int)param_2) {
      if (param_5 == (undefined4 *)0x0) {
        return param_2;
      }
      *param_5 = lbl_821AAD20;
      return param_2;
    }
    if (iVar1 < (int)param_3) {
      return param_1;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = lbl_821AAD20;
    }
  }
  else {
    if (param_4 != 2) {
      if (param_4 != 4) {
        return param_1;
      }
      param_1 = param_1 - param_2;
      while( true ) {
        for (; (int)param_1 < 0; param_1 = -1 - param_1) {
        }
        if ((int)param_1 < (int)(param_3 - param_2)) break;
        param_1 = ((param_3 - param_2 & 0x7fffffffU) * 2 - param_1) + -1;
      }
      return param_1 + param_2;
    }
    if (iVar1 < (int)param_2) {
      return param_2;
    }
    if (iVar1 < (int)param_3) {
      return param_1;
    }
  }
  return param_3 + -1;
}

