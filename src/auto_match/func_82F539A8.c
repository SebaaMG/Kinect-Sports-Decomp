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
extern int fn_82A1DD38();


void fn_82F539A8(int param_1,int param_2)

{
  *(undefined8 *)(param_1 + 2000) = *(undefined8 *)(param_2 + 2000);
  *(undefined1 *)(param_1 + 0x7e8) = *(undefined1 *)(param_2 + 0x7e8);
  *(undefined4 *)(param_1 + 0x7d8) = *(undefined4 *)(param_2 + 0x7d8);
  fn_82A1DD38(param_1,param_2,2000);
  fn_82A1DD38(param_1 + 0x7dc,param_2 + 0x7dc,0xc);
  return;
}

