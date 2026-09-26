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
extern unsigned int lbl_821347BC;
extern unsigned int lbl_82134B98;
extern unsigned int lbl_82134BA4;
extern unsigned int lbl_82134BB0;


undefined4 * fn_82DB30A0(undefined4 *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + -3;
  *param_1 = &lbl_82134BB0;
  *puVar1 = &lbl_82134B98;
  param_1[-1] = &lbl_821347BC;
  param_1[-2] = &lbl_82134BA4;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(puVar1);
  }
  return puVar1;
}

