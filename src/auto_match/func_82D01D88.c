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
extern int fn_82D00FB0();


longlong fn_82D01D88(int *param_1)

{
  longlong lVar1;
  undefined4 *puVar3;
  ulonglong uVar2;
  ulonglong uVar4;
  undefined4 *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar13;
  ulonglong uVar10;
  uint uVar14;
  ulonglong uVar11;
  longlong lVar12;
  int *piVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  piVar15 = (int *)param_1[3];
  piVar9 = param_1 + 3;
  if (piVar15 == (int *)0x0) {
    lVar1 = 0;
  }
  else {
    uVar17 = 0;
    do {
      uVar18 = uVar17;
      piVar15 = (int *)*piVar15;
      uVar17 = uVar18 + 1;
    } while (piVar15 != (int *)0x0);
    lVar1 = (uVar17 & 0x3fffffff) << 2;
    puVar3 = (undefined4 *)(**(code **)(*(int *)param_1[0xc] + 0x18))((int *)param_1[0xc],lVar1);
    if (puVar3 != (undefined4 *)0x0) {
      piVar15 = (int *)*piVar9;
      if (piVar15 != (int *)0x0) {
        piVar13 = puVar3 + -1;
        do {
          piVar13 = piVar13 + 1;
          *piVar13 = (int)piVar15;
          piVar15 = (int *)*piVar15;
        } while (piVar15 != (int *)0x0);
      }
      if (1 < (int)uVar17) {
        fn_82D00FB0(puVar3,0,uVar18,0xffffffff82d01418);
      }
      puVar5 = (undefined4 *)*param_1;
      trapWord(6,(ulonglong)(uint)param_1[1],0);
      uVar18 = ((ulonglong)(uint)param_1[9] - (ulonglong)(uint)param_1[8] & 0xffffffff) /
               (ulonglong)(uint)param_1[1];
      for (; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
        uVar18 = uVar18 + 1;
      }
      lVar16 = (uVar18 & 0x3fffffff) * 4;
      uVar2 = (**(code **)(*(int *)param_1[0xc] + 0x18))((int *)param_1[0xc],lVar16);
      if ((uVar2 & 0xffffffff) != 0) {
        piVar15 = (int *)*param_1;
        uVar10 = 0;
        if (piVar15 != (int *)0x0) {
          lVar7 = uVar2 - 4;
          do {
            lVar7 = lVar7 + 4;
            *(int *)lVar7 = (int)piVar15;
            uVar10 = uVar10 + 1;
            piVar15 = (int *)*piVar15;
          } while (piVar15 != (int *)0x0);
        }
        uVar14 = param_1[8];
        if (uVar14 < (uint)param_1[9]) {
          lVar7 = (uVar10 & 0x3fffffff) * 4 + uVar2 + -4;
          do {
            lVar7 = lVar7 + 4;
            *(uint *)lVar7 = uVar14;
            uVar14 = uVar14 + param_1[1];
          } while (uVar14 < (uint)param_1[9]);
        }
        param_1[9] = 0;
        param_1[8] = 0;
        if (1 < (int)uVar18) {
          fn_82D00FB0(uVar2,0,uVar18 - 1,0xffffffff82d01418);
        }
        uVar4 = lVar16 + uVar2;
        lVar7 = 0;
        uVar10 = 0;
        uVar18 = uVar2;
        puVar5 = puVar3;
        if ((uVar17 & 0xffffffff) != 0) {
          do {
            if ((uVar4 & 0xffffffff) <= (uVar18 & 0xffffffff)) break;
            piVar15 = (int *)*puVar5;
            uVar14 = piVar15[2];
            uVar6 = param_1[1] * piVar15[3] + uVar14;
            do {
              if ((uVar14 != *(uint *)uVar18) || (uVar6 <= uVar14)) break;
              uVar18 = uVar18 + 4;
              uVar14 = param_1[1] + uVar14;
            } while ((uVar18 & 0xffffffff) < (uVar4 & 0xffffffff));
            if (uVar14 == uVar6) {
              lVar7 = lVar7 + 1;
              uVar11 = uVar18 + ((ulonglong)(uint)piVar15[3] & 0x3fffffff) * -4;
              *piVar15 = param_1[4];
              param_1[4] = (int)piVar15;
              *puVar5 = 0;
              if ((uVar11 & 0xffffffff) < (uVar18 & 0xffffffff)) {
                lVar8 = uVar11 - 4;
                for (lVar12 = (((uVar18 - uVar11) - 1 & 0xffffffff) >> 2) + 1; lVar12 != 0;
                    lVar12 = lVar12 + -1) {
                  lVar8 = lVar8 + 4;
                  *(undefined4 *)lVar8 = 0;
                }
              }
            }
            else if ((uVar18 & 0xffffffff) < (uVar4 & 0xffffffff)) {
              do {
                if (uVar6 <= *(uint *)uVar18) break;
                uVar18 = uVar18 + 4;
              } while ((uVar18 & 0xffffffff) < (uVar4 & 0xffffffff));
            }
            uVar10 = uVar10 + 1;
            puVar5 = puVar5 + 1;
          } while ((uVar10 & 0xffffffff) < (uVar17 & 0xffffffff));
        }
        puVar5 = puVar3;
        uVar18 = uVar17 & 0xffffffff;
        while (uVar18 != 0) {
          piVar15 = (int *)*puVar5;
          if (piVar15 != (int *)0x0) {
            *piVar9 = (int)piVar15;
            piVar9 = piVar15;
          }
          puVar5 = puVar5 + 1;
          uVar17 = uVar17 - 1;
          uVar18 = uVar17;
        }
        *piVar9 = 0;
        piVar15 = param_1;
        if ((uVar2 & 0xffffffff) < (uVar4 & 0xffffffff)) {
          lVar8 = (((uVar4 - uVar2) - 1 & 0xffffffff) >> 2) + 1;
          uVar17 = uVar2;
          do {
            piVar9 = (int *)*(undefined4 *)uVar17;
            if (piVar9 != (int *)0x0) {
              *piVar15 = (int)piVar9;
              piVar15 = piVar9;
            }
            uVar17 = uVar17 + 4;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        *piVar15 = 0;
        (**(code **)(*(int *)param_1[0xc] + 0x1c))((int *)param_1[0xc],uVar2,lVar16);
        (**(code **)(*(int *)param_1[0xc] + 0x1c))((int *)param_1[0xc],puVar3,lVar1);
        param_1[2] = 0;
        return lVar7;
      }
      (**(code **)(*(int *)param_1[0xc] + 0x1c))((int *)param_1[0xc],puVar3,lVar1);
    }
    lVar1 = -1;
  }
  return lVar1;
}

