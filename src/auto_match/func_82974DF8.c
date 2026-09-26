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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82963400();
extern int fn_829684D8();
extern int fn_8296CF68();
extern int fn_82F69148();


undefined8 fn_82974DF8(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int aiStack_80 [4];
  undefined4 auStack_70 [4];
  undefined4 auStack_60 [24];
  
  fn_8296CF68();
  uVar12 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar13 = 0;
    do {
      puVar3 = *(uint **)(iVar13 + *(int *)(param_1 + 0x18));
      uVar1 = *puVar3;
      if ((uVar1 & 0xfff00000) != 0) {
        uVar7 = puVar3[1];
        uVar16 = (ulonglong)uVar1;
        uVar17 = uVar16 & 0xfffff;
        trapWord(6,uVar17,0);
        if ((uVar1 & 0xfff00000) == 0x50000000) {
          fn_829684D8(param_1,(uVar16 & 0xfffff) * 4 + (ulonglong)puVar3[2],aiStack_80,uVar17,1);
          uVar7 = puVar3[2];
          if ((uVar1 & 0xfffff) != 0) {
            iVar6 = 0;
            uVar15 = uVar17;
            do {
              *(undefined4 *)((int)auStack_70 + iVar6) =
                   *(undefined4 *)(*(int *)((int)aiStack_80 + iVar6) * 4 + uVar7);
              iVar6 = iVar6 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
            fn_82F69148(uVar7,auStack_70,(uVar16 & 0xfffff) << 2);
          }
        }
        else if ((0xfffffff < (uVar1 & 0xf0000000)) && ((uVar1 & 0xf0000000) < 0x40000001)) {
          fn_829684D8(param_1,puVar3[4],aiStack_80,uVar17,1);
          uVar14 = 0;
          if (uVar7 / uVar17 != 0) {
            do {
              iVar6 = uVar14 * puVar3[3] * 4 + puVar3[2];
              if ((uVar1 & 0xfffff) != 0) {
                iVar11 = 0;
                uVar15 = uVar17;
                do {
                  *(undefined4 *)((int)auStack_60 + iVar11) =
                       *(undefined4 *)(*(int *)((int)aiStack_80 + iVar11) * 4 + iVar6);
                  iVar11 = iVar11 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
                fn_82F69148(iVar6,auStack_60,(uVar16 & 0xfffff) << 2);
              }
              uVar14 = uVar14 + 1;
            } while ((ulonglong)uVar14 < uVar7 / uVar17);
          }
        }
        if ((*puVar3 & 0xf0000000) == 0x20000000) {
          iVar6 = fn_82963400(puVar3);
          if (iVar6 != 0) {
            lVar10 = (uVar16 & 0xfffff) << 2;
            iVar6 = *(int *)(param_1 + 0x14);
            uVar7 = 0xffffffff;
            uVar14 = 0xffffffff;
            iVar11 = *(int *)(*(int *)puVar3[2] * 4 + iVar6);
            iVar4 = *(int *)(*(int *)((int)puVar3[2] + (int)lVar10) * 4 + iVar6);
            if ((uVar1 & 0xfffff) == 0) {
LAB_82975010:
              uVar7 = *(uint *)(iVar4 + 4);
              uVar14 = *(uint *)(iVar11 + 4);
              if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x10) + uVar7 * 4) + 4) <=
                   *(uint *)(*(int *)(uVar14 * 4 + *(int *)(param_1 + 0x10)) + 4)) &&
                 ((*(int *)(*(int *)(*(int *)(param_1 + 0x10) + uVar14 * 4) + 4) !=
                   *(int *)(*(int *)(*(int *)(param_1 + 0x10) + uVar7 * 4) + 4) ||
                  ((uVar7 <= uVar14 &&
                   ((uVar14 != uVar7 || (*(uint *)(iVar4 + 0xc) <= *(uint *)(iVar11 + 0xc))))))))) {
LAB_82975074:
                if ((uVar1 & 0xfffff) != 0) {
                  iVar6 = 0;
                  do {
                    uVar1 = puVar3[2];
                    uVar5 = *(undefined4 *)(uVar1 + iVar6);
                    *(undefined4 *)(uVar1 + iVar6) = *(undefined4 *)(uVar1 + (int)lVar10);
                    iVar6 = iVar6 + 4;
                    *(undefined4 *)(puVar3[2] + (int)lVar10) = uVar5;
                    lVar10 = lVar10 + 4;
                    uVar17 = uVar17 - 1;
                  } while (uVar17 != 0);
                }
              }
            }
            else {
              iVar9 = 0;
              lVar8 = lVar10;
              uVar16 = uVar17;
              do {
                uVar2 = *(uint *)(*(int *)(*(int *)(iVar9 + puVar3[2]) * 4 + iVar6) + 0x48);
                if (uVar2 < uVar7) {
                  uVar7 = uVar2;
                }
                uVar2 = *(uint *)(*(int *)(*(int *)(puVar3[2] + (int)lVar8) * 4 + iVar6) + 0x48);
                if (uVar2 < uVar14) {
                  uVar14 = uVar2;
                }
                iVar9 = iVar9 + 4;
                lVar8 = lVar8 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
              if (uVar14 <= uVar7) {
                if (uVar7 == uVar14) goto LAB_82975010;
                goto LAB_82975074;
              }
            }
          }
        }
      }
      uVar12 = uVar12 + 1;
      iVar13 = iVar13 + 4;
    } while (uVar12 < *(uint *)(param_1 + 0xc));
  }
  return 0;
}

