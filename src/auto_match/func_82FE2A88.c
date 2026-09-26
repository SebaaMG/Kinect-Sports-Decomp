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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_140;
extern unsigned int *auStack_240;
extern unsigned int *auStack_340;
extern unsigned int *auStack_3c0;
extern int fn_82FDF728();
extern int fn_82FDF9E8();
extern int fn_82FDFDC8();
extern int fn_82FE41A0();
extern int fn_82FE4D80();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82006848;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_144;
extern unsigned int uStack_344;


undefined8 fn_82FE2A88(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar8;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined4 *puVar17;
  longlong lVar18;
  undefined4 auStack_3c0 [16];
  float afStack_380 [15];
  undefined4 uStack_344;
  undefined4 auStack_340 [64];
  undefined1 auStack_240 [252];
  undefined4 uStack_144;
  undefined1 auStack_140 [320];
  
  iVar8 = (**(code **)(*param_2 + 4))(param_2,(ulonglong)*(uint *)(param_1 + 0xc4) * 0x6c);
  *(int *)(param_1 + 0xd4) = iVar8;
  uVar3 = lbl_821AAD20;
  if (iVar8 == 0) {
    uVar6 = 0x34;
  }
  else {
    lVar18 = 0;
    uVar11 = 0;
    if (*(int *)(param_1 + 0xc4) != 0) {
      iVar8 = 0;
      do {
        puVar17 = (undefined4 *)(iVar8 + *(int *)(param_1 + 0xd4));
        if (puVar17 != (undefined4 *)0x0) {
          *puVar17 = 0;
          puVar17[1] = 0;
          puVar17[2] = 0;
          puVar17[3] = 0;
          puVar17[4] = 0;
          puVar17[5] = 0;
          puVar17[6] = 0;
          puVar17[7] = 0;
          puVar17[8] = 0;
          puVar17[9] = 0;
          puVar17[10] = 0;
          puVar17[0xb] = 0;
          puVar17[0xc] = uVar3;
          puVar17[0xd] = uVar3;
          puVar17[0xe] = uVar3;
          puVar17[0xf] = uVar3;
          puVar17[0x10] = uVar3;
          puVar17[0x11] = uVar3;
          puVar17[0x12] = uVar3;
          puVar17[0x13] = uVar3;
          puVar17[0x14] = uVar3;
          puVar17[0x15] = uVar3;
          puVar17[0x16] = uVar3;
          puVar17[0x17] = uVar3;
          puVar17[0x18] = 0;
          puVar17[0x19] = 0;
          puVar17[0x1a] = 0;
        }
        uVar11 = uVar11 + 1;
        iVar8 = iVar8 + 0x6c;
      } while (uVar11 < *(uint *)(param_1 + 0xc4));
    }
    fVar5 = lbl_82002AE0;
    *(float *)(param_1 + 0xc0) = lbl_82002AE0;
    if (1 < *(uint *)(param_1 + 0xc4)) {
      *(float *)(param_1 + 0xc0) = fVar5 / SQRT((float)*(uint *)(param_1 + 0xc4));
    }
    fn_82FDF728((double)*(float *)(param_1 + 0x144),(double)*(float *)(param_1 + 0x148));
    fn_82FDFDC8(auStack_240,*(undefined4 *)(param_1 + 200),*(int *)(param_1 + 0xc4) << 2,
                  auStack_340);
    uVar13 = 0;
    uVar11 = *(uint *)(param_1 + 0xc4);
    uVar7 = (ulonglong)uVar11;
    if (uVar7 != 0) {
      puVar12 = &uStack_144;
      puVar17 = &uStack_344;
      do {
        puVar17 = puVar17 + 1;
        uVar15 = uVar7 + uVar13;
        uVar9 = ((ulonglong)uVar11 & 0x7fffffff) * 2 + uVar13;
        uVar10 = uVar7 + ((ulonglong)uVar11 & 0x7fffffff) * 2 + uVar13;
        puVar12[1] = *puVar17;
        uVar13 = uVar13 + 1;
        uVar3 = *(undefined4 *)((int)auStack_340 + (int)((uVar9 & 0xffffffff) << 2));
        uVar4 = *(undefined4 *)((int)auStack_340 + (int)((uVar10 & 0xffffffff) << 2));
        puVar12[2] = *(undefined4 *)((int)auStack_340 + (int)((uVar15 & 0xffffffff) << 2));
        puVar12[3] = uVar3;
        puVar12 = puVar12 + 4;
        *puVar12 = uVar4;
      } while ((uVar13 & 0xffffffff) < (ulonglong)uVar11);
    }
    iVar8 = fn_82FDF9E8(uVar7,param_1 + 0x174,afStack_380);
    fVar5 = lbl_82006848;
    uVar11 = 0;
    if (iVar8 != 0) {
      uVar1 = *(uint *)(param_1 + 200);
      uVar2 = *(uint *)(param_1 + 0xc4);
      iVar14 = 0;
      do {
        uVar11 = uVar11 + 1;
        *(int *)((int)auStack_3c0 + iVar14) =
             (int)(longlong)(*(float *)((int)afStack_380 + iVar14) * (float)uVar1 * fVar5);
        iVar14 = iVar14 + 4;
      } while (uVar11 < uVar2);
    }
    uVar11 = 0;
    if (iVar8 != 0) {
      puVar17 = auStack_3c0;
      puVar16 = auStack_140;
      do {
        uVar6 = fn_82FE4D80((double)*(float *)(param_1 + 0xe4),
                                (double)*(float *)(param_1 + 0xe8),
                                lVar18 + (ulonglong)*(uint *)(param_1 + 0xd4),param_2,puVar16);
        if ((int)uVar6 != 1) {
          return uVar6;
        }
        uVar6 = fn_82FE41A0(lVar18 + (ulonglong)*(uint *)(param_1 + 0xd4) + 0x60,param_2,
                                  *puVar17);
        if ((int)uVar6 != 1) {
          return uVar6;
        }
        uVar11 = uVar11 + 1;
        puVar16 = puVar16 + 0x10;
        puVar17 = puVar17 + 1;
        lVar18 = lVar18 + 0x6c;
      } while (uVar11 < *(uint *)(param_1 + 0xc4));
    }
    uVar6 = 1;
  }
  return uVar6;
}

