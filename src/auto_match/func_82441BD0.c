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
extern int fn_82230110();
extern int fn_8265C9E0();
extern unsigned int lbl_821B9978;


undefined4 *
fn_82441BD0(undefined4 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  *param_1 = &lbl_821B9978;
  puVar1 = (undefined4 *)fn_8265C9E0(0x30);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    fn_82230110(puVar1 + 2,param_2);
    puVar1[9] = param_4;
    puVar1[10] = 1;
    puVar1[0xb] = 0;
  }
  param_1[1] = puVar1;
  if (param_3 != (undefined4 *)0x0) {
    puVar1[1] = *param_3;
  }
  return param_1;
}

