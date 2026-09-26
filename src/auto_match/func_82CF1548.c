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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CF12D0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


void fn_82CF1548(undefined8 param_1,double param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong in_r6;
  undefined8 in_r7;
  ulonglong in_r8;
  ulonglong uVar7;
  double dVar8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  iVar4 = fn_82F6A548();
  iVar6 = **(int **)(iVar4 + 0x30);
  uVar7 = 0;
  iVar2 = (*(int **)(iVar4 + 0x30))[*(int *)(iVar4 + 0x34) + -1];
  dVar11 = *(double *)(iVar6 + 0x40) - extraout_f1;
  piVar3 = (int *)in_r7;
  dVar10 = extraout_f1;
  dVar12 = lbl_82005710;
  if ((int)in_r6 != 0) {
    do {
      if (dVar11 <= dVar12) break;
      dVar12 = param_2 + dVar12;
      iVar5 = fn_82CE5410();
      if (piVar3[1] == (piVar3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
        fn_82CE63B0(*(undefined4 *)(iVar5 + 0x10),in_r7,4);
      }
      in_r6 = in_r6 + -1;
      *(undefined4 *)(piVar3[1] * 4 + *piVar3) = 0;
      piVar3[1] = piVar3[1] + 1;
    } while (in_r6 != 0);
  }
  dVar11 = lbl_82005758;
  iVar5 = (int)((in_r8 & 0xffffffff) << 2);
  dVar8 = *(double *)(iVar2 + 0x40);
  dVar9 = *(double *)(iVar6 + 0x40);
  fVar1 = *(float *)(iVar5 + iVar2);
  *(double *)(iVar4 + 0x40) = dVar9;
  dVar8 = ((double)fVar1 + dVar8) - dVar10;
  *(float *)(iVar5 + iVar4) = (float)(((dVar10 + dVar8) - dVar9) + dVar11);
  if ((int)in_r6 != 0) {
    do {
      if (dVar8 <= dVar12) break;
      uVar7 = fn_82CF12D0(dVar10 + dVar12,iVar4,uVar7);
      if ((uVar7 & 0xffffffff) != 0) {
        iVar6 = fn_82CE5410();
        if (piVar3[1] == (piVar3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar6 + 0x10),in_r7,4);
        }
        *(int *)(piVar3[1] * 4 + *piVar3) = (int)uVar7;
        piVar3[1] = piVar3[1] + 1;
      }
      in_r6 = in_r6 + -1;
      dVar12 = param_2 + dVar12;
    } while (in_r6 != 0);
  }
  fn_82F6A594();
  return;
}

