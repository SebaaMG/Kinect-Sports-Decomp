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
extern int fn_82272D90();
extern int fn_822B4378();
extern int fn_8265CA20();


void fn_822B4040(int param_1)

{
  undefined1 auStack_20 [16];
  
  fn_82272D90(auStack_20,param_1 + 0x10,**(undefined4 **)(param_1 + 0x14));
  fn_8265CA20(*(undefined4 *)(param_1 + 0x14));
  fn_822B4378(auStack_20,param_1,**(undefined4 **)(param_1 + 4));
  fn_8265CA20(*(undefined4 *)(param_1 + 4));
  return;
}

