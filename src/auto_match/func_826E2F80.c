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
extern int fn_826A9280();
extern int fn_826AA460();
extern int fn_826E19E8();
extern int fn_826F68F8();


void fn_826E2F80(int param_1)

{
  int iVar1;
  int aiStack_20 [2];
  
  iVar1 = fn_826E19E8();
  fn_826F68F8(iVar1,param_1);
  fn_826A9280(param_1 + 0x14,0xffffffff8200d0e0,*(undefined2 *)(iVar1 + 4));
  aiStack_20[0] = iVar1;
  fn_826AA460(*(int *)(param_1 + 0x2e8) * 0xc + param_1 + 0x2f0,aiStack_20);
  return;
}

