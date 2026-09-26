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
extern int fn_822BD338();
extern int fn_822C72E0();
extern unsigned int lbl_821CC160;


void fn_82334868(int param_1)

{
  float fVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  double dVar5;
  
  iVar2 = *(int *)(param_1 + 0x230);
  if ((*(int *)(iVar2 + 0x1a0) == 0) && (*(int *)(iVar2 + 0x1e0) == 0)) {
    if ((*(int *)(param_1 + 0xc) == 0) ||
       (*(float *)(**(int **)(iVar2 + 0x238) + 0xa9c) < *(float *)(param_1 + 0x228))) {
      uVar4 = *(undefined4 *)(param_1 + 0x184);
      *(undefined4 *)(iVar2 + 0x288) = 1;
      *(uint *)(iVar2 + 0x28c) = (uint)LZCOUNT(uVar4) >> 5;
    }
  }
  else if (*(int *)(param_1 + 0xc) == 0) {
    fVar1 = *(float *)(*(int *)(iVar2 + 0x23c) + 0x924);
    dVar5 = (double)lbl_821CC160;
    if (((*(int *)(iVar2 + 0x2a0) == 0) && (*(int *)(*(int *)(iVar2 + 0x23c) + 0x92c) == 0)) ||
       ((double)fVar1 <= dVar5)) {
      fn_822C72E0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x20),param_1 + 0x134);
      uVar4 = 7;
    }
    else {
      *(float *)(param_1 + 0x238) = fVar1;
      uVar4 = 6;
    }
    *(float *)(param_1 + 0x22c) = (float)dVar5;
    *(undefined4 *)(param_1 + 0x224) = uVar4;
    *(float *)(param_1 + 0x228) = (float)dVar5;
  }
  else if (*(int *)(param_1 + 0xc) == 1) {
    cVar3 = fn_822BD338((ulonglong)*(uint *)(*(int *)(iVar2 + 0x114) + 0x20) + 4,
                              0xffffffff821b09b4);
    if ((cVar3 != '\0') ||
       (cVar3 = fn_822BD338((ulonglong)
                                  *(uint *)(*(int *)(*(int *)(param_1 + 0x230) + 0x114) + 0x20) + 4,
                                  0xffffffff821b09cc), cVar3 != '\0')) {
      *(undefined4 *)(param_1 + 0x224) = 4;
      fVar1 = lbl_821CC160;
      *(float *)(param_1 + 0x228) = lbl_821CC160;
      *(float *)(param_1 + 0x22c) = fVar1;
    }
  }
  return;
}

