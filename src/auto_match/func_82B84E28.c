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
extern int fn_8265C990();
extern int fn_82ABDF50();
extern int fn_82ABE8C8();
extern int fn_82AE7308();
extern int fn_82F68CC0();
extern int fn_82F691F0();


longlong fn_82B84E28(int param_1,undefined8 param_2,uint param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  
  uVar6 = *(uint *)(param_1 + 0x10);
  lVar7 = (ulonglong)uVar6 + 1;
  uVar5 = lVar7 * 0x28;
  iVar9 = param_1 + 0x32c;
  if ((uVar5 & 0xffffffff) < 0x85) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x3bc);
    if (((*(uint *)(param_1 + 0x3b8) - uVar4) + 0x1000 & 0xffffffff) < (uVar5 & 0xffffffff)) {
      iVar3 = (int)((((uVar5 & 0xffffffff) >> 2) - 1 & 0xffffffff) << 2);
      puVar1 = *(undefined4 **)(iVar3 + iVar9);
      if (puVar1 != (undefined4 *)0x0) {
        *(undefined4 *)(iVar3 + iVar9) = *puVar1;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(puVar1,0,uVar5);
      }
      uVar4 = fn_82ABDF50(iVar9);
    }
    else {
      *(uint *)(param_1 + 0x3bc) = *(uint *)(param_1 + 0x3bc) + (int)uVar5;
    }
  }
  else {
    uVar4 = fn_82ABE8C8(iVar9);
  }
  lVar10 = (ulonglong)uVar6 * 0x28 + uVar4;
  fn_82F68CC0(uVar4,*(undefined4 *)(param_1 + 0xc));
  fn_82F68CC0(lVar10,param_2,0x28);
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  uVar6 = *(int *)(param_1 + 0x14) * 0x28;
  if (uVar6 < 0x85) {
    iVar3 = ((uVar6 >> 2) - 1) * 4;
    *puVar1 = *(undefined4 *)(iVar3 + iVar9);
    *(undefined4 **)(iVar3 + iVar9) = puVar1;
  }
  else {
    puVar2 = (uint *)((uint)(puVar1 + -3) & 0xfffffffe);
    *(uint *)(puVar2[1] & 0xfffffffe) = *puVar2;
    *(uint *)(*puVar2 & 0xfffffffe) = puVar2[1];
    fn_8265C990(puVar1 + -3,0x618d0000);
  }
  uVar8 = (undefined4)lVar7;
  *(undefined4 *)(param_1 + 0x10) = uVar8;
  *(int *)(param_1 + 0xc) = (int)uVar4;
  *(undefined4 *)(param_1 + 0x14) = uVar8;
  iVar9 = (int)lVar10;
  *(undefined4 *)(iVar9 + 0x18) = 0;
  *(uint *)(iVar9 + 4) = (param_3 & 7) << 4 | *(uint *)(iVar9 + 4) & 0xffffff8f;
  if (*(int *)(iVar9 + 0x1c) != 0) {
    *(undefined4 *)(iVar9 + 0x1c) = 0;
    fn_82AE7308(param_1,(iVar9 - *(int *)(param_1 + 0xc)) / 0x28);
  }
  return lVar10;
}

