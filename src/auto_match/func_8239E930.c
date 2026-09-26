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
extern int fn_822315A0();
extern int fn_822ABA88();
extern int fn_82359DB8();
extern int fn_82397E08();
extern int fn_82397F30();
extern int fn_823A3A70();
extern unsigned int stack0x00000000;
extern unsigned int uStack_70;
extern U64 storeWordConditionalIndexed();
extern V16 loadVectorLeftIndexed128();


void fn_8239E930(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  float *pfVar3;
  bool bVar4;
  undefined8 in_r0;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint *puVar8;
  int iVar9;
  ulonglong uVar10;
  char in_RESERVE;
  byte bVar11;
  float in_register_00010000;
  float in_ACC;
  float in_register_00010008;
  float in_vr0;
  float in_register_000104d0;
  float fVar12;
  float in_register_000104d4;
  float fVar13;
  float in_register_000104d8;
  float fVar14;
  float in_vr77;
  float fVar15;
  ulonglong uStack_70;
  
  iVar9 = 0;
  uVar10 = 0;
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x10) + 0x2c) * 4 +
                    **(int **)(*(int *)(param_1 + 0x240) + 8));
  iVar5 = *(int *)(piVar1[4] * 4 + *piVar1);
  fVar15 = in_vr77;
  fVar14 = in_register_000104d8;
  fVar13 = in_register_000104d4;
  fVar12 = in_register_000104d0;
  if (*(int *)(iVar5 + 8) != 0) {
    do {
      iVar5 = fn_822ABA88(iVar5,uVar10);
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x240);
      iVar6 = fn_82397F30(uVar7);
      bVar11 = (iVar6 == 0) << 1;
      if ((iVar6 == 0) || (*(int *)(param_1 + 0x28c) != 4)) {
LAB_8239ea54:
        bVar4 = false;
      }
      else {
        if (*(int *)((int)uVar7 + 0x54) == 3) {
          fn_82359DB8(ZEXT48(&stack0x00000000) - 0x70,uVar7 + 0x40,3);
          uVar7 = uStack_70 & 0xffffffff;
          if (uVar7 != 0) {
            do {
              puVar8 = (uint *)(uVar7 + 4);
              if (in_RESERVE != '\0') {
                uVar2 = storeWordConditionalIndexed((ulonglong)*puVar8 + 1,0,uVar7 + 4);
                *puVar8 = uVar2;
                bVar11 = 2;
              }
            } while (!(bool)(bVar11 >> 1 & 1));
            fn_822315A0(uVar7);
          }
          iVar6 = fn_823A3A70((((U64)(uStack_70) >> 0) & 0xFFFFFFFF));
          if (uVar7 != 0) {
            fn_822315A0(uVar7);
          }
        }
        else {
          iVar6 = 0;
        }
        if (iVar6 == 0) goto LAB_8239ea54;
        iVar6 = fn_82397E08(*(undefined4 *)(param_1 + 0x240),iVar5);
        bVar4 = true;
        if (iVar6 != 0) goto LAB_8239ea54;
      }
      if ((*(int *)(iVar5 + 0x24) != 0) && (!bVar4)) {
        iVar9 = iVar9 + 1;
        pfVar3 = (float *)(iVar5 + 0x80U & 0xfffffff0);
        in_register_00010000 = *pfVar3;
        in_ACC = pfVar3[1];
        in_register_00010008 = pfVar3[2];
        in_vr0 = pfVar3[3];
        in_register_000104d0 = in_register_000104d0 + in_register_00010000;
        in_register_000104d4 = in_register_000104d4 + in_ACC;
        in_register_000104d8 = in_register_000104d8 + in_register_00010008;
        in_vr77 = in_vr77 + in_vr0;
      }
      uVar10 = uVar10 + 1;
      iVar5 = *(int *)(piVar1[4] * 4 + *piVar1);
    } while ((uVar10 & 0xffffffff) < (ulonglong)*(uint *)(iVar5 + 8));
    if (iVar9 != 0) {
      loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x70);
      pfVar3 = (float *)((int)in_r0 + param_2 & 0xfffffff0);
      *pfVar3 = in_register_000104d0 * in_register_00010000;
      pfVar3[1] = in_register_000104d4 * in_ACC;
      pfVar3[2] = in_register_000104d8 * in_register_00010008;
      pfVar3[3] = in_vr77 * in_vr0;
      return;
    }
  }
  pfVar3 = (float *)((int)in_r0 + param_2 & 0xfffffff0);
  *pfVar3 = fVar12;
  pfVar3[1] = fVar13;
  pfVar3[2] = fVar14;
  pfVar3[3] = fVar15;
  return;
}

