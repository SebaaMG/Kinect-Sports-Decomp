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
extern unsigned int fStack_74;
extern unsigned int fStack_78;
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern int fn_82725DF0();
extern int fn_827912D8();
extern int fn_8279A718();
extern int fn_8279C658();
extern int fn_8279C910();
extern int fn_827A0B88();
extern int fn_827A0E48();
extern int fn_827A1508();
extern int fn_827A1590();
extern int fn_827A1630();
extern int fn_827A1F10();
extern int fn_827A2850();
extern int fn_827A2950();
extern int fn_827A29D0();
extern int fn_827A3440();
extern int fn_827A3A50();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;


longlong fn_827A4850(int param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  ulonglong uVar9;
  int *piVar13;
  undefined8 uVar10;
  longlong lVar11;
  int iVar14;
  char cVar16;
  longlong lVar12;
  undefined4 uVar15;
  uint *puVar17;
  short sVar18;
  ushort uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  double dVar25;
  char acStack_c0 [4];
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  short sStack_9c;
  uint uStack_98;
  uint uStack_94;
  short sStack_90;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  iVar3 = *(int *)(param_1 + 8);
  uVar9 = fn_827912D8(*(undefined4 *)(iVar3 + 8));
  piVar13 = *(int **)(iVar3 + 0x10);
  bVar8 = false;
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar23 = (ulonglong)uVar4;
  lVar20 = 0;
  if (piVar13 != (int *)0x0) {
    param_2 = (**(code **)(*piVar13 + 0x18))(piVar13,param_1,param_2);
  }
  bVar7 = false;
  uVar19 = *(ushort *)(param_1 + 0x68) >> 6 & 1;
  dVar25 = (double)lbl_8200133C;
  uVar5 = *(uint *)(*(int *)(param_1 + 8) + 0x1c);
  uVar22 = (ulonglong)uVar5;
  uVar6 = *(uint *)(*(int *)(param_1 + 8) + 0x20);
  uVar21 = (ulonglong)uVar6;
  if ((*(int *)(param_1 + 0x10) == 0) ||
     (piVar13 = (int *)fn_82725DF0(*(int *)(param_1 + 0x10),param_2,param_3,0),
     piVar13 == (int *)0x0)) goto LAB_827a4940;
  switch(*piVar13) {
  case 2:
    if ((*(ushort *)(param_1 + 0x68) >> 1 & 1) != 0) {
      uVar19 = 1;
    }
  default:
LAB_827a4940:
    bVar7 = true;
    break;
  case 4:
    if (uVar4 == 0xffffffff) {
      uVar23 = uVar9;
    }
    uVar9 = uVar23;
    if ((uVar9 & 0xffffffff) != 0) {
      uVar9 = uVar9 - 1;
    }
    uVar23 = uVar9;
    if ((*(ushort *)(param_1 + 0x68) >> 6 & 1) == 0) {
      bVar1 = uVar22 < uVar21;
code_r0x827a49a0:
      uVar23 = uVar9;
      if (uVar21 != uVar22) goto code_r0x827a49a4;
    }
    break;
  case 5:
    if ((uVar4 != 0xffffffff) && (uVar24 = uVar9 & 0xffffffff, uVar9 = uVar23, uVar23 < uVar24)) {
      uVar9 = uVar23 + 1;
    }
    uVar23 = uVar9;
    if ((*(ushort *)(param_1 + 0x68) >> 6 & 1) == 0) {
      bVar1 = uVar21 < uVar22;
      goto code_r0x827a49a0;
    }
    break;
  case 6:
    fStack_80 = lbl_821AAD20;
    fStack_7c = lbl_821AAD20;
    fStack_78 = lbl_821AAD20;
    fStack_74 = lbl_821AAD20;
    if (((*(ushort *)(param_1 + 0x68) >> 6 & 1) == 0) && (bVar1 = uVar22 < uVar21, uVar22 != uVar21)
       ) {
code_r0x827a49a4:
      uVar23 = uVar21;
      if (bVar1) {
        uVar23 = uVar22;
      }
    }
    else {
      cVar16 = fn_827A3440(param_1,*(undefined4 *)(param_1 + 0x18),&fStack_80,&uStack_bc,0,1,0);
      if (cVar16 != '\0') {
        if ((ulonglong)uStack_bc != 0) {
          iVar14 = *(int *)(param_1 + 8);
          uVar24 = (ulonglong)uStack_bc - 1;
          dVar25 = (double)*(float *)(param_1 + 0x48);
          if ((double)*(float *)(param_1 + 0x48) < 0.0) {
            dVar25 = (double)fStack_80;
          }
          goto code_r0x827a4b48;
        }
        goto code_r0x827a4a68;
      }
    }
    break;
  case 7:
    fStack_80 = lbl_821AAD20;
    fStack_7c = lbl_821AAD20;
    fStack_78 = lbl_821AAD20;
    fStack_74 = lbl_821AAD20;
    if (((*(ushort *)(param_1 + 0x68) >> 6 & 1) == 0) && (bVar1 = uVar21 < uVar22, uVar21 != uVar22)
       ) goto code_r0x827a49a4;
    cVar16 = fn_827A3440(param_1,*(undefined4 *)(param_1 + 0x18),&fStack_80,&uStack_bc,0,1,0);
    if (cVar16 != '\0') {
      uVar24 = (ulonglong)uStack_bc + 1;
      uVar23 = fn_827A0B88(*(undefined4 *)(param_1 + 8));
      if ((uVar24 & 0xffffffff) < (uVar23 & 0xffffffff)) {
        iVar14 = *(int *)(param_1 + 8);
        dVar25 = (double)*(float *)(param_1 + 0x48);
        if ((double)*(float *)(param_1 + 0x48) < 0.0) {
          dVar25 = (double)fStack_80;
        }
        uStack_bc = (uint)uVar24;
        goto code_r0x827a4b48;
      }
      goto code_r0x827a4a70;
    }
    break;
  case 8:
    fStack_80 = lbl_821AAD20;
    fStack_7c = lbl_821AAD20;
    fStack_78 = lbl_821AAD20;
    fStack_74 = lbl_821AAD20;
    cVar16 = fn_827A3440(param_1,*(undefined4 *)(param_1 + 0x18),&fStack_80,&uStack_bc,0,1,0);
    if (cVar16 != '\0') {
      dVar25 = (double)*(float *)(param_1 + 0x48);
      if ((double)*(float *)(param_1 + 0x48) < 0.0) {
        dVar25 = (double)fStack_80;
      }
      lVar12 = fn_827A1F10(*(undefined4 *)(param_1 + 8));
      iVar14 = *(int *)(param_1 + 8);
      uVar24 = (lVar12 - (ulonglong)*(uint *)(iVar14 + 0x38)) + 1;
      if ((ulonglong)uStack_bc < (uVar24 & 0xffffffff)) goto code_r0x827a4a68;
      uVar24 = uStack_bc - uVar24;
code_r0x827a4b48:
      uVar23 = fn_827A0E48(dVar25,iVar14,uVar24);
    }
    break;
  case 9:
    fStack_80 = lbl_821AAD20;
    fStack_7c = lbl_821AAD20;
    fStack_78 = lbl_821AAD20;
    fStack_74 = lbl_821AAD20;
    cVar16 = fn_827A3440(param_1,*(undefined4 *)(param_1 + 0x18),&fStack_80,&uStack_bc,0,1,0);
    if (cVar16 != '\0') {
      dVar25 = (double)*(float *)(param_1 + 0x48);
      if ((double)*(float *)(param_1 + 0x48) < 0.0) {
        dVar25 = (double)fStack_80;
      }
      lVar12 = fn_827A1F10(*(undefined4 *)(param_1 + 8));
      uVar24 = (lVar12 - (ulonglong)*(uint *)(*(int *)(param_1 + 8) + 0x38)) + (ulonglong)uStack_bc
               + 1;
      uVar23 = fn_827A0B88(*(int *)(param_1 + 8));
      if ((uVar24 & 0xffffffff) < (uVar23 & 0xffffffff)) {
        iVar14 = *(int *)(param_1 + 8);
        goto code_r0x827a4b48;
      }
      goto code_r0x827a4a70;
    }
    break;
  case 10:
    uVar9 = fn_827A1508(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
    if ((int)uVar9 != -1) {
      iVar14 = *(int *)(param_1 + 8);
      goto code_r0x827a4a08;
    }
    break;
  case 0xb:
    uVar10 = fn_827A1508(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
    if ((int)uVar10 != -1) {
      acStack_c0[0] = '\0';
      lVar12 = fn_827A1630(*(undefined4 *)(param_1 + 8),uVar10,acStack_c0);
      if (acStack_c0[0] != '\0') {
        lVar12 = lVar12 + -1;
      }
      lVar11 = fn_827A1590(*(undefined4 *)(param_1 + 8),uVar10);
      uVar23 = lVar11 + lVar12;
    }
    break;
  case 0xc:
    iVar14 = *(int *)(param_1 + 8);
    uVar9 = (ulonglong)*(uint *)(iVar14 + 0x38);
code_r0x827a4a08:
    uVar23 = fn_827A1590(iVar14,uVar9);
    break;
  case 0xd:
    uVar10 = fn_827A1F10(*(undefined4 *)(param_1 + 8));
    acStack_c0[0] = '\0';
    lVar12 = fn_827A1630(*(undefined4 *)(param_1 + 8),uVar10,acStack_c0);
    if (acStack_c0[0] != '\0') {
      lVar12 = lVar12 + -1;
    }
    lVar11 = fn_827A1590(*(undefined4 *)(param_1 + 8),uVar10);
    uVar23 = lVar11 + lVar12;
    break;
  case 0xe:
code_r0x827a4a68:
    uVar23 = 0;
    break;
  case 0xf:
code_r0x827a4a70:
    uVar23 = uVar9;
    break;
  case 0x10:
    if ((*(ushort *)(param_1 + 0x68) & 1) == 0) {
      uVar15 = *(undefined4 *)(param_1 + 8);
      if (uVar22 == uVar21) {
        uStack_b8 = uVar4;
        lVar12 = fn_8279C910(uVar15,8,&uStack_b8);
        uVar9 = uVar23 - lVar12;
      }
      else {
        puVar17 = &uStack_b0;
        uStack_b0 = uVar5;
        uStack_ac = uVar6;
code_r0x827a4d24:
        fn_8279C910(uVar15,4,puVar17);
code_r0x827a4d2c:
        uVar9 = uVar22;
        if (uVar21 <= uVar22) {
          uVar9 = uVar21;
        }
      }
code_r0x827a4d3c:
      bVar8 = true;
      uVar23 = uVar9;
    }
    break;
  case 0x11:
    if ((*(ushort *)(param_1 + 0x68) & 1) == 0) {
      if (uVar22 != uVar21) {
        uVar15 = *(undefined4 *)(param_1 + 8);
        puVar17 = &uStack_a8;
        uStack_a8 = uVar5;
        uStack_a4 = uVar6;
        goto code_r0x827a4d24;
      }
      if ((ulonglong)*(uint *)(param_1 + 0x18) < (uVar9 & 0xffffffff)) {
        uStack_b4 = uVar4;
        fn_8279C910(*(undefined4 *)(param_1 + 8),3,&uStack_b4);
        uVar9 = uVar23;
        goto code_r0x827a4d3c;
      }
    }
    break;
  case 0x12:
    if (((*(ushort *)(param_1 + 0x68) & 1) == 0) &&
       (iVar14 = *(int *)(param_1 + 8), (*(byte *)(iVar14 + 0x13d) & 4) != 0)) {
      *(ushort *)(param_1 + 0x68) = *(ushort *)(param_1 + 0x68) & 0xffbf;
      sVar18 = (-(ushort)((*(byte *)(*(int *)(iVar14 + 8) + 0x20) & 2) != 0) & 3) + 10;
      if (uVar22 == uVar21) {
        uStack_a0 = *(undefined4 *)(param_1 + 0x18);
        sStack_9c = sVar18;
        fn_8279C910(iVar14,0,&uStack_a0);
        uVar9 = uVar23 + 1;
      }
      else {
        uStack_98 = uVar5;
        uStack_94 = uVar6;
        sStack_90 = sVar18;
        fn_8279C910(iVar14,5,&uStack_98);
        uVar23 = uVar22;
        if (uVar21 <= uVar22) {
          uVar23 = uVar21;
        }
        uVar9 = uVar23 + 1;
      }
      goto code_r0x827a4d3c;
    }
    break;
  case 0x13:
  case 0x15:
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar2 = *(ushort *)(param_1 + 0x68);
      if (((uVar2 & 1) == 0) && (*piVar13 != 0x13)) {
        *(ushort *)(param_1 + 0x68) = uVar2 & 0xffbf;
        fn_827A2950(param_1,uVar22,uVar21,uVar2 >> 2 & 1);
        goto code_r0x827a4d2c;
      }
      *(ushort *)(param_1 + 0x68) = uVar2 & 0xffbf;
      fn_827A2850(param_1,uVar22,uVar21,uVar2 >> 2 & 1);
      goto LAB_827a4940;
    }
    break;
  case 0x14:
    uVar9 = fn_827A29D0(param_1,uVar22,uVar21,*(ushort *)(param_1 + 0x68) >> 2 & 1);
    if ((int)uVar9 != -1) goto code_r0x827a4d3c;
    break;
  case 0x16:
    uVar22 = 0;
    fn_827A3A50(param_1,uVar9,*(ushort *)(param_1 + 0x68) >> 1 & 1);
    fn_8279C658(*(undefined4 *)(param_1 + 8),0,uVar9);
    uVar21 = uVar9;
    uVar23 = uVar9;
    goto LAB_827a4940;
  }
  if (bVar7) goto LAB_827a4f48;
  uVar2 = *(ushort *)(param_1 + 0x68);
  if ((ulonglong)*(uint *)(param_1 + 0x18) == (uVar23 & 0xffffffff)) {
    if (((uVar2 >> 6 & 1) == 0) && (uVar22 != (uVar21 & 0xffffffff))) {
      fn_827A3A50(param_1,uVar23,uVar2 >> 1 & 1);
      goto LAB_827a4f08;
    }
  }
  else {
    fn_827A3A50(param_1,uVar23,uVar2 >> 1 & 1);
    *(float *)(param_1 + 0x48) = (float)dVar25;
LAB_827a4f08:
    lVar20 = 1;
  }
  if (bVar8) {
    if (lVar20 == 0) {
      fn_8279A718(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
    }
    piVar13 = *(int **)(iVar3 + 0x10);
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 0x20))(piVar13,param_1);
    }
  }
LAB_827a4f48:
  if (uVar19 != 0) {
    *(ushort *)(param_1 + 0x68) = *(ushort *)(param_1 + 0x68) | 0x40;
  }
  return lVar20;
}

