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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_680;
extern unsigned int iStack_6c4;
extern unsigned int iStack_6d0;
extern unsigned int stack0x00000000;
extern unsigned int uStack_670;
extern unsigned int uStack_6c8;
extern unsigned int uStack_6dc;
extern unsigned int uStack_6e0;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern V16 vectorReciprocalSquareRootEstimateFloatingPoint();
extern V16 vectorSplatImmediateSignedWord128();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Removing unreachable block (ram,0x8309a910) */
/* WARNING: Removing unreachable block (ram,0x8309a92c) */

void fn_8309A6F8(int param_1,int *param_2,int param_3,longlong param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  float *pfVar7;
  undefined8 in_r0;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined1 in_vs32 [16];
  undefined1 auVar12 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 auVar13 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 auVar14 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float in_register_000100b0;
  float in_register_000100b4;
  float in_register_000100b8;
  float in_vr11;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  int iStack_6d0;
  undefined4 uStack_6c8;
  int iStack_6c4;
  undefined1 auStack_680 [16];
  undefined4 uStack_670;
  undefined4 *puStack_668;
  
  uVar8 = ZEXT48(&stack0x00000000);
  uStack_6dc = *(undefined4 *)(param_1 + 0x2c);
  iStack_6d0 = *param_2;
  uStack_6e0 = *(undefined4 *)(param_1 + 0x28);
  iStack_6c4 = param_2[3];
  puStack_668 = &uStack_6e0;
  if (0 < (int)param_4) {
    vectorSplatImmediateSignedWord128(0);
    param_3 = param_3 + 0x20;
    do {
      pfVar7 = (float *)(param_3 - 0x10U & 0xfffffff0);
      fVar15 = *pfVar7;
      fVar16 = pfVar7[1];
      fVar17 = pfVar7[2];
      fVar18 = pfVar7[3];
      piVar1 = *(int **)(param_3 + -0x20);
      piVar2 = *(int **)(param_3 + -0x1c);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs45,in_vs32); memcpy(auVar14, &_vt0, 16); }
      iVar3 = *piVar1;
      iVar4 = *piVar2;
      pfVar7 = (float *)((uint)(auStack_680 + (int)in_r0) & 0xfffffff0);
      *pfVar7 = in_register_000100b0;
      pfVar7[1] = in_register_000100b4;
      pfVar7[2] = in_register_000100b8;
      pfVar7[3] = in_vr11;{ V16 _vt1 = vectorReciprocalSquareRootEstimateFloatingPoint(in_vs38); memcpy(auVar12, &_vt1, 16); }{ V16 _vt2 = vectorNegativeMultiplySubtractFloatingPoint(in_vs41,in_vs42,in_vs45); memcpy(auVar13, &_vt2, 16); }{ V16 _vt3 = vectorMultiplyAddFloatingPoint(auVar12,auVar13,auVar12); memcpy(auVar12, &_vt3, 16); }
      in_register_000100b0 = fVar15 * fVar15;
      in_register_000100b4 = fVar16 * fVar16;
      in_register_000100b8 = fVar17 * fVar17;
      in_vr11 = fVar18 * fVar18;{ V16 _vt4 = vectorNegativeMultiplySubtractFloatingPoint(in_vs41,auVar14,in_vs45); memcpy(auVar13, &_vt4, 16); }{ V16 _vt5 = vectorMultiplyAddFloatingPoint(auVar12,auVar13,auVar12); memcpy(in_vs32, &_vt5, 16); }{ V16 _vt6 = vectorConditionalSelect(in_vs32,in_vs44,in_vs40); memcpy(in_vs45, &_vt6, 16); }
      uVar6 = storeVectorElementWordIndexed(in_vs37,0,uVar8 - 0x730);
      *(undefined4 *)(uVar8 - 0x730) = uVar6;
      uStack_6c8 = *(undefined4 *)(param_1 + 0x20);
      uStack_670 = *(undefined4 *)(param_1 + 0x24);
      (**(code **)((uint)*(byte *)((*(int *)(iVar3 + 0xc) + 0xd) * 0x20 + *(int *)(iVar4 + 0xc) +
                                  *param_2) * 0x14 + *param_2 + 0x9ac))
                (piVar1,piVar2,uVar8 - 0x6d0,uVar8 - 0x700,
                 -(ulonglong)(*(int *)(param_3 + 0x1c) != 0) & uVar8 - 0x720);
      *(undefined4 *)(param_3 + 0x18) = 0;
      *(undefined4 *)(param_3 + 0x24) = 0;
      if (*(int *)(param_3 + 0x1c) != 0) {
        uVar5 = *(uint *)(param_3 + 0x24);
        if (0 < (int)uVar5) {
          lVar9 = (ulonglong)uVar5 + ((ulonglong)uVar5 & 0x7fffffff) * 2;
          puVar10 = (undefined4 *)(*(int *)(param_3 + 0x1c) + -4);
          lVar11 = uVar8 - 0x364;
          do {
            iVar3 = (int)lVar11;
            puVar10[1] = *(undefined4 *)(iVar3 + 4);
            puVar10[2] = *(undefined4 *)(iVar3 + 8);
            puVar10[3] = *(undefined4 *)(iVar3 + 0xc);
            lVar11 = lVar11 + 0x10;
            puVar10 = puVar10 + 4;
            *puVar10 = *(undefined4 *)lVar11;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 0x50;
    } while (param_4 != 0);
  }
  return;
}

