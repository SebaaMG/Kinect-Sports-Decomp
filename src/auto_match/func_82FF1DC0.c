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
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FF2410();
extern int fn_82FF2608();
extern int fn_82FF2658();
extern int fn_83000878();
extern int fn_8301B380();
extern int fn_83029B98();
extern int fn_83029C78();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82005748;
extern float lbl_82006848;
extern float lbl_82021544;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_831BC834;
extern unsigned int lbl_831BC838;
extern unsigned int lbl_831BC83C;
extern unsigned int lbl_831BC840;
extern unsigned int lbl_832642F8;
extern unsigned int lbl_83264610;
extern unsigned int lbl_83264614;
extern unsigned int lbl_83264618;
extern unsigned int lbl_83264628;
extern unsigned int lbl_8326462C;
extern unsigned int lbl_83264630;


void fn_82FF1DC0(undefined8 param_1,undefined4 *param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  float fVar5;
  longlong lVar6;
  int iVar8;
  char cVar10;
  undefined8 uVar7;
  int iVar9;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  lVar6 = fn_82F6A548();
  iVar12 = (int)lVar6;
  iVar8 = *(int *)(iVar12 + 0x38);
  if (iVar8 == 0) {
    *param_2 = 1;
    fn_82F6A594();
    return;
  }
  *param_2 = *(undefined4 *)(iVar8 + 8);
  param_2[7] = *(undefined4 *)(iVar12 + 0x150);
  param_2[8] = *(undefined4 *)(iVar12 + 0x154);
  if (*(char *)(iVar8 + 0x11) == '\0') {
    param_2[2] = lbl_831BC834;
    param_2[3] = lbl_831BC838;
    param_2[4] = lbl_831BC83C;
    param_2[5] = lbl_831BC840;
  }
  else {
    param_2[2] = *(undefined4 *)(iVar8 + 0x14);
    param_2[3] = *(undefined4 *)(iVar8 + 0x18);
    param_2[4] = *(undefined4 *)(iVar8 + 0x1c);
    param_2[5] = *(undefined4 *)(iVar8 + 0x20);
  }
  param_2[6] = (float)*(ushort *)(iVar12 + 0x15a) * lbl_82021544;
  if (*(int *)(iVar8 + 8) == 2) {
    RtlEnterCriticalSection(0xffffffff83264558);
    if ((((*(int *)(iVar12 + 0x17c) != 0) &&
         (cVar10 = *(char *)(iVar8 + 0x33), fn_83029C78(*(int *)(iVar12 + 0x17c),cVar10),
         cVar10 != '\0')) && ((*(uint *)(*(int *)(iVar12 + 0x17c) + 0x1c) >> 1 & 1) != 0)) &&
       (cVar10 = fn_83029B98(), cVar10 != '\0')) {
      uVar7 = fn_83000878(*(undefined4 *)(iVar12 + 0x68));
      fn_8301B380(lbl_832642F8,*(undefined4 *)(iVar12 + 0x17c),uVar7);
    }
    RtlLeaveCriticalSection(0xffffffff83264558);
    fVar5 = lbl_821AAD20;
    dVar18 = (double)lbl_821AAD20;
    if (*(char *)(iVar8 + 0x30) != '\0') {
      *(undefined4 *)(iVar8 + 0x24) = *(undefined4 *)(iVar12 + 0x150);
      *(float *)(iVar8 + 0x28) = fVar5;
      *(undefined4 *)(iVar8 + 0x2c) = *(undefined4 *)(iVar12 + 0x154);
    }
    *(undefined1 *)(iVar12 + 0x14e) = 1;
    if (*(short *)(iVar12 + 0x14c) != 1) {
      if (*(int *)(iVar12 + 0x148) != 0) {
        fn_82FA5190(lbl_831BC768);
        *(undefined4 *)(iVar12 + 0x148) = 0;
        *(undefined2 *)(iVar12 + 0x14c) = 0;
      }
      iVar9 = fn_82FA5060(lbl_831BC768,0x18);
      *(int *)(iVar12 + 0x148) = iVar9;
      if (iVar9 == 0) goto LAB_82ff2224;
      *(undefined2 *)(iVar12 + 0x14c) = 1;
    }
    *(float *)(*(int *)(iVar12 + 0x148) + 0xc) = (float)dVar18;
    uVar4 = lbl_8200133C;
    *(float *)(*(int *)(iVar12 + 0x148) + 0x10) = (float)dVar18;
    *(undefined4 *)(*(int *)(iVar12 + 0x148) + 0x14) = uVar4;
    puVar2 = *(undefined4 **)(iVar12 + 0x148);
    *puVar2 = *(undefined4 *)(iVar8 + 0x24);
    puVar2[1] = *(undefined4 *)(iVar8 + 0x28);
    puVar2[2] = *(undefined4 *)(iVar8 + 0x2c);
    goto LAB_82ff2224;
  }
  if ((*(int *)(iVar8 + 8) != 3) ||
     ((*(char *)(iVar8 + 0x31) == '\0' && ((*(byte *)(iVar12 + 0xd9) & 0x80) != 0))))
  goto LAB_82ff2224;
  lVar13 = (ulonglong)*(uint *)(iVar12 + 0x70) + 0xc;
  if ((ulonglong)*(uint *)(iVar12 + 0x70) == 0xfffffffffffffff8) {
    lVar13 = 0;
  }
  puVar2 = (undefined4 *)lVar13;
  *(undefined1 *)(iVar12 + 0x14e) = *(undefined1 *)((int)puVar2 + 6);
  iVar9 = (int)((uint)*(byte *)((int)puVar2 + 7) << 0x1b | (uint)(*(byte *)((int)puVar2 + 7) >> 5))
          >> 0x1b;
  if (iVar9 == -1) {
    *(undefined1 *)(iVar12 + 0x14e) = *(undefined1 *)((int)puVar2 + 6);
    bVar3 = *(byte *)((int)puVar2 + 7) & 0x1f;
    *(byte *)(iVar12 + 0x14f) = bVar3 | *(byte *)(iVar12 + 0x14f) & 0xe0;
    *(byte *)(iVar12 + 0x14f) = bVar3 | *(byte *)((int)puVar2 + 7) & 0xe0;
    fn_82FF2410(lVar6 + 0x144,*puVar2,*(undefined2 *)(puVar2 + 1));
    dVar17 = (double)*(float *)(iVar12 + 0xe4);
    dVar18 = (double)*(float *)(iVar12 + 0xe0);
    dVar15 = (double)lbl_821AAD20;
    if (dVar17 != dVar15) {
      dVar16 = (double)*(float *)(*(int *)(iVar12 + 0x70) + 0x54);
      dVar14 = (double)fn_82FF2658(lVar13);
      dVar14 = (double)(float)(dVar14 / dVar16);
      iVar8 = fn_82FF2608(iVar8 + 4);
      if ((iVar8 != 0) &&
         (piVar11 = (int *)(-(uint)(*(byte *)(iVar8 + 0x5c) != 0xff) &
                           (uint)*(byte *)(iVar8 + 0x5c) * 0xc + iVar8 + 0x20),
         piVar11 != (int *)0x0)) {
        dVar16 = (double)*(float *)(piVar11[1] * 0xc + *piVar11 + -0xc);
        if ((dVar16 <= dVar14) || (dVar16 <= dVar15)) {
          dVar18 = (double)(float)(dVar18 + dVar17);
        }
        else {
          dVar18 = (double)(float)((double)(float)(dVar14 / dVar16) * dVar17 + dVar18);
        }
      }
      if (dVar18 < 0.0) {
        dVar18 = dVar15;
      }
      if ((float)((double)lbl_82005748 - dVar18) < 0.0) {
        dVar18 = (double)lbl_82005748;
      }
    }
    *(float *)(iVar12 + 0xdc) = (float)dVar18;
LAB_82ff20e4:
    *(byte *)(iVar12 + 0xd9) = *(byte *)(iVar12 + 0xd9) | 0x80;
  }
  else {
    iVar9 = iVar9 * 0x90;
    if (*(short *)(iVar12 + 0x14c) != 1) {
      if (*(int *)(iVar12 + 0x148) != 0) {
        fn_82FA5190(lbl_831BC768);
        *(undefined4 *)(iVar12 + 0x148) = 0;
        *(undefined2 *)(iVar12 + 0x14c) = 0;
      }
      iVar8 = fn_82FA5060(lbl_831BC768,0x18);
      *(int *)(iVar12 + 0x148) = iVar8;
      if (iVar8 == 0) goto LAB_82ff20e4;
      *(undefined2 *)(iVar12 + 0x14c) = 1;
    }
    fVar5 = lbl_82006848;
    pfVar1 = *(float **)(iVar12 + 0x148);
    *pfVar1 = *(float *)(&lbl_83264610 + iVar9) * lbl_82006848 + *(float *)(&lbl_83264628 + iVar9);
    pfVar1[1] = *(float *)(&lbl_83264614 + iVar9) * fVar5 + *(float *)(&lbl_8326462C + iVar9);
    pfVar1[2] = *(float *)(&lbl_83264618 + iVar9) * fVar5 + *(float *)(&lbl_83264630 + iVar9);
    pfVar1[3] = -*(float *)(&lbl_83264610 + iVar9);
    pfVar1[4] = -*(float *)(&lbl_83264614 + iVar9);
    pfVar1[5] = -*(float *)(&lbl_83264618 + iVar9);
    *(byte *)(iVar12 + 0xd9) = *(byte *)(iVar12 + 0xd9) | 0x80;
  }
LAB_82ff2224:
  iVar12 = iVar12 + 0x148;
  if (lVar6 == -0x144) {
    iVar12 = 0;
  }
  param_2[1] = iVar12;
  fn_82F6A594();
  return;
}

