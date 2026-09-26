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
extern int fn_82A81338();
extern int fn_82C2E0E0();
extern int fn_82C44820();
extern unsigned int lbl_82002C5C;


undefined8 fn_82A6B560(int param_1,int param_2,int *param_3)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  double dVar14;
  int aiStack_60 [24];
  
  fVar1 = lbl_82002C5C;
  iVar9 = *(int *)(param_1 + 0x98);
  iVar12 = *(int *)(param_1 + 0x94);
  iVar3 = iVar9 * 0x10 + iVar12;
  iVar6 = 0;
  iVar8 = iVar9 * 4 + iVar12;
  iVar11 = iVar9 * 8 + iVar12;
  iVar10 = iVar9 * 0xc + iVar12;
  iVar4 = iVar9 * 0x14 + iVar12;
  pfVar13 = (float *)(iVar9 * 0x18 + iVar12);
  if (3 < param_2) {
    pfVar5 = (float *)(iVar4 + -4);
    pfVar7 = (float *)(iVar3 + 4);
    do {
      iVar6 = iVar6 + 4;
      pfVar7[-1] = (pfVar7[-1] + pfVar5[1]) * fVar1;
      *pfVar7 = (*(float *)((iVar4 - iVar3) + (int)pfVar7) + *pfVar7) * fVar1;
      pfVar7[1] = (pfVar7[1] + pfVar5[3]) * fVar1;
      pfVar5 = pfVar5 + 4;
      pfVar7[2] = (pfVar7[2] + *pfVar5) * fVar1;
      pfVar7 = pfVar7 + 4;
    } while (iVar6 < param_2 + -3);
  }
  if (iVar6 < param_2) {
    iVar9 = param_2 - iVar6;
    pfVar5 = (float *)(iVar6 * 4 + iVar3);
    do {
      *pfVar5 = (*(float *)((int)pfVar5 + (iVar4 - iVar3)) + *pfVar5) * fVar1;
      pfVar5 = pfVar5 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  uVar2 = fn_82C44820(param_1,iVar3,param_2,pfVar13,aiStack_60);
  if ((((-1 < (int)uVar2) &&
       (uVar2 = fn_82A81338(param_1 + 0x18,iVar12,param_2,aiStack_60), -1 < (int)uVar2)) &&
      (uVar2 = fn_82A81338(param_1 + 0x2c,iVar8,param_2,aiStack_60), -1 < (int)uVar2)) &&
     ((uVar2 = fn_82A81338(param_1 + 0x40,iVar11,param_2,aiStack_60), -1 < (int)uVar2 &&
      (uVar2 = fn_82A81338(param_1 + 0x54,iVar10,param_2,aiStack_60), -1 < (int)uVar2)))) {
    iVar9 = 0;
    if (0 < aiStack_60[0]) {
      iVar11 = iVar11 - (int)pfVar13;
      iVar10 = iVar10 - (int)pfVar13;
      iVar12 = iVar12 - (int)pfVar13;
      iVar8 = iVar8 - (int)pfVar13;
      do {
        *(float *)((int)pfVar13 + iVar12) =
             *(float *)((int)pfVar13 + iVar10) + *(float *)((int)pfVar13 + iVar11) + *pfVar13 +
             *(float *)((int)pfVar13 + iVar12);
        *(float *)((int)pfVar13 + iVar8) =
             ((*(float *)((int)pfVar13 + iVar8) + *(float *)((int)pfVar13 + iVar11)) - *pfVar13) +
             *(float *)((int)pfVar13 + iVar10);
        dVar14 = (double)fn_82C2E0E0((double)*(float *)((int)pfVar13 + iVar12),param_1);
        iVar9 = iVar9 + 1;
        *(float *)((int)pfVar13 + iVar12) =
             (float)(dVar14 * (double)*(float *)((int)pfVar13 + iVar12));
        *(float *)((int)pfVar13 + iVar8) =
             (float)((double)*(float *)((int)pfVar13 + iVar8) * dVar14);
        pfVar13 = pfVar13 + 1;
      } while (iVar9 < aiStack_60[0]);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = aiStack_60[0];
    }
  }
  return uVar2;
}

