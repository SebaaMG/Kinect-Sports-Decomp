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
extern unsigned int *auStack_60;
extern unsigned int fStack0000001c;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_82CE5040();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned int uStack_64;
extern V16 loadVectorLeftIndexed128();


void fn_82D45CE8(double param_1,int param_2,undefined8 param_3,undefined8 param_4,int *param_5)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 in_r0;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  float in_register_00010000;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack0000001c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [96];
  
  uVar8 = ZEXT48(&stack0x00000000);
  fStack0000001c = (float)param_1;
  iVar11 = *(int *)(param_2 + 0x14) / 3;
  iVar9 = fn_82CE5410();
  if ((int)(param_5[2] & 0x3fffffffU) < iVar11) {
    lVar10 = ((ulonglong)(uint)param_5[2] & 0x3fffffff) << 1;
    if ((int)lVar10 <= iVar11) {
      lVar10 = (longlong)iVar11;
    }
    fn_82CE6310(*(undefined4 *)(iVar9 + 0x10),param_5,lVar10,0x10);
  }
  param_5[1] = iVar11;
  iVar11 = 0;
  if (0 < *(int *)(param_2 + 0x14)) {
    iVar9 = 0;
    loadVectorLeftIndexed128(in_r0,uVar8 + 0x1c);
    uStack_64 = lbl_821AAD20;
    fVar23 = in_register_00010000;
    fVar22 = in_register_00010000;
    fVar21 = in_register_00010000;
    do {
      iVar1 = *(int *)(param_2 + 0x10);
      iVar3 = (int)in_r0;
      pfVar2 = (float *)(iVar3 + param_2 & 0xfffffff0);
      fVar18 = pfVar2[1];
      fVar19 = pfVar2[2];
      fVar20 = pfVar2[3];
      fStack_70 = (float)*(ushort *)(iVar9 + iVar1);
      fStack_6c = (float)*(ushort *)(iVar9 + iVar1 + 2);
      fStack_68 = (float)*(ushort *)(iVar9 + iVar1 + 4);
      pfVar4 = (float *)((int)&fStack_70 + iVar3 & 0xfffffff0);
      fVar12 = pfVar4[1];
      fVar14 = pfVar4[2];
      fVar16 = pfVar4[3];
      pfVar5 = (float *)((uint)(auStack_60 + iVar3) & 0xfffffff0);
      *pfVar5 = fVar21 * *pfVar4 + *pfVar2;
      pfVar5[1] = fVar22 * fVar12 + fVar18;
      pfVar5[2] = fVar23 * fVar14 + fVar19;
      pfVar5[3] = in_register_00010000 * fVar16 + fVar20;
      fn_82CE5040(uVar8 - 0x60,param_4,uVar8 - 0x60);
      iVar1 = iVar11 / 3;
      iVar11 = iVar11 + 3;
      iVar9 = iVar9 + 6;
      puVar6 = (undefined4 *)((uint)(auStack_60 + (int)in_r0) & 0xfffffff0);
      uVar13 = puVar6[1];
      uVar15 = puVar6[2];
      uVar17 = puVar6[3];
      puVar7 = (undefined4 *)(iVar1 * 0x10 + *param_5 & 0xfffffff0);
      *puVar7 = *puVar6;
      puVar7[1] = uVar13;
      puVar7[2] = uVar15;
      puVar7[3] = uVar17;
    } while (iVar11 < *(int *)(param_2 + 0x14));
  }
  return;
}

