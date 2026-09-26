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
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_8305F320();
extern int fn_83066810();
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int lbl_8217E6A8;
extern unsigned int lbl_8217E6AC;


undefined8 fn_8305CD60(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  int *piVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined **ppuStack_60;
  int iStack_5c;
  int iStack_58;
  
  ppuStack_60 = &lbl_8217E6A8;
  uVar12 = 0;
  iStack_5c = param_2;
  iStack_58 = param_2;
  uVar6 = (*(code *)lbl_8217E6AC)(&ppuStack_60);
  iStack_58 = (int)uVar6;
  if ((uVar6 & 0xffffffff) != 0) {
    do {
      uVar12 = uVar12 + 1;
      uVar6 = (*(code *)ppuStack_60[1])(&ppuStack_60,uVar6);
      iStack_58 = (int)uVar6;
    } while ((uVar6 & 0xffffffff) != 0);
    if (0x3fffffff < (uVar12 & 0xffffffff)) {
      lVar7 = -1;
      goto LAB_8305cdf0;
    }
  }
  lVar7 = (uVar12 & 0x3fffffff) << 2;
LAB_8305cdf0:
  piVar8 = (int *)fn_8265CA60(lVar7);
  pcVar9 = (char *)fn_8265CA60(uVar12);
  bVar3 = false;
  iStack_5c = param_2;
  iStack_58 = param_2;
  iStack_58 = (*(code *)ppuStack_60[1])(&ppuStack_60,param_2);
  iVar4 = param_2;
  piVar13 = piVar8;
  pcVar14 = pcVar9;
  do {
    if (iStack_58 == 0) {
      if (bVar3) {
        iStack_5c = param_2;
        iStack_58 = param_2;
        iStack_58 = (*(code *)ppuStack_60[1])(&ppuStack_60,param_2);
        piVar13 = piVar8;
        pcVar14 = pcVar9;
        for (; iStack_58 != 0; iStack_58 = (*(code *)ppuStack_60[1])(&ppuStack_60,iStack_58)) {
          if (*piVar13 != 0) {
            if (*pcVar14 == '\0') {
              uVar11 = 0;
              uVar15 = param_3;
            }
            else {
              uVar15 = 0;
              uVar11 = param_3;
            }
            fn_8305F320((double)*(float *)(param_1 + 8),param_3,*piVar13,uVar15,uVar11);
          }
          pcVar14 = pcVar14 + 1;
          piVar13 = piVar13 + 1;
        }
      }
      uVar15 = 1;
switchD_82d7c944_default:
      fn_8265CAA0(piVar8);
      fn_8265CAA0(pcVar9);
      return uVar15;
    }
    iVar10 = fn_83066810((double)*(float *)(param_1 + 8),iStack_58,param_3);
    iVar5 = iStack_58;
    iVar1 = *(int *)(iStack_58 + 0x20);
    *piVar13 = 0;
    bVar2 = iVar4 == iVar1;
    if (iVar10 == 3) {
      bVar3 = true;
      *piVar13 = iStack_58;
      *pcVar14 = bVar2;
    }
    else if (((iVar10 == 1) && (bVar2)) || ((iVar10 == 0 && (!bVar2)))) {
      uVar15 = 0;
      goto switchD_82d7c944_default;
    }
    piVar13 = piVar13 + 1;
    pcVar14 = pcVar14 + 1;
    iStack_58 = (*(code *)ppuStack_60[1])(&ppuStack_60);
    iVar4 = iVar5;
  } while( true );
}

