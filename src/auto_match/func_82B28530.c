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
extern int fn_82AD18C0();
extern int fn_82AD1918();
extern int fn_82AD1978();
extern int fn_82B102D0();
extern int fn_82B17400();
extern int fn_82B25248();
extern int fn_82B84350();
extern int fn_82B8AC10();


void fn_82B28530(int param_1,uint param_2,uint param_3,uint param_4,ulonglong param_5,
                  ulonglong param_6,undefined8 param_7)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar6;
  undefined8 uVar5;
  undefined4 uVar7;
  char cVar9;
  uint uVar8;
  ulonglong uVar10;
  uint *puVar12;
  uint uVar13;
  ulonglong uVar11;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  undefined4 *puVar18;
  int *piVar19;
  uint uVar20;
  
  bVar4 = false;
  puVar16 = (uint *)(param_2 + 4);
  do {
    puVar1 = (uint *)*puVar16;
    if (puVar1 == (uint *)0x0) {
      if (bVar4) {
        fn_82B25248(param_1,param_2,param_7);
        fn_82B25248(param_1,param_4,param_7);
        piVar19 = (int *)(param_2 + 0x28);
        for (uVar20 = 0; uVar20 < (*(uint *)(param_2 + 8) >> 0x13 & 7); uVar20 = uVar20 + 1) {
          piVar19 = piVar19 + 1;
          fn_82B25248(param_1,*(undefined4 *)(*piVar19 + 0xc),param_7);
        }
      }
      else {
        cVar9 = fn_82ABE2E0(param_4);
        if (cVar9 != '\0') {
          fn_82B8AC10(param_1,param_4,0,1);
        }
      }
      return;
    }
    uVar20 = puVar1[4];
    uVar6 = param_4;
    if (uVar20 != 0) {
      uVar13 = *puVar1;
      uVar8 = uVar13 >> 0x19 & 7;
      if (uVar8 != 0) {
        uVar14 = 0;
        if (uVar8 != 0) {
          uVar8 = 0;
          do {
            if (param_3 == ((uVar13 >> 5 & 0xff) >> (uVar8 & 0x3f) & 3)) {
              bVar3 = true;
              goto LAB_82b285c4;
            }
            uVar14 = uVar14 + 1;
            uVar8 = uVar8 + 2;
          } while (uVar14 < (*puVar1 >> 0x19 & 7));
        }
        bVar3 = false;
LAB_82b285c4:
        if (bVar3) {
          if ((param_6 & 0xffffffff) != 0) {
            if ((param_6 & 0x18) == 0) {
              if ((param_6 & 2) == 0) {
LAB_82b28600:
                if ((param_6 & 4) != 0) {
                  bVar3 = false;
                  if ((uVar13 & 1) != 0) goto LAB_82b28618;
                }
                bVar3 = true;
              }
              else {
                if ((uVar13 & 1) == 0) goto LAB_82b28600;
                bVar3 = false;
              }
LAB_82b28618:
              if (bVar3) goto LAB_82b286a0;
            }
            uVar6 = fn_82B84350(param_1,*(undefined4 *)(param_2 + 0x1c),0,1);
            uVar13 = uVar6 & 0xfffffffe;
            puVar12 = (uint *)((param_2 & 0xfffffffe) + 0x24);
            *(uint *)(uVar13 + 0x24) = *puVar12;
            *(uint *)(*puVar12 & 0xfffffffe) = uVar13;
            *(uint *)(uVar13 + 0x28) = param_2 & 0xfffffffe;
            *puVar12 = uVar13 + 0x28;
            uVar5 = fn_82AD1918(param_1,param_4,param_5,param_6);
            uVar7 = fn_82AD1978(uVar6,uVar5);
            *(undefined4 *)(uVar6 + 0x2c) = uVar7;
            param_5 = 0;
            param_6 = 0;
          }
LAB_82b286a0:
          uVar13 = *puVar1 >> 0x19;
          if ((uVar13 & 7) == 1) {
            uVar13 = *(uint *)(uVar20 + 8) >> 7 & 0x7f;
            if (uVar13 == 0x70) {
              if ((*(int *)(uVar20 + 0x1c) == *(int *)(param_2 + 0x1c)) &&
                 ((*(int *)(uVar6 + 0x1c) != *(int *)(param_2 + 0x1c) ||
                  ((*(uint *)(uVar6 + 8) & 0x3f80) == 0x3800)))) goto LAB_82b28a24;
            }
            cVar9 = fn_82B17400(uVar20,uVar6,param_1);
            if (cVar9 == '\0') goto LAB_82b28a24;
            if (uVar13 == 0x70) {
              uVar13 = *(uint *)(param_2 + 0x1c);
              if (*(uint *)(uVar6 + 0x1c) != uVar13) {
                if (uVar13 != (-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4)))
                {
                  uVar8 = fn_82B102D0(param_1,uVar13,uVar6,param_5,param_6);
                  puVar15 = (uint *)(puVar1[3] + 4);
                  for (puVar12 = (uint *)*puVar15; puVar12 != puVar1; puVar12 = (uint *)puVar12[2])
                  {
                    puVar15 = puVar12 + 2;
                  }
                  *puVar15 = puVar1[2];
                  puVar1[2] = *(uint *)(uVar8 + 4);
                  *(uint **)(uVar8 + 4) = puVar1;
                  uVar13 = *puVar1 & 0xffffe01f | 0x1c80;
                  puVar1[3] = uVar8;
                  goto LAB_82b28a0c;
                }
                goto LAB_82b28a24;
              }
            }
            puVar15 = (uint *)(puVar1[3] + 4);
            for (puVar12 = (uint *)*puVar15; puVar12 != puVar1; puVar12 = (uint *)puVar12[2]) {
              puVar15 = puVar12 + 2;
            }
            *puVar15 = puVar1[2];
            uVar8 = (uint)((param_5 & 0x1b) << 5) | 0x1c80;
            puVar1[2] = *(uint *)(uVar6 + 4);
            *(uint **)(uVar6 + 4) = puVar1;
            uVar13 = *puVar1;
            puVar1[3] = uVar6;
            *puVar1 = uVar8 | uVar13 & 0xfffffc9f;
            uVar11 = (ulonglong)uVar13 & 0x1f;
            uVar10 = param_6;
            if (((param_6 & 4) != 0) && ((uVar13 & 2) != 0)) {
              uVar10 = param_6 - 4;
            }
            if ((uVar10 & uVar11 & 4) != 0) {
              uVar10 = uVar10 - 4;
              uVar11 = uVar11 - 4;
            }
            uVar14 = (uint)uVar11;
            if (((uVar10 & 1) != 0) && ((uVar11 & 2) != 0)) {
              uVar14 = uVar14 - 2;
            }
            uVar13 = uVar8 | uVar13 & 0xfffffc80 | ((uint)uVar10 | uVar14) & 0x1f;
          }
          else {
            uVar11 = 0;
            uVar8 = 0;
            if ((uVar13 & 7) != 0) {
              uVar13 = 0;
              do {
                uVar8 = uVar8 + 1;
                uVar11 = (uint)(1 << ((*puVar1 >> 5 & 0xff) >> (uVar13 & 0x3f) & 3)) | uVar11;
                uVar13 = uVar13 + 2;
              } while (uVar8 < (*puVar1 >> 0x19 & 7));
            }
            uVar8 = fn_82B84350(param_1,*(undefined4 *)(uVar20 + 0x1c),0,
                                      ((0x8da691691448U >> (uVar11 & 0x7f)) >> (uVar11 & 0x7f)) >>
                                      (uVar11 & 0x7f) & 7);
            uVar13 = uVar8 & 0xfffffffe;
            puVar12 = (uint *)((uVar20 & 0xfffffffe) + 0x24);
            *(uint *)(uVar13 + 0x24) = *puVar12;
            *(uint *)(*puVar12 & 0xfffffffe) = uVar13;
            *(uint *)(uVar13 + 0x28) = uVar20 & 0xfffffffe;
            *puVar12 = uVar13 + 0x28;
            fn_82B25248(param_1,uVar8,param_7);
            uVar13 = 0;
            iVar17 = 0;
            if (uVar11 != 0) {
              puVar18 = (undefined4 *)(uVar8 + 0x2c);
              do {
                uVar10 = uVar11 & ~(uVar11 - 1);
                uVar11 = uVar11 - uVar10;
                uVar10 = 0x1f - LZCOUNT((int)uVar10);
                if ((uint)uVar10 == param_3) {
                  uVar5 = fn_82AD1918(param_1,uVar6,param_5,param_6);
                }
                else {
                  uVar5 = fn_82AD18C0(param_1,param_2,uVar10);
                }
                uVar7 = fn_82AD1978(uVar8,uVar5);
                uVar2 = (uint)((uVar10 & 0xffffffff) << 1);
                *puVar18 = uVar7;
                uVar14 = iVar17 << (uVar2 & 0x3e);
                iVar17 = iVar17 + 1;
                uVar13 = uVar13 & ~(3 << (uVar2 & 0x3e)) | uVar14;
                puVar18 = puVar18 + 1;
              } while ((uVar11 & 0xffffffff) != 0);
            }
            puVar15 = (uint *)(puVar1[3] + 4);
            for (puVar12 = (uint *)*puVar15; puVar12 != puVar1; puVar12 = (uint *)puVar12[2]) {
              puVar15 = puVar12 + 2;
            }
            *puVar15 = puVar1[2];
            puVar1[2] = *(uint *)(uVar8 + 4);
            *(uint **)(uVar8 + 4) = puVar1;
            uVar14 = *puVar1;
            puVar1[3] = uVar8;
            uVar13 = ((((uVar13 >> (uVar14 >> 10 & 6) & 3) << 2 | uVar13 >> (uVar14 >> 8 & 6) & 3)
                       << 2 | uVar13 >> (uVar14 >> 6 & 6) & 3) << 2 |
                     uVar13 >> (uVar14 >> 4 & 6) & 3) << 5 | uVar14 & 0xffffe01f;
          }
LAB_82b28a0c:
          *puVar1 = uVar13;
          fn_82B25248(param_1,uVar20,param_7);
          bVar4 = true;
        }
      }
    }
LAB_82b28a24:
    param_4 = uVar6;
    if ((uint *)*puVar16 == puVar1) {
      puVar16 = puVar1 + 2;
    }
  } while( true );
}

