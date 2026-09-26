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
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern int fn_82E3E1D0();
extern unsigned int iStack_9c;
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_82154AC8;
extern unsigned int lbl_82154AD8;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_90;


longlong fn_82E3E808(int param_1,int *param_2,ulonglong param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar8;
  ulonglong uVar7;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int *piStack_a0;
  int iStack_9c;
  int *piStack_98;
  int *piStack_94;
  uint uStack_90;
  int *piStack_8c;
  undefined4 auStack_88 [2];
  ulonglong auStack_80 [2];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    lVar4 = -0x3ff2b9ab;
  }
  else if (param_2 == (int *)0x0) {
    lVar4 = -0x7fffbffd;
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2,0);
    iStack_9c = 0;
    piStack_98 = (int *)0x0;
    piStack_94 = (int *)0x0;
    piStack_8c = (int *)0x0;
    piStack_a0 = (int *)0x0;
    uStack_90 = 0;
    lVar4 = (**(code **)(*param_2 + 0x1c))(param_2,&uStack_90);
    if ((((-1 < lVar4) &&
         (lVar4 = (**(code **)(*param_2 + 0xc))(param_2,&iStack_9c,0,0), -1 < lVar4)) &&
        (lVar4 = (**(code **)**(undefined4 **)(param_1 + 0x48))
                           (*(undefined4 **)(param_1 + 0x48),0xffffffff82154c18,&piStack_98),
        -1 < lVar4)) &&
       ((lVar4 = (**(code **)(*piStack_98 + 0x24))(piStack_98,0xffffffff8202e618,&piStack_94),
        -1 < lVar4 && (lVar4 = (**(code **)(*piStack_94 + 0x14))(), -1 < lVar4)))) {
      lVar4 = (**(code **)(*piStack_98 + 0x24))(piStack_98,0xffffffff82154ac8,&piStack_8c);
      if ((-1 < lVar4) && (lVar4 = (**(code **)(*piStack_8c + 0x14))(), -1 < lVar4)) {
        uVar10 = 0;
        uVar11 = 0;
        auStack_88[0] = 0;
        lVar9 = 1;
        if (uStack_90 != 0) {
          do {
            iVar5 = (**(code **)(*piStack_94 + 0xc))(piStack_94,1,&piStack_a0,auStack_88);
            if ((iVar5 != 0) &&
               (lVar9 = (**(code **)(*piStack_8c + 0xc))(piStack_8c,1,&piStack_a0,auStack_88),
               lVar9 != 0)) break;
            uStack_70 = lbl_8202E618;
            uStack_6c = lbl_8202E61C;
            uStack_68 = lbl_8202E620;
            uStack_64 = lbl_8202E624;
            lVar4 = (**(code **)(*piStack_a0 + 0xc))(piStack_a0,&uStack_70);
            if (lVar4 < 0) goto LAB_82e3eb9c;
            if ((int)lVar9 == 1) {
              pbVar6 = (byte *)&uStack_70;
              pbVar8 = (byte *)&lbl_82154AC8;
              do {
                bVar2 = *pbVar8;
                bVar3 = *pbVar6;
                if ((ulonglong)bVar2 - (ulonglong)bVar3 != 0) break;
                pbVar8 = pbVar8 + 1;
                pbVar6 = pbVar6 + 1;
              } while (pbVar8 != &lbl_82154AD8);
              if ((int)((ulonglong)bVar2 - (ulonglong)bVar3) != 0) goto LAB_82e3ea70;
            }
            else {
LAB_82e3ea70:
              auStack_80[0] = 0;
              lVar4 = (**(code **)(*piStack_a0 + 0x14))(piStack_a0,0,auStack_80);
              if (lVar4 < 0) goto LAB_82e3eb9c;
              if (0xffffffff < auStack_80[0]) {
                if (piStack_a0 != (int *)0x0) {
                  (**(code **)(*piStack_a0 + 8))();
                  piStack_a0 = (int *)0x0;
                }
                break;
              }
              if (param_3 < auStack_80[0] + uVar11) {
                uVar12 = auStack_80[0] & 0xffffffff;
                uVar7 = 0;
                if (uVar11 < param_3) {
                  uVar7 = (param_3 & 0xffffffff) - (uVar11 & 0xffffffff);
                  bVar1 = uVar12 <= (uVar7 & 0xffffffff);
                  uVar12 = uVar12 - uVar7;
                  if (bVar1) {
                    uVar12 = 0;
                  }
                }
                if ((uStack_90 - uVar10 & 0xffffffff) < (uVar12 & 0xffffffff)) {
                  uVar12 = uStack_90 - uVar10;
                }
                lVar4 = fn_82E3E1D0(param_1,piStack_a0,iStack_9c,uVar7 & 0xffffffff,uVar12);
                if (lVar4 < 0) goto LAB_82e3eb9c;
                uVar10 = uVar12 + uVar10;
                iStack_9c = (int)uVar12 + iStack_9c;
              }
              uVar11 = auStack_80[0] + uVar11;
            }
            if (piStack_a0 != (int *)0x0) {
              (**(code **)(*piStack_a0 + 8))();
              piStack_a0 = (int *)0x0;
            }
          } while ((uVar10 & 0xffffffff) < (ulonglong)uStack_90);
        }
        lVar4 = (**(code **)(*param_2 + 0x18))(param_2,uVar10);
      }
    }
LAB_82e3eb9c:
    if (iStack_9c != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
    }
    if (piStack_98 != (int *)0x0) {
      (**(code **)(*piStack_98 + 8))();
      piStack_98 = (int *)0x0;
    }
    if (piStack_a0 != (int *)0x0) {
      (**(code **)(*piStack_a0 + 8))();
      piStack_a0 = (int *)0x0;
    }
    if (piStack_94 != (int *)0x0) {
      (**(code **)(*piStack_94 + 8))();
      piStack_94 = (int *)0x0;
    }
    if (piStack_8c != (int *)0x0) {
      (**(code **)(*piStack_8c + 8))();
    }
  }
  return lVar4;
}

