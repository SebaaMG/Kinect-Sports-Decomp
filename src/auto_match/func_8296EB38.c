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
extern int fn_82964CB0();
extern int fn_82964D38();
extern int fn_82965280();
extern int fn_829698F8();
extern int fn_8296CF68();
extern int fn_8296D7F0();


ulonglong fn_8296EB38(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  
  bVar4 = false;
  fn_8296CF68();
  lVar5 = fn_8265C940(*(int *)(param_1 + 8) << 2,0x24810000);
  if (lVar5 == 0) {
    uVar6 = 0xffffffff8007000e;
  }
  else {
    uVar6 = 0;
    bVar3 = false;
    uVar10 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar7 = 0;
      lVar9 = lVar5 + -4;
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 0x14) + iVar7);
        *(uint *)(iVar2 + 0x30) = uVar10;
        uVar1 = *(uint *)(*(int *)(*(int *)(iVar2 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4);
        if (((((uVar1 & 0x100) != 0) && ((uVar1 & 0x400) == 0)) && ((uVar1 & 0x800) == 0)) &&
           ((uVar1 & 0x40) == 0)) {
          lVar9 = lVar9 + 4;
          *(uint *)lVar9 = uVar10;
          uVar6 = uVar6 + 1;
        }
        uVar10 = uVar10 + 1;
        iVar7 = iVar7 + 4;
      } while (uVar10 < *(uint *)(param_1 + 8));
    }
    fn_82965280(0xffffffff82964cb0,lVar5,uVar6,param_1);
    if (1 < (uVar6 & 0xffffffff)) {
      lVar8 = uVar6 - 1;
      lVar9 = lVar5;
      do {
        lVar9 = lVar9 + 4;
        uVar6 = (ulonglong)*(uint *)lVar9;
        iVar7 = fn_82964CB0(*(undefined4 *)
                               (*(int *)(((uint *)lVar9)[-1] * 4 + *(int *)(param_1 + 0x14)) + 0x30)
                              ,uVar6,param_1);
        if (iVar7 == 0) {
          bVar3 = true;
          *(undefined4 *)(*(int *)((int)((uVar6 & 0xffffffff) << 2) + *(int *)(param_1 + 0x14)) + 4)
               = *(undefined4 *)(param_1 + 0x74);
          *(undefined4 *)(*(int *)(*(int *)lVar9 * 4 + *(int *)(param_1 + 0x14)) + 0x30) =
               *(undefined4 *)(*(int *)(((int *)lVar9)[-1] * 4 + *(int *)(param_1 + 0x14)) + 0x30);
        }
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      if (bVar3) {
        fn_8296D7F0(param_1);
        bVar4 = true;
      }
    }
    uVar6 = 0;
    bVar3 = false;
    uVar10 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar7 = 0;
      lVar9 = lVar5 + -4;
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 0x14) + iVar7);
        *(uint *)(iVar2 + 0x30) = uVar10;
        iVar2 = *(int *)(iVar2 + 4);
        if ((*(int *)(param_1 + 0x74) != iVar2) &&
           (((*(uint *)(*(int *)(iVar2 * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x40) != 0 ||
            (*(int *)(param_1 + 0xdc) != 0)))) {
          lVar9 = lVar9 + 4;
          *(uint *)lVar9 = uVar10;
          uVar6 = uVar6 + 1;
        }
        uVar10 = uVar10 + 1;
        iVar7 = iVar7 + 4;
      } while (uVar10 < *(uint *)(param_1 + 8));
    }
    fn_82965280(0xffffffff82964d38,lVar5,uVar6,param_1);
    uVar11 = 0;
    if ((uVar6 & 0xffffffff) != 0) {
      uVar11 = (ulonglong)*(uint *)lVar5;
    }
    if (1 < (uVar6 & 0xffffffff)) {
      lVar8 = uVar6 - 1;
      lVar9 = lVar5;
      do {
        lVar9 = lVar9 + 4;
        uVar6 = (ulonglong)*(uint *)lVar9;
        iVar7 = fn_82964D38(uVar11,uVar6,param_1);
        if (iVar7 == 0) {
          fn_829698F8(param_1,uVar11,uVar6);
          bVar3 = true;
          *(undefined4 *)(*(int *)(*(uint *)lVar9 * 4 + *(int *)(param_1 + 0x14)) + 4) =
               *(undefined4 *)(param_1 + 0x74);
          uVar6 = uVar11;
        }
        lVar8 = lVar8 + -1;
        uVar11 = uVar6;
      } while (lVar8 != 0);
      if (bVar3) {
        fn_8296D7F0(param_1);
        bVar4 = true;
      }
    }
    fn_8265C990(lVar5,0x24810000);
    uVar6 = (ulonglong)!bVar4;
  }
  return uVar6;
}

