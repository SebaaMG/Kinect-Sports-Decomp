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
extern int fn_82AD1978();
extern int fn_82B82378();
extern int fn_82B84350();


uint fn_82B1E978(int param_1,uint param_2,int param_3,int param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  iVar1 = *(int *)((param_4 + 0xb) * 4 + param_2);
  iVar2 = *(int *)((param_3 + 0xb) * 4 + param_2);
  uVar7 = fn_82B84350(param_1,*(undefined4 *)(param_2 + 0x1c),0,
                            ((ulonglong)(*(uint *)(param_2 + 8) >> 0x13) & 7) - 1);
  uVar11 = uVar7 & 0xfffffffe;
  puVar9 = (uint *)((param_2 & 0xfffffffe) + 0x24);
  piVar12 = (int *)0x0;
  *(uint *)(uVar11 + 0x24) = *puVar9;
  *(uint *)(*puVar9 & 0xfffffffe) = uVar11;
  *(uint *)(uVar11 + 0x28) = param_2 & 0xfffffffe;
  *puVar9 = uVar11 + 0x28;
  if (((~(ulonglong)*(uint *)(param_1 + 0x28) & 0xffffffff) >> 0xe & 1) != 0) {
    for (piVar12 = *(int **)(param_2 + 0x10); (piVar12 != (int *)0x0 && (*piVar12 != 1));
        piVar12 = (int *)piVar12[1]) {
    }
  }
  uVar13 = 0;
  lVar14 = 0;
  lVar10 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar15 = 0;
  piVar6 = piVar12;
  for (uVar11 = 0; uVar11 < (*(uint *)(param_2 + 8) >> 0x13 & 7); uVar11 = uVar11 + 1) {
    iVar3 = *(int *)(param_2 + 0x2c + uVar17);
    uVar13 = uVar13 & ~(3 << (uVar15 & 0x3f)) | (int)lVar14 << (uVar15 & 0x3f);
    if (iVar3 != iVar2) {
      if (iVar3 == iVar1) {
        lVar10 = lVar14;
      }
      uVar8 = fn_82AD1978(uVar7);
      *(undefined4 *)(uVar7 + 0x2c + uVar16) = uVar8;
      uVar4 = 0xf << (uVar16 & 0x3f);
      uVar5 = (*(ushort *)(param_2 + 0xe) >> (uVar17 & 0x3f) & 0xf) << (uVar16 & 0x3f);
      if ((*(uint *)(uVar7 + 0xc) & uVar4 & 0xffff) != uVar5) {
        *(ushort *)(uVar7 + 0xe) = (ushort)*(uint *)(uVar7 + 0xc) & ~(ushort)uVar4 | (ushort)uVar5;
      }
      if (piVar12 != (int *)0x0) {
        fn_82B82378(*(undefined8 *)(piVar6 + 2),*(undefined8 *)(piVar6 + 10),uVar7,lVar14);
      }
      lVar14 = lVar14 + 1;
      uVar16 = uVar16 + 4;
    }
    uVar15 = uVar15 + 2;
    uVar17 = uVar17 + 4;
    piVar6 = piVar6 + 2;
  }
  *param_5 = uVar13 & ~(3 << (param_3 << 1 & 0x3eU)) | (int)lVar10 << (param_3 << 1 & 0x3eU);
  return uVar7;
}

