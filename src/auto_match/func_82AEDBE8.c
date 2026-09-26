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
extern unsigned int *auStack_108;
extern int fn_82F691F0();


void fn_82AEDBE8(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_108 [264];
  
  for (uVar1 = *(uint *)(param_2 + 0x14); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 0x28)) {
    *(uint *)(uVar1 + 0x10) = *(uint *)(uVar1 + 0x10) | 0x1000000;
    *(uint *)(uVar1 + 0x14) = *(uint *)(uVar1 + 0x14) | 0x1fff;
  }
  for (uVar1 = *(uint *)(param_2 + 0x14); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 0x28)) {
    puVar3 = (undefined4 *)(uVar1 + 4);
    for (iVar2 = *(int *)(uVar1 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
      puVar3 = (undefined4 *)(iVar2 + 8);
    }
    *puVar3 = 0x83223ca8;
    *(uint *)(uVar1 + 0x14) = *(uint *)(uVar1 + 0x14) & 0xfc001fff;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_108,0,0x24);
}

