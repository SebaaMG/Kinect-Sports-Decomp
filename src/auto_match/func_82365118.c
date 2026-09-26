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
extern int fn_822997C8();
extern int fn_82299948();
extern int fn_8229A560();
extern int fn_8229F4F8();
extern int fn_8265C9E0();
extern int fn_82A1EFC0();
extern unsigned int lbl_821AA90C;


undefined4 * fn_82365118(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_8265C9E0(0x24d0);
  if (puVar1 != (undefined4 *)0x0) {
    fn_8229A560(puVar1,param_2);
    puVar1[0x19] = 0;
    *puVar1 = &lbl_821AA90C;
    fn_822997C8(puVar1 + 0x1a);
    puVar1[0x4a6] = 0;
    fn_82299948(puVar1 + 0x4a7,1,0);
    puVar1[0x933] = 0xffffffff;
    fn_8229F4F8(puVar1[3],1);
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(puVar1 + 0xb,0,0x38);
  }
  *param_1 = 0;
  return param_1;
}

