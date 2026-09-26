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
extern int fn_823412E8();
extern int fn_8234E808();
extern int fn_825300A8();
extern unsigned int lbl_821917D4;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327F844;


void fn_82348C30(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  
  uVar3 = lbl_821CC160;
  uVar4 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 8) = lbl_821CC160;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x34) = uVar3;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xa0) = uVar3;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x58) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x5c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x60) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xb4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 200) = uVar3;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xd4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xb8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 100) = 0;
  if ((*(int *)(**(int **)(param_1 + 0xc) + 0x24) != 0) && (lbl_8327F844 != 0)) {
    uVar1 = *(uint *)(**(int **)(param_1 + 0xc) + 0x2c);
    uVar4 = 0;
    fn_825300A8((double)lbl_821917D4,param_1,
                 (ulonglong)uVar1 +
                 ((longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0) &
                 0x7fffffff) * -2);
  }
  *(undefined4 *)(*(int *)(**(int **)(param_1 + 0xc) + 0x1a0) + 0x20) = uVar4;
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x68);
  if (iVar2 != 0) {
    for (pfVar5 = (float *)(iVar2 + 0x18); pfVar5 != (float *)(iVar2 + 0x60); pfVar5 = pfVar5 + 3) {
      pfVar5[2] = (pfVar5[1] - *pfVar5) + *pfVar5;
    }
    fn_8234E808();
  }
  fn_823412E8(param_1);
  return;
}

