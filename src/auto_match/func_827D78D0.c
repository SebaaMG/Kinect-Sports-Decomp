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
extern unsigned int *auStack_98;
extern int fn_82230110();
extern int fn_8256DE08();
extern int fn_827D6C60();
extern unsigned int uStack00000014;


/* WARNING: Removing unreachable block (ram,0x827d793c) */
/* WARNING: Removing unreachable block (ram,0x827d7958) */
/* WARNING: Removing unreachable block (ram,0x827d7974) */
/* WARNING: Removing unreachable block (ram,0x827d7978) */
/* WARNING: Removing unreachable block (ram,0x827d79d8) */
/* WARNING: Removing unreachable block (ram,0x827d7a00) */

undefined8
fn_827D78D0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uStack00000014;
  undefined1 auStack_98 [152];
  
  uStack00000014 = (undefined4)param_1;
  fn_8256DE08(auStack_98,0);
  fn_827D6C60(param_2,param_3,param_4,auStack_98,param_5,0);
  fn_82230110(param_1,0xffffffff8201ac89);
  return param_1;
}

