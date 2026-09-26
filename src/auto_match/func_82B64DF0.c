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
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82920AD8();
extern int fn_82920BD8();
extern int fn_82B64178();
extern int fn_82B64278();
extern int fn_82B64380();
extern int fn_82B64480();
extern int fn_82B64580();
extern unsigned int lbl_82002C28;
extern unsigned int lbl_83161014;
extern unsigned int lbl_83161018;


undefined8 fn_82B64DF0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  code *pcVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar22;
  longlong lVar21;
  float *pfVar23;
  int iVar24;
  uint uVar25;
  ulonglong uVar26;
  float *pfVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  double dVar31;
  
  if (*(char *)((int)param_1 + 0xb) != '\x05') {
    return 0xffffffff80004005;
  }
  iVar22 = *param_1;
  iVar24 = param_1[1];
  uVar25 = *(uint *)(iVar22 + 0x68);
  if (*(uint *)(iVar24 + 0x68) != uVar25 >> 1) {
    if (*(uint *)(iVar24 + 0x68) != 1) {
      return 0xffffffff80004005;
    }
    if (uVar25 != 1) {
      return 0xffffffff80004005;
    }
  }
  if (*(uint *)(iVar24 + 0x6c) != *(uint *)(iVar22 + 0x6c) >> 1) {
    if (*(uint *)(iVar24 + 0x6c) != 1) {
      return 0xffffffff80004005;
    }
    if (*(uint *)(iVar22 + 0x6c) != 1) {
      return 0xffffffff80004005;
    }
  }
  if (*(int *)(iVar24 + 0x70) != 1) {
    return 0xffffffff80004005;
  }
  if (*(int *)(iVar22 + 0x70) != 1) {
    return 0xffffffff80004005;
  }
  if ((1 < uVar25) && ((uVar25 & 1) != 0)) {
    *(uint *)(iVar22 + 0x68) = *(uint *)(iVar22 + 0x68) & 0xfffffffe;
    iVar22 = *param_1;
    *(int *)(iVar22 + 0x74) = *(int *)(iVar22 + 0x74) - *(int *)(iVar22 + 0x78);
  }
  uVar25 = *(uint *)(*param_1 + 0x6c);
  if (1 < uVar25) {
    *(uint *)(*param_1 + 0x6c) = uVar25 & 0xfffffffe;
  }
  if ((param_1[2] & 0x80000U) != 0) goto LAB_82b6504c;
  iVar22 = *param_1;
  uVar25 = *(uint *)(iVar22 + 4);
  uVar26 = (ulonglong)uVar25;
  uVar16 = *(uint *)(param_1[1] + 4) ^ uVar25;
  if (((((CONCAT44(uVar16,uVar16) & 0xfffffffffffffeff) != 0) || (*(uint *)(iVar22 + 0x68) < 2)) ||
      (*(uint *)(iVar22 + 0x6c) < 2)) ||
     ((*(int *)(param_1[1] + 0x10) != 0 || (*(int *)(iVar22 + 0x10) != 0)))) goto LAB_82b6504c;
  if ((int)uVar25 < 0x28000103) {
    if ((uVar25 == 0x28000102) || (uVar25 == 0x4900102)) {
      iVar22 = fn_82920BD8(param_1);
    }
    else if (uVar26 == 0x800014a) {
      iVar22 = fn_82B64580(param_1);
    }
    else {
      uVar26 = uVar26 - 0x18280143;
      if (uVar26 == 0) {
        iVar22 = fn_82B64278(param_1);
      }
      else {
        if ((uVar26 & 0xffffffff) != 0xc) {
          if (((uVar26 & 0xffffffff) != 0x43) && ((uVar26 & 0xffffffff) != 0x1f80043))
          goto LAB_82b6504c;
          uVar13 = *(undefined4 *)(iVar22 + 0x20);
          uVar14 = *(undefined4 *)(iVar22 + 0x60);
          pcVar15 = (code *)lbl_83161014;
          goto LAB_82b64f8c;
        }
        iVar22 = fn_82B64380(param_1);
      }
    }
  }
  else {
    uVar26 = uVar26 - 0x28280143;
    if (uVar26 == 0) {
      iVar22 = fn_82920AD8(param_1);
    }
    else if ((uVar26 & 0xffffffff) == 1) {
      iVar22 = fn_82B64178(param_1);
    }
    else if ((uVar26 & 0xffffffff) == 0xc) {
      iVar22 = fn_82B64480(param_1);
    }
    else {
      if (((uVar26 & 0xffffffff) != 0x43) && ((uVar26 & 0xffffffff) != 0x1f80043))
      goto LAB_82b6504c;
      uVar13 = *(undefined4 *)(iVar22 + 0x20);
      uVar14 = *(undefined4 *)(iVar22 + 0x60);
      pcVar15 = (code *)lbl_83161018;
LAB_82b64f8c:
      iVar22 = (*pcVar15)(*(undefined4 *)(param_1[1] + 0x20),uVar13,*(uint *)(iVar22 + 0x68),
                          *(uint *)(iVar22 + 0x6c),uVar14,*(undefined4 *)(param_1[1] + 0x60));
    }
  }
  if (-1 < iVar22) {
    return 0;
  }
LAB_82b6504c:
  lVar21 = ((ulonglong)*(uint *)(param_1[1] + 0x68) & 0xfffffff) << 4;
  if (0xfffffff < *(uint *)(param_1[1] + 0x68)) {
    lVar21 = -1;
  }
  pfVar23 = (float *)fn_8265C9E0(lVar21);
  if (pfVar23 != (float *)0x0) {
    uVar25 = *(uint *)(*param_1 + 0x68);
    if (*(int *)(*param_1 + 0x6c) == 1) {
      lVar21 = ((ulonglong)uVar25 & 0xfffffff) << 4;
      if (0xfffffff < uVar25) {
        lVar21 = -1;
      }
      iVar24 = fn_8265C9E0(lVar21);
      iVar22 = iVar24;
    }
    else {
      lVar21 = ((ulonglong)uVar25 & 0x7ffffff) << 5;
      if (0xfffffff < ((ulonglong)uVar25 & 0x7fffffff) << 1) {
        lVar21 = -1;
      }
      iVar24 = fn_8265C9E0(lVar21);
      iVar22 = *(int *)(*param_1 + 0x68) * 0x10 + iVar24;
    }
    if (iVar24 != 0) {
      iVar30 = iVar24;
      iVar29 = iVar22;
      if (*(int *)(*param_1 + 0x68) != 1) {
        iVar30 = iVar24 + 0x10;
        iVar29 = iVar22 + 0x10;
      }
      uVar26 = 0;
      if (*(int *)(param_1[1] + 0x6c) != 0) {
        dVar31 = (double)lbl_82002C28;
        do {
          lVar21 = (uVar26 & 0x7fffffff) * 2;
          (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,lVar21,0,iVar24);
          if (iVar22 != iVar24) {
            (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,lVar21 + 1,0,iVar22);
          }
          uVar25 = 0;
          pfVar27 = pfVar23;
          if (*(int *)(param_1[1] + 0x68) != 0) {
            do {
              iVar28 = uVar25 * 0x20;
              iVar17 = iVar28 + iVar30;
              iVar18 = iVar28 + iVar24;
              iVar19 = iVar28 + iVar22;
              iVar20 = iVar28 + iVar29;
              uVar25 = uVar25 + 1;
              fVar1 = *(float *)(iVar17 + 4);
              fVar2 = *(float *)(iVar18 + 4);
              fVar3 = *(float *)(iVar17 + 8);
              fVar4 = *(float *)(iVar18 + 8);
              fVar5 = *(float *)(iVar17 + 0xc);
              fVar6 = *(float *)(iVar18 + 0xc);
              fVar7 = *(float *)(iVar19 + 4);
              fVar8 = *(float *)(iVar19 + 8);
              fVar9 = *(float *)(iVar19 + 0xc);
              fVar10 = *(float *)(iVar20 + 4);
              fVar11 = *(float *)(iVar20 + 8);
              fVar12 = *(float *)(iVar20 + 0xc);
              *pfVar27 = (float)((double)(*(float *)(iVar28 + iVar22) +
                                          *(float *)(iVar28 + iVar24) + *(float *)(iVar28 + iVar30)
                                         + *(float *)(iVar28 + iVar29)) * dVar31);
              pfVar27[1] = (float)((double)(fVar10 + fVar7 + fVar1 + fVar2) * dVar31);
              pfVar27[2] = (float)((double)(fVar11 + fVar8 + fVar3 + fVar4) * dVar31);
              pfVar27[3] = (float)((double)(fVar12 + fVar9 + fVar5 + fVar6) * dVar31);
              pfVar27 = pfVar27 + 4;
            } while (uVar25 < *(uint *)(param_1[1] + 0x68));
          }
          (**(code **)(*(int *)param_1[1] + 8))((int *)param_1[1],uVar26,0,pfVar23);
          uVar26 = uVar26 + 1;
        } while ((uVar26 & 0xffffffff) < (ulonglong)*(uint *)(param_1[1] + 0x6c));
      }
      fn_8265CA20(iVar24);
      fn_8265CA20(pfVar23);
      return 0;
    }
    fn_8265CA20(pfVar23);
  }
  return 0xffffffff8007000e;
}

