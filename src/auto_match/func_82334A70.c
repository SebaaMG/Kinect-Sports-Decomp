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
extern int fn_8229A000();
extern int fn_822BD338();
extern int fn_823353B8();
extern int fn_823354E0();
extern unsigned int lbl_821CC160;


void fn_82334A70(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_1 + 0x230);
  piVar2 = *(int **)(iVar1 + 0x238);
  if (*(int *)(param_1 + 0x18c) == 0) {
    if ((*(int *)(*(int *)(iVar1 + 0x23c) + 0x92c) != 0) && (*(int *)(param_1 + 0xc) == 0)) {
      iVar1 = *piVar2;
      fVar3 = *(float *)(param_1 + 0x180) - *(float *)(iVar1 + 0xad0);
      if ((*(float *)(param_1 + 0x22c) <= fVar3) &&
         ((fVar3 < *(float *)(param_1 + 0x228) && (piVar2 == *(int **)(iVar1 + 0x2b20))))) {
        fn_8229A000(*(undefined4 *)(*(int *)(iVar1 + 0xd4) + 0x24));
      }
    }
    if (*(float *)(param_1 + 0x228) <= *(float *)(param_1 + 0x180)) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x230);
    if ((*(int *)(*(int *)(iVar1 + 0x23c) + 0x92c) != 0) && (*(int *)(param_1 + 0xc) == 0)) {
      fn_823354E0(param_1,*(undefined4 *)(iVar1 + 0x238));
      return;
    }
    *(undefined4 *)(iVar1 + 0x290) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x230) + 0x294) = 1;
    fn_823353B8(param_1,piVar2);
    *(undefined4 *)(param_1 + 0x214) = 0;
    *(undefined4 *)(param_1 + 0x224) = 9;
  }
  else {
    cVar4 = fn_822BD338((ulonglong)*(uint *)(*(int *)(iVar1 + 0x114) + 0x20) + 4,
                              param_1 + 0x134);
    if (cVar4 != '\0') {
      return;
    }
    *(undefined4 *)(param_1 + 0x210) = 0;
    uVar5 = 8;
    if (*(int *)(param_1 + 0xc) != 1) {
      uVar5 = 1;
    }
    *(undefined4 *)(param_1 + 0x224) = uVar5;
  }
  uVar5 = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x228) = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x22c) = uVar5;
  return;
}

