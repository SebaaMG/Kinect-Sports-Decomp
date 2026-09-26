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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82405638();
extern int fn_82405E08();
extern int fn_82535298();
extern int fn_82536288();
extern unsigned int lbl_821CC160;


void fn_82405C30(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lStack_20;
  
  iVar5 = *(int *)(param_1 + 0x30) + 1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(int *)(param_1 + 0x30) = iVar5;
  *(undefined4 *)(param_1 + 0x44) = lbl_821CC160;
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xa0) + 0x84c);
  if (iVar5 == *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 3) {
    lStack_20 = CONCAT44(*(undefined4 *)(param_1 + 0x8c),(((U64)(lStack_20) >> 32) & 0xFFFFFFFF));
    uVar3 = fn_82535298(&lStack_20,uVar3,0xffffffff83296bc0,0xffffffff83296bd0);
    lStack_20 = CONCAT44(uVar3,(((U64)(lStack_20) >> 32) & 0xFFFFFFFF));
    fn_82536288(&lStack_20);
    fn_82405E08(param_1);
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar1 = *(int *)(param_1 + 0x20);
    iVar4 = (**(code **)(**(int **)(param_1 + 0x14) + 4))();
    lStack_20 = (longlong)((iVar1 - iVar5 >> 3) + -1);
    piVar2 = *(int **)(**(int **)(*(int *)(param_1 + 8) + 8) + *(int *)(iVar4 + 0x2c) * 4);
    *(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20) = (float)lStack_20;
    fn_82405638(param_1,5);
  }
  else {
    lStack_20 = CONCAT44(*(undefined4 *)(param_1 + 0x84),(((U64)(lStack_20) >> 32) & 0xFFFFFFFF));
    uVar3 = fn_82535298(&lStack_20,uVar3,0xffffffff83296bc0,0xffffffff83296bd0);
    lStack_20 = CONCAT44(uVar3,(((U64)(lStack_20) >> 32) & 0xFFFFFFFF));
    fn_82536288(&lStack_20);
  }
  return;
}

