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
extern int fn_82D7DB70();
extern int fn_82D80C18();
extern int fn_82D80C30();
extern int fn_82DA4850();
extern int fn_82DAED38();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int lbl_8323B520;


void fn_82DA4CD0(int param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar9;
  ulonglong uVar8;
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = "TtCollide";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  iVar4 = *(int *)(param_1 + 0xc);
  iVar7 = 0;
  *(undefined8 *)(iVar4 + 0x1d0) = *param_2;
  *(undefined8 *)(iVar4 + 0x1d8) = param_2[1];
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x78);
  *(undefined8 *)(iVar4 + 0x50) = *param_2;
  *(undefined8 *)(iVar4 + 0x58) = param_2[1];
  iVar4 = *(int *)(param_1 + 0xc);
  *(float *)(iVar4 + 0x2ec) = *(float *)(iVar4 + 0x300) * *(float *)(param_2 + 1);
  *(float *)(iVar4 + 0x2f0) =
       (float)(longlong)*(int *)(iVar4 + 0x2f4) * *(float *)((int)param_2 + 0xc);
  *(int *)(*(int *)(param_1 + 0xc) + 0x94) = *(int *)(*(int *)(param_1 + 0xc) + 0x94) + 1;
  iVar4 = *(int *)(param_1 + 0xc);
  if (0 < *(int *)(iVar4 + 0x2c)) {
    iVar9 = 0;
    do {
      iVar5 = *(int *)(iVar9 + *(int *)(iVar4 + 0x28));
      fn_82DA4850(*(undefined4 *)(iVar5 + 0x48),*(undefined4 *)(iVar5 + 0x4c),
                    *(undefined4 *)(param_1 + 0xc));
      if (lbl_8323B520 == 1) {
        iVar4 = *(int *)(param_1 + 0xc);
        lVar6 = (ulonglong)*(uint *)(iVar4 + 0x94) - 1;
        *(int *)(iVar4 + 0x94) = (int)lVar6;
        if ((lVar6 == 0) && (*(char *)(iVar4 + 0x9c) == '\0')) {
          if (*(int *)(iVar4 + 0x8c) != 0) {
            fn_82D80C18(iVar4);
          }
          if ((*(int *)(iVar4 + 0xa4) == 1) && (*(int *)(iVar4 + 0x90) != 0)) {
            fn_82D80C30(iVar4);
          }
        }
        iVar4 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(undefined4 **)(iVar4 + 4);
        if (*(undefined4 **)(iVar4 + 0xc) <= puVar1) {
          return;
        }
        *puVar1 = &lbl_82132BC4;
        uVar3 = TBLr;
        puVar1[1] = (int)uVar3;
        *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
        return;
      }
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar7 < *(int *)(iVar4 + 0x2c));
  }
  iVar4 = *(int *)(param_1 + 0xc);
  lVar6 = (ulonglong)*(uint *)(iVar4 + 0x94) - 1;
  *(int *)(iVar4 + 0x94) = (int)lVar6;
  if ((lVar6 == 0) && (*(char *)(iVar4 + 0x9c) == '\0')) {
    if (*(int *)(iVar4 + 0x8c) != 0) {
      fn_82D80C18(iVar4);
    }
    if ((*(int *)(iVar4 + 0xa4) == 1) && (*(int *)(iVar4 + 0x90) != 0)) {
      fn_82D80C30(iVar4);
    }
  }
  iVar7 = 0;
  *(int *)(*(int *)(param_1 + 0xc) + 0x94) = *(int *)(*(int *)(param_1 + 0xc) + 0x94) + 1;
  iVar4 = *(int *)(param_1 + 0xc);
  if (0 < *(int *)(iVar4 + 0x2c)) {
    iVar9 = 0;
    do {
      uVar8 = (ulonglong)*(uint *)(*(int *)(iVar4 + 0x28) + iVar9);
      piVar2 = *(int **)(*(int *)(param_1 + 0xc) + 0x78);
      iVar5 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(undefined4 **)(iVar5 + 4);
      if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
        *puVar1 = "TtNarrowPhase";
        uVar3 = TBLr;
        puVar1[1] = (int)uVar3;
        *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
      }
      piVar2[5] = 0;
      piVar2[0x18] = *piVar2 + 0x1c60;
      fn_82D7DB70(uVar8,uVar8 + 0x58,piVar2);
      iVar5 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(undefined4 **)(iVar5 + 4);
      if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
        *puVar1 = &lbl_82132BC4;
        uVar3 = TBLr;
        puVar1[1] = (int)uVar3;
        *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
      }
      if (lbl_8323B520 == 1) break;
      if (*(int *)(*(int *)(param_1 + 0xc) + 0x19c) != 0) {
        iVar5 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(undefined4 **)(iVar5 + 4);
        if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
          *puVar1 = "TtIslandPostCollideCb";
          uVar3 = TBLr;
          puVar1[1] = (int)uVar3;
          *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
        }
        fn_82DAED38(*(undefined4 *)(param_1 + 0xc),uVar8,param_2);
        iVar5 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(undefined4 **)(iVar5 + 4);
        if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
          *puVar1 = &lbl_82132BC4;
          uVar3 = TBLr;
          puVar1[1] = (int)uVar3;
          *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
        }
      }
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar7 < *(int *)(iVar4 + 0x2c));
  }
  iVar4 = *(int *)(param_1 + 0xc);
  lVar6 = (ulonglong)*(uint *)(iVar4 + 0x94) - 1;
  *(int *)(iVar4 + 0x94) = (int)lVar6;
  if ((lVar6 == 0) && (*(char *)(iVar4 + 0x9c) == '\0')) {
    if (*(int *)(iVar4 + 0x8c) != 0) {
      fn_82D80C18(iVar4);
    }
    if ((*(int *)(iVar4 + 0xa4) == 1) && (*(int *)(iVar4 + 0x90) != 0)) {
      fn_82D80C30(iVar4);
    }
  }
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  return;
}

