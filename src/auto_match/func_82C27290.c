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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82C1E938();
extern int fn_82C1EAB8();
extern int fn_82C1EE20();
extern int fn_82C221D8();
extern int fn_82C23C10();
extern int fn_82C24020();
extern int fn_82C24BE8();
extern int fn_82C25288();
extern unsigned int lbl_820ED0B8;
extern unsigned int lbl_820ED0C8;
extern unsigned int lbl_820F8F08;
extern unsigned int lbl_820F8F18;
extern unsigned int lbl_820F8F28;
extern unsigned int lbl_820F8F38;
extern unsigned int lbl_820F8F48;
extern unsigned int lbl_82154BA8;
extern unsigned int lbl_82154BB8;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;


undefined8 fn_82C27290(int param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  short asStack_80 [2];
  uint uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  uint uStack_6c;
  byte abStack_60 [96];
  
  piVar3 = *(int **)(param_1 + 0x1c);
  uVar9 = param_2 - 0x18;
  uStack_74 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uVar5 = (**(code **)(*piVar3 + 0xc))(*piVar3,uVar9);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  if ((*(short *)(piVar3[1] + 0x42) < 1) && (uStack_7c = 0x12, 0x11 < (uVar9 & 0xffffffff))) {
    uVar5 = fn_82C1EE20(param_1,abStack_60,&uStack_74,&uStack_78,&uStack_7c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = fn_82C1E938(param_1,asStack_80,&uStack_74,&uStack_78,&uStack_7c);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    pbVar8 = abStack_60;
    pbVar7 = (byte *)&lbl_82154BA8;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar8;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar8 = pbVar8 + 1;
    } while (pbVar7 != (byte *)&lbl_82154BB8);
    if ((((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) && (asStack_80[0] == 6)) &&
       (uStack_7c = 4, 0x15 < (uVar9 & 0xffffffff))) {
      uVar10 = 0x16;
      uVar5 = fn_82C1EAB8(param_1,&uStack_70,&uStack_74,&uStack_78,&uStack_7c);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      if ((0x17 < uStack_70) && (0x16 < (uVar9 & 0xffffffff))) {
        do {
          uVar5 = fn_82C24BE8(param_1,abStack_60,&uStack_70);
          if ((int)uVar5 < 0) {
            return uVar5;
          }
          pbVar7 = abStack_60;
          pbVar8 = &lbl_820ED0B8;
          do {
            bVar1 = *pbVar8;
            bVar2 = *pbVar7;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar8 = pbVar8 + 1;
            pbVar7 = pbVar7 + 1;
          } while (pbVar8 != &lbl_820ED0C8);
          if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
            uVar10 = uStack_6c + uVar10;
            if ((uVar9 & 0xffffffff) < (uVar10 & 0xffffffff)) {
              return 0xffffffff8050000c;
            }
            uVar5 = fn_82C221D8(param_1);
            iVar6 = (int)uVar5;
joined_r0x82c27584:
            if (iVar6 < 0) {
              return uVar5;
            }
          }
          else {
            pbVar7 = abStack_60;
            pbVar8 = &lbl_820F8F08;
            do {
              bVar1 = *pbVar8;
              bVar2 = *pbVar7;
              if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
              pbVar8 = pbVar8 + 1;
              pbVar7 = pbVar7 + 1;
            } while (pbVar8 != &lbl_820F8F18);
            if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
              uVar10 = uStack_6c + uVar10;
              if ((uVar9 & 0xffffffff) < (uVar10 & 0xffffffff)) {
                return 0xffffffff8050000c;
              }
              uVar5 = fn_82C25288(param_1);
              iVar6 = (int)uVar5;
              goto joined_r0x82c27584;
            }
            pbVar7 = abStack_60;
            pbVar8 = &lbl_820F8F28;
            do {
              bVar1 = *pbVar8;
              bVar2 = *pbVar7;
              if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
              pbVar8 = pbVar8 + 1;
              pbVar7 = pbVar7 + 1;
            } while (pbVar8 != &lbl_820F8F38);
            if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
              uVar10 = uStack_6c + uVar10;
              if ((uVar9 & 0xffffffff) < (uVar10 & 0xffffffff)) {
                return 0xffffffff8050000c;
              }
              uVar5 = fn_82C23C10(param_1);
              iVar6 = (int)uVar5;
              goto joined_r0x82c27584;
            }
            pbVar7 = abStack_60;
            pbVar8 = &lbl_820F8F38;
            do {
              bVar1 = *pbVar8;
              bVar2 = *pbVar7;
              if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
              pbVar8 = pbVar8 + 1;
              pbVar7 = pbVar7 + 1;
            } while (pbVar8 != &lbl_820F8F48);
            if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
              uVar10 = uStack_6c + uVar10;
              if ((uVar9 & 0xffffffff) < (uVar10 & 0xffffffff)) {
                return 0xffffffff8050000c;
              }
              uVar5 = fn_82C24020(param_1);
              iVar6 = (int)uVar5;
              goto joined_r0x82c27584;
            }
            lVar4 = CONCAT44(uStack_70,uStack_6c);
            uStack_7c = uStack_6c;
            uVar10 = uStack_6c + uVar10;
            uVar5 = (**(code **)(*piVar3 + 0x14))(*piVar3,(ulonglong)uStack_6c - 0x18);
            if ((int)uVar5 < 0) {
              return uVar5;
            }
            *(longlong *)(piVar3 + 2) = *(longlong *)(piVar3 + 2) + lVar4 + -0x18;
          }
        } while ((uVar10 & 0xffffffff) < (uVar9 & 0xffffffff));
      }
      *(short *)(piVar3[1] + 0x42) = *(short *)(piVar3[1] + 0x42) + 1;
      uVar10 = (uVar9 - uStack_78) - uVar10;
      if (uVar10 == 0) {
        return uVar5;
      }
      uVar5 = (**(code **)(*piVar3 + 0x14))(*piVar3,uVar10);
      if (-1 < (int)uVar5) {
        *(ulonglong *)(piVar3 + 2) = (uVar10 & 0xffffffff) + *(longlong *)(piVar3 + 2);
        return uVar5;
      }
      return uVar5;
    }
  }
  return 0xffffffff8050000c;
}

