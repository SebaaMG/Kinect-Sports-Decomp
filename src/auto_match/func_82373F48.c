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
extern int fn_8236FB68();
extern int fn_82372ED8();
extern int fn_82372F88();
extern int fn_82374DA8();
extern int fn_8248F9F8();
extern int fn_82508078();
extern unsigned int lbl_821CA460;


void fn_82373F48(int param_1,ulonglong param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined4 uVar5;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar6;
  int iVar7;
  
  uVar6 = param_2;
  uVar5 = fn_82372ED8();
  *(undefined4 *)(param_1 + 0x9f4) = uVar5;
  piVar2 = *(int **)(**(int **)(param_1 + 8) + (int)((uVar6 & 0xffffffff) << 2));
  *(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20) =
       *(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20) + lbl_821CA460;
  if (*(int *)(param_1 + 0x9f4) == 0) {
    if (*(int *)(param_1 + 0x204) == 0) {
      lVar4 = fn_82372F88(param_1);
      iVar7 = (int)(lVar4 + 1) - ((int)lVar4 + (uint)(lVar4 + 1 == 0));
    }
    else {
      iVar7 = *(int *)(param_1 + 0x658);
    }
    if (iVar7 == 0) goto LAB_82374014;
    uVar3 = 8;
  }
  else {
    uVar3 = 0x27;
  }
  lVar4 = fn_8236FB68(uVar3);
  if (lVar4 != 0) {
    fn_82508078(*(undefined4 *)(param_1 + 0xa4),lVar4,0);
  }
LAB_82374014:
  *(int *)(param_1 + 0x1e0) = (int)param_2;
  *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + -1;
  fn_82374DA8(param_1);
  puVar1 = *(uint **)(param_1 + 0x94);
  if ((puVar1 != (uint *)0x0) && (puVar1[7] != 0)) {
    lVar4 = 0;
    if ((ulonglong)*puVar1 != 0) {
      lVar4 = (ulonglong)*puVar1 - 1;
    }
    fn_8248F9F8(puVar1[7],lVar4,0);
  }
  return;
}

