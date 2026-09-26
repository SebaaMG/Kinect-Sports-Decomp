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
extern int fn_830B2448();
extern unsigned int uStack_10;
extern unsigned int uStack_c;


void fn_82DFD270(int param_1,int param_2,undefined8 param_3)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(param_2 + 8);
  uStack_c = *(undefined4 *)(param_2 + 0xc);
  fn_830B2448(&uStack_10,(ulonglong)*(uint *)(param_1 + 0x1c) + 0xa4,param_3,param_1 + 0x54);
  return;
}

