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
extern int fn_82DAED38();
extern int fn_82DB6508();
extern int fn_82DB6A90();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int lbl_8323B520;


void fn_82DB84E0(int param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar6 + 4);
  if (puVar1 < *(undefined4 **)(iVar6 + 0xc)) {
    *puVar1 = "TtCollide";
    uVar5 = TBLr;
    puVar1[1] = (int)uVar5;
    *(undefined4 **)(iVar6 + 4) = puVar1 + 3;
  }
  iVar6 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar10 = (ulonglong)*(uint *)(param_1 + 0x34) - 1;
    if (-1 < lVar10) {
      lVar11 = lVar10 * 0x70;
      do {
        lVar8 = (ulonglong)*(uint *)(param_1 + 0x30) + lVar11;
        iVar9 = (int)lVar8;
        iVar2 = *(int *)(iVar9 + 0xc);
        if (*(char *)(iVar2 + 0xe8) == '\x05') {
          iVar2 = *(int *)(iVar9 + 0x10);
        }
        (**(code **)(**(int **)(iVar9 + 0x14) + 0x20))
                  (*(int **)(iVar9 + 0x14),*(undefined4 *)(iVar2 + 0xcc),lVar8 + 0x18);
        lVar10 = lVar10 + -1;
        lVar11 = lVar11 + -0x70;
      } while (-1 < lVar10);
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  iVar9 = 0;
  *(undefined8 *)(iVar2 + 0x1d0) = *param_2;
  *(undefined8 *)(iVar2 + 0x1d8) = param_2[1];
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x78);
  *(undefined8 *)(iVar2 + 0x50) = *param_2;
  *(undefined8 *)(iVar2 + 0x58) = param_2[1];
  iVar2 = *(int *)(param_1 + 0xc);
  *(float *)(iVar2 + 0x2ec) = *(float *)(iVar2 + 0x300) * *(float *)(param_2 + 1);
  *(float *)(iVar2 + 0x2f0) =
       (float)(longlong)*(int *)(iVar2 + 0x2f4) * *(float *)((int)param_2 + 0xc);
  *(int *)(*(int *)(param_1 + 0xc) + 0x94) = *(int *)(*(int *)(param_1 + 0xc) + 0x94) + 1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (0 < *(int *)(iVar2 + 0x2c)) {
    iVar7 = 0;
    do {
      iVar3 = *(int *)(iVar7 + *(int *)(iVar2 + 0x28));
      fn_82DB6508(param_1,*(undefined4 *)(iVar3 + 0x48),*(undefined4 *)(iVar3 + 0x4c),
                    *(undefined4 *)(param_1 + 0xc),0);
      if (lbl_8323B520 == 1) {
        iVar6 = *(int *)(param_1 + 0xc);
        lVar10 = (ulonglong)*(uint *)(iVar6 + 0x94) - 1;
        *(int *)(iVar6 + 0x94) = (int)lVar10;
        if ((lVar10 == 0) && (*(char *)(iVar6 + 0x9c) == '\0')) {
          if (*(int *)(iVar6 + 0x8c) != 0) {
            fn_82D80C18(iVar6);
          }
          if ((*(int *)(iVar6 + 0xa4) == 1) && (*(int *)(iVar6 + 0x90) != 0)) {
            fn_82D80C30(iVar6);
          }
        }
        iVar6 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(undefined4 **)(iVar6 + 4);
        if (*(undefined4 **)(iVar6 + 0xc) <= puVar1) {
          return;
        }
        *puVar1 = &lbl_82132BC4;
        uVar5 = TBLr;
        puVar1[1] = (int)uVar5;
        *(undefined4 **)(iVar6 + 4) = puVar1 + 3;
        return;
      }
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar9 < *(int *)(iVar2 + 0x2c));
  }
  iVar2 = *(int *)(param_1 + 0xc);
  lVar10 = (ulonglong)*(uint *)(iVar2 + 0x94) - 1;
  *(int *)(iVar2 + 0x94) = (int)lVar10;
  if ((lVar10 == 0) && (*(char *)(iVar2 + 0x9c) == '\0')) {
    if (*(int *)(iVar2 + 0x8c) != 0) {
      fn_82D80C18(iVar2);
    }
    if ((*(int *)(iVar2 + 0xa4) == 1) && (*(int *)(iVar2 + 0x90) != 0)) {
      fn_82D80C30(iVar2);
    }
  }
  *(int *)(*(int *)(param_1 + 0xc) + 0x94) = *(int *)(*(int *)(param_1 + 0xc) + 0x94) + 1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (0 < *(int *)(iVar2 + 0x2c)) {
    iVar9 = 0;
    do {
      uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x28) + iVar9);
      fn_82DB6A90(param_1,uVar4,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x78));
      if (lbl_8323B520 == 1) break;
      if (*(int *)(*(int *)(param_1 + 0xc) + 0x19c) != 0) {
        iVar7 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(undefined4 **)(iVar7 + 4);
        if (puVar1 < *(undefined4 **)(iVar7 + 0xc)) {
          *puVar1 = "TtIslandPostCollideCb";
          uVar5 = TBLr;
          puVar1[1] = (int)uVar5;
          *(undefined4 **)(iVar7 + 4) = puVar1 + 3;
        }
        fn_82DAED38(*(undefined4 *)(param_1 + 0xc),uVar4,param_2);
        iVar7 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(undefined4 **)(iVar7 + 4);
        if (puVar1 < *(undefined4 **)(iVar7 + 0xc)) {
          *puVar1 = &lbl_82132BC4;
          uVar5 = TBLr;
          puVar1[1] = (int)uVar5;
          *(undefined4 **)(iVar7 + 4) = puVar1 + 3;
        }
      }
      iVar6 = iVar6 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar6 < *(int *)(iVar2 + 0x2c));
  }
  iVar6 = *(int *)(param_1 + 0xc);
  lVar10 = (ulonglong)*(uint *)(iVar6 + 0x94) - 1;
  *(int *)(iVar6 + 0x94) = (int)lVar10;
  if ((lVar10 == 0) && (*(char *)(iVar6 + 0x9c) == '\0')) {
    if (*(int *)(iVar6 + 0x8c) != 0) {
      fn_82D80C18(iVar6);
    }
    if ((*(int *)(iVar6 + 0xa4) == 1) && (*(int *)(iVar6 + 0x90) != 0)) {
      fn_82D80C30(iVar6);
    }
  }
  iVar6 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar6 + 4);
  if (puVar1 < *(undefined4 **)(iVar6 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar5 = TBLr;
    puVar1[1] = (int)uVar5;
    *(undefined4 **)(iVar6 + 4) = puVar1 + 3;
  }
  return;
}

