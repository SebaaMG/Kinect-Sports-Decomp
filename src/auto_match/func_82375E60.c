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
extern int fn_822AEA70();
extern int fn_82373840();
extern int fn_82373B70();
extern int fn_82A1EFC0();
extern unsigned int lbl_821B37CC;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


void fn_82375E60(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  uint uVar4;
  double dVar5;
  undefined **appuStack_30 [4];
  undefined ***pppuStack_20;
  
  fVar3 = lbl_821CC160;
  dVar5 = (double)lbl_821CC160;
  *(float *)(*(int *)((*(int **)**(undefined4 **)(param_1 + 8))[4] * 4 +
                     **(int **)**(undefined4 **)(param_1 + 8)) + 0x20) = lbl_821CC160;
  piVar1 = *(int **)(**(int **)(param_1 + 8) + 4);
  *(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20) = fVar3;
  fn_82373B70();
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x260) + 0x154);
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x218) = uVar2;
  uVar4 = *(uint *)(*(int *)(param_1 + 0x260) + 0x158);
  if (1 < uVar4) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar4 = (-lbl_83265A28 & ~lbl_83265A28) >> 0x1f;
  }
  *(uint *)(param_1 + 0x1e4) = (uint)(uVar4 != 0);
  uVar4 = *(uint *)(*(int *)(param_1 + 0x260) + 0x15c);
  if (uVar4 < 2) {
    *(uint *)(param_1 + 0x1e8) = uVar4;
  }
  else {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    *(uint *)(param_1 + 0x1e8) = (-lbl_83265A28 & ~lbl_83265A28) >> 0x1f;
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x260) + 0x160);
  *(float *)(param_1 + 0x210) = (float)dVar5;
  *(undefined4 *)(param_1 + 0x1f0) = 8;
  *(undefined4 *)(param_1 + 500) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ec) = uVar2;
  fn_82373840(param_1);
  pppuStack_20 = appuStack_30;
  appuStack_30[0] = &lbl_821B37CC;
  fn_822AEA70(*(undefined4 *)(param_1 + 8),appuStack_30);
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(*(undefined4 *)(param_1 + 0x7dc),0,0x30);
}

