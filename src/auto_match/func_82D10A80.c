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
extern int fn_82D0D770();
extern int fn_82D0EFF0();
extern int fn_82D0FF18();
extern int fn_82D10560();
extern unsigned int lbl_821347A8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82D10A80(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 *puVar1;
  
  fn_82D10560();
  puVar1 = (undefined4 *)fn_82D0D770(param_2);
  fn_82D0EFF0(-param_1);
  fn_82D0FF18((double)lbl_821347A8,puVar1,param_4,param_5);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

