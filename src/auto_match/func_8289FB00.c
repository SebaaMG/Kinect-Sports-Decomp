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
extern int fn_8289F4C8();
extern int fn_828A1C98();
extern unsigned int uStack_14;
extern unsigned int uStack_18;


void fn_8289FB00(longlong param_1,int param_2)

{
  undefined4 auStack_20;
  struct { undefined4 first; undefined4 second; } stack_pair_18;

  
  auStack_20 = *(undefined4 *)(param_2 + 0xc);
  fn_828A1C98(&stack_pair_18.first,param_1 + 0x22c,&auStack_20);
  fn_8289F4C8(&auStack_20,param_1 + 0x22c,stack_pair_18.first,stack_pair_18.second);
  return;
}

