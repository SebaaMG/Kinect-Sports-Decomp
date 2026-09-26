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
extern unsigned int *auStack_50;
extern int fn_8257A9F0();
extern int fn_82F65350();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


ulonglong fn_823360A8(int param_1,int *param_2,int param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  int *piVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint auStack_50 [20];
  
  uVar14 = (uint)param_4;
  uVar6 = 0;
  if (*(int *)(*param_2 + 0xae8) == 0) {
    fVar5 = lbl_821CC160;
    if (uVar14 != 0) {
      pfVar10 = (float *)(param_3 + -0x90);
      do {
        pfVar10 = pfVar10 + 0x35;
        fVar5 = *pfVar10 + fVar5;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar5 = ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * fVar5;
    if (lbl_821CC160 < fVar5) {
      pfVar10 = (float *)(param_3 + 0x44);
      fVar4 = lbl_821CC160;
      do {
        fVar4 = *pfVar10 + fVar4;
        if (fVar4 <= fVar5) {
          uVar6 = uVar6 + 1;
          pfVar10 = pfVar10 + 0x35;
        }
      } while (fVar4 < fVar5);
    }
  }
  else {
    piVar11 = (int *)(param_1 + 0x24c);
    if ((*(int *)(param_1 + 0x250) - *(int *)(param_1 + 0x24c) & 0xfffffffcU) == 0) {
      auStack_50[0] = 0;
      if (uVar14 != 0) {
        do {
          fn_8257A9F0(piVar11,auStack_50);
          auStack_50[0] = auStack_50[0] + 1;
        } while (auStack_50[0] < uVar14);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x250);
      puVar2 = (undefined4 *)*piVar11;
      if (puVar2 != puVar1) {
        uVar14 = 2;
        puVar13 = puVar2;
        while( true ) {
          puVar13 = puVar13 + 1;
          if (puVar13 == puVar1) break;
          uVar12 = 0x7fff;
          uVar7 = fn_82F65350();
          uVar6 = (ulonglong)uVar7 & 0x7fff;
          uVar7 = uVar7 & 0x7fff;
          if (0x7fff < uVar14) {
            do {
              if (uVar12 == 0xffffffff) break;
              uVar8 = fn_82F65350();
              uVar6 = (uVar6 & 0x1ffff) << 0xf | (ulonglong)uVar8 & 0xffffffff00007fff;
              uVar7 = uVar7 << 0xf | uVar8 & 0x7fff;
              uVar12 = uVar12 << 0xf | 0x7fff;
            } while (uVar12 < uVar14);
          }
          uVar3 = *puVar13;
          iVar9 = uVar7 - (int)(uVar6 / uVar14) * uVar14;
          uVar14 = uVar14 + 1;
          *puVar13 = puVar2[iVar9];
          puVar2[iVar9] = uVar3;
        }
      }
    }
    uVar6 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x250) + -4);
    if (*piVar11 != *(int *)(param_1 + 0x250)) {
      *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + -4;
    }
  }
  return uVar6;
}

