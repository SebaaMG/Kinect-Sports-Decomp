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
extern int fn_82AA66A8();
extern int fn_82ABDA10();
extern int fn_82ABE2E0();
extern int fn_82AD34E8();
extern int fn_82AF04D0();
extern int fn_82B1A590();
extern int fn_82B25248();
extern int fn_82B89810();
extern int fn_82B8AC10();
extern int fn_82B8F1B0();
extern int fn_82B8F328();


undefined8 fn_82B25E80(int param_1,uint param_2,uint param_3,char param_4)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int *piVar9;
  char cVar10;
  undefined4 uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  longlong lVar20;
  
  if ((((*(uint *)(param_2 + 0x30) & 0x10000000) == 0) &&
      ((*(uint *)(param_3 + 0x30) & 0x10000000) == 0)) &&
     (((*(uint *)(param_2 + 0x44) & 0x80000000) == 0 ||
      ((*(uint *)(param_3 + 0x44) & 0x80000000) == 0)))) {
    if (((*(uint *)(param_3 + 0x4c) ^ *(uint *)(param_2 + 0x4c)) & 0x7ffff) == 0) {
      if ((param_4 != '\0') && ((*(uint *)(param_1 + 0x28) & 0x100) != 0)) {
        uVar16 = *(uint *)(param_2 + 0x4c) >> 0x16 & 1;
        if (uVar16 != (*(uint *)(param_3 + 0x4c) >> 0x16 & 1)) {
          return 0;
        }
        uVar1 = param_2;
        if (uVar16 != 0) {
          do {
            uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4);
            if ((uVar1 & 1) != 0) {
              return 0;
            }
            if (uVar1 == 0) {
              return 0;
            }
            if (uVar1 == param_3) {
              if (uVar1 == 0) {
                return 0;
              }
              break;
            }
            if ((*(uint *)(uVar1 + 0x4c) >> 0x16 & 1) == 0) {
              return 0;
            }
            if ((*(uint *)(uVar1 + 0x1c) & 1) == 0) {
              uVar16 = *(uint *)(uVar1 + 0x1c);
              iVar18 = uVar1 + 0x18;
            }
            else {
              uVar16 = *(uint *)(uVar1 + 0x24);
              iVar18 = uVar1 + 0x20;
            }
            uVar16 = -(uint)((uVar16 & 1) == 0) & uVar16;
            while (uVar16 != 0) {
              do {
                cVar10 = fn_82ABDA10(uVar16);
                if (cVar10 != '\0') {
                  return 0;
                }
                uVar16 = *(uint *)((uVar16 & 0xfffffffe) + 0x28);
              } while (((uVar16 & 1) == 0) && (uVar16 != 0));
              if ((iVar18 == uVar1 + 0x20) ||
                 (uVar16 = *(uint *)(uVar1 + 0x24), iVar18 = uVar1 + 0x20, (uVar16 & 1) != 0))
              break;
            }
          } while( true );
        }
      }
      if ((*(uint *)(param_2 + 0x24) & 1) == 0) {
        if ((*(uint *)(param_2 + 0x24) & 1) == 0) {
          iVar18 = (*(uint *)(param_2 + 0x20) & 0xfffffffe) - 0x28;
        }
        else {
          iVar18 = 0;
        }
        if ((*(uint *)(iVar18 + 8) & 0x3f80) == 0x2c80) {
          fn_82B8AC10(param_1,iVar18,0,1);
        }
        if ((*(uint *)(param_2 + 0x24) & 1) == 0) {
          return 0;
        }
      }
      piVar19 = (int *)0x0;
      piVar2 = *(int **)(param_3 + 0x14);
joined_r0x82b2603c:
      piVar9 = piVar2;
      if (((uint)piVar9 & 1) == 0) {
        do {
          if (piVar9 == (int *)0x0) break;
          if ((piVar9[2] & 0x3f80U) != 0x3800) {
            return 0;
          }
          fn_82AF04D0(piVar9,param_1);
          cVar10 = fn_82ABE2E0(piVar9);
          if (cVar10 == '\0') {
            uVar16 = *(uint *)*piVar9;
            if (*(uint *)(((uint *)*piVar9)[3] + 0x1c) == param_2) {
              for (puVar15 = (uint *)piVar9[1]; puVar15 != (uint *)0x0; puVar15 = (uint *)puVar15[2]
                  ) {
                if (puVar15[4] != 0) {
                  uVar1 = *puVar15;
                  if ((((uVar16 & 0x18) == 0) || ((uVar1 & 0x18) == 0)) &&
                     (((uVar16 & 2) == 0 || ((uVar1 & 1) == 0)))) {
                    if (((uVar16 & 4) == 0) || (bVar8 = false, (uVar1 & 1) == 0)) {
                      bVar8 = true;
                    }
                  }
                  else {
                    bVar8 = false;
                  }
                  if (!bVar8) {
                    return 0;
                  }
                }
              }
            }
          }
          else {
            fn_82B8AC10(param_1,piVar9,0,1);
          }
          if (piVar19 == (int *)0x0) {
            piVar2 = *(int **)(param_3 + 0x14);
            if (piVar9 != (int *)(-(uint)(((uint)piVar2 & 1) == 0) & (uint)piVar2))
            goto joined_r0x82b2603c;
LAB_82b26164:
            piVar2 = *(int **)(((uint)piVar9 & 0xfffffffe) + 0x28);
            piVar19 = piVar9;
          }
          else {
            piVar2 = *(int **)(((uint)piVar19 & 0xfffffffe) + 0x28);
            if (piVar9 == (int *)(-(uint)(((uint)piVar2 & 1) == 0) & (uint)piVar2))
            goto LAB_82b26164;
          }
          piVar9 = piVar2;
          if (((uint)piVar9 & 1) != 0) break;
        } while( true );
      }
      piVar2 = *(int **)(param_3 + 0x14);
      piVar19 = (int *)0x0;
joined_r0x82b2619c:
      piVar9 = piVar2;
      if (((uint)piVar2 & 1) == 0) {
        do {
          if (piVar9 == (int *)0x0) break;
          uVar16 = ((uint *)*piVar9)[3];
          uVar1 = *(uint *)*piVar9;
          uVar17 = uVar1 >> 5 & 0xff;
          uVar6 = uVar1 & 0x1f;
          if (*(uint *)(uVar16 + 0x1c) == param_2) {
            puVar15 = (uint *)(piVar9 + 1);
            while (puVar3 = (uint *)*puVar15, puVar3 != (uint *)0x0) {
              if (puVar3[4] != 0) {
                puVar13 = (uint *)(puVar3[3] + 4);
                for (puVar4 = (uint *)*puVar13; puVar4 != puVar3; puVar4 = (uint *)puVar4[2]) {
                  puVar13 = puVar4 + 2;
                }
                *puVar13 = puVar3[2];
                puVar3[2] = *(uint *)(uVar16 + 4);
                *(uint **)(uVar16 + 4) = puVar3;
                uVar14 = *puVar3 & 0x1f;
                puVar3[3] = uVar16;
                uVar12 = uVar6;
                if (((uVar1 & 4) != 0) && ((*puVar3 & 2) != 0)) {
                  uVar12 = uVar6 - 4;
                }
                if ((uVar12 & uVar14 & 4) != 0) {
                  uVar12 = uVar12 - 4;
                  uVar14 = uVar14 - 4;
                }
                if (((uVar12 & 1) != 0) && ((uVar14 & 2) != 0)) {
                  uVar14 = uVar14 - 2;
                }
                piVar2 = (int *)puVar3[4];
                uVar7 = (uint)((ulonglong)*puVar3 & 0xffffffe0);
                *puVar3 = ((((uVar17 >> (uVar7 >> 10 & 6) & 3) << 2 | uVar17 >> (uVar7 >> 8 & 6) & 3
                            ) << 2 | uVar17 >> (uVar7 >> 6 & 6) & 3) << 2 |
                          uVar17 >> ((uint)(((ulonglong)*puVar3 & 0xffffffe0) >> 4) & 6) & 3) << 5 |
                          uVar7 & 0xffffe01f | (uVar12 | uVar14) & 0x1f;
                if ((piVar2[2] & 0x3f80U) == 0x3800) {
                  if ((*piVar2 == 0) || (bVar8 = true, *(int *)(*piVar2 + 4) == 0)) {
                    bVar8 = false;
                  }
                  if (bVar8) {
                    uVar14 = *(uint *)(uVar16 + 8) >> 7 & 0x7f;
                    if ((uVar14 == 0x7d) || (bVar8 = false, uVar14 == 0x7c)) {
                      bVar8 = true;
                    }
                    if (bVar8) {
                      fn_82B89810(param_1,param_2,param_2 + 0x18 | 3,puVar3);
                    }
                  }
                }
                if (*(int *)(param_1 + 0x28c) != 0) {
                  fn_82B25248(param_1,piVar2);
                }
              }
              if ((uint *)*puVar15 == puVar3) {
                puVar15 = puVar3 + 2;
              }
            }
            fn_82B8AC10(param_1,piVar9,0,1);
          }
          else {
            uVar16 = (uint)piVar9 & 0xfffffffe;
            puVar15 = (uint *)(uVar16 + 0x24);
            *(uint *)((*(uint *)(uVar16 + 0x28) & 0xfffffffe) + 0x24) = *puVar15;
            *(undefined4 *)(*puVar15 & 0xfffffffe) = *(undefined4 *)(uVar16 + 0x28);
            *puVar15 = *(uint *)(param_2 + 0x10);
            *(uint *)(*(uint *)(param_2 + 0x10) & 0xfffffffe) = uVar16;
            *(uint *)(uVar16 + 0x28) = param_2 - 0x14 | 1;
            *(uint *)(param_2 + 0x10) = uVar16 + 0x28;
            piVar9[7] = param_2;
          }
          if (piVar19 == (int *)0x0) {
            piVar2 = *(int **)(param_3 + 0x14);
            if (piVar9 != (int *)(-(uint)(((uint)piVar2 & 1) == 0) & (uint)piVar2))
            goto joined_r0x82b2619c;
LAB_82b263f8:
            piVar2 = *(int **)(((uint)piVar9 & 0xfffffffe) + 0x28);
            piVar19 = piVar9;
          }
          else {
            piVar2 = *(int **)(((uint)piVar19 & 0xfffffffe) + 0x28);
            if (piVar9 == (int *)(-(uint)(((uint)piVar2 & 1) == 0) & (uint)piVar2))
            goto LAB_82b263f8;
          }
          piVar9 = piVar2;
          if (((uint)piVar2 & 1) != 0) break;
        } while( true );
      }
      lVar20 = 0;
      do {
        fn_82B1A590(param_2,lVar20,param_3,param_1);
        lVar20 = lVar20 + 1;
      } while ((int)lVar20 < 4);
      for (uVar16 = *(uint *)(param_3 + 0x1c); ((uVar16 & 1) == 0 && (uVar16 != 0));
          uVar16 = *(uint *)((uVar16 & 0xfffffffe) + 0x28)) {
        *(uint *)(uVar16 + 0x1c) = param_2;
      }
      fn_82AD34E8(param_2 + 0x18,param_3 + 0x18);
      *(uint *)(param_2 + 0x30) = *(uint *)(param_3 + 0x30) & 0x2000000 | *(uint *)(param_2 + 0x30);
      uVar16 = param_3;
      if ((*(uint *)(param_3 + 0x30) >> 0x14 & 1) != 0) {
        do {
          if ((*(uint *)(uVar16 + 0x30) & 0x80000) != 0) break;
          uVar16 = *(uint *)(uVar16 + 0x34);
        } while (uVar16 != 0);
        if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(*(undefined4 *)(*(int *)(param_3 & 0xfffff000) + 0x94),0x12c0);
        }
        puVar15 = (uint *)(*(int *)(uVar16 + 0x74) + 0x10);
        while (*puVar15 != param_3) {
          puVar15 = (uint *)puVar15[1];
          if (puVar15 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
        }
        *puVar15 = param_2;
        *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 0x100000;
        *(uint *)(param_3 + 0x30) = *(uint *)(param_3 + 0x30) & 0xffefffff;
      }
      for (uVar16 = *(uint *)(param_3 + 0x24); ((uVar16 & 1) == 0 && (uVar16 != 0));
          uVar16 = *(uint *)((uVar16 & 0xfffffffe) + 0x28)) {
        *(uint *)(uVar16 + 0x1c) = param_2;
      }
      fn_82AD34E8(param_2 + 0x20,param_3 + 0x20);
      for (puVar5 = *(undefined4 **)(param_3 + 0xc); puVar5 != (undefined4 *)0x0;
          puVar5 = (undefined4 *)puVar5[2]) {
        fn_82B8F328(param_2,*puVar5,param_1);
      }
      while (*(int *)(param_3 + 0xc) != 0) {
        uVar11 = 0;
        if (*(undefined4 **)(param_3 + 0xc) != (undefined4 *)0x0) {
          uVar11 = **(undefined4 **)(param_3 + 0xc);
        }
        fn_82B8F1B0(param_3,uVar11,param_1);
      }
      fn_82B8F1B0(param_2,param_3,param_1);
      uVar16 = *(uint *)(param_2 + 0x30);
      uVar1 = *(uint *)(param_2 + 0x44);
      uVar6 = *(uint *)(param_3 + 0x30) & 0x4000000;
      *(uint *)(param_2 + 0x30) = uVar16 & 0xfbffffff | uVar6;
      *(uint *)(param_2 + 0x30) =
           uVar16 & 0xf3ffffff | uVar6 | *(uint *)(param_3 + 0x30) & 0x8000000;
      *(uint *)(param_2 + 0x44) = *(uint *)(param_3 + 0x44) & 0x80000000 | uVar1;
      uVar16 = *(uint *)(param_3 + 0x44) & 0xfffffff;
      if (uVar16 < (uVar1 & 0xfffffff)) {
        uVar16 = *(uint *)(param_2 + 0x44) & 0xfffffff;
      }
      puVar15 = (uint *)(param_3 & 0xfffffffe);
      *(uint *)(param_2 + 0x44) = uVar16 | *(uint *)(param_2 + 0x44) & 0xf0000000;
      *(uint *)(puVar15[1] & 0xfffffffe) = *puVar15;
      *(uint *)(*puVar15 & 0xfffffffe) = puVar15[1];
      *(uint *)(param_3 + 0x50) = param_2;
      *(uint *)(param_3 + 0x30) = *(uint *)(param_3 + 0x30) | 0x400000;
      return 1;
    }
  }
  return 0;
}

