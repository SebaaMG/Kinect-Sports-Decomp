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
extern unsigned int *auStack_60;
extern int fn_82FAB9C0();
extern unsigned int lbl_832642E0;


undefined8 fn_83021A98(int param_1,uint *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  uint auStack_60 [24];
  
  piVar4 = *(int **)(param_1 + 0x10);
  auStack_60[0] = 0;
  lVar5 = 0;
  uVar3 = 1;
  if (piVar4 != *(int **)(param_1 + 0x14)) {
    do {
      if ((*(uint *)(*piVar4 + 0x14) & 0xffffff00) == 0x401100) {
        uVar2 = *(undefined4 *)(*piVar4 + 0x10);
        piVar1 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,uVar2);
        if (piVar1 == (int *)0x0) {
          return 0x3d;
        }
        if (*param_2 != 0) {
          *(undefined4 *)(auStack_60[0] * 0xc + param_3) = uVar2;
          if (piVar1[4] == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = *(undefined4 *)(piVar1[4] + 0xc);
          }
          *(undefined4 *)(auStack_60[0] * 0xc + param_3 + 4) = uVar2;
          *(int *)(auStack_60[0] * 0xc + param_3 + 8) = (int)lVar5;
          if (*param_2 <= auStack_60[0] + 1) {
            auStack_60[0] = auStack_60[0] + 1;
            (**(code **)(*piVar1 + 8))(piVar1);
            break;
          }
        }
        auStack_60[0] = auStack_60[0] + 1;
        lVar5 = lVar5 + 1;
        uVar3 = (**(code **)(*piVar1 + 0x70))(piVar1,param_2,param_3,auStack_60,lVar5);
        (**(code **)(*piVar1 + 8))(piVar1);
        if ((int)uVar3 != 1) goto LAB_83021c28;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != *(int **)(param_1 + 0x14));
  }
  if (*param_2 == 0) {
    uVar3 = 3;
  }
LAB_83021c28:
  *param_2 = auStack_60[0];
  return uVar3;
}

