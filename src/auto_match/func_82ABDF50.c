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


void fn_82ABDF50(int param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  uVar5 = param_2;
  do {
    uVar5 = uVar5 + 4;
    iVar3 = (int)param_2;
    if (0x84 < (uVar5 & 0xffffffff)) {
      puVar1 = *(undefined4 **)(param_1 + 0x90);
      uVar5 = ((ulonglong)*(uint *)(param_1 + 0x8c) - ZEXT48(puVar1)) + 0x1000;
      if (uVar5 != 0) {
        iVar2 = (int)((((uVar5 & 0xffffffff) >> 2) - 1 & 0xffffffff) << 2);
        *puVar1 = *(undefined4 *)(iVar2 + param_1);
        *(undefined4 **)(iVar2 + param_1) = puVar1;
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + 4);
      *(int *)(param_1 + 0x8c) = iVar2;
      if (iVar2 == 0) {
        uVar4 = fn_82AA68E0(param_1);
        *(undefined4 *)(param_1 + 0x8c) = uVar4;
        if (*(int *)(param_1 + 0x88) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x88) + 4) = uVar4;
        }
        *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x8c);
      }
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x8c) + 8 + iVar3;
      return;
    }
    iVar2 = (int)((((uVar5 & 0xffffffff) >> 2) - 1 & 0xffffffff) << 2);
    puVar1 = *(undefined4 **)(iVar2 + param_1);
  } while (puVar1 == (undefined4 *)0x0);
  *(undefined4 *)(iVar2 + param_1) = *puVar1;
  if ((param_2 & 0xffffffff) < (uVar5 & 0xffffffff)) {
    iVar2 = (int)((((uVar5 - param_2 & 0xffffffff) >> 2) - 1 & 0xffffffff) << 2);
    *(undefined4 *)((int)puVar1 + iVar3) = *(undefined4 *)(iVar2 + param_1);
    *(int *)(iVar2 + param_1) = (int)puVar1 + iVar3;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(puVar1,0,param_2);
}

