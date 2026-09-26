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
extern unsigned int *auStack_30;
extern int fn_82248B90();
extern int fn_8224E928();
extern int fn_8224ED20();
extern int fn_82250A18();
extern int fn_824CD0C0();
extern int fn_8265CA20();
extern int fn_8288F948();
extern int fn_828904D8();
extern int fn_828A12E8();
extern int fn_828ACCE8();
extern int fn_828AD740();
extern unsigned int lbl_832975B0;


void fn_824CEC28(int *param_1)

{
  bool bVar1;
  int iVar4;
  char cVar6;
  int *piVar5;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *apuStack_40 [4];
  undefined1 auStack_30 [4];
  undefined4 *puStack_2c;
  
  iVar4 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar4 = fn_82250A18();
  }
  if (*(char *)(iVar4 + 4) == '\0') {
    return;
  }
  if (param_1[5] != 0) {
    return;
  }
  cVar6 = fn_828ACCE8(param_1[4]);
  if (cVar6 == '\0') {
    return;
  }
  bVar1 = false;
  cVar6 = fn_828AD740(param_1[4]);
  if (cVar6 == '\0') {
    if (param_1[6] < 1) goto LAB_824ceca4;
  }
  else if (param_1[6] != 0) goto LAB_824ceca4;
  bVar1 = true;
LAB_824ceca4:
  if (bVar1) {
    piVar5 = (int *)(**(code **)(*param_1 + 0x1c))(param_1,param_1[4]);
    if (piVar5 != (int *)0x0) {
      fn_824CD0C0(param_1,piVar5);
      (**(code **)(*piVar5 + 0x40))(piVar5);
      fn_828904D8(piVar5);
    }
  }
  else {
    iVar4 = param_1[4];
    uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
    uVar3 = fn_828A12E8(iVar4);
    uVar2 = fn_8288F948(uVar3,uVar2);
    fn_8224E928(auStack_30,uVar2);
    apuStack_40[0] = (undefined4 *)*puStack_2c;
    while (apuStack_40[0] != puStack_2c) {
      piVar5 = (int *)apuStack_40[0][5];
      iVar4 = (**(code **)(*piVar5 + 8))(piVar5);
      iVar4 = (**(code **)(*(int *)(iVar4 + 0x978) + 0x3c))();
      if (iVar4 == param_1[6]) {
        iVar4 = (**(code **)(*piVar5 + 8))(piVar5);
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x924) + 0x3c))();
        if (iVar4 == param_1[7]) {
          fn_824CD0C0(param_1,piVar5);
          (**(code **)(*piVar5 + 0x40))(piVar5);
          break;
        }
      }
      fn_82248B90(apuStack_40);
    }
    fn_8224ED20(apuStack_40,auStack_30,*puStack_2c);
    fn_8265CA20(puStack_2c);
  }
  return;
}

