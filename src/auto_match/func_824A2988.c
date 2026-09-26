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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int fStack_4c;
extern unsigned int fStack_5c;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_824A2988(int param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float *pfVar11;
  undefined8 in_r0;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uStack_a0;
  uint uStack_9c;
  int aiStack_98 [2];
  ulonglong uStack_90;
  ulonglong uStack_88;
  longlong lStack_80;
  float afStack_70 [4];
  undefined1 auStack_60 [4];
  float fStack_5c;
  undefined1 auStack_50 [4];
  float fStack_4c;
  
  (**(code **)*param_2)(param_2,&uStack_9c,&uStack_a0);
  dVar15 = (double)lbl_821CC160;
  *(float *)(param_1 + 0x60) = lbl_821CC160;
  lVar12 = (ulonglong)*(uint *)(param_1 + 0x40) - 1;
  if (-1 < lVar12) {
    dVar16 = (double)lbl_821CA460;
    do {
      uStack_90 = (ulonglong)uStack_9c;
      uStack_88 = (ulonglong)uStack_a0 - lVar12 & 0xffffffff;
      dVar14 = (double)(float)((double)uStack_88 - (double)uStack_90);
      dVar13 = (double)uStack_88;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((dVar14 < dVar15) << 2) | (uint)(NAN(dVar14) || NAN(dVar15)) << 2)
                    ) < 0.0) {
        dVar13 = (double)uStack_90;
      }
      lStack_80 = (longlong)(int)dVar13;
      (**(code **)(*param_2 + 4))(param_2,(int)dVar13,aiStack_98);
      iVar2 = *(int *)(param_1 + 0x44);
      iVar6 = (int)in_r0;
      uVar5 = iVar6 + param_1 + 0x50 & 0xfffffff0;
      fVar1 = *(float *)(param_1 + 0x3c);
      iVar3 = *(int *)(aiStack_98[0] + 0x40);
      iVar8 = ((-(uint)(iVar2 != 0) & 5) + 10) * 0x40 + iVar3;
      uVar7 = iVar8 + 0x10U & 0xfffffff0;
      fVar4 = *(float *)(uVar7 + 4) * *(float *)(uVar5 + 4) + 0.0 +
              *(float *)(uVar7 + 8) * *(float *)(uVar5 + 8);
      puVar9 = (undefined4 *)(iVar6 + iVar8 & 0xfffffff0);
      uVar17 = puVar9[1];
      uVar18 = puVar9[2];
      uVar19 = puVar9[3];
      puVar10 = (undefined4 *)((uint)(auStack_60 + iVar6) & 0xfffffff0);
      *puVar10 = *puVar9;
      puVar10[1] = uVar17;
      puVar10[2] = uVar18;
      puVar10[3] = uVar19;
      puVar9 = (undefined4 *)(((-(uint)(iVar2 != 0) & 5) + 8) * 0x40 + iVar3 & 0xfffffff0);
      uVar17 = puVar9[1];
      uVar18 = puVar9[2];
      uVar19 = puVar9[3];
      puVar10 = (undefined4 *)((uint)(auStack_50 + iVar6) & 0xfffffff0);
      *puVar10 = *puVar9;
      puVar10[1] = uVar17;
      puVar10[2] = uVar18;
      puVar10[3] = uVar19;
      pfVar11 = (float *)((int)afStack_70 + iVar6 & 0xfffffff0);
      *pfVar11 = fVar4;
      pfVar11[1] = fVar4;
      pfVar11[2] = fVar4;
      pfVar11[3] = fVar4;
      if ((fVar1 <= afStack_70[0]) && (fStack_5c < fStack_4c)) {
        *(float *)(param_1 + 0x60) = (float)((double)*(float *)(param_1 + 0x60) + dVar16);
      }
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  *(uint *)(param_1 + 100) =
       (uint)((float)(longlong)*(int *)(param_1 + 0x40) <= *(float *)(param_1 + 0x60));
  return;
}

