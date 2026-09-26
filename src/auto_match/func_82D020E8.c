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
extern int fn_82D01778();


void fn_82D020E8(int *param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int *piVar3;
  ulonglong uVar2;
  ulonglong uVar4;
  longlong lVar5;
  int *piVar7;
  ulonglong uVar6;
  int *piVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  fn_82D01778(param_1,param_1[4],param_2,param_3,param_4);
  puVar1 = (undefined4 *)param_1[3];
  if ((puVar1 != (undefined4 *)0x0) || (*param_1 != 0)) {
    uVar11 = 0;
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      uVar11 = uVar11 + 1;
    }
    lVar10 = (uVar11 & 0x3fffffff) << 2;
    piVar3 = (int *)(**(code **)(*(int *)param_1[0xc] + 0x18))((int *)param_1[0xc],lVar10);
    if (piVar3 != (int *)0x0) {
      piVar8 = (int *)param_1[3];
      if (piVar8 != (int *)0x0) {
        piVar7 = piVar3 + -1;
        do {
          piVar7 = piVar7 + 1;
          *piVar7 = (int)piVar8;
          piVar8 = (int *)*piVar8;
        } while (piVar8 != (int *)0x0);
      }
      if (1 < (int)uVar11) {
        fn_82D00FB0(piVar3,0,uVar11 - 1,0xffffffff82d01418);
      }
      puVar1 = (undefined4 *)*param_1;
      trapWord(6,(ulonglong)(uint)param_1[1],0);
      uVar14 = ((ulonglong)(uint)param_1[9] - (ulonglong)(uint)param_1[8] & 0xffffffff) /
               (ulonglong)(uint)param_1[1];
      for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
        uVar14 = uVar14 + 1;
      }
      lVar12 = (uVar14 & 0x3fffffff) * 4;
      uVar2 = (**(code **)(*(int *)param_1[0xc] + 0x18))((int *)param_1[0xc],lVar12);
      if ((uVar2 & 0xffffffff) == 0) {
        (**(code **)(*(int *)param_1[0xc] + 8))((int *)param_1[0xc],piVar3);
      }
      else {
        piVar8 = (int *)*param_1;
        uVar6 = 0;
        if (piVar8 != (int *)0x0) {
          lVar5 = uVar2 - 4;
          do {
            lVar5 = lVar5 + 4;
            *(int *)lVar5 = (int)piVar8;
            uVar6 = uVar6 + 1;
            piVar8 = (int *)*piVar8;
          } while (piVar8 != (int *)0x0);
        }
        uVar9 = param_1[8];
        if (uVar9 < (uint)param_1[9]) {
          lVar5 = (uVar6 & 0x3fffffff) * 4 + uVar2 + -4;
          do {
            lVar5 = lVar5 + 4;
            *(uint *)lVar5 = uVar9;
            uVar9 = param_1[1] + uVar9;
          } while (uVar9 < (uint)param_1[9]);
        }
        if (1 < (int)uVar14) {
          fn_82D00FB0(uVar2,0,uVar14 - 1,0xffffffff82d01418);
        }
        uVar6 = 0;
        uVar14 = uVar2;
        piVar8 = piVar3;
        if ((uVar11 & 0xffffffff) != 0) {
          do {
            if ((lVar12 + uVar2 & 0xffffffff) <= (uVar14 & 0xffffffff)) break;
            uVar4 = (ulonglong)(uint)param_1[1];
            uVar15 = (ulonglong)*(uint *)(*piVar8 + 8);
            uVar13 = (longlong)*(int *)(*piVar8 + 0xc) * (longlong)param_1[1] + uVar15;
            if (uVar15 < (uVar13 & 0xffffffff)) {
              do {
                if ((uVar15 & 0xffffffff) == (ulonglong)*(uint *)uVar14) {
                  (*param_2)(uVar15,uVar4,0,param_3,param_4);
                  uVar14 = uVar14 + 4;
                }
                else {
                  (*param_2)(uVar15,uVar4,1,param_3,param_4);
                }
                uVar4 = (ulonglong)(uint)param_1[1];
                uVar15 = uVar4 + uVar15;
              } while ((uVar15 & 0xffffffff) < (uVar13 & 0xffffffff));
            }
            uVar6 = uVar6 + 1;
            piVar8 = piVar8 + 1;
          } while ((uVar6 & 0xffffffff) < (uVar11 & 0xffffffff));
        }
        (**(code **)(*(int *)param_1[0xc] + 0x1c))((int *)param_1[0xc],uVar2,lVar12);
        (**(code **)(*(int *)param_1[0xc] + 0x1c))((int *)param_1[0xc],piVar3,lVar10);
      }
    }
  }
  return;
}

