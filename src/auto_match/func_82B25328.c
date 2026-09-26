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
extern int fn_82ADCF98();
extern int fn_82ADE488();
extern int fn_82B25248();


void fn_82B25328(undefined8 param_1,int param_2,ulonglong param_3,undefined8 param_4,char param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  
  uVar5 = 0;
  piVar11 = (int *)(param_2 + 0x2c);
  while( true ) {
    uVar8 = 0;
    uVar6 = 0;
    uVar7 = 0;
    if ((*(uint *)(param_2 + 8) >> 0x13 & 7) <= uVar5) break;
    puVar1 = (uint *)*piVar11;
    uVar9 = 0;
    uVar10 = 0;
    lVar14 = 4;
    do {
      if (((uint)(1 << (uVar6 & 0x3f)) & param_3) != 0) {
        uVar8 = uVar8 + 1;
        uVar9 = ((*puVar1 >> 5 & 0xff) >> (uVar7 & 0x3f) & 3) << (uVar10 & 0x3f) |
                uVar9 & ~(3 << (uVar10 & 0x3f));
        uVar10 = uVar10 + 2;
      }
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 + 2;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    *puVar1 = ((uVar8 & 7) << 0x14 | uVar9 & 0xff) << 5 | *puVar1 & 0xf1ffe01f;
    fn_82B25248(param_1,puVar1[3],param_4);
    uVar5 = uVar5 + 1;
    piVar11 = piVar11 + 1;
  }
  uVar5 = 0;
  iVar4 = 0;
  uVar12 = 1;
  iVar13 = 0;
  uVar9 = 0;
  do {
    if ((uVar12 & param_3) != 0) {
      uVar5 = uVar5 & ~(3 << (uVar8 & 0x3f)) | iVar4 << (uVar8 & 0x3f);
      if (param_5 == '\0') {
        uVar10 = *(uint *)(param_2 + 0xc);
        uVar2 = 0xf << (uVar9 & 0x3f);
        uVar3 = ((uVar10 & 0xffff) >> (uVar7 & 0x3f) & 0xf) << (uVar9 & 0x3f);
        if ((uVar10 & uVar2 & 0xffff) != uVar3) {
          *(ushort *)(param_2 + 0xe) = (ushort)uVar10 & ~(ushort)uVar2 | (ushort)uVar3;
        }
        piVar11 = *(int **)(param_2 + 0x10);
        if (piVar11 != (int *)0x0) {
          do {
            if (*piVar11 == 1) break;
            piVar11 = (int *)piVar11[1];
          } while (piVar11 != (int *)0x0);
          if (piVar11 != (int *)0x0) {
            *(undefined8 *)((int)piVar11 + iVar13 + 8) = *(undefined8 *)((int)piVar11 + uVar6 + 8);
            *(undefined8 *)((int)piVar11 + iVar13 + 0x28) =
                 *(undefined8 *)((int)piVar11 + uVar6 + 0x28);
          }
        }
      }
      iVar4 = iVar4 + 1;
      uVar9 = uVar9 + 4;
      iVar13 = iVar13 + 8;
    }
    uVar8 = uVar8 + 2;
    uVar7 = uVar7 + 4;
    uVar6 = uVar6 + 8;
    uVar12 = (uVar12 & 0x7fffffff) << 1;
    if (7 < uVar8) {
      for (puVar1 = *(uint **)(param_2 + 4); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
        if (puVar1[4] != 0) {
          uVar6 = *puVar1;
          if ((uVar6 & 0xe000000) != 0) {
            *puVar1 = ((((uVar5 >> (uVar6 >> 10 & 6) & 3) << 2 | uVar5 >> (uVar6 >> 8 & 6) & 3) << 2
                       | uVar5 >> (uVar6 >> 6 & 6) & 3) << 2 | uVar5 >> (uVar6 >> 4 & 6) & 3) << 5 |
                      uVar6 & 0xffffe01f;
          }
        }
      }
      if (param_5 != '\0') {
        if (((*(uint *)(param_2 + 8) & 0x800000) != 0) && ((*(ushort *)(param_2 + 0x10) & 7) != 0))
        {
          fn_82ADE488(param_1,param_2,param_3);
        }
        uVar5 = fn_82ADCF98(param_3);
        *(uint *)(param_2 + 8) =
             ((1 << (uVar5 & 7)) + -1) * 2 & 0x1eU |
             (uVar5 & 7) << 0xe | *(uint *)(param_2 + 8) & 0xfffe3fe1;
      }
      return;
    }
  } while( true );
}

