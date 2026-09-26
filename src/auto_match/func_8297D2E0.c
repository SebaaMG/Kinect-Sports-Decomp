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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F691F0();


undefined8 fn_8297D2E0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  if ((*(uint *)(param_1 + 0xcc) & 4) == 0) {
    uVar9 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      iVar7 = 0;
      do {
        uVar9 = uVar9 + 1;
        piVar3 = (int *)(*(int *)(param_1 + 0x10) + iVar7);
        iVar7 = iVar7 + 4;
        *(undefined4 *)(*piVar3 + 0x10) = 0;
      } while (uVar9 < *(uint *)(param_1 + 4));
    }
    uVar9 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar7 = 0;
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 0x14) + iVar7);
        iVar1 = *(int *)(iVar2 + 4);
        if (*(int *)(param_1 + 0x74) != iVar1) {
          iVar1 = *(int *)(iVar1 * 4 + *(int *)(param_1 + 0x10));
          if ((((*(uint *)(iVar1 + 4) & 2) != 0) && ((*(uint *)(iVar1 + 4) & 0x400) == 0)) &&
             (uVar8 = *(int *)(iVar2 + 0xc) + 1, *(uint *)(iVar1 + 0x10) < uVar8)) {
            *(uint *)(iVar1 + 0x10) = uVar8;
          }
        }
        uVar9 = uVar9 + 1;
        iVar7 = iVar7 + 4;
      } while (uVar9 < *(uint *)(param_1 + 8));
    }
    uVar6 = 0;
    uVar9 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      iVar7 = 0;
      do {
        piVar3 = (int *)(iVar7 + *(int *)(param_1 + 0x10));
        uVar9 = uVar9 + 1;
        iVar7 = iVar7 + 4;
        uVar6 = *(uint *)(*piVar3 + 0x10) + uVar6;
      } while (uVar9 < *(uint *)(param_1 + 4));
    }
    lVar10 = (uVar6 & 0x3fffffff) << 2;
    lVar5 = fn_8265C940(lVar10,0x24810000);
    if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar5,0,lVar10);
    }
    uVar4 = 0xffffffff8007000e;
    fn_8265C990(0,0x24810000);
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

