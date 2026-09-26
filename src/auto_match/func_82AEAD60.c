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
extern int fn_82ABE2E0();
extern int fn_82AD1978();
extern int fn_82AD1B28();
extern int fn_82AD20C0();
extern int fn_82ADD668();
extern int fn_82AE93B0();
extern int fn_82AEA520();
extern int fn_82B0FC78();
extern int fn_82B102D8();
extern int fn_82B8AC10();


void fn_82AEAD60(int param_1,int *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  bool bVar3;
  undefined2 uVar4;
  char cVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  
  uVar16 = 0;
  uVar15 = 0;
  if ((*(uint *)(param_3 + 8) & 0x3f80) == 0x3700) {
    iVar13 = param_2[1];
LAB_82aead94:
    uVar15 = 0;
    if (iVar13 != 0) {
      uVar15 = *(uint *)(iVar13 + 0x10);
      if ((uVar15 == 0) || ((*(uint *)(uVar15 + 8) & 0x3f80) != 0x3700)) goto LAB_82aeadb8;
      piVar6 = (int *)(uVar15 + 0x2c);
      for (uVar8 = 0; uVar8 < (*(uint *)(uVar15 + 8) >> 0x13 & 7); uVar8 = uVar8 + 1) {
        if ((int *)((uint *)*piVar6)[3] == param_2) {
          uVar10 = *(uint *)*piVar6 >> 4 & 6;
          uVar16 = uVar16 & ~(3 << uVar10) | uVar8 << uVar10;
        }
        piVar6 = piVar6 + 1;
      }
    }
  }
  puVar14 = (uint *)(param_2 + 1);
  do {
    puVar1 = (uint *)*puVar14;
    if (puVar1 == (uint *)0x0) {
      if ((*(uint *)(param_1 + 0x28) & 0x80000) == 0) {
        fn_82AE93B0(param_3);
      }
      if ((*(uint *)(param_3 + 8) & 0x3f80) == 0x3700) {
        fn_82B0FC78(param_1,param_3);
      }
      else if ((*(uint *)(param_3 + 8) >> 5 & 1) == 0) {
        fn_82AD1B28(param_3);
      }
      uVar15 = *(uint *)(param_3 + 8);
      *(uint *)(param_3 + 8) = uVar15 | 0x1000000;
      if (((uint)param_2[2] >> 0x17 & 1) != 0) {
        if ((*(uint *)(param_1 + 0x2c) >> 7 & 1) == 0) {
          fn_82B102D8(param_1,param_3);
        }
        else {
          *(uint *)(param_3 + 8) = uVar15 | 0x1800000;
          *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) & 0xfff8ffff | 0x10000;
          uVar4 = fn_82ADD668(param_1,param_2);
          *(undefined2 *)(param_3 + 0x12) = uVar4;
          uVar15 = 0;
          if (*(int *)(param_1 + 0x29c) != 0) {
            iVar13 = 0;
            do {
              if (*(int **)(*(int *)(param_1 + 0x2c4) + iVar13) == param_2) {
                *(uint *)(*(int *)(param_1 + 0x2c4) + iVar13) = param_3;
              }
              uVar15 = uVar15 + 1;
              iVar13 = iVar13 + 4;
            } while (uVar15 < *(uint *)(param_1 + 0x29c));
          }
        }
      }
      if (((uint)param_2[2] >> 0x19 & 1) != 0) {
        for (puVar14 = (uint *)*param_2; puVar14 != (uint *)0x0; puVar14 = (uint *)puVar14[1]) {
          if (((*puVar14 & 0x40000000) != 0) || (bVar3 = true, (*puVar14 & 0xe000000) != 0)) {
            bVar3 = false;
          }
          if (bVar3) {
            fn_82AD1978(param_3,puVar14);
          }
        }
        param_2[2] = param_2[2] & 0xfdffffff;
        lVar17 = 4;
        *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 0x2000000;
        puVar14 = (uint *)(param_2[7] + 0x5c);
        do {
          if ((int *)*puVar14 == param_2) {
            *puVar14 = param_3;
          }
          puVar14 = puVar14 + 1;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      cVar5 = fn_82ABE2E0(param_3);
      if (cVar5 == '\0') {
        if ((*(uint *)(param_3 + 8) & 0x3f80) == 0x3700) {
          fn_82AEA520(param_1,param_3);
        }
      }
      else {
        do {
          uVar15 = *(uint *)((param_3 & 0xfffffffe) + 0x24);
          if ((uVar15 & 1) == 0) {
            uVar15 = (uVar15 & 0xfffffffe) - 0x28;
          }
          else {
            uVar15 = 0;
          }
          cVar5 = fn_82ABE2E0(param_3);
          if (cVar5 != '\0') {
            fn_82B8AC10(param_1,param_3,0,1);
          }
          param_3 = uVar15;
        } while (uVar15 != 0);
      }
      return;
    }
    uVar8 = puVar1[4];
    if (uVar8 != 0) {
      uVar10 = *puVar1;
      uVar11 = uVar10 >> 0x19 & 7;
      if ((uVar11 == 0) || ((*(uint *)(param_3 + 8) & 0x3f80) != 0x3700)) {
LAB_82aeafc4:
        if (((*(uint *)(param_3 + 8) >> 5 & 1) == 0) || ((*puVar1 & 0xe000000) == 0)) {
          puVar12 = (uint *)(puVar1[3] + 4);
          for (puVar2 = (uint *)*puVar12; puVar2 != puVar1; puVar2 = (uint *)puVar2[2]) {
            puVar12 = puVar2 + 2;
          }
          *puVar12 = puVar1[2];
          puVar1[2] = *(uint *)(param_3 + 4);
          *(uint **)(param_3 + 4) = puVar1;
          puVar1[3] = param_3;
        }
        else {
          fn_82AD20C0(uVar8,puVar1,param_1);
        }
      }
      else {
        uVar7 = *(uint *)(uVar8 + 8) >> 7 & 0x7f;
        if ((uVar7 != 0x70) && (uVar7 != 0x6e)) {
          uVar7 = 0;
          uVar9 = 0;
          if (uVar11 == 0) {
LAB_82aeaec4:
            bVar3 = false;
          }
          else {
            uVar11 = 0;
            do {
              uVar9 = uVar9 + 1;
              uVar7 = 1 << ((uVar10 >> 5 & 0xff) >> (uVar11 & 0x3f) & 3) | uVar7;
              uVar11 = uVar11 + 2;
            } while (uVar9 < (uVar10 >> 0x19 & 7));
            if ((uVar7 == 0) || (bVar3 = true, uVar7 != (uVar7 & ~(uVar7 - 1)))) goto LAB_82aeaec4;
          }
          if (!bVar3) {
            if ((uVar10 & 1) != 0) {
              *puVar1 = uVar10 & 0xfffffffe;
            }
            if (uVar15 != 0) {
              uVar8 = *puVar1;
              puVar12 = (uint *)(puVar1[3] + 4);
              *puVar1 = ((((uVar16 >> (uVar8 >> 10 & 6) & 3) << 2 | uVar16 >> (uVar8 >> 8 & 6) & 3)
                          << 2 | uVar16 >> (uVar8 >> 6 & 6) & 3) << 2 |
                        uVar16 >> (uVar8 >> 4 & 6) & 3) << 5 | uVar8 & 0xffffe01f;
              for (puVar2 = (uint *)*puVar12; puVar2 != puVar1; puVar2 = (uint *)puVar2[2]) {
                puVar12 = puVar2 + 2;
              }
              *puVar12 = puVar1[2];
              puVar1[2] = *(uint *)(uVar15 + 4);
              *(uint **)(uVar15 + 4) = puVar1;
              puVar1[3] = uVar15;
              goto LAB_82aeb024;
            }
            goto LAB_82aeafc4;
          }
        }
        puVar12 = (uint *)(puVar1[3] + 4);
        uVar8 = *(uint *)(*(int *)(((uVar10 >> 5 & 3) + 0xb) * 4 + param_3) + 0xc);
        for (puVar2 = (uint *)*puVar12; puVar2 != puVar1; puVar2 = (uint *)puVar2[2]) {
          puVar12 = puVar2 + 2;
        }
        *puVar12 = puVar1[2];
        puVar1[2] = *(uint *)(uVar8 + 4);
        *(uint **)(uVar8 + 4) = puVar1;
        puVar1[3] = uVar8;
        *puVar1 = *puVar1 & 0xffffe01f;
      }
    }
LAB_82aeb024:
    if ((uint *)*puVar14 == puVar1) {
      puVar14 = puVar1 + 2;
    }
  } while( true );
LAB_82aeadb8:
  iVar13 = *(int *)(iVar13 + 8);
  goto LAB_82aead94;
}

