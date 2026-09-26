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
extern unsigned int *auStack_144;
extern unsigned int *auStack_214;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82CF0998();
extern int fn_82CF1998();
extern int fn_82CFBBF0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;
extern unsigned int uStack_218;
extern unsigned int uStack_21c;
extern unsigned int uStack_80;


int fn_82CF33D0(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
                 char param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  float *pfVar4;
  undefined1 *puVar5;
  int iVar7;
  int iVar8;
  undefined8 uVar6;
  int iVar9;
  float *pfVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 *puStack_220;
  uint uStack_21c;
  uint uStack_218;
  undefined1 auStack_214 [196];
  undefined1 *puStack_150;
  uint uStack_14c;
  uint uStack_148;
  undefined1 auStack_144 [196];
  undefined4 uStack_80;
  
  iVar7 = fn_82CE5410();
  iVar7 = (**(code **)(**(int **)(iVar7 + 0x10) + 4))(*(int **)(iVar7 + 0x10),0x58);
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    *(undefined4 *)(iVar7 + 0x38) = 0x80000000;
    *(undefined4 *)(iVar7 + 0x30) = 0;
    *(undefined4 *)(iVar7 + 0x34) = 0;
    puVar14 = (undefined4 *)(iVar7 + -4);
    *(undefined4 *)(iVar7 + 0x48) = 0;
    puVar12 = (undefined2 *)(iVar7 + 0x1e);
    *(undefined4 *)(iVar7 + 0x4c) = param_4;
    lVar17 = 8;
    *(undefined4 *)(iVar7 + 0x50) = 0;
    *(undefined4 *)(iVar7 + 0x54) = 1;
    uVar3 = lbl_821AAD20;
    do {
      puVar14 = puVar14 + 1;
      *puVar14 = uVar3;
      puVar12 = puVar12 + 1;
      *puVar12 = 0;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    *(undefined8 *)(iVar7 + 0x40) = lbl_82005710;
  }
  uStack_21c = 0;
  puStack_220 = auStack_214;
  uStack_14c = 0;
  uStack_148 = 0x80000010;
  uVar16 = 0;
  uStack_218 = 0x80000010;
  puVar5 = auStack_144;
  iVar8 = iVar7;
  while (puStack_150 = puVar5, param_1 < param_2) {
    puVar1 = (undefined1 *)*param_1;
    if (puVar1 < (undefined1 *)0xa) {
      param_1 = param_1 + 1;
      goto switchD_82cf34f4_caseD_46;
    }
    uVar15 = uStack_21c;
    switch(*puVar1) {
    case 0x45:
      if (uVar16 != 0) {
        if ((puVar1[2] == '\0') ||
           (iVar9 = fn_82CFBBF0((ulonglong)*(uint *)(puVar5 + uVar16 * 0xc + -0xc) + 2,puVar1 + 2),
           iVar9 == 0)) {
          fn_82CF0998(iVar8,param_3,puVar5 + uVar16 * 0xc + -0xc,param_1);
          uVar2 = uStack_21c;
          uStack_14c = uStack_14c - 1;
          iVar8 = *(int *)(iVar8 + 0x48);
          iVar9 = fn_82CE5410();
          uVar3 = *(undefined4 *)(iVar9 + 0x10);
          uVar11 = CONCAT44(uStack_218,uStack_218);
          goto LAB_82cf3718;
        }
      }
      goto switchD_82cf34f4_caseD_47;
    case 0x46:
      break;
    default:
      goto switchD_82cf34f4_caseD_47;
    case 0x4c:
      iVar9 = fn_82CE5410();
      if (uStack_14c == (uStack_148 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),&puStack_150,0xc);
      }
      puVar14 = (undefined4 *)(puStack_150 + uStack_14c * 0xc);
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = *param_1;
        puVar14[1] = param_1[1];
        puVar14[2] = param_1[2];
      }
      uStack_14c = uStack_14c + 1;
      iVar9 = fn_82CE5410();
      if (uStack_21c == (uStack_218 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),&puStack_220,0xc);
      }
      puVar14 = (undefined4 *)(puStack_220 + uStack_21c * 0xc);
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = *param_1;
        puVar14[1] = param_1[1];
        puVar14[2] = param_1[2];
      }
      uStack_21c = uStack_21c + 1;
      uVar6 = fn_82CF1998(iVar8,puVar1 + 2,0,param_5 != '\0');
      uStack_80 = *param_1;
      uVar16 = param_1[1];
      uVar15 = param_1[2];
      uVar2 = param_1[3];
      iVar8 = fn_82CE5410();
      if (uStack_14c == (uStack_148 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar8 + 0x10),&puStack_150,0xc);
      }
      puVar13 = (uint *)(puStack_150 + uStack_14c * 0xc);
      if (puVar13 != (uint *)0x0) {
        *puVar13 = uVar2;
        puVar13[1] = uVar16;
        puVar13[2] = uVar15;
      }
      uStack_14c = uStack_14c + 1;
      iVar8 = fn_82CE5410();
      if (uStack_21c == (uStack_218 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar8 + 0x10),&puStack_220,0xc);
      }
      puVar13 = (uint *)(puStack_220 + uStack_21c * 0xc);
      if (puVar13 != (uint *)0x0) {
        *puVar13 = uVar2;
        puVar13[1] = uVar16;
        puVar13[2] = uVar15;
      }
      uStack_21c = uStack_21c + 1;
      iVar8 = fn_82CF1998(uVar6,(ulonglong)uVar2 + 2,0,param_5 != '\0');
      param_1 = param_1 + 4;
      uVar16 = uStack_14c;
      break;
    case 0x4d:
      pfVar10 = (float *)fn_82CF1998(iVar8,puVar1 + 2,2,param_5 != '\0');
      pfVar4 = (float *)(param_1 + 1);
      param_1 = param_1 + 2;
      *pfVar10 = *pfVar4 + *pfVar10;
      *(short *)(pfVar10 + 8) = *(short *)(pfVar10 + 8) + 1;
      uVar16 = uStack_14c;
      break;
    case 0x4e:
      goto switchD_82cf34f4_caseD_4e;
    case 0x4f:
      iVar9 = fn_82CE5410();
      if (uStack_14c == (uStack_148 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),&puStack_150,0xc);
      }
      puVar14 = (undefined4 *)(puStack_150 + uStack_14c * 0xc);
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = *param_1;
        puVar14[1] = param_1[1];
        puVar14[2] = param_1[2];
      }
      uStack_14c = uStack_14c + 1;
      iVar8 = fn_82CF1998(iVar8,param_1[3],0,param_5 != '\0');
      iVar9 = fn_82CE5410();
      if (uStack_21c == (uStack_218 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),&puStack_220,0xc);
      }
      puVar14 = (undefined4 *)(puStack_220 + uStack_21c * 0xc);
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = *param_1;
        puVar14[1] = param_1[1];
        puVar14[2] = param_1[2];
      }
      uStack_21c = uStack_21c + 1;
      param_1 = param_1 + 4;
      uVar16 = uStack_14c;
      break;
    case 0x50:
      iVar8 = fn_82CF1998(iVar8,puVar1 + 2,1,param_5 != '\0');
      uVar16 = uStack_14c;
switchD_82cf34f4_caseD_4e:
      param_1 = param_1 + 1;
      break;
    case 0x53:
      if (uVar16 != 0) {
        fn_82CF0998(iVar8,param_3,puVar5 + uVar16 * 0xc + -0xc,param_1);
        iVar8 = fn_82CF1998(*(undefined4 *)(iVar8 + 0x48),puVar1 + 2,0,param_5 != '\0');
        *(undefined4 *)(puVar5 + uVar16 * 0xc + -0xc) = *param_1;
        *(undefined4 *)(puVar5 + uVar16 * 0xc + -8) = param_1[1];
        *(undefined4 *)(puVar5 + uVar16 * 0xc + -4) = param_1[2];
        uVar16 = uStack_14c;
        uVar15 = uStack_21c;
        goto switchD_82cf34f4_caseD_6d;
      }
      goto switchD_82cf34f4_caseD_47;
    case 0x54:
      iVar8 = fn_82CF1998(iVar8,puVar1 + 2,0,param_5 != '\0');
      iVar9 = fn_82CE5410();
      if (uStack_14c == (uStack_148 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),&puStack_150,0xc);
      }
      puVar14 = (undefined4 *)(puStack_150 + uStack_14c * 0xc);
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = *param_1;
        puVar14[1] = param_1[1];
        puVar14[2] = param_1[2];
      }
      uStack_14c = uStack_14c + 1;
      iVar9 = fn_82CE5410();
      if (uStack_21c == (uStack_218 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),&puStack_220,0xc);
      }
      puVar14 = (undefined4 *)(puStack_220 + uStack_21c * 0xc);
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = *param_1;
        puVar14[1] = param_1[1];
        puVar14[2] = param_1[2];
      }
      uVar16 = uStack_14c;
      uVar15 = uStack_21c + 1;
    case 0x6d:
switchD_82cf34f4_caseD_6d:
      uStack_21c = uVar15;
      param_1 = param_1 + 3;
      break;
    case 0x6c:
      if ((1 < (int)uVar16) && (**(char **)(puVar5 + uVar16 * 0xc + -0xc) == 'S')) {
        fn_82CF0998(iVar8,param_3,puVar5 + uVar16 * 0xc + -0xc,param_1);
        uVar11 = (ulonglong)uStack_21c;
        uStack_14c = uStack_14c - 1;
        iVar8 = *(int *)(iVar8 + 0x48);
        iVar9 = fn_82CE5410();
        uVar16 = (uint)(uVar11 - 1);
        if ((int)(uStack_218 & 0x3fffffff) < (int)uVar16) {
          lVar17 = ((ulonglong)uStack_218 & 0x3fffffff) << 1;
          if ((int)lVar17 <= (int)uVar16) {
            lVar17 = uVar11 - 1;
          }
          fn_82CE6310(*(undefined4 *)(iVar9 + 0x10),&puStack_220,lVar17,0xc);
        }
        uStack_21c = uVar16;
        fn_82CF0998(iVar8,param_3,puStack_150 + uStack_14c * 0xc + -0xc,param_1);
        uVar2 = uStack_21c;
        uStack_14c = uStack_14c - 1;
        iVar8 = *(int *)(iVar8 + 0x48);
        iVar9 = fn_82CE5410();
        uVar3 = *(undefined4 *)(iVar9 + 0x10);
        uVar11 = CONCAT44(uStack_218,uStack_218);
LAB_82cf3718:
        uVar15 = (uint)((ulonglong)uVar2 - 1);
        uVar16 = uStack_14c;
        if ((int)(uVar11 & 0x3fffffff) < (int)uVar15) {
          lVar17 = (uVar11 & 0x3fffffff) << 1;
          if ((int)lVar17 <= (int)uVar15) {
            lVar17 = (ulonglong)uVar2 - 1;
          }
          fn_82CE6310(uVar3,&puStack_220,lVar17,0xc);
          uVar16 = uStack_14c;
        }
        goto switchD_82cf34f4_caseD_6d;
      }
      goto switchD_82cf34f4_caseD_47;
    case 0x70:
      iVar8 = *(int *)(iVar8 + 0x48);
      if (iVar8 == 0) goto switchD_82cf34f4_caseD_47;
      param_1 = param_1 + 1;
    }
switchD_82cf34f4_caseD_46:
    puVar5 = puStack_150;
  }
switchD_82cf34f4_caseD_47:
  iVar8 = fn_82CE5410();
  uStack_21c = 0;
  if ((uStack_218 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar8 + 0x10) + 0x10))
              (*(int **)(iVar8 + 0x10),puStack_220,uStack_218 & 0x3fffffff,0xc);
  }
  puStack_220 = (undefined1 *)0x0;
  uStack_218 = 0x80000000;
  iVar8 = fn_82CE5410();
  uStack_14c = 0;
  if ((uStack_148 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar8 + 0x10) + 0x10))
              (*(int **)(iVar8 + 0x10),puStack_150,uStack_148 & 0x3fffffff,0xc);
  }
  return iVar7;
}

