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
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_82563B68();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


bool fn_8262C328(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  uint uVar5;
  float *pfVar6;
  int in_r0;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined1 in_vs32 [16];
  undefined1 auVar10 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float afStack_30 [12];
  
  fn_82563B68(param_3,afStack_30,&fStack_40);
  piVar8 = *(int **)(param_1 + 0x148);
  if (param_2 != 0) {
    for (; piVar8 < *(int **)(param_1 + 0x14c); piVar8 = piVar8 + 1) {
      if (param_2 == *piVar8) {
        return false;
      }
      if (param_3 == *piVar8) {
        return false;
      }
    }
    cVar1 = *(char *)(param_3 + 0xe8);
    puVar2 = (undefined4 *)((int)&fStack_40 + in_r0 & 0xfffffff0);
    uVar11 = puVar2[1];
    uVar13 = puVar2[2];
    uVar15 = puVar2[3];{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs32,in_vs45); memcpy(auVar10, &_vt0, 16); }
    puVar3 = (undefined4 *)((int)&fStack_40 + in_r0 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar11;
    puVar3[2] = uVar13;
    puVar3[3] = uVar15;
    if ((cVar1 == '\x05') || (bVar4 = false, cVar1 == '\x04')) {
      bVar4 = true;
    }
    if (bVar4) {
LAB_8262c490:
      iVar7 = 0;
      if (0 < *(int *)(param_3 + 0x7c)) {
        iVar9 = 0;
        do {
          if (*(int *)(iVar9 + *(int *)(param_3 + 0x78)) == 0x200c) {
            bVar4 = true;
            goto LAB_8262c4c8;
          }
          iVar7 = iVar7 + 1;
          iVar9 = iVar9 + 0x10;
        } while (iVar7 < *(int *)(param_3 + 0x7c));
      }
      bVar4 = false;
LAB_8262c4c8:
      return !bVar4;
    }
    if ((*(int *)(param_2 + 0x7d4) != 0) &&
       (((*(int *)(param_1 + 0x78) == 0 || (param_2 != *(int *)(param_1 + 0x78))) &&
        (*(int *)(param_2 + 0x1c8) == 0)))) {
      iVar7 = 0;
      if (0 < *(int *)(param_3 + 0x7c)) {
        iVar9 = 0;
        do {
          if (*(int *)(iVar9 + *(int *)(param_3 + 0x78)) == 0x2012) {
            bVar4 = true;
            goto LAB_8262c43c;
          }
          iVar7 = iVar7 + 1;
          iVar9 = iVar9 + 0x10;
        } while (iVar7 < *(int *)(param_3 + 0x7c));
      }
      bVar4 = false;
LAB_8262c43c:
      if (bVar4) {
        fVar12 = *(float *)(param_1 + 0x124);
      }
      else {
        fVar12 = *(float *)(param_1 + 0x128);
      }
      if (fVar12 <= fStack_38 * fStack_3c * fStack_40) {
        iVar7 = *(int *)(param_1 + 0x120);
        uVar5 = param_3 + 0x120U & 0xfffffff0;
        fVar12 = *(float *)(uVar5 + 4);
        fVar14 = *(float *)(uVar5 + 8);
        vectorSubtractFloatingPoint(in_vs45,auVar10);
        fVar12 = fVar12 * fVar12 + 0.0 + fVar14 * fVar14;
        pfVar6 = (float *)((int)afStack_30 + in_r0 & 0xfffffff0);
        *pfVar6 = fVar12;
        pfVar6[1] = fVar12;
        pfVar6[2] = fVar12;
        pfVar6[3] = fVar12;
        if ((iVar7 != 0) ||
           (*(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x70) <= afStack_30[0]))
        goto LAB_8262c490;
      }
    }
  }
  return false;
}

