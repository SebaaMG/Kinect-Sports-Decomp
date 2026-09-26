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
extern int fn_82AB1538();
extern unsigned int lbl_820E2FF0;


void fn_82BA9020(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  fn_82AB1538(uVar1,1,0xd,param_2 / 6);
  fn_82AB1538(uVar1,0xe,1,1);
  fn_82AB1538(uVar1,0x2d,4,lbl_820E2FF0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 6;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return;
}

