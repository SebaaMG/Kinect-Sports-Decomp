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
extern unsigned int lbl_8218E3DC;
extern unsigned int lbl_82195680;
extern V16 vectorSubtractFloatingPoint();


undefined8
fn_825D2FA0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,uint param_7,int param_8)

{
  undefined4 *puVar1;
  uint uVar2;
  float *pfVar3;
  byte *pbVar4;
  float fVar5;
  int in_r0;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 in_stack_00000054;
  float afStack_80 [32];
  
  fVar5 = lbl_82195680;
  puVar1 = (undefined4 *)(in_r0 + (int)param_5 & 0xfffffff0);
  uVar10 = *puVar1;
  uVar11 = puVar1[1];
  uVar12 = puVar1[2];
  uVar13 = puVar1[3];
  uVar2 = in_r0 + (int)param_6 & 0xfffffff0;
  fVar14 = *(float *)(uVar2 + 4);
  fVar15 = *(float *)(uVar2 + 8);
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  fVar14 = fVar14 * fVar14 + 0.0 + fVar15 * fVar15;
  pfVar3 = (float *)((int)afStack_80 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar14;
  pfVar3[1] = fVar14;
  pfVar3[2] = fVar14;
  pfVar3[3] = fVar14;
  if (fVar5 < afStack_80[0]) {
    pbVar9 = (byte *)(param_1 + 2);
    uVar6 = 0;
    iVar8 = 0;
    if (0 < *param_1) {
      do {
        if (pbVar9 == (byte *)0x0) {
          return uVar6;
        }
        if ((((*(uint *)(*(short *)(pbVar9 + 2) * 4 + param_8) & *(uint *)(pbVar9 + 4) & param_7) !=
              0) && ((code *)(&lbl_8218E3DC)[(uint)*pbVar9 * 5] != (code *)0x0))
           && (iVar7 = (*(code *)(&lbl_8218E3DC)[(uint)*pbVar9 * 5])
                                 (pbVar9,param_2,param_3,param_4,param_5,param_6,in_stack_00000054),
              iVar7 != 0)) {
          uVar6 = 1;
        }
        pbVar4 = pbVar9 + 1;
        iVar8 = iVar8 + 1;
        pbVar9 = pbVar9 + *pbVar4;
        if (*pbVar4 == 0) {
          pbVar9 = (byte *)0x0;
        }
      } while (iVar8 < *param_1);
    }
  }
  else {
    puVar1 = (undefined4 *)(in_r0 + (int)param_6 & 0xfffffff0);
    *puVar1 = uVar10;
    puVar1[1] = uVar11;
    puVar1[2] = uVar12;
    puVar1[3] = uVar13;
    uVar6 = 0;
  }
  return uVar6;
}

