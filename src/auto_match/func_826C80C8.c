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
extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_826998A8();
extern int fn_826A7288();
extern int fn_826AE1D8();


void fn_826C80C8(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar4;
  char *pcVar5;
  longlong lVar3;
  int *piVar6;
  char cVar7;
  ulonglong uVar8;
  int *piVar9;
  double dVar10;
  
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    piVar9 = *(int **)(*(int *)(param_1 + 0x18) + 0x74);
  }
  else {
    iVar4 = (**(code **)(**(int **)(param_1 + 8) + 8))();
    if ((iVar4 < 2) || (bVar2 = true, 5 < iVar4)) {
      bVar2 = false;
    }
    if (!bVar2) {
      return;
    }
    piVar9 = (int *)(*(int *)(param_1 + 8) + -0x68);
    if (*(int *)(param_1 + 8) == 0) {
      piVar9 = (int *)0x0;
    }
  }
  if ((piVar9 != (int *)0x0) && (0 < *(int *)(param_1 + 0x1c))) {
    iVar4 = piVar9[8];
    pcVar5 = (char *)fn_826957D0(param_1,0);
    piVar6 = (int *)0x0;
    lVar3 = (**(code **)(piVar9[0x1a] + 8))(piVar9 + 0x1a);
    if ((*pcVar5 == '\x03') || (bVar2 = false, *pcVar5 == '\x04')) {
      bVar2 = true;
    }
    if (bVar2) {
      dVar10 = (double)fn_826972E0(pcVar5,*(undefined4 *)(param_1 + 0x18));
      uVar8 = (ulonglong)(uint)(int)dVar10 + 0x4000;
      if (0x7efffffd < (int)uVar8) {
        return;
      }
    }
    else {
      if ((-(uint)(lVar3 == 2) & (uint)piVar9) == 0) {
        piVar6 = (int *)fn_826AE1D8(*(int *)(param_1 + 0x18),pcVar5);
      }
      else {
        uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x74);
        fn_826A7288();
        piVar6 = (int *)fn_826AE1D8(*(undefined4 *)(param_1 + 0x18),pcVar5);
        fn_826A7288(*(undefined4 *)(param_1 + 0x18),uVar1);
      }
      if (piVar6 == (int *)0x0) {
        return;
      }
      if (piVar6 == piVar9) {
        return;
      }
      if (iVar4 != piVar6[8]) {
        return;
      }
      uVar8 = (ulonglong)(uint)piVar6[5];
    }
    if ((((-1 < piVar9[5]) && ((**(code **)(*piVar9 + 0x14))(piVar9,0), iVar4 != 0)) &&
        (cVar7 = fn_826998A8(iVar4 + 0xa8,piVar9[5],uVar8), cVar7 != '\0')) &&
       (*(uint *)(*(int *)(iVar4 + 0xa0) + 0xb00) =
             *(uint *)(*(int *)(iVar4 + 0xa0) + 0xb00) | 0x400, piVar6 != (int *)0x0)) {
      (**(code **)(*piVar6 + 0x14))(piVar6,0);
    }
  }
  return;
}

