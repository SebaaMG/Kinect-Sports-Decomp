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
extern int fn_8265C940();
extern int fn_828FAF58();
extern int fn_828FBB60();
extern int fn_82F65AC0();


undefined8 fn_828F6890(int param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  uint *puVar7;
  int iVar8;
  char *pcVar9;
  double *pdVar11;
  ulonglong uVar10;
  uint uVar12;
  double *pdVar13;
  double *pdVar14;
  uint *puVar15;
  int *piVar16;
  double dVar17;
  double adStack_80 [16];
  
  piVar16 = (int *)(param_1 + 0x280);
  uVar6 = fn_828FBB60(*(undefined4 *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x2a0),
                            piVar16);
  if ((int)uVar6 < 0) goto LAB_828f6c60;
  iVar8 = *piVar16;
  if (iVar8 == 1) {
    pdVar13 = (double *)(param_1 + 0x288);
    pcVar9 = "(";
    pdVar14 = pdVar13;
    do {
      cVar1 = *(char *)pdVar14;
      cVar2 = *pcVar9;
      if (cVar1 == '\0') break;
      pdVar14 = (double *)((int)pdVar14 + 1);
      pcVar9 = pcVar9 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 != cVar2) goto LAB_828f6c40;
    uVar6 = fn_828FBB60(*(undefined4 *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x2a0),
                              piVar16);
    if ((int)uVar6 < 0) goto LAB_828f6c60;
    iVar8 = *piVar16;
    if (iVar8 != 9) goto LAB_828f6c40;
    uVar3 = *(uint *)pdVar13;
    uVar6 = fn_828FBB60(*(undefined4 *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x2a0),
                              piVar16);
    if ((int)uVar6 < 0) goto LAB_828f6c60;
    iVar8 = *piVar16;
    if (iVar8 != 1) goto LAB_828f6c40;
    pdVar14 = pdVar13;
    pcVar9 = ",";
    do {
      cVar1 = *(char *)pdVar14;
      cVar2 = *pcVar9;
      if (cVar1 == '\0') break;
      pdVar14 = (double *)((int)pdVar14 + 1);
      pcVar9 = pcVar9 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 != cVar2) goto LAB_828f6c40;
    uVar6 = fn_828FBB60(*(undefined4 *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x2a0),
                              piVar16);
    if ((int)uVar6 < 0) goto LAB_828f6c60;
    iVar8 = *piVar16;
    if (iVar8 != 9) goto LAB_828f6c40;
    uVar4 = *(uint *)pdVar13;
    uVar12 = 0;
    pdVar14 = adStack_80;
    do {
      bVar5 = false;
      uVar6 = fn_828FBB60(*(undefined4 *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x2a0),
                                piVar16);
      if ((int)uVar6 < 0) goto LAB_828f6c60;
      iVar8 = *piVar16;
      pdVar11 = pdVar13;
      pcVar9 = ",";
      if (iVar8 != 1) goto LAB_828f6c40;
      do {
        cVar1 = *(char *)pdVar11;
        cVar2 = *pcVar9;
        if (cVar1 == '\0') break;
        pdVar11 = (double *)((int)pdVar11 + 1);
        pcVar9 = pcVar9 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 != cVar2) goto LAB_828f6c40;
      uVar6 = fn_828FBB60(*(undefined4 *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x2a0),
                                piVar16);
      if ((int)uVar6 < 0) goto LAB_828f6c60;
      pdVar11 = pdVar13;
      pcVar9 = "-";
      if (*piVar16 == 1) {
        do {
          cVar1 = *(char *)pdVar11;
          cVar2 = *pcVar9;
          if (cVar1 == '\0') break;
          pdVar11 = (double *)((int)pdVar11 + 1);
          pcVar9 = pcVar9 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          bVar5 = true;
          uVar6 = fn_828FBB60(*(undefined4 *)(param_1 + 0x278),
                                    *(undefined4 *)(param_1 + 0x2a0),piVar16);
          if ((int)uVar6 < 0) goto LAB_828f6c60;
        }
      }
      iVar8 = *piVar16;
      if (iVar8 == 2) {
LAB_828f6ad4:
        uVar10 = (ulonglong)*(uint *)pdVar13;
LAB_828f6ae0:
        dVar17 = (double)(longlong)uVar10;
      }
      else {
        if (iVar8 == 3) {
          uVar10 = (ulonglong)(int)*(uint *)pdVar13;
          goto LAB_828f6ae0;
        }
        if (iVar8 == 4) goto LAB_828f6ad4;
        if ((iVar8 < 5) || (8 < iVar8)) goto LAB_828f6c40;
        dVar17 = *pdVar13;
      }
      *pdVar14 = dVar17;
      if (bVar5) {
        *pdVar14 = -dVar17;
      }
      uVar12 = uVar12 + 1;
      pdVar14 = pdVar14 + 1;
    } while (uVar12 < 4);
    uVar6 = fn_828FBB60(*(undefined4 *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x2a0),
                              piVar16);
    if ((int)uVar6 < 0) goto LAB_828f6c60;
    iVar8 = *piVar16;
    if (iVar8 != 1) goto LAB_828f6c40;
    pcVar9 = ")";
    do {
      cVar1 = *(char *)pdVar13;
      cVar2 = *pcVar9;
      if (cVar1 == '\0') break;
      pdVar13 = (double *)((int)pdVar13 + 1);
      pcVar9 = pcVar9 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 != cVar2) goto LAB_828f6c40;
    uVar6 = fn_828FBB60(*(undefined4 *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x2a0),
                              piVar16);
    if ((int)uVar6 < 0) goto LAB_828f6c60;
    iVar8 = *piVar16;
    if ((iVar8 != 0xc) && (iVar8 != 0xd)) goto LAB_828f6c40;
    puVar7 = (uint *)fn_8265C940(0x30,0x24810000);
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)0x0;
    }
    else {
      puVar7[10] = 0;
    }
    if (puVar7 == (uint *)0x0) {
      uVar6 = 0xffffffff8007000e;
      goto LAB_828f6c60;
    }
    *puVar7 = uVar3;
    puVar7[1] = uVar4;
    puVar15 = (uint *)(param_1 + 0x40);
    *(double *)(puVar7 + 2) = adStack_80[0];
    *(double *)(puVar7 + 4) = adStack_80[1];
    *(double *)(puVar7 + 6) = adStack_80[2];
    *(double *)(puVar7 + 8) = adStack_80[3];
    iVar8 = *(int *)(param_1 + 0x40);
    while ((iVar8 != 0 && (iVar8 = fn_82F65AC0(*(undefined4 *)(iVar8 + 4),puVar7[1]), iVar8 < 0)))
    {
      uVar3 = *puVar15;
      puVar15 = (uint *)(uVar3 + 0x28);
      iVar8 = *(int *)(uVar3 + 0x28);
    }
    puVar7[10] = *puVar15;
    *puVar15 = (uint)puVar7;
  }
  else {
LAB_828f6c40:
    if ((iVar8 != 0xc) && (iVar8 != 0xd)) {
      fn_828FAF58(*(undefined4 *)(param_1 + 0x278),0);
    }
  }
  uVar6 = 0;
LAB_828f6c60:
  *(undefined4 *)(param_1 + 0x4c) = 1;
  return uVar6;
}

