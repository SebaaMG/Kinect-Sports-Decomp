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
extern int fn_82AD1270();
extern int fn_82AD17B0();


uint * fn_82AD1918(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  uint *puVar1;
  
  puVar1 = (uint *)fn_82AD17B0();
  *puVar1 = *puVar1 & 0xf1ffffff | 0x2000000;
  fn_82AD1270(puVar1,param_4);
  *puVar1 = (param_3 & 0x1b) << 5 | 0x1c80 | *puVar1 & 0xfffffc9f;
  return puVar1;
}

