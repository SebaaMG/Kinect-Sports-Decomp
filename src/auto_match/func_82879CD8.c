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
extern int fn_82868758();
extern int fn_82874908();
extern int fn_82877BA8();
extern int fn_82878D48();
extern int fn_82879968();


undefined8 fn_82879CD8(int param_1)

{
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x78) = 0;
  fn_82877BA8(param_1 + 0x58,param_1);
  fn_82878D48(param_1,0);
  fn_82868758();
  uVar1 = fn_82874908();
  if (((ulonglong)*(uint *)(param_1 + 0x4c) == (uVar1 & 0xffffffff)) ||
     (iVar3 = fn_82879968(param_1,uVar1), -1 < iVar3)) {
    if ((*(int **)(param_1 + 0x54) != (int *)0x0) &&
       (iVar3 = (**(code **)(**(int **)(param_1 + 0x54) + 4))(), iVar3 < 0)) {
      return 0xffffffffa0200000;
    }
    uVar2 = 0x20200000;
  }
  else {
    uVar2 = 0xffffffffa0200000;
  }
  return uVar2;
}

