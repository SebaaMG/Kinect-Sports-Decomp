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
extern int fn_82B841E8();
extern int fn_82B85910();
extern int fn_82B8AC10();
extern unsigned int uRam83223cbc;
extern unsigned int uRam83223cc0;
extern unsigned int uRam83223cc4;
extern unsigned int uRam83223cc8;


void fn_82B1E618(int param_1,undefined8 param_2,uint param_3,longlong param_4,undefined8 param_5,
                  uint param_6)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  char cVar8;
  uint uVar7;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  
  uVar14 = *(uint *)(param_3 + 8) >> 0xe;
  uVar15 = (ulonglong)uVar14 & 7;
  uVar6 = *(uint *)(param_6 + 8) >> 0xe;
  uVar16 = (ulonglong)uVar6 & 7;
  cVar8 = fn_82B85910(param_3,param_6);
  uVar17 = param_3;
  if (cVar8 != '\0') {
    uVar17 = param_6;
  }
  uVar7 = fn_82B841E8(param_1,*(undefined4 *)(uVar17 + 0x1c),0,0x71,0,
                            uVar16 + uVar15 + param_4);
  uVar5 = uVar7 & 0xfffffffe;
  puVar13 = (uint *)((uVar17 & 0xfffffffe) + 0x24);
  piVar10 = (int *)(param_3 + 4);
  *(uint *)(uVar5 + 0x24) = *puVar13;
  *(uint *)(*puVar13 & 0xfffffffe) = uVar5;
  *(uint *)(uVar5 + 0x28) = uVar17 & 0xfffffffe;
  *puVar13 = uVar5 + 0x28;
  *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) | 0x800000;
  while( true ) {
    iVar1 = *piVar10;
    if (iVar1 == 0) break;
    if (*(int *)(iVar1 + 0x10) != 0) {
      piVar11 = (int *)(*(int *)(iVar1 + 0xc) + 4);
      for (iVar2 = *piVar11; iVar2 != iVar1; iVar2 = *(int *)(iVar2 + 8)) {
        piVar11 = (int *)(iVar2 + 8);
      }
      *piVar11 = *(int *)(iVar1 + 8);
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(uVar7 + 4);
      *(int *)(uVar7 + 4) = iVar1;
      *(uint *)(iVar1 + 0xc) = uVar7;
    }
    if (*piVar10 == iVar1) {
      piVar10 = (int *)(iVar1 + 8);
    }
  }
  if ((uRam83223cc8 & 1) == 0) {
    uRam83223cc8 = uRam83223cc8 | 1;
    uRam83223cbc = 0xf9;
    uRam83223cc0 = 0xfe;
    uRam83223cc4 = 0xff;
  }
  puVar13 = (uint *)(param_6 + 4);
  while( true ) {
    puVar3 = (uint *)*puVar13;
    if (puVar3 == (uint *)0x0) break;
    if (puVar3[4] != 0) {
      puVar12 = (uint *)(puVar3[3] + 4);
      for (puVar4 = (uint *)*puVar12; puVar4 != puVar3; puVar4 = (uint *)puVar4[2]) {
        puVar12 = puVar4 + 2;
      }
      *puVar12 = puVar3[2];
      puVar3[2] = *(uint *)(uVar7 + 4);
      *(uint **)(uVar7 + 4) = puVar3;
      uVar17 = *puVar3;
      puVar3[3] = uVar7;
      if ((uVar17 & 0xe000000) != 0) {
        uVar5 = *(uint *)((int)((uVar15 + param_4 & 0xffffffff) << 2) + -0x7cddc348);
        *puVar3 = ((((uVar5 >> (uVar17 >> 10 & 6) & 3) << 2 | uVar5 >> (uVar17 >> 8 & 6) & 3) << 2 |
                   uVar5 >> (uVar17 >> 6 & 6) & 3) << 2 | uVar5 >> (uVar17 >> 4 & 6) & 3) << 5 |
                  uVar17 & 0xffffe01f;
      }
    }
    if ((uint *)*puVar13 == puVar3) {
      puVar13 = puVar3 + 2;
    }
  }
  if ((uVar14 & 7) != 0) {
    uVar14 = 0;
    uVar18 = uVar15;
    do {
      uVar17 = 0xf << (uVar14 & 0x3f);
      uVar5 = (*(ushort *)(param_3 + 0xe) >> (uVar14 & 0x3f) & 0xf) << (uVar14 & 0x3f);
      if ((*(uint *)(uVar7 + 0xc) & uVar17 & 0xffff) != uVar5) {
        *(ushort *)(uVar7 + 0xe) = (ushort)*(uint *)(uVar7 + 0xc) & ~(ushort)uVar17 | (ushort)uVar5;
      }
      uVar14 = uVar14 + 4;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  lVar9 = 0;
  if ((uVar6 & 7) != 0) {
    uVar14 = 0;
    do {
      uVar17 = (uint)((uVar15 + param_4 + lVar9 & 0xffffffff) << 2);
      uVar6 = 0xf << (uVar17 & 0x3c);
      uVar17 = (*(ushort *)(param_6 + 0xe) >> (uVar14 & 0x3f) & 0xf) << (uVar17 & 0x3c);
      if ((*(uint *)(uVar7 + 0xc) & uVar6 & 0xffff) != uVar17) {
        *(ushort *)(uVar7 + 0xe) = (ushort)*(uint *)(uVar7 + 0xc) & ~(ushort)uVar6 | (ushort)uVar17;
      }
      lVar9 = lVar9 + 1;
      uVar14 = uVar14 + 4;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  uVar14 = 0;
  if (*(int *)(param_1 + 0x218) != 0) {
    puVar13 = (uint *)(param_1 + 0x160);
    do {
      if (*puVar13 == param_3) {
        *puVar13 = uVar7;
      }
      if (*puVar13 == param_6) {
        *puVar13 = uVar7;
        puVar13[-1] = ((puVar13[-1] >> 9 & 0xf) << ((int)uVar15 + (int)param_4 & 0x3fU) & 0xf) << 9
                      | puVar13[-1] & 0xffffe1ff;
      }
      uVar14 = uVar14 + 1;
      puVar13 = puVar13 + 3;
    } while (uVar14 < *(uint *)(param_1 + 0x218));
  }
  fn_82B8AC10(param_1,param_3,0,1);
  fn_82B8AC10(param_1,param_6,0,1);
  return;
}

