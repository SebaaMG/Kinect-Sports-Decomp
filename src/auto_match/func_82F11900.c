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
extern int fn_82F10F08();
extern int fn_82F10FD0();
extern int fn_82F11098();
extern unsigned int lbl_82F11170;


void fn_82F11900(int param_1)

{
  *(code **)(param_1 + 0x6d44) = fn_82F10F08;
  *(code **)(param_1 + 0x6d48) = fn_82F10FD0;
  *(code **)(param_1 + 0x6d4c) = fn_82F11098;
  *(undefined **)(param_1 + 0x6d50) = &lbl_82F11170;
  return;
}

