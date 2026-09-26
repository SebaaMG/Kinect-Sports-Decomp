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
extern int fn_822ABA88();
extern int fn_822C6880();
extern int fn_822C9B00();
extern int fn_822CF9D8();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82373130(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  piVar3 = *(int **)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x1e0);
  iVar5 = 0;
  if ((piVar3[1] - *piVar3 & 0xfffffffcU) != 0) {
    iVar4 = 0;
    dVar9 = (double)lbl_821CC160;
    dVar10 = (double)lbl_821CA460;
    do {
      uVar6 = 0;
      piVar3 = *(int **)(iVar4 + *piVar3);
      iVar2 = *(int *)(piVar3[4] * 4 + *piVar3);
      if (*(int *)(iVar2 + 8) != 0) {
        do {
          iVar2 = fn_822ABA88(iVar2,uVar6);
          fn_822C6880(*(undefined4 *)(*(int *)(iVar2 + 0x114) + 0x48));
          fn_822C9B00(*(undefined4 *)(iVar2 + 0x114));
          if (iVar5 == iVar1) {
            dVar8 = (double)fn_822CF9D8(iVar2,0x16);
            dVar8 = (double)*(float *)(iVar2 + 0x1dc) - -dVar8;
          }
          else {
            dVar8 = (double)fn_822CF9D8(iVar2,0x16);
            dVar8 = (double)*(float *)(iVar2 + 0x1dc) - dVar8;
          }
          dVar7 = (double)(float)dVar8;
          *(float *)(iVar2 + 0x1dc) = (float)dVar8;
          if (dVar9 <= dVar7) {
            if (dVar10 < dVar7) {
              *(float *)(iVar2 + 0x1dc) = (float)dVar10;
            }
          }
          else {
            *(float *)(iVar2 + 0x1dc) = (float)dVar9;
          }
          uVar6 = uVar6 + 1;
          *(undefined4 *)(iVar2 + 0x1d8) = *(undefined4 *)(iVar2 + 0x1dc);
          iVar2 = *(int *)(piVar3[4] * 4 + *piVar3);
        } while ((uVar6 & 0xffffffff) < (ulonglong)*(uint *)(iVar2 + 8));
      }
      piVar3 = *(int **)(param_1 + 8);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < piVar3[1] - *piVar3 >> 2);
  }
  return;
}

