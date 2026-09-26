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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82AA68E0();
extern int fn_82F691F0();


undefined4 * fn_82ABE1E8(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  puVar2 = *(undefined4 **)(param_2 + 0x90);
  if (0xf < (*(int *)(param_2 + 0x8c) - (int)puVar2) + 0x1000U) {
    *(undefined4 **)(param_2 + 0x90) = puVar2 + 4;
    return puVar2;
  }
  puVar2 = *(undefined4 **)(param_2 + 0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_2 + 0xc) = *puVar2;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    return puVar2;
  }
  uVar4 = 0x14;
  while( true ) {
    if (0x84 < (uVar4 & 0xffffffff)) {
      puVar2 = *(undefined4 **)(param_2 + 0x90);
      uVar4 = ((ulonglong)*(uint *)(param_2 + 0x8c) - ZEXT48(puVar2)) + 0x1000;
      if (uVar4 != 0) {
        iVar1 = (int)((((uVar4 & 0xffffffff) >> 2) - 1 & 0xffffffff) << 2);
        *puVar2 = *(undefined4 *)(iVar1 + param_2);
        *(undefined4 **)(iVar1 + param_2) = puVar2;
      }
      iVar1 = *(int *)(*(int *)(param_2 + 0x8c) + 4);
      *(int *)(param_2 + 0x8c) = iVar1;
      if (iVar1 == 0) {
        uVar3 = fn_82AA68E0(param_2);
        *(undefined4 *)(param_2 + 0x8c) = uVar3;
        if (*(int *)(param_2 + 0x88) != 0) {
          *(undefined4 *)(*(int *)(param_2 + 0x88) + 4) = uVar3;
        }
        *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_2 + 0x8c);
      }
      *(int *)(param_2 + 0x90) = *(int *)(param_2 + 0x8c) + 0x18;
      return (undefined4 *)(*(int *)(param_2 + 0x8c) + 8);
    }
    iVar1 = (int)((((uVar4 & 0xffffffff) >> 2) - 1 & 0xffffffff) << 2);
    puVar2 = *(undefined4 **)(iVar1 + param_2);
    if (puVar2 != (undefined4 *)0x0) break;
    uVar4 = uVar4 + 4;
  }
  *(undefined4 *)(iVar1 + param_2) = *puVar2;
  if (0x10 < (uVar4 & 0xffffffff)) {
    iVar1 = (int)((((uVar4 - 0x10 & 0xffffffff) >> 2) - 1 & 0xffffffff) << 2);
    puVar2[4] = *(undefined4 *)(iVar1 + param_2);
    *(undefined4 **)(iVar1 + param_2) = puVar2 + 4;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(puVar2,0,0x10);
}

