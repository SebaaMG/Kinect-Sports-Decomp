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
#define TBLr 0
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82DAD528();
extern int fn_82DAD5A8();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


void fn_82DAE550(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  
  piVar9 = (int *)(param_1 + 0x15c);
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x160) - 1;
  if (-1 < (longlong)uVar6) {
    lVar8 = (uVar6 & 0x3fffffff) << 2;
    do {
      if (*(int *)((int)lVar8 + *piVar9) != 0) {
        iVar4 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(undefined4 **)(iVar4 + 4);
        if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
          *puVar1 = "TtislActCb";
          uVar3 = TBLr;
          puVar1[1] = (int)uVar3;
          *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
        }
        piVar2 = *(int **)((int)lVar8 + *piVar9);
        (**(code **)(*piVar2 + 4))(piVar2,param_2);
        iVar4 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(undefined4 **)(iVar4 + 4);
        if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
          *puVar1 = &lbl_82132BC4;
          uVar3 = TBLr;
          puVar1[1] = (int)uVar3;
          *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
        }
      }
      uVar6 = uVar6 - 1;
      lVar8 = lVar8 + -4;
    } while (-1 < (longlong)uVar6);
  }
  fn_82DAD5A8(piVar9);
  iVar4 = 0;
  if (0 < *(int *)(param_2 + 0x4c)) {
    iVar7 = 0;
    do {
      piVar9 = *(int **)(*(int *)(*(int *)(param_2 + 0x48) + iVar7) + 0x214);
      if (piVar9 != (int *)0x0) {
        uVar6 = (ulonglong)*(ushort *)(piVar9 + 1) - 1;
        if (-1 < (longlong)uVar6) {
          lVar8 = (uVar6 & 0x3fffffff) << 2;
          do {
            if (*(int *)((int)lVar8 + *piVar9) != 0) {
              iVar5 = KeTlsGetValue(lbl_8323B4A0);
              puVar1 = *(undefined4 **)(iVar5 + 4);
              if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
                *puVar1 = "TtentActCb";
                uVar3 = TBLr;
                puVar1[1] = (int)uVar3;
                *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
              }
              piVar2 = *(int **)((int)lVar8 + *piVar9);
              (**(code **)(*piVar2 + 8))(piVar2,*(undefined4 *)(*(int *)(param_2 + 0x48) + iVar7));
              iVar5 = KeTlsGetValue(lbl_8323B4A0);
              puVar1 = *(undefined4 **)(iVar5 + 4);
              if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
                *puVar1 = &lbl_82132BC4;
                uVar3 = TBLr;
                puVar1[1] = (int)uVar3;
                *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
              }
            }
            uVar6 = uVar6 - 1;
            lVar8 = lVar8 + -4;
          } while (-1 < (longlong)uVar6);
        }
        fn_82DAD528(piVar9);
      }
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar4 < *(int *)(param_2 + 0x4c));
  }
  lVar8 = (ulonglong)*(uint *)(param_1 + 0x94) - 1;
  *(int *)(param_1 + 0x94) = (int)lVar8;
  if ((lVar8 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
    if (*(int *)(param_1 + 0x8c) != 0) {
      fn_82D80C18(param_1);
    }
    if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
      fn_82D80C30(param_1);
    }
  }
  return;
}

