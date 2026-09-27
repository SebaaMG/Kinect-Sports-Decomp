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
extern int fn_82637B30();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_8263CBB0();
extern unsigned int lbl_82191FC4;
extern unsigned int lbl_82192734;
extern unsigned int lbl_82195CA4;
extern float lbl_82195CA8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;


void fn_824F5230(double param_1,double param_2,double param_3,double param_4,double param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 in_r9;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  double dVar16;
  
  puVar6 = lbl_8320A898;
  uVar5 = lbl_821CC160;
  fVar3 = lbl_82192734;
  dVar16 = (double)lbl_82191FC4;
  *(undefined4 *)(lbl_8320A898 + 0x270) = lbl_821CC160;
  *(undefined4 *)((int)puVar6 + 0x1384) = uVar5;
  *(undefined4 *)(puVar6 + 0x271) = uVar5;
  *(float *)((int)puVar6 + 0x138c) = (float)param_4;
  fVar4 = lbl_821CA460;
  fVar2 = (float)(param_1 - (double)(float)(param_3 * dVar16));
  *puVar6 = *puVar6 | 0x8000;
  puVar6 = lbl_8320A898;
  *(float *)(lbl_8320A898 + 0x470) = (float)param_5;
  *(undefined4 *)((int)puVar6 + 0x2384) = uVar5;
  *(undefined4 *)(puVar6 + 0x471) = uVar5;
  fVar1 = (float)((double)(float)(param_3 * dVar16) + param_1);
  *(undefined4 *)((int)puVar6 + 0x238c) = uVar5;
  puVar6[1] = puVar6[1] | 0x8000;
  if ((((fVar2 <= fVar4) && (fVar3 <= fVar1)) && ((float)(param_2 - param_3) <= fVar4)) &&
     (fVar3 <= (float)(param_2 + param_3))) {
    uVar11 = (uint)(fVar1 * lbl_82195CA4 + lbl_82195CA4);
    uVar13 = (uint)((float)(param_2 + param_3) * lbl_82195CA8 + lbl_82195CA4);
    uVar7 = (uint)(fVar2 * lbl_82195CA4 + lbl_82195CA4);
    uVar15 = (uint)((float)(param_2 - param_3) * lbl_82195CA8 + lbl_82195CA4);
    uVar7 = (((int)uVar7 >> 3) + (uint)((int)uVar7 < 0 && (uVar7 & 7) != 0)) * 8;
    uVar8 = (longlong)((int)uVar13 >> 3) + (ulonglong)((int)uVar13 < 0 && (uVar13 & 7) != 0);
    lVar9 = (ulonglong)uVar11 +
            ((longlong)((int)uVar11 >> 3) + (ulonglong)((int)uVar11 < 0 && (uVar11 & 7) != 0) &
            0x1fffffff) * -8;
    lVar10 = 8 - lVar9;
    if (lVar9 < 1) {
      lVar10 = 0;
    }
    uVar12 = lVar10 + (ulonglong)uVar11;
    lVar9 = (ulonglong)uVar15 +
            ((longlong)((int)uVar15 >> 3) + (ulonglong)((int)uVar15 < 0 && (uVar15 & 7) != 0) &
            0x1fffffff) * -8;
    lVar10 = 8 - lVar9;
    if (lVar9 < 1) {
      lVar10 = 0;
    }
    uVar14 = lVar10 + (ulonglong)uVar15;
    uVar7 = -((int)uVar7 >> 0x1f) - 1U & uVar7;
    uVar13 = (int)((uVar12 & 0xffffffff) >> 0x1f) - 1U & (uint)uVar12;
    uVar11 = (int)((uVar8 & 0x1fffffff) >> 0x1c) - 1U & (uint)((uVar8 & 0x1fffffff) << 3);
    uVar15 = (int)((uVar14 & 0xffffffff) >> 0x1f) - 1U & (uint)uVar14;
    if (0x300 < (int)uVar7) {
      uVar7 = 0x300;
    }
    if (0x300 < (int)uVar13) {
      uVar13 = 0x300;
    }
    if (0x300 < (int)uVar11) {
      uVar11 = 0x300;
    }
    if (0x300 < (int)uVar15) {
      uVar15 = 0x300;
    }
    if ((uVar7 != uVar13) && (uVar11 != uVar15)) {
      fn_82637B30(lbl_8320A898,1,in_r9);
      puVar6 = lbl_8320A898;
      *(uint *)((int)lbl_8320A898 + 0x293c) = *(uint *)((int)lbl_8320A898 + 0x293c) & 0xfffffff7;
      puVar6[2] = puVar6[2] | 0x40200;
      fn_82637CE0(lbl_8320A898,0);
      fn_82637C50(lbl_8320A898,6);
                    /* WARNING: Subroutine does not return */
      fn_8263CBB0(lbl_8320A898,0);
    }
  }
  return;
}

