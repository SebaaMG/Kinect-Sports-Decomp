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
extern int fn_822315A0();
extern int fn_8256E1D8();
extern int fn_8265C9E0();
extern unsigned int lbl_82002C4C;


void fn_82670CE0(undefined4 *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_8265C9E0(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[3] = (int)param_2;
    puVar1[1] = 1;
    *puVar1 = &lbl_82002C4C;
    puVar1[2] = 1;
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  param_1[1] = puVar1;
  *param_1 = (int)param_2;
  if ((param_2 & 0xffffffff) != 0) {
    fn_8256E1D8(param_2 + 4,param_2,puVar1);
  }
  return;
}

