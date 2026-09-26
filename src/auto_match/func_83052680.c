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
extern int fn_82A1E968();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_82FA5190();
extern int fn_83051F88();
extern int fn_83055EC8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC978;
extern unsigned int lbl_8326459C;


void fn_83052680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar4;
  undefined8 uVar3;
  char cVar6;
  int iVar5;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  iVar4 = fn_82F6A548();
  iVar9 = iVar4 + 0x5c;
  RtlEnterCriticalSection(iVar9);
  fn_82A1E968((longlong *)(iVar4 + 0x50));
  if (*(char *)(iVar4 + 0x44) != '\0') {
    uVar3 = fn_83051F88(iVar4,param_2,param_3);
    RtlLeaveCriticalSection(iVar9);
    fn_82F6A594(uVar3);
    return;
  }
  piVar12 = *(int **)(iVar4 + 0x58);
  piVar10 = (int *)0x0;
  dVar18 = (double)lbl_821AAD20;
  dVar19 = dVar18;
  if (piVar12 != (int *)0x0) {
    do {
      if (((uint)piVar12[0x1d] >> 0x1b & 1) == 0) {
        if (((uint)piVar12[0x1d] >> 0x18 & 1) != 0) {
          dVar15 = (double)(**(code **)(*piVar12 + 0x28))(piVar12);
          uVar11 = (uint)piVar12[0x1d] >> 0x19 & 1;
          piVar10 = (int *)0x0;
          if ((piVar12[0x1d] & 0xc0000000U) == 0x40000000) {
            dVar19 = dVar15;
            piVar10 = piVar12;
          }
          if ((int *)piVar12[3] == (int *)0x0) goto LAB_830528dc;
          dVar17 = (double)lbl_82002AE0;
          piVar13 = piVar12;
          piVar7 = (int *)piVar12[3];
          goto LAB_83052840;
        }
LAB_830527dc:
        piVar7 = (int *)piVar12[3];
        piVar10 = piVar12;
      }
      else {
        cVar6 = (**(code **)(*piVar12 + 4))(piVar12);
        if (cVar6 == '\0') goto LAB_830527dc;
        piVar7 = (int *)piVar12[3];
        if (piVar12 == *(int **)(iVar4 + 0x58)) {
          *(int **)(iVar4 + 0x58) = piVar7;
        }
        else {
          piVar10[3] = (int)piVar7;
        }
        uVar2 = lbl_831BC978;
        if (piVar12 != (int *)0x0) {
          (**(code **)*piVar12)(piVar12,0);
          fn_82FA5190(uVar2,piVar12);
        }
      }
      piVar12 = piVar7;
      if (piVar7 == (int *)0x0) {
        RtlLeaveCriticalSection(iVar9);
        fn_82F6A594(0);
        return;
      }
    } while( true );
  }
  goto LAB_83052ae0;
LAB_83052840:
  do {
    if (((uint)piVar7[0x1d] >> 0x1b & 1) == 0) {
      if (((uint)piVar7[0x1d] >> 0x18 & 1) != 0) {
        dVar16 = (double)(**(code **)(*piVar7 + 0x28))(piVar7);
        if (uVar11 == 0) {
          if (((uint)piVar7[0x1d] >> 0x19 & 1) == 0) {
LAB_830529a0:
            if (dVar16 == dVar18) {
              if (((*(char *)(piVar12 + 0x1c) < *(char *)(piVar7 + 0x1c)) || (dVar18 < dVar15)) ||
                 ((*(char *)(piVar7 + 0x1c) == *(char *)(piVar12 + 0x1c) &&
                  (lVar8 = *(longlong *)(iVar4 + 0x50),
                  (float)(lVar8 - *(longlong *)(piVar12 + 0x16)) *
                  (float)(dVar17 / (double)lbl_8326459C) <
                  (float)(lVar8 - *(longlong *)(piVar7 + 0x16)) *
                  (float)(dVar17 / (double)lbl_8326459C))))) {
LAB_83052a28:
                uVar11 = (uint)piVar7[0x1d] >> 0x19 & 1;
                dVar15 = dVar16;
                piVar12 = piVar7;
              }
            }
            else if (dVar16 < dVar15) goto LAB_83052a28;
          }
          else {
            uVar11 = 1;
            dVar15 = dVar16;
            piVar12 = piVar7;
          }
        }
        else if (((uint)piVar7[0x1d] >> 0x19 & 1) != 0) goto LAB_830529a0;
        if (((piVar7[0x1d] & 0xc0000000U) == 0x40000000) && (dVar19 < dVar16)) {
          dVar19 = dVar16;
          piVar10 = piVar7;
        }
      }
LAB_83052a58:
      piVar1 = (int *)piVar7[3];
      piVar13 = piVar7;
    }
    else {
      cVar6 = (**(code **)(*piVar7 + 4))(piVar7);
      if (cVar6 == '\0') goto LAB_83052a58;
      piVar1 = (int *)piVar7[3];
      if (piVar7 == *(int **)(iVar4 + 0x58)) {
        *(int **)(iVar4 + 0x58) = piVar1;
      }
      else {
        piVar13[3] = (int)piVar1;
      }
      uVar2 = lbl_831BC978;
      if (piVar7 != (int *)0x0) {
        (**(code **)*piVar7)(piVar7,0);
        fn_82FA5190(uVar2,piVar7);
      }
    }
    piVar7 = piVar1;
  } while (piVar1 != (int *)0x0);
LAB_830528dc:
  *(float *)param_3 = (float)dVar15;
  if ((uVar11 != 0) || (*(int *)(iVar4 + 4) != -1)) {
    piVar7 = (int *)param_2;
    if ((piVar12[0x1d] & 0xc0000000U) == 0) {
      iVar4 = (**(code **)(*piVar12 + 0x20))(piVar12);
      *piVar7 = iVar4;
      if (iVar4 == 0) {
        RtlLeaveCriticalSection(iVar9);
        fn_82F6A594(0);
        return;
      }
    }
    else {
      iVar14 = iVar4 + 0x10;
      RtlEnterCriticalSection(iVar14);
      iVar5 = (**(code **)(*piVar12 + 0x20))(piVar12);
      *piVar7 = iVar5;
      RtlLeaveCriticalSection(iVar14);
      if (*piVar7 == 0) {
        if ((((uVar11 == 0) || (piVar10 == (int *)0x0)) || (piVar12 == piVar10)) ||
           (dVar19 <= (double)*(float *)(iVar4 + 0x88))) {
          RtlEnterCriticalSection(iVar14);
          iVar5 = (**(code **)(*piVar12 + 0x20))(piVar12);
          *piVar7 = iVar5;
          if (iVar5 == 0) {
            fn_83055EC8(iVar4);
            RtlLeaveCriticalSection(iVar14);
            RtlLeaveCriticalSection(iVar9);
            fn_82F6A594(0);
            return;
          }
          RtlLeaveCriticalSection(iVar14);
        }
        else {
          iVar4 = (**(code **)(*piVar10 + 0x24))(piVar10);
          *piVar7 = iVar4;
          if (iVar4 == 0) goto LAB_83052ae0;
        }
      }
    }
    RtlLeaveCriticalSection(iVar9);
    fn_82F6A594(piVar12);
    return;
  }
LAB_83052ae0:
  RtlLeaveCriticalSection(iVar9);
  fn_82F6A594(0);
  return;
}

