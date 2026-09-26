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
extern unsigned int lbl_82014894;
extern unsigned int lbl_82014898;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_20;


bool fn_827748E0(undefined8 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  float *pfVar17;
  bool bVar18;
  undefined8 uStack_20;
  
  bVar18 = true;
  uVar13 = 0;
  if (*(uint *)(param_2 + 0x18) != 0) {
    fVar4 = lbl_82014898;
    fVar7 = lbl_82014894;
    fVar8 = lbl_82014894;
    fVar11 = lbl_82014898;
    fVar10 = lbl_82014898;
    fVar9 = lbl_82014894;
    fVar6 = lbl_82014894;
    fVar5 = lbl_82014898;
    do {
      piVar15 = (int *)(*(int *)((uVar13 >> 4 & 0xffffffc) + *(int *)(param_2 + 0x24)) +
                       (uVar13 & 0x3f) * 0x18);
      uVar3 = piVar15[1];
      if (2 < uVar3) {
        uVar14 = 0;
        uVar16 = (piVar15[2] + uVar3) - 1;
        fVar12 = lbl_821AAD20;
        uStack_20 = *(undefined8 *)
                     (*(int *)((uVar16 >> 6 & 0x3fffffc) + *(int *)(*piVar15 + 0x14)) +
                     (uVar16 * 8 & 0x7f8));
        if (uVar3 != 0) {
          do {
            uVar16 = piVar15[2] + uVar14;
            pfVar17 = (float *)(*(int *)((uVar16 >> 6 & 0x3fffffc) + *(int *)(*piVar15 + 0x14)) +
                               (uVar16 * 8 & 0x7f8));
            fVar1 = *pfVar17;
            if (fVar1 < fVar10) {
              fVar10 = fVar1;
            }
            fVar2 = pfVar17[1];
            if (fVar2 < fVar5) {
              fVar5 = fVar2;
            }
            if (fVar9 < fVar1) {
              fVar9 = fVar1;
            }
            if (fVar6 < fVar2) {
              fVar6 = fVar2;
            }
            uVar14 = uVar14 + 1;
            fVar12 = (fVar2 * (((U64)(uStack_20) >> 0) & 0xFFFFFFFF) - fVar1 * (((U64)(uStack_20) >> 32) & 0xFFFFFFFF)) + fVar12;
            uStack_20 = *(undefined8 *)pfVar17;
          } while (uVar14 < uVar3);
        }
        if ((((fVar10 < fVar11) || (fVar5 < fVar4)) || (fVar8 < fVar9)) || (fVar7 < fVar6)) {
          bVar18 = lbl_821AAD20 < fVar12;
          fVar7 = fVar6;
          fVar11 = fVar10;
          fVar8 = fVar9;
          fVar4 = fVar5;
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_2 + 0x18));
  }
  return bVar18;
}

