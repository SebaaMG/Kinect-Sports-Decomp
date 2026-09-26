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
extern int fn_83033048();
extern unsigned int lbl_832642E0;


void fn_830118C0(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  
  puVar1 = *(undefined4 **)(param_1 + 0x50);
joined_r0x830118dc:
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  iVar2 = *(int *)(puVar1[2] + 8);
  if ((param_2 == 0) || (*(int *)(puVar1[2] + 0x34) == param_2)) {
    if (param_3 != (int *)0x0) {
      bVar5 = false;
      iVar9 = 0;
      if ((*(int *)(iVar2 + 0x10) != 0) &&
         (piVar6 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4), piVar6 != (int *)0x0)) {
        piVar3 = (int *)param_3[1];
        piVar4 = (int *)*param_3;
        piVar8 = piVar6;
        do {
          if (piVar4 != piVar3) {
            piVar7 = piVar4;
            do {
              if (*piVar7 == piVar8[3]) goto LAB_83011a1c;
              piVar7 = piVar7 + 1;
            } while (piVar7 != piVar3);
          }
          if ((!bVar5) && (iVar9 = piVar8[5], iVar9 != 0)) {
            bVar5 = true;
          }
          piVar8 = (int *)piVar8[4];
        } while (piVar8 != (int *)0x0);
        for (; iVar9 != 0; iVar9 = *(int *)(iVar9 + 0x14)) {
          if (piVar4 != piVar3) {
            piVar8 = piVar4;
            do {
              if (*piVar8 == *(int *)(iVar9 + 0xc)) goto LAB_83011a1c;
              piVar8 = piVar8 + 1;
            } while (piVar8 != piVar3);
          }
        }
        (**(code **)(*piVar6 + 8))();
      }
    }
    bVar5 = false;
    goto LAB_830119e4;
  }
  goto LAB_83011a08;
LAB_83011a1c:
  (**(code **)(*piVar6 + 8))();
  bVar5 = true;
LAB_830119e4:
  if ((!bVar5) && ((*(uint *)(iVar2 + 0x14) & 0xffffff00) == 0x501100)) {
    fn_83033048(iVar2);
  }
LAB_83011a08:
  puVar1 = (undefined4 *)*puVar1;
  goto joined_r0x830118dc;
}

