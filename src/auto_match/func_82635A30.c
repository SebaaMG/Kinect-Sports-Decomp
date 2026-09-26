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
extern int fn_826323F8();
extern int fn_826324B8();
extern int fn_82F68B70();
extern int fn_82F691F0();


void fn_82635A30(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = fn_82F68B70();
  *(undefined4 *)(iVar1 + 0x4dbc) = 0;
  iVar3 = iVar1 + 0x10;
  *(undefined4 *)(iVar1 + 0x4db4) = 0;
  lVar2 = 2;
  do {
    fn_826323F8(iVar3);
    lVar2 = lVar2 + -1;
    *(undefined4 *)(iVar3 + 0x26bc) = 1;
    iVar3 = iVar3 + 0x26d0;
  } while (lVar2 != 0);
  if (*(int **)(iVar1 + 0x4db8) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + 0x4db8) + 4))();
    *(undefined4 *)(iVar1 + 0x4db8) = 0;
  }
  *(undefined4 *)(iVar1 + 0x4db4) = param_2;
  *(undefined4 *)(iVar1 + 0x4dc0) = 0;
  *(undefined4 *)(iVar1 + 0x4de0) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x4ddc) = 0;
  *(undefined4 *)(iVar1 + 0x4de8) = 0;
  *(undefined4 *)(iVar1 + 0x4df0) = 0;
  fn_826324B8(iVar1 + 0x10,iVar1);
  *(int *)(iVar1 + 0x26d4) = iVar1;
  *(undefined4 *)(iVar1 + 0x26d0) = 0;
  *(undefined8 *)(iVar1 + 0x2510) = 0;
  *(undefined8 *)(iVar1 + 0x2518) = 0;
  *(undefined8 *)(iVar1 + 0x2520) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(iVar1 + 0x170,0,0x23a0);
}

