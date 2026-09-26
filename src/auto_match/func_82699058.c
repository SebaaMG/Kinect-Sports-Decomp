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
extern unsigned int *auStack_80;
extern int fn_8268CC00();
extern int fn_8269A240();
extern int fn_8270D570();
extern int fn_8270D668();


void fn_82699058(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  char cVar8;
  undefined8 uVar7;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_80 [128];
  
  uVar9 = (ulonglong)(uint)param_1[1];
  uVar12 = 0;
  uVar10 = 0;
  piVar1 = *(int **)(*param_2 + 0xc);
  if (uVar9 != 0) {
    iVar11 = 0;
    do {
      piVar6 = *(int **)(iVar11 + *param_1);
      if ((((-2 < piVar6[5]) && (cVar8 = (**(code **)(*piVar6 + 8))(piVar6), cVar8 != '\0')) &&
          (cVar8 = (**(code **)(*piVar6 + 0xa0))(piVar6), cVar8 == '\0')) &&
         ((*(byte *)((int)piVar6 + 0x66) & 2) == 0)) {
        if (((uVar12 & 0xffffffff) != 0) && ((int)uVar10 < piVar6[5])) {
          uVar12 = uVar12 - 1;
          fn_8270D668(param_2);
        }
        if (((uint)param_2[0x15] < (uint)param_2[0x14]) && (param_2[0x13] == 0)) {
          iVar2 = param_2[0x10];
          iVar3 = param_2[0x11];
          param_2[0x13] = 1;
          do {
            if ((uint)param_2[0x14] < 0x41) {
              uVar4 = *(undefined4 *)(param_2[param_2[0x14] + 0x15] + 0x20);
              fn_8268CC00(auStack_80);
              fn_8269A240(uVar4,auStack_80);
              param_2[0x10] = (int)auStack_80;
              (**(code **)(*piVar1 + 0x6c))(piVar1,2);
              (**(code **)(*(int *)param_2[param_2[0x14] + 0x15] + 0x60))
                        ((int *)param_2[param_2[0x14] + 0x15],param_2);
              (**(code **)(*piVar1 + 0x70))(piVar1);
              param_2[param_2[0x14] + 0x15] = 0;
            }
            iVar5 = param_2[0x14];
            param_2[0x14] = iVar5 - 1U;
          } while ((uint)param_2[0x15] < iVar5 - 1U);
          param_2[0x10] = iVar2;
          param_2[0x11] = iVar3;
          param_2[0x13] = param_2[0x13] + -1;
        }
        if ((*(short *)(piVar6 + 0x19) == 0) || (param_2[0x13] != 0)) {
          iVar2 = *piVar1;
          uVar7 = (**(code **)(*piVar6 + 0xc))(piVar6);
          (**(code **)(iVar2 + 0x2c))(piVar1,uVar7);
          (**(code **)(*piVar6 + 0x60))(piVar6,param_2);
          (**(code **)(*piVar1 + 0x30))(piVar1);
        }
        else {
          fn_8270D570(param_2,piVar6);
          uVar12 = uVar12 + 1;
          uVar10 = (uint)*(ushort *)(piVar6 + 0x19);
        }
      }
      uVar9 = uVar9 - 1;
      iVar11 = iVar11 + 4;
    } while (uVar9 != 0);
    uVar9 = uVar12 & 0xffffffff;
    while (uVar9 != 0) {
      fn_8270D668(param_2);
      uVar12 = uVar12 - 1;
      uVar9 = uVar12;
    }
  }
  return;
}

