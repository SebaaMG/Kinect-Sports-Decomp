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
extern unsigned int *auStack_180;
extern unsigned int *auStack_190;
extern int fn_829D76B8();
extern int fn_829DFC60();
extern int fn_829DFFC0();
extern int fn_829E0040();
extern int fn_829E0140();
extern int fn_82A1F2F8();
extern int fn_82A2B180();
extern unsigned int lbl_8200133C;
extern unsigned int *lbl_832179FC;
extern unsigned int *lbl_83217A00;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_829D8780(undefined4 *param_1)

{
  int iVar3;
  longlong lVar1;
  longlong lVar2;
  char cVar4;
  int *piVar5;
  float *pfVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  float *pfVar10;
  int *piVar11;
  bool bVar12;
  bool bVar13;
  double dVar14;
  uint auStack_190 [2];
  char acStack_188 [8];
  undefined1 auStack_180 [128];
  float afStack_100 [32];
  undefined4 uStack_80;
  uint uStack_7c;
  
  piVar7 = lbl_832179FC + 0x9260;
  RtlEnterCriticalSection(piVar7);
  piVar11 = lbl_832179FC;
  piVar5 = lbl_832179FC + 0x25b;
  uVar9 = 0;
  do {
    if (*piVar5 == param_1[7]) {
      bVar12 = true;
      goto LAB_829d87e0;
    }
    uVar9 = uVar9 + 1;
    piVar5 = piVar5 + 0x18;
  } while (uVar9 < 2);
  bVar12 = false;
LAB_829d87e0:
  if (!bVar12) {
    piVar5 = lbl_832179FC + param_1[4] * 0x47ec + 0x284;
    piVar8 = lbl_832179FC + 0x926c;
    if ((lbl_832179FC[param_1[3] * 0x54 + 0x82] != 2) ||
       (bVar12 = true, param_1[7] != lbl_832179FC[param_1[3] * 0x54 + 0x81])) {
      bVar12 = false;
    }
    if (bVar12) {
      iVar3 = fn_829E0040(piVar5);
      if (iVar3 != 0) {
        uVar9 = 0;
        pfVar10 = afStack_100;
        dVar14 = (double)lbl_8200133C;
        do {
          if ((*piVar11 == 1) && (piVar11[2] != 0)) {
            if (lbl_83217A00 != (int *)0x0) {
              (**(code **)(*lbl_83217A00 + 4))(lbl_83217A00,uVar9,param_1[3]);
            }
            fn_829DFC60(piVar8,piVar5,pfVar10 + -0x20,pfVar10,acStack_188 + uVar9);
          }
          else {
            lVar1 = 4;
            pfVar6 = pfVar10;
            do {
              pfVar6[-0x20] = 5.60519e-45;
              *pfVar6 = (float)dVar14;
              pfVar6 = pfVar6 + 1;
              lVar1 = lVar1 + -1;
            } while (lVar1 != 0);
          }
          uVar9 = uVar9 + 1;
          pfVar10 = pfVar10 + 4;
          piVar11 = piVar11 + 6;
          piVar8 = piVar8 + 0x3534;
        } while (uVar9 < 8);
        auStack_190[0] = 0x80000000;
        if ((int)param_1[2] < 0) {
          piVar11 = lbl_832179FC + 0x23c42;
        }
        else {
          piVar11 = lbl_832179FC + 0x23c9d;
        }
        uStack_80 = param_1[7];
        uStack_7c = 0;
        lVar1 = fn_829DFFC0(piVar5);
        lVar2 = fn_82A1F2F8();
        bVar12 = (ulonglong)(uint)piVar11[2] < lVar2 - (ulonglong)(uint)param_1[8];
        bVar13 = (ulonglong)(uint)param_1[0x17] <
                 (ulonglong)((longlong)piVar11[0x1b] * (longlong)piVar11[3]);
        uStack_7c = (uint)(lVar1 != 0) | -(uint)bVar12 & 4 | -(uint)!bVar13 & 2 | uStack_7c;
        iVar3 = fn_82A2B180(auStack_180,0x108,0x111148,auStack_190);
        if (-1 < iVar3) {
          piVar11 = param_1 + 6;
          param_1[6] = auStack_190[0];
          if ((auStack_190[0] == 0xfffffffe) || (auStack_190[0] == 0xfffffffd)) {
            if ((!bVar12) || ((lVar1 == 0 || (bVar13)))) goto LAB_829d8af8;
            if (lbl_83217A00 == (int *)0x0) {
              cVar4 = '\0';
            }
            else {
              cVar4 = (**(code **)(*lbl_83217A00 + 0x20))(lbl_83217A00,*param_1,param_1[7],piVar11);
            }
            if (cVar4 != '\0') goto LAB_829d8af8;
          }
          else {
            if (7 < auStack_190[0]) goto LAB_829d8af8;
            if (lbl_83217A00 == (int *)0x0) {
              cVar4 = '\0';
            }
            else {
              cVar4 = (**(code **)(*lbl_83217A00 + 0x20))(lbl_83217A00,*param_1,param_1[7],piVar11);
            }
            if (cVar4 != '\0') goto LAB_829d8af8;
            if (acStack_188[*piVar11] != '\0') {
              fn_829E0140(lbl_832179FC + *piVar11 * 0x3534 + 0x926c,piVar5);
            }
          }
          param_1[1] = param_1[1] & 0xfffffffe;
        }
      }
    }
    else {
      fn_829D76B8(0,param_1,0xffffffff83010008);
    }
  }
LAB_829d8af8:
  RtlLeaveCriticalSection(piVar7);
  return;
}

