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
extern int fn_82FA5190();
extern int fn_82FEF5A0();
extern int fn_83015B10();
extern int fn_83016E90();
extern int fn_830174A0();
extern int fn_830193C8();
extern int fn_830350E0();
extern int fn_83035568();
extern int fn_83035750();
extern unsigned int iStack_84;
extern unsigned int iStack_88;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC768;
extern unsigned int uStack_80;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;


void fn_83017DA0(undefined8 param_1,int param_2,ulonglong param_3,float *param_4,
                  undefined8 param_5,ulonglong param_6)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  bool bVar6;
  int iVar8;
  int iVar9;
  char cVar10;
  ulonglong uVar7;
  ulonglong uVar11;
  int *piVar12;
  undefined4 uVar13;
  int *piVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  float afStack_a0 [2];
  undefined4 uStack_98;
  uint uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  
  piVar12 = *(int **)(param_2 + 0x6a0);
  iStack_88 = 0;
  iStack_84 = 0;
  uStack_80 = 0;
  bVar6 = false;
  uVar13 = (undefined4)param_3;
  if (piVar12 != (int *)0x0) {
    dVar17 = (double)lbl_821AAD20;
    do {
      piVar14 = piVar12 + 1;
      iVar8 = piVar12[6];
      bVar5 = false;
      iVar15 = piVar12[5];
      for (iVar9 = iVar15; iVar9 != iVar8; iVar9 = iVar9 + 0x14) {
        if ((ulonglong)*(uint *)(iVar9 + 4) == (param_3 & 0xffffffff)) {
          bVar5 = true;
          break;
        }
      }
      if (bVar5) {
        uVar1 = piVar12[3];
        uVar11 = (ulonglong)uVar1;
        if ((((param_6 & 0xffffffff) == uVar11) || ((param_6 & 0xffffffff) == 0)) || (uVar11 == 0))
        {
          iVar9 = piVar12[4];
          afStack_a0[0] = (float)dVar17;
          if ((iVar9 == 2) || (iVar9 == 1)) {
            if ((((param_6 & 0xffffffff) == 0) || (iVar9 != 1)) &&
               ((piVar2 = (int *)*piVar14, *(short *)(piVar2 + 6) != 0 ||
                (((0x17 < piVar12[2] && (piVar12[2] < 0x1d)) && (iVar9 == 1)))))) {
              if (iVar15 != iVar8) {
                do {
                  if ((ulonglong)*(uint *)(iVar15 + 4) == (param_3 & 0xffffffff)) {
                    dVar16 = (double)fn_83015B10(param_1,iVar15 + 8);
                    afStack_a0[0] = (float)(dVar16 + (double)afStack_a0[0]);
                  }
                  iVar15 = iVar15 + 0x14;
                } while (iVar15 != piVar12[6]);
              }
              if ((((param_6 & 0xffffffff) == 0) && (piVar12[4] != 1)) && (!bVar6)) {
                fn_830174A0(param_2,param_3,&iStack_88);
                bVar6 = true;
              }
              (**(code **)(*piVar2 + 0xf0))((double)afStack_a0[0],piVar2,piVar14,piVar12[2],param_3)
              ;
            }
          }
          else if (iVar9 == 0) {
            uStack_98 = uVar13;
            uStack_94 = uVar1;
            if (((param_6 & 0xffffffff) == uVar11) ||
               (((param_6 & 0xffffffff) == 0 &&
                (iVar8 = fn_83016E90(param_2 + 4,CONCAT44(uVar13,uVar1),
                                      uVar11 + param_3 +
                                      ((uVar11 + param_3 & 0xffffffff) / 0xc1) * -0xc1), iVar8 == 0)
                ))) {
              dVar16 = (double)fn_83015B10(param_1,iVar15 + 8);
              afStack_a0[0] = (float)dVar16;
              (**(code **)(*(int *)*piVar14 + 4))((int *)*piVar14,(short)piVar12[2],afStack_a0,4);
            }
          }
          else if (iVar9 == 4) {
            uStack_90 = uVar13;
            uStack_8c = uVar1;
            if (((param_6 & 0xffffffff) == uVar11) ||
               (((param_6 & 0xffffffff) == 0 &&
                (iVar9 = fn_83016E90(param_2 + 4,CONCAT44(uVar13,uVar1),
                                      uVar11 + param_3 +
                                      ((uVar11 + param_3 & 0xffffffff) / 0xc1) * -0xc1), iVar9 == 0)
                ))) {
              if (iVar15 != iVar8) {
                do {
                  if ((ulonglong)*(uint *)(iVar15 + 4) == (param_3 & 0xffffffff)) {
                    dVar16 = (double)fn_83015B10(param_1,iVar15 + 8);
                    afStack_a0[0] = (float)(dVar16 + (double)afStack_a0[0]);
                  }
                  iVar15 = iVar15 + 0x14;
                } while (iVar15 != piVar12[6]);
              }
              fn_82FEF5A0(*piVar14,(short)piVar12[2],afStack_a0,4);
            }
          }
          else {
            iVar15 = *piVar14;
            cVar10 = fn_830350E0(iVar15);
            if (cVar10 != '\0') {
              iVar8 = piVar12[5];
              if (iVar8 != piVar12[6]) {
                do {
                  if ((ulonglong)*(uint *)(iVar8 + 4) == (param_3 & 0xffffffff)) {
                    dVar16 = (double)fn_83015B10(param_1,iVar8 + 8);
                    afStack_a0[0] = (float)(dVar16 + (double)afStack_a0[0]);
                  }
                  iVar8 = iVar8 + 0x14;
                } while (iVar8 != piVar12[6]);
              }
              if (((param_6 & 0xffffffff) == 0) && (!bVar6)) {
                fn_830174A0(param_2,param_3,&iStack_88);
                bVar6 = true;
              }
              fn_83035750((double)afStack_a0[0],iVar15,piVar14,piVar12[2],param_3);
            }
          }
        }
      }
      piVar12 = (int *)*piVar12;
    } while (piVar12 != (int *)0x0);
  }
  if ((param_6 & 0xffffffff) != 0) {
    for (puVar3 = *(undefined4 **)(param_2 + 0x6e0); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)*puVar3) {
      if ((ulonglong)(uint)puVar3[2] == (param_3 & 0xffffffff)) {
        uVar11 = fn_830193C8(param_1,puVar3 + 3);
        if ((param_4 == (float *)0x0) ||
           (uVar7 = fn_830193C8((double)*param_4,puVar3 + 3),
           (uVar7 & 0xffffffff) != (uVar11 & 0xffffffff))) {
          for (puVar4 = (undefined4 *)puVar3[6]; puVar4 != (undefined4 *)0x0;
              puVar4 = (undefined4 *)*puVar4) {
            (**(code **)(*(int *)puVar4[1] + 4))((int *)puVar4[1],uVar11,param_6);
          }
        }
      }
    }
  }
  for (puVar3 = *(undefined4 **)(param_2 + 0x700);
      (puVar3 != (undefined4 *)0x0 && ((ulonglong)(uint)puVar3[1] <= (param_3 & 0xffffffff)));
      puVar3 = (undefined4 *)*puVar3) {
    if ((ulonglong)(uint)puVar3[1] == (param_3 & 0xffffffff)) {
      fn_83035568(param_1,puVar3[2],param_6);
    }
  }
  if (iStack_88 != 0) {
    iStack_84 = iStack_88;
    fn_82FA5190(lbl_831BC768);
  }
  return;
}

