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
extern int fn_82C562F0();
extern int fn_82F691F0();


undefined8 fn_82C50D30(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = (ulonglong)*(uint *)(param_1 + 0x6070) + 8;
  puVar1 = (undefined4 *)fn_82C562F0(lVar4,0x10,0xffffffff82196582);
  *(undefined4 **)(param_1 + 0x3ba4) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    uVar2 = fn_82C562F0(lVar4,0x20,0xffffffff82196582);
    *(undefined4 *)(param_1 + 0x770) = uVar2;
    uVar2 = fn_82C562F0(lVar4,0x20,0xffffffff82196582);
    *(undefined4 *)(param_1 + 0x774) = uVar2;
    uVar2 = fn_82C562F0(lVar4,0x20,0xffffffff82196582);
    *(undefined4 *)(param_1 + 0x778) = uVar2;
    iVar3 = fn_82C562F0(lVar4,0x20,0xffffffff82196582);
    *(int *)(param_1 + 0x77c) = iVar3;
    if ((((*(int *)(param_1 + 0x770) != 0) && (*(int *)(param_1 + 0x774) != 0)) &&
        (*(int *)(param_1 + 0x778) != 0)) && (iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(int *)(param_1 + 0x770),0,0x20);
    }
  }
  return 0xfffffffffffffff7;
}

