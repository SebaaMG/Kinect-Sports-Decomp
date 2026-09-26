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
extern int fn_8265CA20();
extern int fn_8265CAA0();
extern unsigned int lbl_82002ACC;


undefined4 * fn_82230928(undefined4 *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  if ((param_2 & 2) == 0) {
    *param_1 = &lbl_82002ACC;
    puVar1 = param_1;
    if ((param_2 & 1) != 0) {
      fn_8265CA20(param_1);
    }
  }
  else {
    uVar2 = (ulonglong)(uint)param_1[-1];
    puVar1 = param_1 + -1;
    param_1 = param_1 + param_1[-1];
    if (-1 < (longlong)(uVar2 - 1)) {
      do {
        param_1 = param_1 + -1;
        *param_1 = &lbl_82002ACC;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if ((param_2 & 1) != 0) {
      fn_8265CAA0(puVar1);
    }
  }
  return puVar1;
}

