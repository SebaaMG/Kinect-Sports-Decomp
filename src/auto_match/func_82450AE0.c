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
extern int fn_82450DD0();


undefined4 * fn_82450AE0(undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  
  piVar3 = param_3 + -2;
  uVar7 = (int)param_3 - (int)param_2 >> 3;
  iVar1 = (int)piVar3 - (int)param_2 >> 3;
  piVar8 = param_2 + (((int)param_3 - (int)param_2 >> 4) +
                     (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0)) * 2;
  piVar2 = param_2;
  if (0x28 < iVar1) {
    uVar7 = iVar1 + 1;
    uVar7 = ((int)uVar7 >> 3) + (uint)((int)uVar7 < 0 && (uVar7 & 7) != 0);
    fn_82450DD0(param_2,param_2 + uVar7 * 2,param_2 + uVar7 * 4);
    fn_82450DD0(piVar8 + (uVar7 & 0x1fffffff) * -2,piVar8,piVar8 + uVar7 * 2);
    fn_82450DD0(piVar3 + (uVar7 & 0xfffffff) * -4,piVar3 + (uVar7 & 0x1fffffff) * -2,piVar3);
    piVar2 = param_2 + uVar7 * 2;
    piVar3 = piVar3 + (uVar7 & 0x1fffffff) * -2;
  }
  fn_82450DD0(piVar2,piVar8,piVar3);
  piVar2 = piVar8 + 2;
  for (; ((param_2 < piVar8 && (piVar8[1] <= piVar8[-1])) && (piVar8[-1] <= piVar8[1]));
      piVar8 = piVar8 + -2) {
  }
  piVar3 = piVar8;
  piVar4 = piVar2;
  if (piVar2 < param_3) {
    do {
      piVar4 = piVar2;
      if ((piVar2[1] < piVar8[1]) || (piVar8[1] < piVar2[1])) break;
      piVar2 = piVar2 + 2;
      piVar4 = piVar2;
    } while (piVar2 < param_3);
  }
LAB_82450c34:
  do {
    piVar5 = piVar4;
    piVar6 = piVar2;
    piVar4 = piVar5;
    if (piVar6 < param_3) {
      if (piVar6[1] <= piVar8[1]) {
        if (piVar6[1] < piVar8[1]) goto LAB_82450c3c;
        piVar4 = piVar5 + 2;
        if (piVar5 != piVar6) {
          iVar1 = *piVar5;
          *piVar5 = *piVar6;
          *piVar6 = iVar1;
          iVar1 = piVar5[1];
          piVar5[1] = piVar6[1];
          piVar6[1] = iVar1;
        }
      }
    }
    else {
LAB_82450c3c:
      piVar9 = piVar8;
      piVar2 = piVar3;
      if (param_2 < piVar3) {
        piVar8 = piVar3 + -1;
        do {
          piVar2 = piVar9;
          if (piVar9[1] <= *piVar8) {
            piVar2 = piVar3;
            if (piVar9[1] < *piVar8) break;
            piVar2 = piVar9 + -2;
            if (piVar2 != piVar8 + -1) {
              iVar1 = *piVar2;
              *piVar2 = piVar8[-1];
              piVar8[-1] = iVar1;
              iVar1 = piVar9[-1];
              piVar9[-1] = *piVar8;
              *piVar8 = iVar1;
            }
          }
          piVar9 = piVar2;
          piVar3 = piVar3 + -2;
          piVar8 = piVar8 + -2;
          piVar2 = piVar3;
        } while (param_2 < piVar3);
      }
      if (piVar2 == param_2) {
        if (piVar6 == param_3) {
          *param_1 = piVar9;
          param_1[1] = piVar5;
          return param_1;
        }
        if ((piVar5 != piVar6) && (piVar9 != piVar5)) {
          iVar1 = *piVar9;
          *piVar9 = *piVar5;
          *piVar5 = iVar1;
          iVar1 = piVar9[1];
          piVar9[1] = piVar5[1];
          piVar5[1] = iVar1;
        }
        piVar8 = piVar9 + 2;
        piVar3 = piVar2;
        piVar2 = piVar6 + 2;
        piVar4 = piVar5 + 2;
        if (piVar9 != piVar6) {
          iVar1 = *piVar9;
          *piVar9 = *piVar6;
          *piVar6 = iVar1;
          iVar1 = piVar9[1];
          piVar9[1] = piVar6[1];
          piVar6[1] = iVar1;
        }
        goto LAB_82450c34;
      }
      if (piVar6 == param_3) {
        piVar3 = piVar2 + -2;
        piVar8 = piVar9 + -2;
        if (piVar3 != piVar8) {
          iVar1 = *piVar3;
          *piVar3 = *piVar8;
          *piVar8 = iVar1;
          iVar1 = piVar2[-1];
          piVar2[-1] = piVar9[-1];
          piVar9[-1] = iVar1;
        }
        piVar4 = piVar5 + -2;
        piVar2 = piVar6;
        if (piVar8 != piVar4) {
          iVar1 = *piVar8;
          *piVar8 = *piVar4;
          *piVar4 = iVar1;
          iVar1 = piVar9[-1];
          piVar9[-1] = piVar5[-1];
          piVar5[-1] = iVar1;
        }
        goto LAB_82450c34;
      }
      piVar3 = piVar2 + -2;
      piVar8 = piVar9;
      if (piVar6 != piVar3) {
        iVar1 = *piVar6;
        *piVar6 = *piVar3;
        *piVar3 = iVar1;
        iVar1 = piVar6[1];
        piVar6[1] = piVar2[-1];
        piVar2[-1] = iVar1;
      }
    }
    piVar2 = piVar6 + 2;
  } while( true );
}

