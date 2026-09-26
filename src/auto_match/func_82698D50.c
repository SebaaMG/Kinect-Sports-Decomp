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
extern int fn_82694D70();
extern int fn_8269F500();
extern int fn_826A65E8();


int * fn_82698D50(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar4;
  int iVar5;
  ulonglong uVar3;
  char cVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  
  if (*(int *)(*param_3 + 0x10) == 0) {
    return (int *)0x0;
  }
  piVar7 = (int *)0x0;
  piVar8 = piVar7;
  if (*(byte *)(param_2 + 4) < 7) {
    if (*(int *)(*param_3 + 4) == 0) {
      fn_82694D70();
    }
    piVar1 = (int *)param_1[3];
    if (piVar1 != (int *)0x0) {
      uVar3 = (ulonglong)(uint)piVar1[0x20];
      if (piVar1[0x20] == 0) {
        uVar3 = fn_8269F500(piVar1);
      }
      if ((uVar3 & 0xffffffff) == 0) {
        iVar4 = (**(code **)(*piVar1 + 0x58))(piVar1);
        uVar3 = (ulonglong)*(uint *)(iVar4 + 0x78);
      }
      cVar6 = fn_826A65E8(param_3,uVar3 + 8);
      if (cVar6 != '\0') goto LAB_82698de8;
    }
    uVar2 = param_1[1];
    uVar9 = 0;
    if (uVar2 != 0) {
      iVar4 = 0;
      do {
        piVar8 = *(int **)(iVar4 + *param_1);
        if ((piVar8 != (int *)0x0) && ((*(byte *)((int)piVar8 + 0x66) & 0x80) != 0)) {
          uVar3 = (ulonglong)(uint)piVar8[0x20];
          if (piVar8[0x20] == 0) {
            uVar3 = fn_8269F500(piVar8);
          }
          if ((uVar3 & 0xffffffff) == 0) {
            iVar5 = (**(code **)(*piVar8 + 0x58))(piVar8);
            uVar3 = (ulonglong)*(uint *)(iVar5 + 0x78);
          }
          cVar6 = fn_826A65E8(param_3,uVar3 + 8);
          if (cVar6 != '\0') break;
        }
        uVar9 = uVar9 + 1;
        iVar4 = iVar4 + 4;
        piVar8 = piVar7;
      } while (uVar9 < uVar2);
    }
  }
  else {
    piVar1 = (int *)param_1[3];
    if (piVar1 != (int *)0x0) {
      iVar4 = piVar1[0x20];
      if (iVar4 == 0) {
        iVar4 = fn_8269F500(piVar1);
      }
      if (iVar4 == 0) {
        iVar4 = (**(code **)(*piVar1 + 0x58))(piVar1);
        iVar4 = *(int *)(iVar4 + 0x78);
      }
      if (*(int *)(iVar4 + 8) == *param_3) {
LAB_82698de8:
        return (int *)param_1[3];
      }
    }
    uVar2 = param_1[1];
    uVar9 = 0;
    if (uVar2 != 0) {
      iVar4 = 0;
      do {
        piVar8 = *(int **)(iVar4 + *param_1);
        if ((piVar8 != (int *)0x0) && ((*(byte *)((int)piVar8 + 0x66) & 0x80) != 0)) {
          iVar5 = piVar8[0x20];
          if (iVar5 == 0) {
            iVar5 = fn_8269F500(piVar8);
          }
          if (iVar5 == 0) {
            iVar5 = (**(code **)(*piVar8 + 0x58))(piVar8);
            iVar5 = *(int *)(iVar5 + 0x78);
          }
          if (*(int *)(iVar5 + 8) == *param_3) break;
        }
        uVar9 = uVar9 + 1;
        iVar4 = iVar4 + 4;
        piVar8 = piVar7;
      } while (uVar9 < uVar2);
    }
  }
  param_1[3] = (int)piVar8;
  return piVar8;
}

