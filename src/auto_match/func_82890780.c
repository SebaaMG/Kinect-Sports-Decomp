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
extern unsigned int *auStack_48;
extern int fn_825089A0();
extern int fn_8265CA20();
extern int fn_8288B4F8();
extern int fn_8288F588();
extern int fn_828A12E8();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55F8();
extern int fn_828C8058();
extern int fn_82F6B030();
extern unsigned int lbl_82006848;


void fn_82890780(undefined8 param_1)

{
  int *piVar1;
  int iVar3;
  char cVar6;
  int *piVar4;
  longlong lVar2;
  int iVar5;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int aiStack_50 [2];
  undefined1 auStack_48 [72];
  
  iVar3 = fn_828A12E8();
  piVar4 = (int *)**(int **)(iVar3 + 0x44);
  iVar3 = fn_828A12E8(param_1);
  if (piVar4 != *(int **)(iVar3 + 0x44)) {
    do {
      cVar6 = (**(code **)(*(int *)piVar4[2] + 0xc))();
      if (cVar6 == '\0') {
        piVar1 = (int *)*piVar4;
      }
      else {
        iVar3 = fn_828A12E8(param_1);
        piVar1 = (int *)*piVar4;
        if (piVar4 != *(int **)(iVar3 + 0x44)) {
          *(int **)piVar4[1] = piVar1;
          *(int *)(*piVar4 + 4) = piVar4[1];
          fn_8265CA20(piVar4);
          *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + -1;
        }
      }
      iVar3 = fn_828A12E8(param_1);
      piVar4 = piVar1;
    } while (piVar1 != *(int **)(iVar3 + 0x44));
  }
  iVar3 = fn_828A12E8(param_1);
  piVar4 = (int *)**(int **)(iVar3 + 0x50);
  iVar3 = fn_828A12E8(param_1);
  if (piVar4 != *(int **)(iVar3 + 0x50)) {
    do {
      cVar6 = fn_8288F588(piVar4[2]);
      if (cVar6 == '\0') {
        piVar1 = (int *)*piVar4;
      }
      else {
        iVar3 = fn_828A12E8(param_1);
        piVar1 = (int *)*piVar4;
        if (piVar4 != *(int **)(iVar3 + 0x50)) {
          *(int **)piVar4[1] = piVar1;
          *(int *)(*piVar4 + 4) = piVar4[1];
          fn_8265CA20(piVar4);
          *(int *)(iVar3 + 0x54) = *(int *)(iVar3 + 0x54) + -1;
        }
      }
      iVar3 = fn_828A12E8(param_1);
      piVar4 = piVar1;
    } while (piVar1 != *(int **)(iVar3 + 0x50));
  }
  piVar4 = (int *)fn_825089A0();
  lVar2 = (**(code **)(*piVar4 + 0xc))();
  iVar3 = fn_828A12E8(param_1);
  iVar3 = **(int **)(iVar3 + 0x60);
  aiStack_50[0] = iVar3;
  iVar5 = fn_828A12E8(param_1);
  if (iVar3 != *(int *)(iVar5 + 0x60)) {
    dVar10 = (double)lbl_82006848;
    do {
      piVar4 = *(int **)(iVar3 + 0x10);
      lVar7 = *(longlong *)(iVar3 + 0x18);
      fn_8288B4F8(aiStack_50);
      dVar8 = (double)fn_82F6B030(lVar2 - lVar7);
      dVar9 = (double)(float)dVar8;
      dVar8 = (double)(**(code **)(*piVar4 + 0x18))(piVar4);
      if (dVar8 <= (double)(float)(dVar9 * dVar10)) {
        fn_828B5580(auStack_48,piVar4 + 5);
        iVar3 = fn_828B55F8(auStack_48);
        fn_828B55B0(auStack_48);
        if (iVar3 == 0) {
          fn_828C8058(param_1,0xf);
        }
        else {
          *(undefined1 *)(piVar4 + 7) = 1;
          if (*(code **)(piVar4[0xe] + 0x2c) == (code *)0x0) {
            (**(code **)*piVar4)(piVar4,1);
          }
          else {
            (**(code **)(piVar4[0xe] + 0x2c))(piVar4);
          }
        }
      }
      iVar5 = fn_828A12E8(param_1);
      iVar3 = aiStack_50[0];
    } while (aiStack_50[0] != *(int *)(iVar5 + 0x60));
  }
  return;
}

