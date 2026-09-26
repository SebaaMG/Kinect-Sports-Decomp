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
extern int fn_82BD7EF8();
extern unsigned int lbl_82005758;


void fn_82BD8628(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  int *piVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar8 = (double)*(uint *)(param_1 + 0x130);
  uVar5 = (ulonglong)*(ushort *)(param_1 + 0x44) - (ulonglong)*(ushort *)(param_1 + 0x48);
  dVar10 = lbl_82005758;
  if ((double)*(uint *)(param_1 + 0x138) / dVar8 < lbl_82005758) {
    dVar10 = (double)*(uint *)(param_1 + 0x138) / dVar8;
  }
  dVar8 = *(double *)(param_1 + 0x120) * dVar8;
  if (lbl_82005758 <= dVar8) {
    dVar8 = lbl_82005758;
  }
  dVar9 = lbl_82005758 - dVar8;
  *(double *)(param_1 + 0x128) = dVar8;
  iVar2 = (int)((uVar5 + 10 & 0x1fffffff) << 3);
  *(double *)(iVar2 + param_1) = dVar9 * *(double *)(iVar2 + param_1) + dVar8 * dVar10;
  dVar8 = *(double *)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  dVar10 = *(double *)(iVar2 + param_1);
  if (dVar8 <= dVar10) {
    if ((((uVar5 + 1 & 0xffffffff) < 0x19) &&
        (ABS(*(double *)((int)((uVar5 + 0xb & 0xffffffff) << 3) + param_1) - dVar8) <
         ABS(dVar10 - dVar8))) && (*(longlong *)(param_1 + 0x10) != 0)) {
      uVar5 = *(longlong *)(param_1 + 0x28) + 0x14;
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x14;
      *(ulonglong *)(param_1 + 0x28) = uVar5;
      *(short *)(param_1 + 0x44) = (short)(uVar5 / 0x14);
    }
  }
  else if (((uVar5 & 0xffffffff) != 0) &&
          (ABS(*(double *)((int)((uVar5 + 9 & 0xffffffff) << 3) + param_1) - dVar8) <
           ABS(dVar10 - dVar8))) {
    piVar1 = *(int **)(param_1 + 0x188);
    piVar7 = (int *)(param_1 + 0x188);
    uVar5 = *(longlong *)(param_1 + 0x28) - 0x14;
    *(ulonglong *)(param_1 + 0x28) = uVar5;
    *(short *)(param_1 + 0x44) = (short)(uVar5 / 0x14);
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      uVar5 = *(ulonglong *)(iVar2 + 0x18);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
      iVar4 = fn_82BD7EF8(piVar7);
      if ((iVar4 != 0) && (uVar5 < *(ulonglong *)(param_1 + 0x10))) {
        piVar6 = (int *)*piVar7;
        uVar5 = uVar5 + 0x14;
        bVar3 = false;
        if (piVar6 != (int *)0x0) {
          do {
            if (uVar5 < *(ulonglong *)(*piVar6 + 0x18)) break;
            if (*(ulonglong *)(*piVar6 + 0x18) == uVar5) {
              bVar3 = true;
            }
            piVar6 = (int *)piVar6[1];
          } while (piVar6 != (int *)0x0);
          if (bVar3) {
            iVar2 = *piVar7;
            if (iVar2 != 0) {
              if (iVar2 == *(int *)(param_1 + 0x18c)) {
                *(undefined4 *)(param_1 + 0x18c) = 0;
              }
              *piVar7 = *(int *)(iVar2 + 4);
              *(undefined4 *)(iVar2 + 4) = 0;
            }
            piVar1[1] = 0;
            if (*(int *)(param_1 + 0x184) == 0) {
              *(int **)(param_1 + 0x180) = piVar1;
            }
            else {
              *(int **)(*(int *)(param_1 + 0x184) + 4) = piVar1;
            }
            *(int **)(param_1 + 0x184) = piVar1;
            return;
          }
        }
        *(longlong *)(iVar2 + 0x18) = *(longlong *)(iVar2 + 0x18) + 0x14;
      }
    }
  }
  return;
}

