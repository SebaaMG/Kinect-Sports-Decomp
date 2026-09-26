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
extern int fn_827C1B68();
extern int fn_827CDCE0();


void fn_827CDEB0(int param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  
  iVar2 = *(int *)(param_1 + 0x148);
  iVar9 = 0;
  iVar13 = *(int *)(param_1 + 0x44);
  uVar8 = *(int *)(param_1 + 0xe0) - 1;
  if (0 < *(int *)(param_1 + 0x3c)) {
    puVar10 = (undefined4 *)(iVar2 + 0x40);
    puVar11 = param_2;
    do {
      lVar5 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                        (param_1,*puVar10,
                         (longlong)*(int *)(iVar13 + 0xc) * (longlong)*(int *)(iVar2 + 8),
                         *(int *)(iVar13 + 0xc),1);
      if (*(uint *)(iVar2 + 8) < uVar8) {
        uVar15 = (ulonglong)*(uint *)(iVar13 + 0xc);
      }
      else {
        uVar3 = *(uint *)(iVar13 + 0xc);
        trapWord(6,(ulonglong)uVar3,0);
        uVar15 = (ulonglong)*(uint *)(iVar13 + 0x20) -
                 (longlong)(int)(*(uint *)(iVar13 + 0x20) / uVar3) * (longlong)(int)uVar3;
        if (uVar15 == 0) {
          uVar15 = (ulonglong)uVar3;
        }
      }
      uVar3 = *(uint *)(iVar13 + 8);
      uVar12 = (ulonglong)uVar3;
      uVar4 = *(uint *)(iVar13 + 0x1c);
      uVar18 = (ulonglong)uVar4;
      trapWord(6,uVar12,0);
      uVar20 = uVar18 - (longlong)(int)(uVar4 / uVar3) * (longlong)(int)uVar3;
      if (0 < (longlong)uVar20) {
        uVar20 = uVar12 - uVar20;
      }
      iVar16 = 0;
      iVar17 = (int)uVar15;
      lVar14 = lVar5;
      if (0 < iVar17) {
        do {
          iVar19 = *(int *)lVar14;
          (**(code **)(*(int *)(param_1 + 0x158) + 4))
                    (param_1,iVar13,*puVar11,iVar19,iVar16 << 3,0,uVar18);
          if (0 < (int)uVar20) {
            iVar19 = uVar4 * 0x80 + iVar19;
            fn_827C1B68(iVar19,(uVar20 & 0x1ffffff) << 7);
            uVar1 = *(undefined2 *)(iVar19 + -0x80);
            if (0 < (int)uVar20) {
              puVar7 = (undefined2 *)(iVar19 + -0x80);
              uVar21 = uVar20;
              do {
                puVar7 = puVar7 + 0x40;
                *puVar7 = uVar1;
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
            }
          }
          iVar16 = iVar16 + 1;
          lVar14 = lVar14 + 4;
        } while (iVar16 < iVar17);
      }
      if (*(uint *)(iVar2 + 8) == uVar8) {
        uVar21 = (uVar20 + uVar18 & 0xffffffff) / (ulonglong)uVar3;
        trapWord(6,uVar12,0);
        if (iVar17 < *(int *)(iVar13 + 0xc)) {
          lVar5 = (uVar15 & 0x3fffffff) * 4 + lVar5;
          do {
            iVar16 = *(int *)lVar5;
            iVar17 = ((int *)lVar5)[-1];
            fn_827C1B68(iVar16,(uVar20 + uVar18 & 0x1ffffff) << 7);
            if (uVar21 != 0) {
              iVar17 = iVar17 - iVar16;
              uVar6 = uVar21;
              do {
                uVar1 = *(undefined2 *)(iVar17 + uVar3 * 0x80 + -0x80 + iVar16);
                if (0 < (int)uVar3) {
                  puVar7 = (undefined2 *)(iVar16 + -0x80);
                  uVar22 = uVar12;
                  do {
                    puVar7 = puVar7 + 0x40;
                    *puVar7 = uVar1;
                    uVar22 = uVar22 - 1;
                  } while (uVar22 != 0);
                }
                uVar6 = uVar6 - 1;
                iVar16 = uVar3 * 0x80 + iVar16;
              } while (uVar6 != 0);
            }
            uVar15 = uVar15 + 1;
            lVar5 = lVar5 + 4;
          } while ((int)uVar15 < *(int *)(iVar13 + 0xc));
        }
      }
      iVar9 = iVar9 + 1;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
      iVar13 = iVar13 + 0x54;
    } while (iVar9 < *(int *)(param_1 + 0x3c));
  }
  fn_827CDCE0(param_1,param_2);
  return;
}

