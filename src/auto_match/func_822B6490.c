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
extern unsigned int *auStack_40;
extern int fn_82248B90();
extern int fn_8224E928();
extern int fn_8224ED20();
extern int fn_82250A18();
extern int fn_8265CA20();
extern int fn_8288B760();
extern int fn_8288F948();
extern int fn_828904D8();
extern int fn_828A12E8();
extern int fn_828ACCE8();
extern int fn_828AD740();
extern unsigned int lbl_832975B0;


void fn_822B6490(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar5;
  char cVar8;
  int *piVar6;
  uint uVar7;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *apuStack_50 [4];
  undefined1 auStack_40 [4];
  undefined4 *puStack_3c;
  
  iVar5 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar5 = fn_82250A18();
  }
  if (*(char *)(iVar5 + 4) == '\0') {
    return;
  }
  if (param_1[0x5a] != 0) {
    cVar8 = fn_8288B760();
    if (cVar8 != '\0') {
      return;
    }
    (**(code **)(*(int *)param_1[0x5a] + 0x40))();
    return;
  }
  cVar8 = fn_828ACCE8(param_1[4]);
  if (cVar8 == '\0') {
    return;
  }
  bVar2 = false;
  cVar8 = fn_828AD740(param_1[4]);
  bVar1 = *(int *)(*(int *)(((int *)param_1[7])[4] * 4 + *(int *)param_1[7]) + 0x10) == 1;
  if (cVar8 == '\0') {
    if (!bVar1) goto LAB_822b6524;
  }
  else if (bVar1) goto LAB_822b6524;
  bVar2 = true;
LAB_822b6524:
  if (bVar2) {
    piVar6 = (int *)(**(code **)(*param_1 + 0x1c))(param_1,param_1[4]);
    if (piVar6 != (int *)0x0) {
      if (param_1[0x5a] != 0) {
        *(undefined4 *)(param_1[0x5a] + 0xbc) = 0;
      }
      param_1[0x5a] = (int)piVar6;
      piVar6[0x2f] = (int)param_1;
      uVar7 = fn_8288B760(param_1[0x5a]);
      param_1[0x5b] = uVar7 & 0xff;
      (**(code **)(*piVar6 + 0x44))(piVar6);
      fn_828904D8(piVar6);
    }
  }
  else {
    iVar5 = param_1[4];
    uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
    uVar4 = fn_828A12E8(iVar5);
    uVar3 = fn_8288F948(uVar4,uVar3);
    fn_8224E928(auStack_40,uVar3);
    apuStack_50[0] = (undefined4 *)*puStack_3c;
    while (apuStack_50[0] != puStack_3c) {
      piVar6 = (int *)apuStack_50[0][5];
      iVar5 = (**(code **)(*piVar6 + 8))(piVar6);
      iVar5 = (**(code **)(*(int *)(iVar5 + 0x48) + 0x3c))();
      if (iVar5 == param_1[0xb]) {
        iVar5 = (**(code **)(*piVar6 + 8))(piVar6);
        iVar5 = (**(code **)(*(int *)(iVar5 + 0x9c) + 0x3c))();
        if (iVar5 == param_1[10]) {
          if (param_1[0x5a] != 0) {
            *(undefined4 *)(param_1[0x5a] + 0xbc) = 0;
          }
          param_1[0x5a] = (int)piVar6;
          piVar6[0x2f] = (int)param_1;
          uVar7 = fn_8288B760(param_1[0x5a]);
          param_1[0x5b] = uVar7 & 0xff;
          (**(code **)(*piVar6 + 0x44))(piVar6);
          break;
        }
      }
      fn_82248B90(apuStack_50);
    }
    fn_8224ED20(apuStack_50,auStack_40,*puStack_3c);
    fn_8265CA20(puStack_3c);
  }
  return;
}

