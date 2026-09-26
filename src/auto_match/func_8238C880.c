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
extern int fn_822315A0();
extern int fn_822ABA88();
extern int fn_82374520();
extern unsigned int iStack_2c;
extern unsigned int lbl_821CC160;


longlong fn_8238C880(int *param_1)

{
  int *piVar2;
  longlong lVar1;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  dVar7 = (double)(**(code **)(*param_1 + 0x70))();
  dVar8 = (double)lbl_821CC160;
  if (dVar7 <= dVar8) {
    lVar1 = -((ulonglong)((uint)param_1[3] < (uint)param_1[5]) - 1);
  }
  else {
    piVar2 = (int *)fn_82374520(auStack_30,param_1[2]);
    iVar3 = *piVar2;
    if (iStack_2c != 0) {
      fn_822315A0(iStack_2c);
    }
    if (iVar3 == 0) {
      uVar6 = (ulonglong)(uint)param_1[10];
      uVar4 = 0;
      if (uVar6 != 0) {
        piVar2 = *(int **)(**(int **)(param_1[2] + 8) + 4);
        uVar5 = (ulonglong)*(uint *)(piVar2[4] * 4 + *piVar2);
        do {
          iVar3 = fn_822ABA88(uVar5);
          if (*(int *)(iVar3 + 0x300) != 0) goto LAB_8238c8f0;
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xffffffff) < (uVar6 & 0xffffffff));
      }
      if ((double)(float)param_1[6] <= dVar8) {
        return 1;
      }
    }
LAB_8238c8f0:
    lVar1 = 0;
  }
  return lVar1;
}

