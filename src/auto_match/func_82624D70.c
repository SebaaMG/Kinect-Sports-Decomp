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
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825FCE80();
extern unsigned int lbl_8218DBA8;
extern unsigned int lbl_8218DBB0;


void fn_82624D70(int param_1,int param_2,int *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int *piVar8;
  
  if (*(int *)(param_1 + 0x220) != 0) {
    fn_8251FA58();
    if (*(int *)(param_1 + 0x228) != 0) {
      fn_8251FA58();
    }
    if (*(int *)(param_1 + 0x22c) != 0) {
      fn_8251FA58();
    }
    if (*(int *)(param_1 + 0x230) != 0) {
      fn_8251FA58();
    }
    if (*(int *)(param_1 + 0x234) != 0) {
      fn_8251FA58();
    }
  }
  if (param_2 == 0) {
    if ((param_3 == (int *)0x0) || (*param_3 == 0)) goto LAB_82624e18;
    uVar2 = fn_8251F720(param_3,0);
    uVar7 = 1;
    *(undefined4 *)(param_1 + 0x220) = uVar2;
  }
  else {
    uVar7 = 0;
    *(int *)(param_1 + 0x220) = param_2;
  }
  *(undefined4 *)(param_1 + 0x248) = uVar7;
LAB_82624e18:
  iVar3 = *(int *)(param_1 + 0x220);
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 4);
    if (iVar4 != 0x1b7c) {
      do {
        if (iVar4 == 2) {
          piVar8 = (int *)0x0;
          goto LAB_82624e9c;
        }
        iVar5 = 0;
        uVar6 = 0;
        piVar8 = (int *)&lbl_8218DBA8;
        do {
          if (*piVar8 == iVar4) goto LAB_82624e74;
          uVar6 = uVar6 + 0xc;
          iVar5 = iVar5 + 1;
          piVar8 = piVar8 + 3;
        } while ((uVar6 & 0xffffffff) < 0x3cc);
        iVar5 = -1;
LAB_82624e74:
        iVar3 = *(int *)(&lbl_8218DBB0 + iVar5 * 0xc) + iVar3;
        iVar4 = *(int *)(iVar3 + 4);
      } while (iVar4 != 0x1b7c);
    }
    piVar8 = (int *)(iVar3 + 0x18);
LAB_82624e9c:
    if ((piVar8 != (int *)0x0) && (*piVar8 != 0)) {
      uVar6 = fn_8251F720(piVar8,0);
      *(int *)(param_1 + 0x228) = (int)uVar6;
      if ((uVar6 & 0xffffffff) != 0) {
        uVar6 = fn_825FCE80(uVar6,0x1f51);
        lVar1 = uVar6 + 0xc;
        if ((uVar6 & 0xffffffff) == 0) {
          lVar1 = 0;
        }
        uVar2 = fn_8251F720(lVar1,0);
        *(undefined4 *)(param_1 + 0x22c) = uVar2;
        iVar3 = fn_825FCE80(*(undefined4 *)(param_1 + 0x228),0x1f4f);
        if (iVar3 != 0) {
          if (*(int *)(iVar3 + 8) != 0) {
            uVar2 = fn_8251F720(iVar3 + 8,0);
            *(undefined4 *)(param_1 + 0x230) = uVar2;
          }
          if (*(int *)(iVar3 + 0xc) != 0) {
            uVar2 = fn_8251F720((int *)(iVar3 + 0xc),0);
            *(undefined4 *)(param_1 + 0x234) = uVar2;
          }
        }
      }
    }
  }
  return;
}

