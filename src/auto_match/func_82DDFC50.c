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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_28c;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82DDFAB0();
extern int fn_82DDFB10();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int *lbl_8323B464;
extern unsigned int stack0x00000000;
extern unsigned int uStack_2c0;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82DDFC50(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong in_r0;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  int *piVar13;
  ulonglong uVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 uStack_2c0;
  uint auStack_28c [163];
  
  uVar14 = ZEXT48(&stack0x00000000);
  iVar8 = fn_82F6A548();
  bVar3 = *(byte *)param_3;
  if (*(char *)(iVar8 + 0xc0) != '\0') {
LAB_82de0c1c:
    fn_82F6A594();
    return;
  }
LAB_82ddfc94:
  uVar10 = (ulonglong)bVar3;
  if (0x6b < uVar10) {
switchD_82ddfcb0_caseD_8:
    fn_82CEE578(uVar14 - 0x288,uVar14 - 0x270,0x200);
    fn_82CEDB38(uVar14 - 0x288,0xffffffff82142a88);
    iVar8 = (**(code **)(*lbl_8323B464 + 0xc))
                      (lbl_8323B464,3,0x1298fedd,uVar14 - 0x270,0xffffffff82142d9c,0x251);
    if (iVar8 != 0) {
      trapWord(0x1f,in_r0,0x16);
    }
                    /* WARNING: Subroutine does not return */
    fn_82CED958(uVar14 - 0x288);
  }
  in_r0 = (ulonglong)*(uint *)((uint)bVar3 * 4 + -0x7d22034c);
  piVar13 = (int *)param_2;
  iVar6 = (int)param_3;
  switch(bVar3) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    param_3 = param_3 + 4;
    auStack_28c[0] = piVar13[5];
    param_2 = uVar14 - 0x2a0;
    goto LAB_82de013c;
  case 5:
    param_3 = (ulonglong)*(byte *)(iVar6 + 1) + param_3 + 2;
    goto LAB_82de013c;
  case 6:
    param_3 = (ulonglong)*(byte *)(iVar6 + 1) * 0x100 + (ulonglong)*(byte *)(iVar6 + 2) + param_3 +
              3;
    goto LAB_82de013c;
  case 7:
    param_3 = ((ulonglong)*(byte *)(iVar6 + 1) * 0x100 + (ulonglong)*(byte *)(iVar6 + 2)) * 0x100 +
              (ulonglong)*(byte *)(iVar6 + 3) + param_3 + 4;
    goto LAB_82de013c;
  case 8:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
    goto switchD_82ddfcb0_caseD_8;
  case 9:
    if ((param_2 & 0xffffffff) != (uVar14 - 0x2a0 & 0xffffffff)) {
      lVar9 = uVar14 - 0x2a4;
      lVar11 = param_2 - 4;
      lVar15 = 6;
      do {
        lVar11 = lVar11 + 4;
        lVar9 = lVar9 + 4;
        *(undefined4 *)lVar9 = *(undefined4 *)lVar11;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      param_2 = uVar14 - 0x2a0;
    }
    param_3 = param_3 + 2;
    goto LAB_82de013c;
  case 10:
    if ((param_2 & 0xffffffff) != (uVar14 - 0x2a0 & 0xffffffff)) {
      lVar9 = uVar14 - 0x2a4;
      lVar11 = param_2 - 4;
      lVar15 = 6;
      do {
        lVar11 = lVar11 + 4;
        lVar9 = lVar9 + 4;
        *(undefined4 *)lVar9 = *(undefined4 *)lVar11;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      param_2 = uVar14 - 0x2a0;
    }
    param_3 = param_3 + 3;
    goto LAB_82de013c;
  case 0xb:
    if ((param_2 & 0xffffffff) != (uVar14 - 0x2a0 & 0xffffffff)) {
      lVar9 = uVar14 - 0x2a4;
      lVar11 = param_2 - 4;
      lVar15 = 6;
      do {
        lVar11 = lVar11 + 4;
        lVar9 = lVar9 + 4;
        *(undefined4 *)lVar9 = *(undefined4 *)lVar11;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      param_2 = uVar14 - 0x2a0;
    }
    param_3 = param_3 + 5;
    goto LAB_82de013c;
  case 0x10:
  case 0x11:
  case 0x12:
    uVar10 = uVar10 - 0x10;
    param_3 = param_3 + 4;
    uVar14 = (ulonglong)*(byte *)(iVar6 + 3);
    iVar7 = *(int *)((int)((uVar10 & 0xffffffff) << 2) + (int)piVar13);
    lVar11 = 0;
    dVar16 = (double)((float)(longlong)
                             (int)(((uint)*(byte *)(iVar6 + 2) << (0x10U - piVar13[3] & 0x3f)) +
                                  iVar7) * *(float *)(iVar8 + 0x10));
    fVar1 = (float)(longlong)
                   (int)(((uint)*(byte *)(iVar6 + 1) << (0x10U - piVar13[3] & 0x3f)) + iVar7) *
            *(float *)(iVar8 + 0x10);
    break;
  case 0x13:
    param_3 = param_3 + 4;
    uVar10 = 3;
    uVar14 = (ulonglong)*(byte *)(iVar6 + 3);
    lVar11 = 0;
    fVar1 = ((float)(longlong)
                    (int)(((uint)*(byte *)(iVar6 + 1) << 1) << (0x10U - piVar13[3] & 0x3f)) +
            (float)(longlong)(piVar13[2] + piVar13[1])) * *(float *)(iVar8 + 0x10);
    dVar16 = (double)(((float)(longlong)
                              (int)(((uint)*(byte *)(iVar6 + 2) << 1) << (0x10U - piVar13[3] & 0x3f)
                                   ) + (float)(longlong)(piVar13[2] + piVar13[1])) *
                     *(float *)(iVar8 + 0x10));
    break;
  case 0x14:
    uVar10 = 4;
    lVar11 = 0;
    param_3 = param_3 + 4;
    uVar14 = (ulonglong)*(byte *)(iVar6 + 3);
    fVar1 = ((float)(longlong)
                    (int)((uint)*(byte *)(iVar6 + 1) * 2 + -0xff << (0x10U - piVar13[3] & 0x3f)) +
            (float)(longlong)(piVar13[1] - piVar13[2])) * *(float *)(iVar8 + 0x10);
    dVar16 = (double)(((float)(longlong)
                              (int)((uint)*(byte *)(iVar6 + 2) * 2 + -0xff <<
                                   (0x10U - piVar13[3] & 0x3f)) +
                      (float)(longlong)(piVar13[1] - piVar13[2])) * *(float *)(iVar8 + 0x10));
    break;
  case 0x15:
    uVar10 = 5;
    lVar11 = 0;
    param_3 = param_3 + 4;
    uVar14 = (ulonglong)*(byte *)(iVar6 + 3);
    dVar16 = (double)(((float)(longlong)
                              (int)(((uint)*(byte *)(iVar6 + 2) << 1) << (0x10U - piVar13[3] & 0x3f)
                                   ) + (float)(longlong)(piVar13[2] + *piVar13)) *
                     *(float *)(iVar8 + 0x10));
    fVar1 = ((float)(longlong)
                    (int)(((uint)*(byte *)(iVar6 + 1) << 1) << (0x10U - piVar13[3] & 0x3f)) +
            (float)(longlong)(piVar13[2] + *piVar13)) * *(float *)(iVar8 + 0x10);
    break;
  case 0x16:
    param_3 = param_3 + 4;
    uVar14 = (ulonglong)*(byte *)(iVar6 + 3);
    uVar10 = 6;
    lVar11 = 0;
    fVar1 = ((float)(longlong)
                    (int)((uint)*(byte *)(iVar6 + 1) * 2 + -0xff << (0x10U - piVar13[3] & 0x3f)) +
            (float)(longlong)(*piVar13 - piVar13[2])) * *(float *)(iVar8 + 0x10);
    dVar16 = (double)(((float)(longlong)
                              (int)((uint)*(byte *)(iVar6 + 2) * 2 + -0xff <<
                                   (0x10U - piVar13[3] & 0x3f)) +
                      (float)(longlong)(*piVar13 - piVar13[2])) * *(float *)(iVar8 + 0x10));
    break;
  case 0x17:
    param_3 = param_3 + 4;
    uVar10 = 7;
    uVar14 = (ulonglong)*(byte *)(iVar6 + 3);
    lVar11 = 0;
    dVar16 = (double)(((float)(longlong)
                              (int)(((uint)*(byte *)(iVar6 + 2) << 1) << (0x10U - piVar13[3] & 0x3f)
                                   ) + (float)(longlong)(piVar13[1] + *piVar13)) *
                     *(float *)(iVar8 + 0x10));
    fVar1 = ((float)(longlong)
                    (int)(((uint)*(byte *)(iVar6 + 1) << 1) << (0x10U - piVar13[3] & 0x3f)) +
            (float)(longlong)(piVar13[1] + *piVar13)) * *(float *)(iVar8 + 0x10);
    break;
  case 0x18:
    param_3 = param_3 + 4;
    uVar10 = 8;
    uVar14 = (ulonglong)*(byte *)(iVar6 + 3);
    lVar11 = 0;
    fVar1 = ((float)(longlong)
                    (int)((uint)*(byte *)(iVar6 + 1) * 2 + -0xff << (0x10U - piVar13[3] & 0x3f)) +
            (float)(longlong)(*piVar13 - piVar13[1])) * *(float *)(iVar8 + 0x10);
    dVar16 = (double)(((float)(longlong)
                              (int)((uint)*(byte *)(iVar6 + 2) * 2 + -0xff <<
                                   (0x10U - piVar13[3] & 0x3f)) +
                      (float)(longlong)(*piVar13 - piVar13[1])) * *(float *)(iVar8 + 0x10));
    break;
  case 0x19:
    uVar10 = 9;
    lVar11 = 0;
    param_3 = param_3 + 4;
    uVar14 = (ulonglong)*(byte *)(iVar6 + 3);
    fVar2 = (float)(longlong)(piVar13[2] + piVar13[1] + *piVar13);
    fVar1 = ((float)(longlong)
                    (int)((uint)*(byte *)(iVar6 + 1) + (uint)*(byte *)(iVar6 + 1) * 2 <<
                         (0x10U - piVar13[3] & 0x3f)) + fVar2) * *(float *)(iVar8 + 0x10);
    dVar16 = (double)(((float)(longlong)
                              (int)((uint)*(byte *)(iVar6 + 2) + (uint)*(byte *)(iVar6 + 2) * 2 <<
                                   (0x10U - piVar13[3] & 0x3f)) + fVar2) * *(float *)(iVar8 + 0x10))
    ;
    break;
  case 0x1a:
    param_3 = param_3 + 4;
    uVar10 = 10;
    uVar14 = (ulonglong)*(byte *)(iVar6 + 3);
    lVar11 = 0;
    fVar1 = (float)(longlong)((piVar13[1] - piVar13[2]) + *piVar13);
    dVar16 = (double)(((float)(longlong)
                              (int)((*(byte *)(iVar6 + 2) - 0x55) * 3 << (0x10U - piVar13[3] & 0x3f)
                                   ) + fVar1) * *(float *)(iVar8 + 0x10));
    fVar1 = ((float)(longlong)
                    (int)((*(byte *)(iVar6 + 1) - 0x55) * 3 << (0x10U - piVar13[3] & 0x3f)) + fVar1)
            * *(float *)(iVar8 + 0x10);
    break;
  case 0x1b:
    param_3 = param_3 + 4;
    uVar10 = 0xb;
    lVar11 = 0;
    uVar14 = (ulonglong)*(byte *)(iVar6 + 3);
    fVar1 = (float)(longlong)((piVar13[2] - piVar13[1]) + *piVar13);
    dVar16 = (double)(((float)(longlong)
                              (int)((*(byte *)(iVar6 + 2) - 0x55) * 3 << (0x10U - piVar13[3] & 0x3f)
                                   ) + fVar1) * *(float *)(iVar8 + 0x10));
    fVar1 = ((float)(longlong)
                    (int)((*(byte *)(iVar6 + 1) - 0x55) * 3 << (0x10U - piVar13[3] & 0x3f)) + fVar1)
            * *(float *)(iVar8 + 0x10);
    break;
  case 0x1c:
    param_3 = param_3 + 4;
    uVar14 = (ulonglong)*(byte *)(iVar6 + 3);
    uVar10 = 0xc;
    lVar11 = 0;
    fVar2 = (float)(longlong)((*piVar13 - piVar13[2]) - piVar13[1]);
    fVar1 = ((float)(longlong)
                    (int)((*(byte *)(iVar6 + 1) - 0xaa) * 3 << (0x10U - piVar13[3] & 0x3f)) + fVar2)
            * *(float *)(iVar8 + 0x10);
    dVar16 = (double)(((float)(longlong)
                              (int)((*(byte *)(iVar6 + 2) - 0xaa) * 3 << (0x10U - piVar13[3] & 0x3f)
                                   ) + fVar2) * *(float *)(iVar8 + 0x10));
    break;
  case 0x20:
  case 0x21:
  case 0x22:
    uVar10 = uVar10 - 0x20;
    param_3 = param_3 + 3;
    uVar14 = (ulonglong)*(byte *)(iVar6 + 2);
    lVar11 = 0;
    dVar17 = (double)(longlong)
                     (int)(((uint)*(byte *)(iVar6 + 1) << (0x10U - piVar13[3] & 0x3f)) +
                          *(int *)((int)((uVar10 & 0xffffffff) << 2) + (int)piVar13));
    dVar16 = (double)(float)((double)*(float *)(iVar8 + 0x10) * dVar17);
    fVar1 = (float)((double)*(float *)(iVar8 + 0x10) *
                   (double)(float)((double)(longlong)(1 << (0x10U - piVar13[3] & 0x3f)) + dVar17));
    break;
  case 0x23:
  case 0x24:
  case 0x25:
    uVar10 = uVar10 - 0x23;
    param_3 = param_3 + 7;
    iVar7 = *(int *)((int)((uVar10 & 0xffffffff) << 2) + (int)piVar13);
    lVar11 = (ulonglong)*(byte *)(iVar6 + 3) * 0x100 + (ulonglong)*(byte *)(iVar6 + 4);
    uVar14 = (ulonglong)*(byte *)(iVar6 + 5) * 0x100 + (ulonglong)*(byte *)(iVar6 + 6);
    fVar1 = (float)(longlong)
                   (int)(((uint)*(byte *)(iVar6 + 1) << (0x10U - piVar13[3] & 0x3f)) + iVar7) *
            *(float *)(iVar8 + 0x10);
    dVar16 = (double)((float)(longlong)
                             (int)(((uint)*(byte *)(iVar6 + 2) << (0x10U - piVar13[3] & 0x3f)) +
                                  iVar7) * *(float *)(iVar8 + 0x10));
    break;
  case 0x26:
  case 0x27:
  case 0x28:
    iVar7 = *(int *)((int)((uVar10 - 0x26 & 0xffffffff) << 2) + (int)piVar13);
    dVar16 = (double)((float)(longlong)
                             (int)(((uint)*(byte *)(iVar6 + 2) << (0x10U - piVar13[3] & 0x3f)) +
                                  iVar7) * *(float *)(iVar8 + 0x10));
    dVar17 = (double)((float)(longlong)
                             (int)(((uint)*(byte *)(iVar6 + 1) << (0x10U - piVar13[3] & 0x3f)) +
                                  iVar7) * *(float *)(iVar8 + 0x10));
    if ((*(int *)(iVar8 + 0xb4) == 0) ||
       (bVar5 = false, *(int *)(iVar8 + 0xac) < *(int *)(iVar8 + 0xb4))) {
      bVar5 = true;
    }
    if (bVar5) {
      fn_82DDFAB0(iVar8,uStack_2c0,0xffffffffffffffff);
    }
    iVar6 = iVar8 + 0x44;
    iVar7 = (int)((uVar10 - 0x26 & 0x1fffffff) << 3);
    dVar19 = (double)*(float *)(iVar6 + iVar7);
    dVar18 = (double)*(float *)(iVar6 + iVar7 + 4);
    *(float *)(iVar6 + iVar7) = (float)dVar17;
    *(float *)(iVar6 + iVar7 + 4) = (float)dVar16;
    *(int *)(iVar8 + 0xac) = *(int *)(iVar8 + 0xac) + 1;
    fn_82DDFC50(iVar8,param_2,param_3 + 3);
    *(int *)(iVar8 + 0xac) = *(int *)(iVar8 + 0xac) + -1;
    if (((bVar5) && (*(char *)(iVar8 + 0xb8) != '\0')) && (*(char *)(iVar8 + 0xc0) == '\0')) {
      *(int *)(iVar8 + 0x40) = *(int *)(iVar8 + 0x40) + -0x70;
    }
    *(float *)(iVar6 + iVar7) = (float)dVar19;
    *(float *)(iVar6 + iVar7 + 4) = (float)dVar18;
    fn_82F6A594();
    return;
  case 0x29:
  case 0x2a:
  case 0x2b:
    dVar16 = (double)((float)(longlong)
                             (int)(((uint)*(byte *)(iVar6 + 5) + (uint)*(byte *)(iVar6 + 4) * 0x100)
                                   * 0x100 + (uint)*(byte *)(iVar6 + 6)) * *(float *)(iVar8 + 0x10))
    ;
    dVar17 = (double)((float)(longlong)
                             (int)(((uint)*(byte *)(iVar6 + 1) * 0x100 + (uint)*(byte *)(iVar6 + 2))
                                   * 0x100 + (uint)*(byte *)(iVar6 + 3)) * *(float *)(iVar8 + 0x10))
    ;
    if ((*(int *)(iVar8 + 0xb4) == 0) ||
       (bVar5 = false, *(int *)(iVar8 + 0xac) < *(int *)(iVar8 + 0xb4))) {
      bVar5 = true;
    }
    if (bVar5) {
      fn_82DDFAB0(iVar8,0,0xffffffffffffffff);
    }
    iVar7 = iVar8 + 0x44;
    iVar6 = (int)((uVar10 - 0x29 & 0x1fffffff) << 3);
    dVar19 = (double)*(float *)(iVar6 + iVar7);
    dVar18 = (double)*(float *)(iVar6 + iVar7 + 4);
    *(float *)(iVar6 + iVar7) = (float)dVar17;
    *(float *)(iVar6 + iVar7 + 4) = (float)dVar16;
    *(int *)(iVar8 + 0xac) = *(int *)(iVar8 + 0xac) + 1;
    fn_82DDFC50(iVar8,param_2,param_3 + 7);
    *(int *)(iVar8 + 0xac) = *(int *)(iVar8 + 0xac) + -1;
    if ((bVar5) && (*(char *)(iVar8 + 0xb8) != '\0')) {
      *(int *)(iVar8 + 0x40) = *(int *)(iVar8 + 0x40) + -0x70;
    }
    *(float *)(iVar6 + iVar7) = (float)dVar19;
    *(float *)(iVar6 + iVar7 + 4) = (float)dVar18;
    fn_82F6A594();
    return;
  default:
    uVar12 = bVar3 - 0x30;
    goto LAB_82de0bf4;
  case 0x50:
    uVar12 = (uint)*(byte *)(iVar6 + 1);
LAB_82de0bf4:
    *(uint *)(iVar8 + 0x30) = uVar12;
    goto LAB_82de0bf8;
  case 0x51:
    *(uint *)(iVar8 + 0x30) = (uint)*(byte *)(iVar6 + 2) + (uint)*(byte *)(iVar6 + 1) * 0x100;
    goto LAB_82de0bf8;
  case 0x52:
    bVar3 = *(byte *)(iVar6 + 2);
    bVar4 = *(byte *)(iVar6 + 1);
    *(uint *)(iVar8 + 0x30) = (uint)bVar3 << 8;
    *(uint *)(iVar8 + 0x30) =
         (uint)*(byte *)(iVar6 + 3) + (uint)bVar3 * 0x100 + (uint)bVar4 * 0x10000;
LAB_82de0bf8:
    lVar11 = (ulonglong)(uint)piVar13[4] + (ulonglong)*(uint *)(iVar8 + 0x30);
    *(int *)(iVar8 + 0x30) = (int)lVar11;
    fn_82DDFB10(iVar8,lVar11,param_2 + 0x14);
    *(undefined4 *)(iVar8 + 0x30) = 0xffffffff;
    goto LAB_82de0c1c;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
    param_3 = param_3 + 2;
    *(uint *)((int)auStack_28c + (int)((uVar10 - 0x60 & 0xffffffff) << 2)) =
         (uint)*(byte *)(iVar6 + 1);
    goto LAB_82de00a8;
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
    param_3 = param_3 + 3;
    *(uint *)((int)auStack_28c + (int)((uVar10 - 100 & 0xffffffff) << 2)) =
         (uint)*(byte *)(iVar6 + 1) * 0x100 + (uint)*(byte *)(iVar6 + 2);
    goto LAB_82de00a8;
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
    param_3 = param_3 + 5;
    *(uint *)((int)auStack_28c + (int)((uVar10 - 0x68 & 0xffffffff) << 2)) =
         (((uint)*(byte *)(iVar6 + 1) * 0x100 + (uint)*(byte *)(iVar6 + 2)) * 0x100 +
         (uint)*(byte *)(iVar6 + 3)) * 0x100 + (uint)*(byte *)(iVar6 + 4);
LAB_82de00a8:
    if ((param_2 & 0xffffffff) != (uVar14 - 0x2a0 & 0xffffffff)) {
      lVar9 = uVar14 - 0x2a4;
      lVar11 = param_2 - 4;
      lVar15 = 6;
      do {
        lVar11 = lVar11 + 4;
        lVar9 = lVar9 + 4;
        *(undefined4 *)lVar9 = *(undefined4 *)lVar11;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      param_2 = uVar14 - 0x2a0;
    }
LAB_82de013c:
    bVar3 = *(byte *)param_3;
    if (*(char *)(iVar8 + 0xc0) != '\0') {
      fn_82F6A594();
      return;
    }
    goto LAB_82ddfc94;
  }
  iVar7 = iVar8 + 0x44;
  iVar6 = (int)((uVar10 & 0x1fffffff) << 3);
  dVar17 = (double)*(float *)(iVar6 + iVar7 + 4);
  *(float *)(iVar6 + iVar7 + 4) = fVar1;
  fn_82DDFC50(iVar8,param_2,lVar11 + param_3);
  *(float *)((int)((uVar10 + 9 & 0xffffffff) << 3) + iVar8) = (float)dVar17;
  dVar17 = (double)*(float *)(iVar6 + iVar7);
  *(float *)(iVar6 + iVar7) = (float)dVar16;
  fn_82DDFC50(iVar8,param_2,(uVar14 - lVar11) + lVar11 + param_3);
  *(float *)(iVar6 + iVar8 + 0x44) = (float)dVar17;
  fn_82F6A594();
  return;
}

