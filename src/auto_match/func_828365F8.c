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
extern int fn_828358A8();
extern int fn_82835968();
extern int fn_82F664B0();


void fn_828365F8(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int aiStack_20 [2];
  
  fn_82835968(param_1,param_2,aiStack_20);
  iVar1 = *(int *)(param_1 + 8);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(*(int *)(iVar1 + 0x10) + 0x14) == aiStack_20[0]) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  uVar2 = fn_828358A8();
  fn_82F664B0(param_3,0x100,uVar2);
  return;
}

