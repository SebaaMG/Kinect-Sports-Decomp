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
extern unsigned int fStack_74;
extern unsigned int fStack_84;
extern int fn_825E6C70();
extern int fn_825E7B28();
extern int fn_82F68CC0();
extern unsigned int lbl_821954F0;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825E6DC8(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  uVar3 = 0;
  if (param_1[4] != 0) {
    do {
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[4]);
  }
  param_1[4] = 0;
  uVar3 = 0;
  param_1[1] = *param_1;
  if (param_1[9] != 0) {
    do {
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[9]);
  }
  param_1[9] = 0;
  iVar7 = 0;
  param_1[6] = param_1[5];
  dVar11 = (double)lbl_821954F0;
  dVar10 = (double)lbl_821CA460;
  piVar6 = *(int **)(param_3 + 0x7c);
  iVar1 = *(int *)(param_2 + 0x1a8);
  piVar5 = (int *)(iVar1 + 0x4520);
  do {
    if (*piVar5 < *(int *)(iVar1 + 0x4660)) {
      iVar4 = *piVar5 * 0xd0 + iVar1;
      if (((undefined4 *)(iVar4 + 0x420) == (undefined4 *)0x0) || (*(int *)(iVar4 + 0x4cc) == 0))
      goto LAB_825e6f44;
      if (*(int *)(iVar4 + 0x4e0) != 0) {
        piVar2 = (int *)fn_825E7B28(param_1 + 5);
        dVar8 = (double)*(float *)(iVar4 + 0x4b0);
        dVar9 = (double)*(float *)(iVar4 + 0x4b4);
        uStack_90 = *(undefined4 *)(iVar4 + 0x420);
        uStack_8c = *(undefined4 *)(iVar4 + 0x424);
        uStack_88 = *(undefined4 *)(iVar4 + 0x428);
        uStack_80 = *(undefined4 *)(iVar4 + 0x430);
        uStack_7c = *(undefined4 *)(iVar4 + 0x434);
        uStack_78 = *(undefined4 *)(iVar4 + 0x438);
        if (dVar8 <= dVar9) {
          dVar8 = (double)(float)(dVar9 * dVar11);
        }
        uStack_70 = *(undefined4 *)(iVar4 + 0x440);
        uStack_6c = *(undefined4 *)(iVar4 + 0x444);
        uStack_68 = *(undefined4 *)(iVar4 + 0x448);
        uStack_64 = *(undefined4 *)(iVar4 + 0x4b8);
        *piVar2 = iVar7;
        fStack_74 = (float)(dVar8 / (double)(float)(dVar8 - dVar9));
        fStack_84 = (float)(dVar10 / (double)(float)(dVar8 - dVar9));
        fn_82F68CC0(piVar2 + 1,&uStack_90,0x30);
        *(undefined4 *)(iVar4 + 0x4e0) = 0;
      }
LAB_825e6f64:
      if ((piVar6 != (int *)(param_3 + 0x34)) && (*piVar6 == iVar7)) {
        piVar6 = (int *)piVar6[0x12];
      }
    }
    else {
LAB_825e6f44:
      if (piVar6 != (int *)(param_3 + 0x34)) {
        if (*piVar6 == iVar7) {
          piVar2 = (int *)fn_825E6C70(param_1);
          *piVar2 = iVar7;
        }
        goto LAB_825e6f64;
      }
    }
    iVar7 = iVar7 + 1;
    piVar5 = piVar5 + 1;
    if (0x4f < iVar7) {
      return;
    }
  } while( true );
}

