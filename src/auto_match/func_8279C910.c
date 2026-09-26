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
extern int fn_8267C488();
extern int fn_8278B290();
extern int fn_8278BFA8();
extern int fn_82790FA0();
extern int fn_82791070();
extern int fn_827912D8();
extern int fn_82794B88();
extern int fn_82797348();
extern int fn_82797C78();
extern int fn_82797D20();
extern unsigned int iStack_84;
extern unsigned int lbl_82010C6C;
extern unsigned int uStack_4a;
extern unsigned int uStack_6a;
extern unsigned int uStack_72;
extern unsigned int uStack_74;


ulonglong fn_8279C910(int *param_1,ulonglong param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar6;
  longlong lVar4;
  longlong lVar5;
  undefined ***pppuVar7;
  uint *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int aiStack_90 [2];
  int *piStack_88;
  int iStack_84;
  undefined **appuStack_80 [3];
  undefined2 uStack_74;
  undefined2 uStack_72;
  ushort uStack_6a;
  undefined **appuStack_60 [5];
  ushort uStack_4a;
  
  if (8 < (param_2 & 0xffffffff)) {
    return 0;
  }
  bVar1 = (int)param_2 != 0;
  if (param_2 == 1 && bVar1) {
    uVar9 = (ulonglong)param_3[2];
    lVar12 = fn_827912D8(param_1[2]);
    uVar11 = (ulonglong)(uint)param_1[0x42];
    if ((uVar11 != 0) && (uVar11 < (lVar12 + uVar9 & 0xffffffff))) {
      uVar9 = uVar11 - lVar12;
    }
    puVar8 = (uint *)param_3[1];
    uVar10 = 0;
LAB_8279c98c:
    uVar9 = fn_82797C78(param_1[2],puVar8,*param_3,uVar9,uVar10);
    return uVar9;
  }
  if (param_2 == 2 && bVar1) {
    lVar12 = -1;
    if (param_1[0x42] != 0) {
      lVar4 = fn_827912D8(param_1[2]);
      lVar5 = fn_827912D8(param_3[1]);
      if ((ulonglong)(uint)param_1[0x42] < (lVar5 + lVar4 & 0xffffffffU)) {
        lVar12 = (ulonglong)(uint)param_1[0x42] - lVar4;
      }
    }
    uVar9 = fn_82797348(param_1[2],param_3[1],*param_3,lVar12);
    return uVar9;
  }
  if (param_2 == 3 && bVar1) {
    uVar9 = (ulonglong)*param_3;
    fn_82797D20(param_1[2],uVar9,-(ulonglong)(uVar9 <= uVar9 + 1) & (uVar9 + 1) - uVar9);
    return 1;
  }
  if (param_2 == 4 && bVar1) {
    uVar13 = (ulonglong)*param_3;
    uVar11 = (ulonglong)param_3[1];
    uVar9 = uVar13;
    if (uVar11 < uVar13) {
      uVar9 = uVar11;
      uVar11 = uVar13;
    }
    uVar13 = uVar11 - uVar9;
    uVar11 = -(ulonglong)(uVar9 <= uVar11) & uVar13;
    goto LAB_8279cda8;
  }
  if (param_2 == 5 && bVar1) {
    uVar9 = (ulonglong)*param_3;
    uVar13 = (ulonglong)param_3[1];
    uVar11 = uVar13;
    if (uVar13 < uVar9) {
      uVar11 = uVar9;
      uVar9 = uVar13;
    }
    if ((param_1[0x42] != 0) &&
       (lVar12 = fn_827912D8(param_1[2]),
       (ulonglong)(uint)param_1[0x42] < (lVar12 + (uVar9 - uVar11) + 1 & 0xffffffff))) {
      return 0;
    }
    uVar13 = fn_82797C78(param_1[2],param_3 + 2,uVar9,1,0);
    uVar9 = uVar9 + 1;
    uVar11 = uVar11 + 1;
  }
  else {
    if (param_2 == 6 && bVar1) {
      uVar9 = (ulonglong)*param_3;
      uVar13 = (ulonglong)param_3[1];
      uVar11 = uVar13;
      if (uVar13 < uVar9) {
        uVar11 = uVar9;
        uVar9 = uVar13;
      }
      uVar13 = (ulonglong)param_3[3];
      if (param_1[0x42] != 0) {
        lVar12 = fn_827912D8(param_1[2]);
        lVar12 = lVar12 + (uVar9 - uVar11);
        if ((ulonglong)(uint)param_1[0x42] < ((ulonglong)param_3[3] + lVar12 & 0xffffffff)) {
          uVar13 = (ulonglong)(uint)param_1[0x42] - lVar12;
        }
      }
      uVar13 = fn_82797C78(param_1[2],param_3[2],uVar9,uVar13,0);
    }
    else {
      if (param_2 != 7 || !bVar1) {
        if (!bVar1) {
          if ((param_1[0x42] != 0) &&
             (iVar6 = fn_827912D8(param_1[2]), (uint)param_1[0x42] < iVar6 + 1U)) {
            return 0;
          }
          uVar10 = 1;
          uVar9 = 1;
          puVar8 = param_3 + 1;
          goto LAB_8279c98c;
        }
        aiStack_90[0] = 0;
        uVar13 = 1;
        fn_82791070(&piStack_88,param_1[2],*param_3,aiStack_90);
        if (((piStack_88 == (int *)0x0) || (iStack_84 < 0)) ||
           (bVar1 = false, piStack_88[1] <= iStack_84)) {
          bVar1 = true;
        }
        if ((!bVar1) && (aiStack_90[0] == 0)) {
          iVar3 = *(int *)(iStack_84 * 4 + *piStack_88);
          iVar6 = *(int *)(iVar3 + 0xc);
          if (iVar6 != 0) {
            if (((*(ushort *)(iVar6 + 0x16) >> 7 & 1) == 0) ||
               (bVar1 = true, (*(ushort *)(iVar6 + 0x16) & 0x8000) == 0)) {
              bVar1 = false;
            }
            if (bVar1) {
              fn_8278BFA8(appuStack_60);
              uStack_4a = uStack_4a & 0x7f7f | 0x80;
              uVar10 = fn_82794B88(param_1[2]);
              fn_82790FA0(iVar3,uVar10,appuStack_60);
              (**(code **)(*param_1 + 4))(param_1,2);
              appuStack_60[0] = &lbl_82010C6C;
              fn_8278B290(appuStack_60);
              pppuVar7 = appuStack_60;
LAB_8279cd28:
              fn_8267C488(pppuVar7);
              return 0;
            }
            if ((*(short *)(iVar6 + 0xe) != 0) || (*(short *)(iVar6 + 0xc) != 0)) {
              fn_8278BFA8(appuStack_80);
              uStack_72 = 0;
              uStack_74 = 0;
              uStack_6a = uStack_6a | 6;
              uVar10 = fn_82794B88(param_1[2]);
              fn_82790FA0(iVar3,uVar10,appuStack_80);
              (**(code **)(*param_1 + 4))(param_1,2);
              appuStack_80[0] = &lbl_82010C6C;
              fn_8278B290(appuStack_80);
              pppuVar7 = appuStack_80;
              goto LAB_8279cd28;
            }
          }
        }
        uVar11 = (ulonglong)*param_3;
        if (uVar11 == 0) {
          return 0;
        }
        uVar9 = uVar11 - 1;
        goto LAB_8279ca98;
      }
      uVar9 = (ulonglong)*param_3;
      uVar13 = (ulonglong)param_3[1];
      uVar11 = uVar13;
      if (uVar13 < uVar9) {
        uVar11 = uVar9;
        uVar9 = uVar13;
      }
      lVar12 = -1;
      if (param_1[0x42] != 0) {
        lVar4 = fn_827912D8(param_1[2]);
        uVar2 = param_1[0x42];
        lVar4 = lVar4 + (uVar9 - uVar11);
        lVar5 = fn_827912D8(param_3[2]);
        if ((ulonglong)uVar2 < (lVar5 + lVar4 & 0xffffffffU)) {
          lVar12 = (ulonglong)(uint)param_1[0x42] - lVar4;
        }
      }
      uVar13 = fn_82797348(param_1[2],param_3[2],uVar9,lVar12);
    }
    uVar9 = uVar9 + uVar13;
    uVar11 = uVar11 + uVar13;
  }
LAB_8279ca98:
  uVar11 = -(ulonglong)(uVar9 <= uVar11) & uVar11 - uVar9;
LAB_8279cda8:
  fn_82797D20(param_1[2],uVar9,uVar11);
  return uVar13;
}

