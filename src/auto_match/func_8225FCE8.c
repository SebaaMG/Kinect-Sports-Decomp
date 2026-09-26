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
extern unsigned int *auStack_810;
extern unsigned int fStack00000020;
extern unsigned int fStack00000024;
extern unsigned int fStack00000028;
extern int fn_82526C70();
extern int fn_82E1CC60();


void fn_8225FCE8(undefined8 param_1)

{
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float fStack00000020;
  float fStack00000024;
  float fStack00000028;
  undefined1 auStack_810 [2048];
  
  fStack00000020 = in_register_00010010;
  fStack00000024 = in_register_00010014;
  fStack00000028 = in_register_00010018;
  fn_82526C70(auStack_810,0x800,0xffffffff821a6810,param_1);
  fn_82E1CC60((double)fStack00000020,auStack_810);
  fn_82526C70(auStack_810,0x800,0xffffffff821a6818,param_1);
  fn_82E1CC60((double)fStack00000024,auStack_810);
  fn_82526C70(auStack_810,0x800,0xffffffff821a6820,param_1);
  fn_82E1CC60((double)fStack00000028,auStack_810);
  return;
}

