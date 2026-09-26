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
extern unsigned int *auStack_20;
extern int fn_8265CA20();
extern int fn_8288E4B0();
extern int fn_828B22F0();


void fn_828C9D58(undefined8 param_1,int param_2)

{
  undefined1 auStack_20 [8];
  
  fn_828B22F0(param_2 + 0x18);
  fn_8265CA20(*(undefined4 *)(param_2 + 0x18));
  fn_8288E4B0(auStack_20,param_2 + 8,**(undefined4 **)(param_2 + 0xc));
  fn_8265CA20(*(undefined4 *)(param_2 + 0xc));
  return;
}

