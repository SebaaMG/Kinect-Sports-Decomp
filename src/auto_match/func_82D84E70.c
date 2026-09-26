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
extern unsigned int *auStack_70;
extern int fn_82CE5410();
extern int fn_82D808D0();
extern int fn_82DA6530();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();
extern unsigned int iStack_54;
extern unsigned int iStack_60;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_68;


void fn_82D84E70(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_70 [4];
  int *piStack_6c;
  undefined1 uStack_68;
  int iStack_60;
  uint uStack_5c;
  uint uStack_58;
  int iStack_54;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    *(undefined4 *)(param_1 + 0x94) = 1;
    iVar4 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar4 + 4);
    if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
      *puVar1 = "LtUpdateFilterOnPhantom";
      puVar1[3] = "Stbroadphase";
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(undefined4 **)(iVar4 + 4) = puVar1 + 4;
    }
    uVar2 = *(uint *)(param_1 + 0x338);
    iStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0x80000000;
    piVar5 = (int *)fn_82CE5410();
    uStack_58 = uVar2 | 0x80000000;
    iStack_60 = *piVar5;
    *piVar5 = (uVar2 * 8 + 0x7f & 0xffffff80) + iStack_60;
    iStack_54 = iStack_60;
    (**(code **)(**(int **)(param_1 + 0x58) + 0x48))
              (*(int **)(param_1 + 0x58),param_2 + 9,&iStack_60);
    iVar4 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar4 + 4);
    if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
      *puVar1 = "StUpdateOverlaps";
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
    }
    iVar4 = 0;
    if (0 < (int)uStack_5c) {
      iVar8 = 0;
      iVar6 = iStack_60;
      do {
        piVar5 = *(int **)(iVar6 + 4);
        if (piVar5 != param_2 + 9) {
          fn_82D808D0(param_2,(int)*(char *)((int)piVar5 + 5) + (int)piVar5,
                            *(undefined4 *)(param_1 + 0x7c));
        }
        iVar4 = iVar4 + 1;
        iVar8 = iVar8 + 8;
        iVar6 = iVar8 + iStack_60;
      } while (iVar4 < (int)uStack_5c);
    }
    if (param_3 != 0) {
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(undefined4 **)(iVar4 + 4);
      if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
        *puVar1 = "StcollectionFilter";
        uVar3 = TBLr;
        puVar1[1] = (int)uVar3;
        *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
      }
      (**(code **)(*param_2 + 0x30))(param_2);
    }
    lVar7 = (ulonglong)*(uint *)(param_1 + 0x94) - 1;
    *(int *)(param_1 + 0x94) = (int)lVar7;
    if ((lVar7 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
      if (*(int *)(param_1 + 0x8c) != 0) {
        *(undefined4 *)(param_1 + 0x8c) = 0;
        fn_82DA6BA8(*(undefined4 *)(param_1 + 0x88));
      }
      if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
        *(undefined4 *)(param_1 + 0x90) = 0;
        fn_82DA6A58(*(undefined4 *)(param_1 + 0x88));
      }
    }
    iVar6 = KeTlsGetValue(lbl_8323B4A0);
    iVar4 = iStack_54;
    puVar1 = *(undefined4 **)(iVar6 + 4);
    if (puVar1 < *(undefined4 **)(iVar6 + 0xc)) {
      *puVar1 = &lbl_8202CF7C;
      uVar3 = TBLr;
      puVar1[1] = (int)uVar3;
      *(undefined4 **)(iVar6 + 4) = puVar1 + 3;
    }
    uStack_5c = -(uint)(iStack_60 != iStack_54) & uStack_5c;
    piVar5 = (int *)fn_82CE5410();
    *piVar5 = iVar4;
    iVar4 = fn_82CE5410();
    uStack_5c = 0;
    if ((uStack_58 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
                (*(int **)(iVar4 + 0x10),iStack_60,uStack_58 & 0x3fffffff,8);
    }
  }
  else {
    uStack_68 = (undefined1)param_3;
    auStack_70[0] = 0x14;
    piStack_6c = param_2;
    fn_82DA6530(*(undefined4 *)(param_1 + 0x88),auStack_70);
  }
  return;
}

