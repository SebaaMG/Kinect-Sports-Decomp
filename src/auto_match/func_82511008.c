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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_825279F8();
extern int fn_8255AA78();
extern int fn_82564458();
extern int fn_82593540();
extern int fn_82809D40();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82195628;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_832978C8;
extern unsigned int lbl_832978D8;
extern unsigned int lbl_832978DC;
extern unsigned int lbl_832978E0;
extern unsigned int lbl_83297A40;


void fn_82511008(undefined8 param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int in_r0;
  int iVar9;
  int iVar10;
  float *pfVar11;
  longlong lVar8;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  iVar9 = fn_82F6A544();
  iVar3 = *param_2;
  uVar12 = 0;
  if (*(int *)(iVar3 + 0x50) != 0) {
    iVar4 = *(int *)(iVar9 + 4);
    iVar10 = fn_825279F8(iVar4);
    if ((iVar10 == 0) || (*(int *)(iVar4 + 0x1b4) != 0)) {
      puVar6 = (undefined4 *)(iVar4 + 0xc0U & 0xfffffff0);
      uVar23 = puVar6[1];
      uVar24 = puVar6[2];
      uVar25 = puVar6[3];
      puVar7 = (undefined4 *)((int)&fStack_60 + in_r0 & 0xfffffff0);
      *puVar7 = *puVar6;
      puVar7[1] = uVar23;
      puVar7[2] = uVar24;
      puVar7[3] = uVar25;
      dVar17 = (double)fStack_5c;
      dVar16 = (double)fStack_54;
      dVar13 = (double)lbl_821916FC;
      dVar18 = (double)fStack_60;
      dVar14 = (double)(float)(dVar17 * dVar13);
      dVar15 = (double)(float)((double)fStack_58 * dVar13);
      fVar1 = (float)(dVar18 * (double)(float)(dVar18 * dVar13));
      dVar13 = (double)(float)(dVar16 * (double)(float)(dVar18 * dVar13));
      dVar19 = (double)(float)(dVar15 * dVar17 - dVar13);
      fVar2 = (float)((double)fStack_58 * dVar15);
      dVar22 = (double)(float)(dVar16 * dVar14 + (double)(float)(dVar15 * dVar18));
      dVar21 = (double)(lbl_821CA460 - ((float)(dVar17 * dVar14) + fVar1));
      dVar20 = (double)SQRT((float)(dVar21 * dVar21 + (double)(float)(dVar22 * dVar22)));
      if (dVar20 <= (double)lbl_82195628) {
        dVar13 = (double)fn_82809D40(-(double)((float)(dVar14 * dVar18) - (float)(dVar16 * dVar15))
                                      ,(double)(lbl_821CA460 - (fVar2 + (float)(dVar17 * dVar14))),
                                      dVar13);
        fStack_68 = (float)dVar13;
        dVar13 = (double)fn_82809D40(-dVar19,dVar20);
        fStack_70 = (float)dVar13;
        fStack_6c = lbl_821CC160;
      }
      else {
        dVar13 = (double)fn_82809D40((double)((float)(dVar14 * dVar18) + (float)(dVar16 * dVar15)),
                                      (double)(lbl_821CA460 - (fVar2 + fVar1)));
        fStack_68 = (float)dVar13;
        dVar13 = (double)fn_82809D40(-dVar19,dVar20);
        fStack_70 = (float)dVar13;
        dVar13 = (double)fn_82809D40(dVar22,dVar21);
        fStack_6c = (float)dVar13;
      }
    }
    else {
      iVar10 = *(int *)(iVar4 + 0x1b8);
      pfVar11 = (float *)fn_8255AA78(&fStack_60,*(undefined8 *)(iVar10 + 0x10),
                                           *(undefined8 *)(iVar10 + 0x18),
                                           *(undefined8 *)(iVar10 + 0x20),
                                           *(undefined8 *)(iVar10 + 0x28),
                                           *(undefined8 *)(iVar10 + 0x30),
                                           *(undefined8 *)(iVar10 + 0x38),
                                           *(undefined8 *)(iVar10 + 0x40));
      fVar5 = pfVar11[1];
      puVar6 = (undefined4 *)(iVar4 + 0xc0U & 0xfffffff0);
      uVar23 = puVar6[1];
      uVar24 = puVar6[2];
      uVar25 = puVar6[3];
      puVar7 = (undefined4 *)((int)&fStack_70 + in_r0 & 0xfffffff0);
      *puVar7 = *puVar6;
      puVar7[1] = uVar23;
      puVar7[2] = uVar24;
      puVar7[3] = uVar25;
      dVar16 = (double)fStack_68;
      dVar17 = (double)fStack_64;
      dVar13 = (double)lbl_821916FC;
      fStack_68 = pfVar11[2];
      dVar19 = (double)fStack_70;
      dVar18 = (double)fStack_6c;
      dVar14 = (double)(float)(dVar18 * dVar13);
      dVar15 = (double)(float)(dVar16 * dVar13);
      fVar1 = (float)(dVar19 * (double)(float)(dVar19 * dVar13));
      dVar13 = (double)(float)(dVar17 * (double)(float)(dVar19 * dVar13));
      dVar20 = (double)(float)(dVar15 * dVar18 - dVar13);
      fVar2 = (float)(dVar16 * dVar15);
      dVar22 = (double)(float)(dVar17 * dVar14 + (double)(float)(dVar15 * dVar19));
      dVar21 = (double)(lbl_821CA460 - ((float)(dVar18 * dVar14) + fVar1));
      dVar16 = (double)SQRT((float)(dVar21 * dVar21 + (double)(float)(dVar22 * dVar22)));
      fStack_70 = *pfVar11;
      fStack_6c = fVar5;
      if (dVar16 <= (double)lbl_82195628) {
        dVar13 = (double)fn_82809D40(-(double)((float)(dVar14 * dVar19) - (float)(dVar17 * dVar15))
                                      ,(double)(lbl_821CA460 - (fVar2 + (float)(dVar18 * dVar14))),
                                      dVar13);
        dVar14 = (double)fn_82809D40(-dVar20,dVar16);
        dVar15 = (double)lbl_821CC160;
      }
      else {
        dVar13 = (double)fn_82809D40((double)((float)(dVar14 * dVar19) + (float)(dVar17 * dVar15)),
                                      (double)(lbl_821CA460 - (fVar2 + fVar1)));
        dVar14 = (double)fn_82809D40(-dVar20,dVar16);
        dVar15 = (double)fn_82809D40(dVar22,dVar21);
      }
      fStack_68 = (float)((double)fStack_68 + dVar13);
      fStack_70 = (float)((double)fStack_70 + dVar14);
      fStack_6c = (float)((double)fStack_6c + dVar15);
      fStack_60 = fStack_70;
      fStack_5c = fStack_6c;
      fStack_58 = fStack_68;
    }
    if ((lbl_83297A40 & 1) == 0) {
      lbl_83297A40 = lbl_83297A40 | 1;
    }
    lbl_832978D8 = fStack_70;
    lbl_832978DC = fStack_6c;
    uVar12 = 0xffffffff832978c8;
    lbl_832978E0 = fStack_68;
    lbl_832978C8 = 4;
  }
  lVar8 = fn_82593540(iVar3 + 0x10);
  if (lVar8 != 0) {
    fn_82564458(*(undefined4 *)(iVar9 + 4),lVar8,uVar12);
  }
  fn_82F6A590();
  return;
}

