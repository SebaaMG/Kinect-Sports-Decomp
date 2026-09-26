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
extern unsigned int *auStack_180;
extern unsigned int *auStack_1d0;
extern int fn_82A1DD38();
extern int fn_82F4F140();
extern int fn_82F4F578();
extern int fn_82F4FBE8();
extern int fn_82F4FC68();
extern int fn_82F4FD20();
extern int fn_82F4FD98();
extern int fn_82F50258();
extern int fn_82F539A8();


void fn_82F50348(int param_1,longlong param_2,longlong param_3,undefined8 param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_r0;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  float *pfVar11;
  longlong lVar12;
  float *pfVar13;
  longlong lVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 auStack_1d0 [18];
  float afStack_188 [2];
  undefined1 auStack_180 [384];
  
  iVar6 = (int)param_3;
  if ((-1 < iVar6) && (iVar6 < 6)) {
    fn_82A1DD38(param_1 + 0x1e0,param_2,0xab0);
    *(int *)(param_1 + 0xc90) = iVar6;
    lVar14 = 0x14;
    lVar12 = 0;
    puVar10 = auStack_180;
    do {
      uVar7 = param_3 * 0x1c + 5 + lVar12;
      lVar12 = lVar12 + 1;
      iVar6 = (int)param_2;
      puVar4 = (undefined4 *)((int)((uVar7 & 0xffffffff) << 4) + iVar6 & 0xfffffff0);
      uVar16 = puVar4[1];
      uVar17 = puVar4[2];
      uVar18 = puVar4[3];
      puVar5 = (undefined4 *)((uint)(puVar10 + in_r0) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar16;
      puVar5[2] = uVar17;
      puVar5[3] = uVar18;
      puVar10 = puVar10 + 0x10;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    if (param_5 != '\0') {
      fn_82F50258(param_1,auStack_180);
    }
    puVar4 = (undefined4 *)(iVar6 + 0x10U & 0xfffffff0);
    uVar16 = puVar4[1];
    uVar17 = puVar4[2];
    uVar18 = puVar4[3];
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0xcf0) + 0x50U & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar16;
    puVar5[2] = uVar17;
    puVar5[3] = uVar18;
    iVar9 = 0;
    lVar12 = param_3 * 0x1c0 + param_2 + 0x30;
    lVar14 = 0x14;
    *(uint *)(*(int *)(param_1 + 0xcf0) + 0x1844) = (uint)LZCOUNT(*(int *)lVar12 + -2) >> 5;
    iVar8 = *(int *)(param_1 + 0xcf0);
    do {
      *(undefined4 *)((int)auStack_1d0 + iVar9) = *(undefined4 *)(iVar9 + iVar8);
      iVar9 = iVar9 + 4;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    fn_82F539A8(iVar8 + 0x850,iVar8 + 0x60);
    fn_82F4F140(*(int *)(param_1 + 0xcf0) + 0x60,auStack_180,auStack_1d0,param_4,
                      *(undefined4 *)(*(int *)(param_1 + 0xcf0) + 0x1844));
    fn_82F4FC68(param_1,(ulonglong)*(uint *)(param_1 + 0xcf0) + 0x60);
    fn_82F4FBE8(param_1,(ulonglong)*(uint *)(param_1 + 0xcf0) + 0x60);
    fn_82A1DD38(param_1 + 0x20,lVar12,0x1c0);
    lVar14 = 0x14;
    pfVar13 = afStack_188;
    lVar12 = 0;
    iVar8 = 0;
    pfVar11 = (float *)(param_1 + 0x38);
    do {
      uVar7 = param_3 * 0x70 + 100 + lVar12;
      fVar1 = pfVar13[2];
      lVar12 = lVar12 + 1;
      fVar2 = pfVar13[3];
      pfVar13 = pfVar13 + 4;
      fVar3 = *pfVar13;
      *(undefined4 *)(*(int *)(param_1 + 0xcf0) + iVar8) =
           *(undefined4 *)((int)((uVar7 & 0xffffffff) << 2) + iVar6);
      pfVar11[2] = -fVar1;
      pfVar11[3] = fVar2;
      iVar8 = iVar8 + 4;
      pfVar11 = pfVar11 + 4;
      *pfVar11 = -fVar3;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    fn_82F539A8((ulonglong)*(uint *)(param_1 + 0xcf0) + 0x1040,
                      (ulonglong)*(uint *)(param_1 + 0xcf0) + 0x60);
    fn_82F4FD20(param_1,(ulonglong)*(uint *)(param_1 + 0xcf0) + 0x1040);
    dVar15 = (double)fn_82F4FD98(param_1,(ulonglong)*(uint *)(param_1 + 0xcf0) + 0x1040);
    *(float *)(param_1 + 0xc94) = (float)dVar15;
    fn_82F4F578((ulonglong)*(uint *)(param_1 + 0xcf0) + 0x1040);
  }
  return;
}

