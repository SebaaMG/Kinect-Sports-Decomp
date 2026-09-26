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
extern int fn_8227AD00();
extern int fn_82A1EFC0();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821AC05C;


undefined4 *
fn_82361D00(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 *param_6)

{
  undefined4 *puVar1;
  
  param_1[1] = 1;
  *param_1 = &lbl_821A8D8C;
  puVar1 = param_1 + 4;
  param_1[2] = 1;
  if (puVar1 != (undefined4 *)0x0) {
    fn_8227AD00(puVar1,param_3,*param_4,*param_5,*param_2,0,1,*param_6);
    param_1[0x802] = 1;
    *puVar1 = &lbl_821AC05C;
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(param_1 + 0x466,0,0xe70);
  }
  return param_1;
}

