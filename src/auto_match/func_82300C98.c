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
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorSubtractFloatingPoint();


void fn_82300C98(int param_1,int param_2,int param_3)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined8 in_r0;
  int iVar6;
  longlong lVar7;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  if (*(int *)(param_2 + 0x554) == 3) {
    uVar1 = *(uint *)(param_2 + 0x550);
    iVar6 = uVar1 - 1;
    if (uVar1 < 2) {
      iVar6 = 2;
    }
    lVar7 = 3;
    do {
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    pfVar2 = (float *)((uVar1 * 0x16 + param_3) * 0x10 + param_2 & 0xfffffff0);
    fVar8 = pfVar2[1];
    fVar9 = pfVar2[2];
    fVar10 = pfVar2[3];
    pfVar3 = (float *)((iVar6 * 0x16 + param_3) * 0x10 + param_2 & 0xfffffff0);
    fVar11 = pfVar3[1];
    fVar12 = pfVar3[2];
    fVar13 = pfVar3[3];
    vectorSubtractFloatingPoint(in_vs45,in_vs32);
    loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x10);
    pfVar4 = (float *)((int)in_r0 + param_1 & 0xfffffff0);
    *pfVar4 = *pfVar2 * *pfVar3;
    pfVar4[1] = fVar8 * fVar11;
    pfVar4[2] = fVar9 * fVar12;
    pfVar4[3] = fVar10 * fVar13;
    return;
  }
  puVar5 = (undefined4 *)((int)in_r0 + param_1 & 0xfffffff0);
  *puVar5 = in_register_000104d0;
  puVar5[1] = in_register_000104d4;
  puVar5[2] = in_register_000104d8;
  puVar5[3] = in_vr77;
  return;
}

