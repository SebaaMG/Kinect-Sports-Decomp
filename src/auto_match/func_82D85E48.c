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
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82D40590();
extern int fn_82D8F620();
extern int fn_82DA6530();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();
extern int fn_82DACAE8();
extern int fn_82DAD8A8();
extern int fn_830885D0();
extern unsigned int iStack_44;
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int iStack_60;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_68;


void fn_82D85E48(int param_1,int *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  undefined1 auStack_70 [4];
  int *piStack_6c;
  undefined2 uStack_68;
  int iStack_60;
  uint uStack_5c;
  uint uStack_58;
  int iStack_54;
  int iStack_50;
  uint uStack_4c;
  uint uStack_48;
  int iStack_44;
  
  if (0 < (int)param_3) {
    if (*(int *)(param_1 + 0x94) == 0) {
      *(undefined4 *)(param_1 + 0x94) = 1;
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(undefined4 **)(iVar4 + 4);
      if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
        *puVar1 = "LtRemEntities";
        puVar1[3] = "StInit+CallBck";
        uVar2 = TBLr;
        puVar1[1] = (int)uVar2;
        *(undefined4 **)(iVar4 + 4) = puVar1 + 4;
      }
      (**(code **)(**(int **)(param_1 + 8) + 0x20))
                (*(int **)(param_1 + 8),param_2,param_3,param_1,1);
      iStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0x80000000;
      piVar5 = (int *)fn_82CE5410();
      uStack_58 = param_3 | 0x80000000;
      piVar8 = param_2 + param_3;
      iStack_60 = *piVar5;
      *piVar5 = (param_3 * 4 + 0x7f & 0xffffff80) + iStack_60;
      uVar6 = uStack_5c;
      uVar3 = uStack_5c;
      for (piVar5 = param_2; piVar5 != piVar8; piVar5 = piVar5 + 1) {
        uStack_5c = uVar3;
        if (*(int *)(*piVar5 + 0x10) != 0) {
          *(int *)(uVar6 * 4 + iStack_60) = *piVar5 + 0x24;
          uVar6 = uVar3 + 1;
          uStack_5c = uVar6;
        }
        uVar3 = uStack_5c;
      }
      uStack_5c = 0;
      iStack_54 = iStack_60;
      if (uVar6 != 0) {
        uStack_5c = uVar3;
        iVar4 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(undefined4 **)(iVar4 + 4);
        if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
          *puVar1 = "StBroadPhase";
          uVar2 = TBLr;
          puVar1[1] = (int)uVar2;
          *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
        }
        iStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0x80000000;
        uVar6 = *(uint *)(param_1 + 0x338);
        piVar5 = (int *)fn_82CE5410();
        uStack_48 = uVar6 | 0x80000000;
        iStack_50 = *piVar5;
        *piVar5 = (uVar6 * 8 + 0x7f & 0xffffff80) + iStack_50;
        iStack_44 = iStack_50;
        (**(code **)(**(int **)(param_1 + 0x58) + 0x20))
                  (*(int **)(param_1 + 0x58),&iStack_60,&iStack_50);
        iVar4 = KeTlsGetValue(lbl_8323B4A0);
        puVar1 = *(undefined4 **)(iVar4 + 4);
        if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
          *puVar1 = "StDelAgents";
          uVar2 = TBLr;
          puVar1[1] = (int)uVar2;
          *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
        }
        fn_830885D0(*(undefined4 *)(param_1 + 100),iStack_50,uStack_4c);
        iVar4 = iStack_44;
        uStack_4c = -(uint)(iStack_50 != iStack_44) & uStack_4c;
        piVar5 = (int *)fn_82CE5410();
        *piVar5 = iVar4;
        iVar4 = fn_82CE5410();
        uStack_4c = 0;
        if ((uStack_48 & 0x80000000) == 0) {
          (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
                    (*(int **)(iVar4 + 0x10),iStack_50,uStack_48 & 0x3fffffff,8);
        }
        iStack_50 = 0;
        uStack_48 = 0x80000000;
      }
      iVar4 = iStack_54;
      uStack_5c = -(uint)(iStack_60 != iStack_54) & uStack_5c;
      piVar5 = (int *)fn_82CE5410();
      *piVar5 = iVar4;
      iVar4 = fn_82CE5410();
      uStack_5c = 0;
      if ((uStack_58 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar4 + 0x10) + 0x10))
                  (*(int **)(iVar4 + 0x10),iStack_60,uStack_58 & 0x3fffffff,4);
      }
      iStack_60 = 0;
      uStack_58 = 0x80000000;
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(undefined4 **)(iVar4 + 4);
      if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
        *puVar1 = "StRemoveCb";
        uVar2 = TBLr;
        puVar1[1] = (int)uVar2;
        *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
      }
      for (; param_2 != piVar8; param_2 = param_2 + 1) {
        fn_82DAD8A8(param_1,*param_2);
        fn_82DACAE8(*param_2);
        fn_82D8F620(param_1,*param_2);
        if (*(int *)(*param_2 + 0x54) != 0) {
          fn_82D40590(*param_2 + 0x30);
        }
        if (*(short *)((int *)*param_2 + 1) == 0) {
          (**(code **)(*(int *)*param_2 + 0x14))();
        }
        fn_82CE4118(*param_2);
      }
      iVar4 = KeTlsGetValue(lbl_8323B4A0);
      puVar1 = *(undefined4 **)(iVar4 + 4);
      if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
        *puVar1 = &lbl_8202CF7C;
        uVar2 = TBLr;
        puVar1[1] = (int)uVar2;
        *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
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
    }
    else {
      uStack_68 = (undefined2)param_3;
      auStack_70[0] = 7;
      piStack_6c = param_2;
      fn_82DA6530(*(undefined4 *)(param_1 + 0x88),auStack_70);
    }
  }
  return;
}

