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
extern int fn_82FAB9C0();
extern unsigned int lbl_832642E0;


undefined8 fn_83010658(undefined8 param_1,int param_2,int *param_3)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  if (param_3 != (int *)0x0) {
    bVar2 = false;
    iVar6 = 0;
    if ((*(int *)(param_2 + 0x10) != 0) &&
       (piVar3 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4), piVar3 != (int *)0x0)) {
      piVar1 = (int *)param_3[1];
      param_3 = (int *)*param_3;
      piVar5 = piVar3;
      do {
        if (param_3 != piVar1) {
          piVar4 = param_3;
          do {
            if (*piVar4 == piVar5[3]) goto LAB_83010750;
            piVar4 = piVar4 + 1;
          } while (piVar4 != piVar1);
        }
        if ((!bVar2) && (iVar6 = piVar5[5], iVar6 != 0)) {
          bVar2 = true;
        }
        piVar5 = (int *)piVar5[4];
      } while (piVar5 != (int *)0x0);
      for (; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x14)) {
        if (param_3 != piVar1) {
          piVar5 = param_3;
          do {
            if (*piVar5 == *(int *)(iVar6 + 0xc)) {
LAB_83010750:
              (**(code **)(*piVar3 + 8))();
              return 1;
            }
            piVar5 = piVar5 + 1;
          } while (piVar5 != piVar1);
        }
      }
      (**(code **)(*piVar3 + 8))();
    }
  }
  return 0;
}

