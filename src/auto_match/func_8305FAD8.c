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


void fn_8305FAD8(undefined8 param_1,undefined4 *param_2,uint *param_3)

{
  bool bVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  
  piVar11 = (int *)*param_2;
  while( true ) {
    uVar8 = *param_3;
    bVar1 = false;
    uVar10 = 0;
    if (0 < (int)uVar8) break;
LAB_8305fbfc:
    if (!bVar1) {
      *param_2 = piVar11;
      return;
    }
  }
LAB_8305fb04:
  if (uVar10 == 0) {
    iVar7 = piVar11[1];
    uVar9 = uVar8;
LAB_8305fb2c:
    iVar5 = (piVar11 + uVar9)[-1];
  }
  else {
    if (uVar10 == uVar8 - 1) {
      iVar7 = *piVar11;
      uVar9 = uVar10;
      goto LAB_8305fb2c;
    }
    iVar5 = (piVar11 + uVar10)[-1];
    iVar7 = (piVar11 + uVar10)[1];
  }
  if (iVar5 != iVar7) goto code_r0x8305fb50;
  uVar9 = uVar10 + 1;
  if ((int)(uVar8 - 1) <= (int)uVar10) {
    uVar9 = 0;
  }
  lVar2 = ((ulonglong)uVar8 - 2 & 0x3fffffff) << 2;
  if (0x3fffffff < ((ulonglong)uVar8 - 2 & 0xffffffff)) {
    lVar2 = -1;
  }
  piVar3 = (int *)fn_8265CA60(lVar2);
  uVar8 = 0;
  if (0 < (int)*param_3) {
    piVar4 = piVar3 + -1;
    piVar6 = piVar11;
    do {
      if ((uVar8 != uVar10) && (uVar8 != uVar9)) {
        piVar4 = piVar4 + 1;
        *piVar4 = *piVar6;
      }
      uVar8 = uVar8 + 1;
      piVar6 = piVar6 + 1;
    } while ((int)uVar8 < (int)*param_3);
  }
  *param_3 = *param_3 - 2;
  fn_8265CAA0(piVar11);
  bVar1 = true;
  piVar11 = piVar3;
  goto LAB_8305fbfc;
code_r0x8305fb50:
  uVar10 = uVar10 + 1;
  if ((int)*param_3 <= (int)uVar10) goto LAB_8305fbfc;
  goto LAB_8305fb04;
}

