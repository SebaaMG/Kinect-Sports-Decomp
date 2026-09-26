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
extern unsigned int fStack_5c;
extern unsigned int lbl_821CC160;


bool fn_82490900(double param_1,uint *param_2)

{
  float fVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fStack_5c;
  
  if (param_2[6] != 0) {
    puVar2 = (undefined4 *)param_2[9];
    for (puVar13 = (undefined4 *)param_2[8]; puVar13 != puVar2; puVar13 = puVar13 + 1) {
      (**(code **)(*(int *)*puVar13 + 0x10))();
    }
  }
  puVar11 = (uint *)param_2[1];
  puVar3 = (uint *)param_2[2];
  fVar1 = (float)((double)(float)param_2[0xe] + param_1);
  piVar4 = (int *)param_2[7];
  param_2[0xe] = (uint)fVar1;
  for (puVar12 = puVar11; (puVar12 != puVar3 && (*puVar12 != param_2[5])); puVar12 = puVar12 + 2) {
  }
  if (puVar12 == puVar3) {
LAB_824909a8:
    if (piVar4 == (int *)0x0) {
      return false;
    }
  }
  else {
    fStack_5c = (float)*(undefined8 *)puVar12;
    dVar14 = (double)fStack_5c;
    if (param_2[6] == 0) {
      while (dVar14 < (double)fVar1) {
        puVar12 = puVar12 + 2;
        param_2[0xe] = (uint)(float)((double)(float)param_2[0xe] - dVar14);
        if (puVar12 == puVar3) goto LAB_824909a8;
        fStack_5c = (float)*(undefined8 *)puVar12;
        dVar14 = (double)fStack_5c;
        param_2[5] = param_2[5] + 1;
        fVar1 = (float)param_2[0xe];
      }
    }
    else {
      param_2[6] = 0;
    }
    uVar5 = param_2[5];
    if (uVar5 == *param_2) {
      if (piVar4 == (int *)0x0) {
        return false;
      }
    }
    else if ((piVar4 == (int *)0x0) || (uVar5 <= (uint)piVar4[0xe])) {
      uVar6 = param_2[0x16];
      dVar14 = (double)(float)((double)(float)param_2[0xe] / dVar14);
      uVar10 = (uVar5 / uVar6) * uVar6;
      for (puVar12 = puVar11; (puVar12 != puVar3 && (*puVar12 != uVar10)); puVar12 = puVar12 + 2) {
      }
      for (; (puVar11 != puVar3 && (*puVar11 != uVar6 + uVar10)); puVar11 = puVar11 + 2) {
      }
      if (puVar12 == puVar3) {
        if (puVar11 == puVar3) {
          return false;
        }
        if (puVar12 == puVar3) {
          puVar12 = puVar11;
        }
      }
      if (puVar11 == puVar3) {
        puVar11 = puVar12;
      }
      bVar8 = false;
      dVar15 = (double)lbl_821CC160;
      dVar16 = dVar15;
      if (puVar12 != puVar11) {
        do {
          if (uVar5 <= *puVar12) {
            bVar8 = true;
          }
          if (!bVar8) {
            dVar16 = (double)(float)((double)(float)puVar12[1] + dVar16);
          }
          pfVar7 = (float *)(puVar12 + 1);
          puVar12 = puVar12 + 2;
          dVar15 = (double)(float)((double)*pfVar7 + dVar15);
        } while (puVar12 != puVar11);
        dVar15 = (double)(float)((double)(float)((double)(float)param_2[0xe] + dVar16) / dVar15);
      }
      puVar2 = (undefined4 *)param_2[9];
      for (puVar13 = (undefined4 *)param_2[8]; puVar13 != puVar2; puVar13 = puVar13 + 1) {
        (**(code **)(*(int *)*puVar13 + 8))
                  (param_1,dVar14,dVar15,(int *)*puVar13,param_2[5],(ulonglong)*param_2 - 1);
      }
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0xc))(param_1,piVar4);
      }
      return true;
    }
  }
  iVar9 = (**(code **)(*piVar4 + 0x10))(piVar4,param_2);
  return iVar9 == 0;
}

