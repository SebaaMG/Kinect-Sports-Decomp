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
extern unsigned int *auStack_4ce;
extern int fn_82281868();
extern int fn_822819E0();
extern int fn_82F691F0();


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8247F570(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar5;
  ulonglong uVar4;
  undefined1 auStack_4ce [1230];
  
  iVar2 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(iVar2 + 0x18b8) == 0) {
LAB_8247f5b8:
    uVar5 = *(undefined4 *)(param_1 + 0x30);
  }
  else if (*(int *)(iVar2 + 0x18b8) == 1) {
    if (*(int *)(iVar2 + 0xc58) == 4) goto LAB_8247f5b8;
    uVar5 = *(undefined4 *)(param_1 + 0x34);
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x38);
  }
  *(undefined4 *)(iVar2 + 0x18) = uVar5;
  puVar3 = (uint *)(*(int *)(param_1 + 0x48) + 4);
  if ((puVar3 == (uint *)0x0) ||
     (uVar4 = (ulonglong)*puVar3, uVar4 == (uVar4 - 1) + (ulonglong)(uVar4 == 0))) {
    *puVar3 = *(uint *)(param_1 + 0x18);
    iVar2 = *(int *)(param_1 + 0x14);
    puVar3 = (uint *)(param_1 + 0x18);
    if (*(int *)(iVar2 + 0x10) == 0) {
      iVar1 = *(int *)(iVar2 + 8);
      goto joined_r0x8247f638;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x14);
    if (*(int *)(iVar2 + 0x10) == 0) {
      iVar1 = *(int *)(iVar2 + 8);
joined_r0x8247f638:
      if (iVar1 != 0) {
        fn_822819E0(iVar2,puVar3);
      }
      goto LAB_8247f640;
    }
  }
  fn_82281868(iVar2,puVar3,0);
LAB_8247f640:
  *(undefined4 *)(param_1 + 0x100) = 1;
  *(undefined4 *)(param_1 + 0xf4) = 1;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_4ce,0,0x3e);
}

