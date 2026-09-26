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
extern unsigned int *auStack_470;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82DB4A58();
extern int fn_830AFDF8();
extern V16 loadVectorLeftIndexed128();
extern V16 vectorSubtractFloatingPoint();


void fn_82DB5A50(int *param_1,undefined8 param_2,int *param_3,int *param_4,int param_5,
                  int *param_6,int *param_7,int *param_8)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 in_r0;
  int *piVar7;
  undefined8 uVar6;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined4 uVar17;
  float in_register_00010040;
  float in_register_00010044;
  float in_register_00010048;
  float in_vr4;
  float fVar18;
  float fVar19;
  float fVar20;
  float in_register_00010080;
  float in_register_00010084;
  float in_register_00010088;
  float in_vr8;
  float in_register_000100a0;
  float in_register_000100a4;
  float in_register_000100a8;
  float in_vr10;
  undefined1 auStack_470 [1136];
  
  iVar16 = param_7[1];
  piVar7 = (int *)fn_82CE5410();
  iVar1 = *piVar7;
  iVar12 = 0;
  *piVar7 = (iVar16 * 0x20 + 0x7fU & 0xffffff80) + iVar1;
  if (0 < param_7[1]) {
    iVar13 = 0;
    iVar16 = iVar1;
    do {
      iVar12 = iVar12 + 1;
      uVar2 = *(uint *)(iVar13 + *param_7);
      iVar13 = iVar13 + 4;
      iVar10 = *(int *)(uVar2 + 0xa4) + param_1[3];
      iVar14 = iVar10 + 0x10;
      iVar10 = iVar10 + 0x20;
      iVar8 = (int)in_r0;
      puVar15 = (undefined4 *)(iVar8 + iVar14 & 0xfffffff0);
      uVar9 = puVar15[1];
      uVar11 = puVar15[2];
      uVar17 = puVar15[3];
      puVar3 = (undefined4 *)(iVar8 + iVar16 & 0xfffffff0);
      *puVar3 = *puVar15;
      puVar3[1] = uVar9;
      puVar3[2] = uVar11;
      puVar3[3] = uVar17;
      puVar15 = (undefined4 *)(iVar8 + iVar10 & 0xfffffff0);
      uVar9 = puVar15[1];
      uVar11 = puVar15[2];
      uVar17 = puVar15[3];
      puVar3 = (undefined4 *)(iVar8 + iVar16 + 0x10 & 0xfffffff0);
      *puVar3 = *puVar15;
      puVar3[1] = uVar9;
      puVar3[2] = uVar11;
      puVar3[3] = uVar17;
      vectorSubtractFloatingPoint(in_vs43,in_vs44);
      pfVar4 = (float *)(iVar8 + iVar14 & 0xfffffff0);
      *pfVar4 = in_register_000100a0;
      pfVar4[1] = in_register_000100a4;
      pfVar4[2] = in_register_000100a8;
      pfVar4[3] = in_vr10;
      loadVectorLeftIndexed128(in_r0,(ulonglong)uVar2 + 0x14c);
      pfVar4 = (float *)(iVar8 + iVar14 & 0xfffffff0);
      *pfVar4 = in_register_000100a0 * in_register_00010080;
      pfVar4[1] = in_register_000100a4 * in_register_00010084;
      pfVar4[2] = in_register_000100a8 * in_register_00010088;
      pfVar4[3] = in_vr10 * in_vr8;
      pfVar4 = (float *)(uVar2 + 0x180 & 0xfffffff0);
      fVar18 = pfVar4[1];
      fVar19 = pfVar4[2];
      fVar20 = pfVar4[3];
      loadVectorLeftIndexed128(in_r0,(ulonglong)uVar2 + 0x14c);
      pfVar5 = (float *)(iVar8 + iVar10 & 0xfffffff0);
      *pfVar5 = *pfVar4 * in_register_00010040;
      pfVar5[1] = fVar18 * in_register_00010044;
      pfVar5[2] = fVar19 * in_register_00010048;
      pfVar5[3] = fVar20 * in_vr4;
      iVar16 = iVar16 + 0x20;
    } while (iVar12 < param_7[1]);
  }
  iVar16 = *param_4;
  if (iVar16 < param_3[1]) {
    iVar12 = iVar16 * 0xc;
    do {
      iVar8 = iVar12 + *param_3;
      iVar13 = *(int *)(iVar12 + *param_3);
      if (param_5 <= (int)(uint)*(byte *)(iVar13 + 0x1c)) {
        piVar7 = (int *)(*(int *)(iVar13 + 0x30) + 4);
        iVar13 = *(int *)(((uint)LZCOUNT(*(byte *)((uint)*(ushort *)(*piVar7 + 0xa8) + *param_6) -
                                         0x10) >> 3 & 4) + (int)piVar7);
        if ((*(byte *)((uint)*(ushort *)(iVar13 + 0xa8) + *param_6) & 4) == 0) {
          uVar6 = fn_830AFDF8(param_1[1],*(undefined4 *)(iVar8 + 4),param_1[3],0x100,
                                    auStack_470);
          iVar8 = fn_82DB4A58((double)*(float *)(*param_1 + 8),uVar6,iVar8,auStack_470,uVar6,
                               param_2);
          if (iVar8 == -1) goto LAB_82db5cf4;
          *(byte *)((uint)*(ushort *)(iVar13 + 0xa8) + *param_6) =
               *(byte *)((uint)*(ushort *)(iVar13 + 0xa8) + *param_6) | 4;
          iVar8 = fn_82CE5410();
          if (param_8[1] == (param_8[2] & 0x3fffffffU)) {
            fn_82CE63B0(*(undefined4 *)(iVar8 + 0x10),param_8,4);
          }
          *(int *)(param_8[1] * 4 + *param_8) = iVar13;
          param_8[1] = param_8[1] + 1;
          iVar8 = *param_4;
          *param_4 = iVar8 + 1;
          iVar13 = *param_3;
          puVar15 = (undefined4 *)(iVar8 * 0xc + iVar13);
          iVar8 = iVar12 + iVar13;
          uVar9 = *puVar15;
          *puVar15 = *(undefined4 *)(iVar12 + iVar13);
          uVar17 = puVar15[1];
          puVar15[1] = *(undefined4 *)(iVar8 + 4);
          uVar11 = puVar15[2];
          puVar15[2] = *(undefined4 *)(iVar8 + 8);
          *(undefined4 *)(iVar8 + 4) = uVar17;
        }
        else {
          iVar10 = *param_4;
          *param_4 = iVar10 + 1;
          iVar13 = *param_3;
          iVar8 = iVar12 + iVar13;
          puVar15 = (undefined4 *)(iVar10 * 0xc + iVar13);
          uVar9 = *puVar15;
          *puVar15 = *(undefined4 *)(iVar12 + iVar13);
          uVar17 = puVar15[1];
          puVar15[1] = *(undefined4 *)(iVar8 + 4);
          uVar11 = puVar15[2];
          puVar15[2] = *(undefined4 *)(iVar8 + 8);
          *(undefined4 *)(iVar8 + 4) = uVar17;
        }
        *(undefined4 *)(iVar8 + 8) = uVar11;
        *(undefined4 *)(iVar12 + iVar13) = uVar9;
      }
LAB_82db5cf4:
      iVar16 = iVar16 + 1;
      iVar12 = iVar12 + 0xc;
    } while (iVar16 < param_3[1]);
  }
  iVar16 = 0;
  if (0 < param_7[1]) {
    iVar13 = 0;
    iVar12 = iVar1;
    do {
      puVar15 = (undefined4 *)((int)in_r0 + iVar12 & 0xfffffff0);
      uVar9 = puVar15[1];
      uVar11 = puVar15[2];
      uVar17 = puVar15[3];
      iVar16 = iVar16 + 1;
      piVar7 = (int *)(iVar13 + *param_7);
      iVar13 = iVar13 + 4;
      iVar8 = *(int *)(*piVar7 + 0xa4) + param_1[3];
      puVar3 = (undefined4 *)(iVar8 + 0x10U & 0xfffffff0);
      *puVar3 = *puVar15;
      puVar3[1] = uVar9;
      puVar3[2] = uVar11;
      puVar3[3] = uVar17;
      puVar15 = (undefined4 *)((int)in_r0 + iVar12 + 0x10 & 0xfffffff0);
      uVar9 = puVar15[1];
      uVar11 = puVar15[2];
      uVar17 = puVar15[3];
      iVar12 = iVar12 + 0x20;
      puVar3 = (undefined4 *)(iVar8 + 0x20U & 0xfffffff0);
      *puVar3 = *puVar15;
      puVar3[1] = uVar9;
      puVar3[2] = uVar11;
      puVar3[3] = uVar17;
    } while (iVar16 < param_7[1]);
  }
  piVar7 = (int *)fn_82CE5410();
  *piVar7 = iVar1;
  return;
}

