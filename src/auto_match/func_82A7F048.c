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
extern unsigned int *auStack_40;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;


undefined8 fn_82A7F048(int param_1,int param_2,ushort param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int in_r0;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  float *pfVar15;
  short sVar17;
  int iVar16;
  ushort uVar20;
  uint uVar18;
  uint uVar19;
  int iVar21;
  undefined1 in_vs32 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs60 [16];
  float in_register_000103d0;
  float in_register_000103d4;
  float in_register_000103d8;
  float in_vr61;
  float in_register_000103e0;
  float in_register_000103e4;
  float in_register_000103e8;
  float in_vr62;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  undefined1 auStack_40 [64];
  
  fVar4 = lbl_821AAD20;
  fVar3 = lbl_82002C5C;
  uVar20 = *(ushort *)(param_1 + 0x22);
  iVar12 = 0;
  altv207_13(in_vs32,in_vs40);
  altv207_13(in_vs32,in_vs39);
  if (uVar20 != 2) {
    if (param_3 == 0) {
      return 0;
    }
    iVar21 = 0;
    do {
      if (uVar20 != 0) {
        iVar16 = 0;
        puVar13 = (undefined1 *)(iVar12 * 3 + param_2 + -3);
        do {
          uVar18 = *(ushort *)(param_1 + 0x6e) - 1;
          fVar5 = *(float *)(*(int *)(iVar16 * 0x6f0 + *(int *)(param_1 + 0x140) + 0x3c) +
                            iVar21 * 4);
          if (fVar4 <= fVar5) {
            uVar19 = (uint)(fVar5 + fVar3);
            uVar18 = (1 << (uVar18 & 0x3f)) - 1;
            if ((int)uVar18 < (int)uVar19) goto LAB_82a7f128;
          }
          else {
            uVar19 = (uint)(fVar5 - fVar3);
            uVar18 = ~((1 << (uVar18 & 0x3f)) - 1U);
            if ((int)uVar19 < (int)uVar18) {
LAB_82a7f128:
              uVar19 = uVar18;
            }
          }
          puVar13[5] = (char)uVar19;
          sVar17 = (short)iVar16 + 1;
          puVar13[4] = (char)(uVar19 >> 8);
          iVar16 = (int)sVar17;
          puVar13 = puVar13 + 3;
          *puVar13 = (char)(uVar19 >> 0x10);
          iVar12 = iVar12 + 1;
          uVar20 = *(ushort *)(param_1 + 0x22);
        } while ((int)sVar17 < (int)(uint)uVar20);
      }
      sVar17 = (short)iVar21 + 1;
      iVar21 = (int)sVar17;
      if ((int)(uint)param_3 <= (int)sVar17) {
        return 0;
      }
    } while( true );
  }
  sVar17 = 0;
  uVar20 = param_3 & 0xfffe;
  if (0 < (short)uVar20) {
    iVar21 = 0;
    puVar13 = (undefined1 *)(param_2 + -3);
    do {
      iVar14 = iVar21 * 4;
      sVar17 = (short)iVar21 + 2;
      iVar12 = iVar12 + 4;
      iVar16 = *(int *)(*(int *)(param_1 + 0x140) + 0x3c);
      iVar21 = (int)sVar17;
      fVar6 = *(float *)(iVar14 + iVar16);
      pfVar15 = (float *)(iVar14 + *(int *)(*(int *)(param_1 + 0x140) + 0x72c));
      fVar3 = *(float *)(iVar14 + iVar16 + 4);
      fVar4 = *pfVar15;
      fVar5 = pfVar15[1];
      altv207_13(in_vs32,in_vs60);
      fVar7 = in_register_000103f0;
      if (in_register_000103f0 < in_register_000103d0) {
        fVar7 = in_register_000103d0;
      }
      fVar8 = in_register_000103f4;
      if (in_register_000103f4 < in_register_000103d4) {
        fVar8 = in_register_000103d4;
      }
      fVar9 = in_register_000103f8;
      if (in_register_000103f8 < in_register_000103d8) {
        fVar9 = in_register_000103d8;
      }
      fVar10 = in_vr63;
      if (in_vr63 < in_vr61) {
        fVar10 = in_vr61;
      }
      fVar11 = in_register_000103e0;
      if (fVar7 < in_register_000103e0) {
        fVar11 = fVar7;
      }
      fVar7 = in_register_000103e4;
      if (fVar8 < in_register_000103e4) {
        fVar7 = fVar8;
      }
      fVar8 = in_register_000103e8;
      if (fVar9 < in_register_000103e8) {
        fVar8 = fVar9;
      }
      fVar9 = in_vr62;
      if (fVar10 < in_vr62) {
        fVar9 = fVar10;
      }
      pfVar15 = (float *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
      *pfVar15 = fVar11;
      pfVar15[1] = fVar7;
      pfVar15[2] = fVar8;
      pfVar15[3] = fVar9;
      iVar16 = (int)fVar4;
      iVar14 = (int)fVar3;
      iVar1 = (int)fVar5;
      iVar2 = (int)fVar6;
      puVar13[4] = (char)((uint)iVar2 >> 8);
      puVar13[5] = (char)iVar2;
      puVar13[3] = (char)((uint)iVar2 >> 0x10);
      puVar13[8] = (char)iVar16;
      puVar13[6] = (char)((uint)iVar16 >> 0x10);
      puVar13[7] = (char)((uint)iVar16 >> 8);
      puVar13[0xb] = (char)iVar14;
      puVar13[10] = (char)((uint)iVar14 >> 8);
      puVar13[9] = (char)((uint)iVar14 >> 0x10);
      puVar13[0xe] = (char)iVar1;
      puVar13[0xd] = (char)((uint)iVar1 >> 8);
      puVar13 = puVar13 + 0xc;
      *puVar13 = (char)((uint)iVar1 >> 0x10);
    } while (sVar17 < (short)uVar20);
  }
  fVar4 = lbl_821AAD20;
  fVar3 = lbl_82002C5C;
  if (param_3 == uVar20) {
    return 0;
  }
  uVar18 = *(ushort *)(param_1 + 0x6e) - 1;
  fVar5 = *(float *)(*(int *)(*(int *)(param_1 + 0x140) + 0x3c) + sVar17 * 4);
  if (lbl_821AAD20 <= fVar5) {
    uVar19 = (uint)(fVar5 + lbl_82002C5C);
    uVar18 = (1 << (uVar18 & 0x3f)) - 1;
    if ((int)uVar18 < (int)uVar19) goto LAB_82a7f33c;
  }
  else {
    uVar18 = ~((1 << (uVar18 & 0x3f)) - 1U);
    uVar19 = (int)(fVar5 - lbl_82002C5C);
    if ((int)(fVar5 - lbl_82002C5C) < (int)uVar18) {
LAB_82a7f33c:
      uVar19 = uVar18;
    }
  }
  iVar21 = iVar12 * 3 + param_2;
  *(char *)(iVar12 * 3 + param_2) = (char)(uVar19 >> 0x10);
  *(char *)(iVar21 + 2) = (char)uVar19;
  *(char *)(iVar21 + 1) = (char)(uVar19 >> 8);
  fVar5 = *(float *)(*(int *)(*(int *)(param_1 + 0x140) + 0x72c) + sVar17 * 4);
  uVar18 = *(ushort *)(param_1 + 0x6e) - 1;
  if (fVar4 <= fVar5) {
    uVar19 = (uint)(fVar5 + fVar3);
    uVar18 = (1 << (uVar18 & 0x3f)) - 1;
    if ((int)uVar19 <= (int)uVar18) goto LAB_82a7f3d4;
  }
  else {
    uVar19 = (uint)(fVar5 - fVar3);
    uVar18 = ~((1 << (uVar18 & 0x3f)) - 1U);
    if ((int)uVar18 <= (int)uVar19) goto LAB_82a7f3d4;
  }
  uVar19 = uVar18;
LAB_82a7f3d4:
  puVar13 = (undefined1 *)((iVar12 + 1) * 3 + param_2);
  puVar13[2] = (char)uVar19;
  puVar13[1] = (char)(uVar19 >> 8);
  *puVar13 = (char)(uVar19 >> 0x10);
  return 0;
}

