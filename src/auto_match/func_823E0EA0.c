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
extern int fn_823D9F58();
extern int fn_823DA180();
extern int fn_823E0DA0();
extern unsigned int lbl_821CC160;


char fn_823E0EA0(longlong param_1,undefined8 param_2,uint *param_3,int *param_4)

{
  ulonglong uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char *pcVar6;
  char cVar7;
  longlong lVar8;
  undefined4 *puVar9;
  int iVar10;
  ulonglong uVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined4 **ppuVar14;
  uint uVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 *puStack_40;
  undefined4 *apuStack_3c [15];
  
  uVar15 = *param_3;
  lVar16 = param_1 + 4;
  iVar4 = (int)param_1;
  *(undefined1 *)(iVar4 + 100) = 0;
  pcVar6 = (char *)fn_823E0DA0(param_2,uVar15);
  uVar11 = param_1 + 0x24;
  iVar10 = (int)uVar11;
  do {
    pcVar12 = (char *)uVar11;
    uVar1 = param_1 + 100U & 0xffffffff;
    bVar2 = (uVar11 & 0xffffffff) == uVar1;
    if (uVar1 <= (uVar11 & 0xffffffff)) goto LAB_823e0efc;
    cVar7 = pcVar12[(int)pcVar6 - iVar10];
    *pcVar12 = cVar7;
    uVar11 = uVar11 + 1;
    pcVar12 = (char *)uVar11;
  } while (cVar7 != '\0');
  bVar2 = (uVar11 & 0xffffffff) == (param_1 + 100U & 0xffffffff);
LAB_823e0efc:
  if (bVar2) {
    pcVar12[-1] = '\0';
  }
  if (*pcVar6 == '\0') {
    return '\x04';
  }
  iVar10 = *(int *)((int)param_1 + 0x20);
  puVar13 = (undefined4 *)((uint)(param_3 + 4) & 0xfffffff0);
  uVar23 = puVar13[1];
  uVar24 = puVar13[2];
  uVar25 = puVar13[3];
  puVar9 = (undefined4 *)((int)param_1 + 0xb0U & 0xfffffff0);
  *puVar9 = *puVar13;
  puVar9[1] = uVar23;
  puVar9[2] = uVar24;
  puVar9[3] = uVar25;
  puStack_40 = *(undefined4 **)(iVar10 + 0x1a4);
  puVar13 = (undefined4 *)puStack_40[1];
  while (*(char *)((int)puVar13 + 0x51) == '\0') {
    if ((uint)puVar13[4] < uVar15) {
      puVar13 = (undefined4 *)puVar13[2];
    }
    else {
      puStack_40 = puVar13;
      puVar13 = (undefined4 *)*puVar13;
    }
  }
  puVar13 = *(undefined4 **)(iVar10 + 0x1a4);
  if ((puStack_40 == puVar13) || (uVar15 < (uint)puStack_40[4])) {
    apuStack_3c[0] = puVar13;
    ppuVar14 = apuStack_3c;
  }
  else {
    ppuVar14 = &puStack_40;
  }
  puVar9 = *ppuVar14 + 8;
  if (*ppuVar14 == puVar13) {
    puVar9 = (undefined4 *)0x0;
  }
  dVar17 = (double)((float)puVar9[9] * (float)puVar9[0xb]);
  dVar19 = (double)((float)puVar9[0xb] + (float)((double)(float)param_3[1] - dVar17));
  dVar18 = (double)fn_823D9F58(lVar16,1);
  dVar22 = (double)lbl_821CC160;
  bVar2 = *param_4 == 0;
  dVar20 = dVar22;
  dVar21 = dVar22;
  if (bVar2) {
    dVar21 = (double)(float)(dVar18 + dVar17);
    dVar20 = (double)(float)((double)(float)puVar9[10] * (double)(float)puVar9[0xb] + dVar18);
  }
  uVar15 = (uint)bVar2;
  bVar5 = true;
  if ((dVar22 < (double)(float)param_3[2]) && (param_4[1] == 0)) {
    bVar5 = false;
    uVar15 = (uint)bVar2;
    fn_823D9F58((double)(float)((double)*(float *)(pcVar6 + 0x80) + dVar19),lVar16,5);
  }
  if (uVar15 != 0) {
    if (*(int *)(pcVar6 + 0x84) == 0) {
      fn_823D9F58(dVar21,lVar16,3);
    }
    fn_823D9F58(dVar20,lVar16,4);
  }
  bVar2 = true;
  if (param_4[2] == 0) {
    if (*(int *)(pcVar6 + 0x74) != 0) {
      if (!bVar5) {
        bVar2 = false;
        goto LAB_823e10fc;
      }
      uVar15 = *(uint *)(iVar4 + 0xc);
      if (uVar15 < *(uint *)(iVar4 + 8)) {
        uVar3 = *(uint *)lVar16;
        iVar10 = uVar15 * 0xc;
        do {
          if (*(int *)(iVar10 + uVar3) == 6) {
            iVar10 = uVar15 * 0xc + uVar3;
            goto LAB_823e10c0;
          }
          uVar15 = uVar15 + 1;
          iVar10 = iVar10 + 0xc;
        } while (uVar15 < *(uint *)(iVar4 + 8));
      }
      iVar10 = 0;
LAB_823e10c0:
      if (iVar10 != 0) {
        dVar19 = (double)*(float *)(iVar10 + 8);
      }
    }
    fn_823D9F58(dVar19,lVar16,0);
  }
LAB_823e10fc:
  uVar11 = (ulonglong)*(uint *)lVar16;
  lVar16 = (ulonglong)*(uint *)(iVar4 + 0xc) * 0xc + uVar11;
  lVar8 = ((ulonglong)*(uint *)(iVar4 + 8) - (ulonglong)*(uint *)(iVar4 + 0xc)) * 0xc + uVar11;
  fn_823DA180(lVar16,lVar8,((int)lVar8 - (int)lVar16) / 0xc,0xffffffff823d9f38);
  if (bVar2) {
    cVar7 = !bVar5;
  }
  else {
    cVar7 = !bVar5 + '\x02';
  }
  return cVar7;
}

