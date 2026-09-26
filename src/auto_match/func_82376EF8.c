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
extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_8225F160();
extern int fn_822CF9D8();
extern int fn_822D0068();
extern int fn_822D1720();
extern int fn_822D1E70();
extern int fn_822D4178();
extern int fn_8265C9E0();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82192604;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82376EF8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar6;
  ulonglong uVar5;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 auStack_20 [2];
  
  *(undefined4 *)(param_2 + 0x1c0) = *(undefined4 *)(param_1 + 4);
  iVar6 = fn_8225F160();
  auStack_20[0] = *(undefined4 *)(iVar6 + 0x14);
  uVar5 = fn_8265C9E0(0xc4);
  if ((uVar5 & 0xffffffff) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = fn_822D0068(uVar5,param_2 + 0x1b0,auStack_20);
  }
  iVar1 = *(int *)(param_2 + 0x1ac);
  *(int *)(param_2 + 0x1ac) = iVar6;
  *(int *)(param_2 + 0x1a8) = iVar6 + 0xc;
  if (iVar1 != 0) {
    fn_822315A0();
    return;
  }
  fn_822D1720(*(undefined4 *)(param_2 + 0x110),param_2,*(undefined4 *)(param_2 + 0x1c0),
                    *(undefined4 *)(param_2 + 0x1a8));
  piVar2 = *(int **)**(undefined4 **)(*(int *)(param_2 + 0x1c0) + 8);
  if ((*(int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8) == 1) && (*(int *)(param_2 + 0x2c) == 1)) {
    fn_822D4178(*(undefined4 *)(param_2 + 0x114),param_2);
  }
  else {
    fn_822D1E70(*(undefined4 *)(param_2 + 0x114),param_2);
  }
  uVar4 = lbl_821CC160;
  fVar3 = lbl_821CA460;
  if (*(int *)(param_2 + 0x24) == 0) {
    dVar9 = (double)lbl_821CA460;
    *(float *)(param_2 + 0x1dc) = lbl_821CA460;
    *(float *)(param_2 + 0x1d8) = fVar3;
    *(undefined4 *)(param_2 + 0x1e0) = uVar4;
    dVar8 = (double)fn_822CF9D8(param_2,0);
    dVar7 = (double)lbl_8218E8FC;
    *(float *)(param_2 + 0x108) = (float)(dVar8 * (double)lbl_82192604 + dVar7);
    *(float *)(param_2 + 0x10c) = (float)((double)(float)(dVar8 + dVar9) * dVar7);
  }
  return;
}

