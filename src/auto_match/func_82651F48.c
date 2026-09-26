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
#define NAN(x) ((x) != (x))
extern double _seed_nan;
extern int fn_826518E0();
extern int fn_82651A20();
extern int fn_82F6B030();
extern __int64 lRam83275b70;
extern __int64 lRam83275bc0;
extern __int64 lRam83275be0;
extern __int64 lRam83275be8;
extern __int64 lRam83275bf0;
extern __int64 lRam83275c50;
extern __int64 lRam83275d18;
extern __int64 lRam83275d20;
extern __int64 lRam83275d28;
extern __int64 lRam83275d30;
extern __int64 lRam83275d38;
extern __int64 lRam83275dc0;
extern __int64 lRam83275e10;
extern __int64 lRam83275e30;
extern __int64 lRam83275e38;
extern __int64 lRam83275e40;
extern __int64 lRam83275ea0;
extern __int64 lRam83275f68;
extern __int64 lRam83275f70;
extern __int64 lRam83275f78;
extern __int64 lRam83275f80;
extern __int64 lRam83275f88;
extern unsigned int lbl_82005748;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83275B68;
extern unsigned int lbl_83275DB8;
extern unsigned int uRam83275d90;
extern unsigned int uStack_38;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_82651F48(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  byte *pbVar3;
  longlong lVar4;
  int iVar6;
  longlong lVar5;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulonglong uStack_38;
  
  switch(param_2) {
  case 0:
    return (double)((float)*(uint *)(param_1 + 0x5520) * *(float *)(param_1 + 0x5530));
  case 1:
    if (*(uint *)(param_1 + 0x5520) != 0) {
      return (double)(*(float *)(param_1 + 0x552c) / (float)*(uint *)(param_1 + 0x5520));
    }
    break;
  case 2:
    uVar8 = *(uint *)(param_1 + 0x4188);
    goto code_r0x82651ffc;
  case 3:
    fVar1 = (float)*(uint *)(param_1 + 0x5548) / (float)*(uint *)(param_1 + 0x5520);
    goto code_r0x82652044;
  case 4:
    uVar2 = *(uint *)(param_1 + 0x5520);
    uVar8 = *(uint *)(param_1 + 0x554c);
    goto code_r0x82652090;
  case 5:
    uVar2 = *(uint *)(param_1 + 0x5520);
    uVar8 = (uVar2 - *(int *)(param_1 + 0x554c)) - *(int *)(param_1 + 0x5548);
code_r0x82652090:
    fVar1 = (float)uVar8 / (float)uVar2;
code_r0x82652044:
    dVar12 = (double)lbl_82005748;
    dVar13 = (double)(float)((double)fVar1 * dVar12);
    if (dVar13 < (double)lbl_821CC160) {
      return (double)lbl_821CC160;
    }
    if (dVar13 <= dVar12) {
      return dVar13;
    }
    return dVar12;
  case 6:
    uVar8 = *(uint *)(param_1 + 0x5550);
    iVar6 = *(int *)(param_1 + 0x2a90);
    pbVar3 = (byte *)(((uVar8 + 1 & 7) + 0x10) * 4 + iVar6);
    uVar10 = (ulonglong)pbVar3[3] << 0x18 | (ulonglong)pbVar3[2] << 0x10 | (ulonglong)pbVar3[1] << 8
             | (ulonglong)*pbVar3;
    pbVar3 = (byte *)(((uVar8 - 1 & 7) + 0x10) * 4 + iVar6);
    uVar9 = (ulonglong)pbVar3[3] << 0x18 | (ulonglong)pbVar3[2] << 0x10 | (ulonglong)pbVar3[1] << 8
            | (ulonglong)*pbVar3;
    pbVar3 = (byte *)(((uVar8 & 7) + 0x10) * 4 + iVar6);
    uVar7 = (ulonglong)pbVar3[3] << 0x18 | (ulonglong)pbVar3[2] << 0x10 | (ulonglong)pbVar3[1] << 8
            | (ulonglong)*pbVar3;
    if (uVar10 == 0) {
      return (_seed_nan);
    }
    *(uint *)(param_1 + 0x5550) = uVar8 + 2;
    if (uVar7 == 0) {
      return (_seed_nan);
    }
    if (uVar9 == 0) {
      return (_seed_nan);
    }
    if (uVar7 <= uVar9) {
      uVar7 = uVar7 + 0x100000000;
    }
    if (uVar10 <= uVar7) {
      uVar10 = uVar10 + 0x100000000;
    }
    dVar12 = (double)fn_82F6B030(uVar10 - uVar7);
    lVar5 = uVar10 - uVar9;
    goto code_r0x8265223c;
  case 7:
  case 0x12:
    iVar6 = fn_826518E0();
    if (iVar6 != 0) {
      lVar11 = lbl_83275B68 - lbl_83275DB8;
      uStack_38 = (ulonglong)uRam83275d90;
      lVar5 = lRam83275b70 - lRam83275dc0;
      if (param_2 == 7) {
        lVar5 = lVar5 - uStack_38;
      }
      if (lVar5 != 0) {
        dVar12 = (double)fn_82F6B030();
        dVar13 = (double)fn_82F6B030(lVar11);
        fVar1 = lbl_821CA460 - (float)(dVar12 / dVar13);
        goto code_r0x82652044;
      }
    }
    break;
  case 8:
    iVar6 = fn_826518E0();
    if (iVar6 == 0) {
      return (_seed_nan);
    }
    lVar5 = lRam83275be0 - lRam83275e30;
    lVar11 = lRam83275be8;
    lVar4 = lRam83275e38;
    goto joined_r0x826522e4;
  case 9:
    iVar6 = fn_826518E0();
    if (iVar6 == 0) {
      return (_seed_nan);
    }
    if (lRam83275be0 == lRam83275e30) {
      return (_seed_nan);
    }
    dVar12 = (double)fn_82F6B030();
    dVar13 = (double)fn_82F6B030(lRam83275be8 - lRam83275e38);
    dVar13 = dVar12 - dVar13;
    dVar14 = (double)fn_82F6B030(lRam83275bf0 - lRam83275e40);
    dVar12 = (dVar13 - dVar14) / dVar12;
    goto code_r0x82652248;
  case 10:
    iVar6 = fn_826518E0();
    if (iVar6 == 0) {
      return (_seed_nan);
    }
    lVar5 = lRam83275be0 - lRam83275e30;
    lVar11 = lRam83275bf0;
    lVar4 = lRam83275e40;
joined_r0x826522e4:
    if (lVar5 == 0) {
      return (_seed_nan);
    }
    dVar12 = (double)fn_82F6B030(lVar11 - lVar4);
code_r0x8265223c:
    dVar13 = (double)fn_82F6B030(lVar5);
    dVar12 = dVar12 / dVar13;
code_r0x82652248:
    fVar1 = (float)dVar12;
    goto code_r0x82652044;
  case 0xb:
    iVar6 = fn_826518E0();
    if (iVar6 == 0) {
      return (_seed_nan);
    }
    lVar5 = ((lRam83275d20 - lRam83275f70) - lRam83275f68) + lRam83275d18;
    goto code_r0x8265232c;
  case 0xc:
    iVar6 = fn_826518E0();
    lVar5 = lRam83275d28;
    lVar11 = lRam83275f78;
    if (iVar6 == 0) {
      return (_seed_nan);
    }
    goto code_r0x8265235c;
  case 0xd:
    iVar6 = fn_826518E0();
    lVar5 = lRam83275c50;
    lVar11 = lRam83275ea0;
    goto joined_r0x82652394;
  case 0xe:
    iVar6 = fn_826518E0();
    lVar5 = lRam83275bc0;
    lVar11 = lRam83275e10;
joined_r0x82652394:
    if (iVar6 != 0) {
code_r0x8265235c:
      lVar5 = lVar5 - lVar11;
code_r0x8265232c:
      lVar11 = lbl_83275B68 - lbl_83275DB8;
code_r0x82652330:
      dVar12 = (double)fn_82651A20(lVar5,lVar11);
      return dVar12;
    }
    break;
  case 0xf:
    iVar6 = fn_826518E0();
    lVar5 = lRam83275d30;
    lVar11 = lRam83275f80;
    goto joined_r0x826523f0;
  case 0x10:
    iVar6 = fn_826518E0();
    lVar5 = lRam83275d38;
    lVar11 = lRam83275f88;
joined_r0x826523f0:
    if (iVar6 == 0) {
      return (_seed_nan);
    }
    lVar5 = (lVar5 - lVar11) * 2;
    lVar11 = lbl_83275B68 - lbl_83275DB8;
    goto code_r0x82652330;
  case 0x11:
    uVar8 = *(uint *)(param_1 + 0x5c10);
code_r0x82651ffc:
    return (double)uVar8;
  }
  return (_seed_nan);
}

