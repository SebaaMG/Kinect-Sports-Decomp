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
extern int fn_8227A358();
extern int fn_8227B548();
extern int fn_8227C308();
extern int fn_82284A40();
extern int fn_82526A20();
extern unsigned int lbl_821CC160;


int * fn_8227BDC8(int *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  byte *pbVar4;
  
  pbVar4 = (byte *)param_2;
  piVar3 = (int *)(uint)*pbVar4;
  piVar6 = param_1;
  piVar8 = piVar3;
  piVar7 = (int *)0x61;
  if (piVar3 == (int *)0x61) {
    piVar8 = (int *)0x61;
    lVar5 = param_2;
    do {
      lVar5 = lVar5 + 1;
      if (piVar8 == (int *)0x0) goto LAB_8227be30;
      piVar6 = (int *)(uint)((byte *)lVar5)[(int)"activeStateHasChanged" - (int)pbVar4];
      piVar8 = (int *)(uint)*(byte *)lVar5;
      piVar7 = piVar6;
    } while (piVar8 == piVar6);
  }
  if (piVar8 == piVar7) {
LAB_8227be30:
    bVar1 = *(byte *)(param_3 + 8);
    param_1[0x297] = (uint)bVar1;
    if (bVar1 != 0) {
      param_1[0x298] = 1;
      param_1[0x292] = 3;
    }
  }
  else {
    piVar7 = (int *)0x6f;
    piVar8 = piVar3;
    if (piVar3 == (int *)0x6f) {
      piVar8 = (int *)0x6f;
      lVar5 = param_2;
      do {
        lVar5 = lVar5 + 1;
        if (piVar8 == (int *)0x0) goto LAB_8227bea0;
        piVar7 = (int *)(uint)((byte *)lVar5)[(int)"onLayoutReady" - (int)pbVar4];
        piVar8 = (int *)(uint)*(byte *)lVar5;
        piVar6 = piVar7;
      } while (piVar8 == piVar7);
    }
    if (piVar8 == piVar7) {
LAB_8227bea0:
      param_1[0x292] = 1;
      param_1[0x293] = lbl_821CC160;
      fn_8227C308(param_1);
      piVar6 = (int *)(**(code **)(*param_1 + 8))(param_1);
      if ((param_1[0x294] != 0) || (param_1[0x295] != 0)) {
        param_1[0x295] = 0;
        piVar6 = (int *)fn_8227B548(param_1);
      }
    }
    else {
      piVar7 = (int *)0x68;
      piVar8 = piVar3;
      if (piVar3 == (int *)0x68) {
        piVar8 = (int *)0x68;
        lVar5 = param_2;
        do {
          lVar5 = lVar5 + 1;
          if (piVar8 == (int *)0x0) goto LAB_8227bf48;
          piVar6 = (int *)(uint)((byte *)lVar5)[(int)"hasReachedHoldPosition" - (int)pbVar4];
          piVar8 = (int *)(uint)*(byte *)lVar5;
          piVar7 = piVar6;
        } while (piVar8 == piVar6);
      }
      if (piVar8 == piVar7) {
LAB_8227bf48:
        param_1[0x292] = 4;
        param_1[0x293] = lbl_821CC160;
        if (param_1[0x291] != 0) {
          piVar6 = (int *)0x0;
          if (param_1[0x45a] != 0) {
            piVar6 = (int *)fn_82284A40(param_1[0x45a],param_1 + 0x5c,0);
          }
        }
      }
      else {
        piVar8 = (int *)0x68;
        if (piVar3 == (int *)0x68) {
          piVar3 = (int *)0x68;
          lVar5 = param_2;
          do {
            lVar5 = lVar5 + 1;
            if (piVar3 == (int *)0x0) goto LAB_8227bfd0;
            piVar8 = (int *)(uint)((byte *)lVar5)[(int)"hasReachedEnd" - (int)pbVar4];
            piVar3 = (int *)(uint)*(byte *)lVar5;
          } while (piVar3 == piVar8);
        }
        if (piVar3 == piVar8) {
LAB_8227bfd0:
          param_1[0x292] = 2;
          param_1[0x298] = 0;
          param_1[0x293] = lbl_821CC160;
        }
        else {
          iVar2 = fn_82526A20(param_2,0xffffffff821a8594);
          if (iVar2 == 0) {
            iVar2 = param_1[0x28d] + 1;
          }
          else {
            iVar2 = fn_82526A20(param_2,0xffffffff821a85a8);
            if (iVar2 != 0) {
              iVar2 = fn_82526A20(param_2,0xffffffff821a85bc);
              if (iVar2 == 0) {
                param_1[0x290] = 1;
                return (int *)0x0;
              }
              iVar2 = fn_82526A20(param_2,0xffffffff821a85d4);
              if (iVar2 == 0) {
                param_1[0x28f] = 1;
                return (int *)0x0;
              }
              piVar8 = (int *)fn_8227A358(param_1,param_2);
              return piVar8;
            }
            iVar2 = param_1[0x28d] + -1;
          }
          piVar6 = (int *)0x0;
          param_1[0x28d] = iVar2;
        }
      }
    }
  }
  return piVar6;
}

