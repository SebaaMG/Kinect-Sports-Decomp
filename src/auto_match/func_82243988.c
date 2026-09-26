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
extern int fn_82F68CC0();


void fn_82243988(int param_1,int param_2,undefined8 param_3)

{
  undefined4 auStack_20 [2];
  
  if (*(uint *)(param_1 + 0x18) < 5) {
    auStack_20[0] = 0;
    fn_82F68CC0(auStack_20,param_3);
    *(undefined4 *)((param_2 + 2) * 4 + param_1) = auStack_20[0];
  }
  else {
    fn_82F68CC0(*(undefined4 *)((param_2 + 2) * 4 + param_1),param_3);
  }
  return;
}

