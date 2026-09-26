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
extern int fn_82230300();
extern int fn_82A1EFC0();
extern unsigned int lbl_821BABCC;


void fn_8245A478(undefined4 *param_1)

{
  param_1[0x2001a] = 0;
  *param_1 = &lbl_821BABCC;
  param_1[0x2001b] = 0;
  param_1[0x2001c] = 0;
  param_1[0x2001d] = 0;
  param_1[0x2001f] = 0;
  param_1[0x20020] = 0;
  param_1[0x20021] = 0;
  param_1[0x20022] = 0;
  param_1[0x2002a] = 0;
  param_1[0x2002f] = 0;
  *(undefined8 *)(param_1 + 0x20030) = 0;
  fn_82230300(param_1 + 0x20032,0,0);
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 3,0,0x8005a);
}

