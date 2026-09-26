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
extern int fn_82BE5240();
extern int fn_82BEB838();


void fn_82BE2820(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 0x1011) {
    uVar2 = 0xd2;
  }
  else if (iVar1 == 0x1023) {
    uVar2 = 0xd3;
  }
  else {
    if (iVar1 != 0x1073) goto LAB_82be2884;
    uVar2 = 0xd4;
  }
  fn_82BE5240(param_1,uVar2,0xffffffff82196582);
  *(undefined4 *)(param_1 + 0x10) = 0;
LAB_82be2884:
  fn_82BEB838(param_1,param_2);
  return;
}

