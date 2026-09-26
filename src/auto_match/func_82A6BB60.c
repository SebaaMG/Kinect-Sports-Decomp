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
extern int fn_82F655D8();
extern unsigned int lbl_82005718;
extern unsigned int lbl_82015618;
extern unsigned int lbl_820A8648;


undefined8 fn_82A6BB60(int param_1,int param_2,char param_3)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  float *pfVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  float *pfVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  
  iVar3 = *(int *)(param_2 + 0x38);
  if (0 < *(int *)(param_2 + 0x1ac)) {
    sVar2 = *(short *)(param_2 + 0x76);
    if (0 < sVar2) {
      puVar4 = *(uint **)(param_1 + 0x134);
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x130);
      uVar12 = (int)sVar2;
      if ((int)(uint)*(ushort *)(param_1 + 0x2da) <= (int)sVar2) {
        uVar12 = (uint)*(ushort *)(param_1 + 0x2da);
      }
      if (0 < (int)*(uint *)(param_1 + 0x130)) {
        dVar17 = (double)lbl_82005718;
        uVar16 = lbl_82015618;
        puVar5 = puVar4;
        do {
          puVar13 = puVar5 + 1;
          uVar8 = *puVar5;
          uVar14 = uVar12;
          if ((int)*puVar13 <= (int)uVar12) {
            uVar14 = *puVar13;
          }
          if (param_3 == '\0') {
            iVar9 = *(int *)(param_2 + 8);
          }
          else {
            iVar9 = *(int *)(param_2 + 4);
          }
          uVar10 = ((ulonglong)*(byte *)(param_2 + 0xb4) -
                   (longlong)
                   (*(int *)(param_2 + 0x40) - *(int *)(iVar9 + (-4 - (int)puVar4) + (int)puVar13))
                   * (longlong)*(int *)(param_2 + 0x1b4)) + (ulonglong)*(uint *)(param_1 + 0x128);
          if (((longlong)uVar10 < 0) || (0xbf < (int)uVar10)) {
            dVar15 = (double)fn_82F655D8(uVar16,(double)(float)((double)(longlong)(int)uVar10
                                                                     * dVar17));
            fVar1 = (float)dVar15;
          }
          else {
            fVar1 = *(float *)(&lbl_820A8648 + (int)((uVar10 & 0xffffffff) << 2));
          }
          if ((int)uVar8 < (int)uVar14) {
            if (3 < (int)(uVar14 - uVar8)) {
              pfVar11 = (float *)(uVar8 * 4 + iVar3 + -4);
              do {
                uVar8 = uVar8 + 4;
                pfVar6 = pfVar11 + 4;
                pfVar11[1] = pfVar11[1] * fVar1;
                pfVar11[2] = pfVar11[2] * fVar1;
                pfVar11[3] = pfVar11[3] * fVar1;
                pfVar11 = pfVar11 + 4;
                *pfVar11 = *pfVar6 * fVar1;
              } while ((int)uVar8 < (int)(uVar14 - 3));
            }
            if ((int)uVar8 < (int)uVar14) {
              iVar9 = uVar14 - uVar8;
              pfVar11 = (float *)(uVar8 * 4 + iVar3 + -4);
              do {
                pfVar6 = pfVar11 + 1;
                pfVar11 = pfVar11 + 1;
                *pfVar11 = *pfVar6 * fVar1;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
          }
          uVar7 = uVar7 - 1;
          puVar5 = puVar13;
        } while (uVar7 != 0);
      }
      return 0;
    }
  }
  return 0xffffffff80040002;
}

