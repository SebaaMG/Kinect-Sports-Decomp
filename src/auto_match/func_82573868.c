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
extern int fn_8251E530();
extern int fn_82575DF0();
extern unsigned int lbl_82192734;


void fn_82573868(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  double dVar5;
  
  iVar3 = 0;
  if (0 < param_2[9]) {
    piVar4 = param_2 + 10;
    do {
      if (*piVar4 != 0) {
        fn_82575DF0(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x93c));
        *piVar4 = 0;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (iVar3 < param_2[9]);
  }
  iVar3 = 0;
  if (0 < *param_2) {
    dVar5 = (double)lbl_82192734;
    piVar4 = param_2;
    do {
      piVar4 = piVar4 + 1;
      for (uVar2 = *(uint *)(param_1 + 0x230); uVar2 < *(uint *)(param_1 + 0x234);
          uVar2 = uVar2 + 0x60) {
        if (*(int *)(uVar2 + 0x3c) == *piVar4) {
          uVar2 = *(uint *)(uVar2 + 0x34);
          if (uVar2 != 0xffffffff) {
            iVar1 = *(int *)(*(int *)(*(int *)((((int)uVar2 >> 8 & 0xffU) + 0x1ff) * 4 +
                                              *(int *)(param_1 + 0x4c)) + 4) + (uVar2 & 0xff) * 4);
            *(float *)(iVar1 + 0xc) = (float)dVar5;
            *(uint *)(iVar1 + 0x20) = *(uint *)(iVar1 + 0x20) | 8;
          }
          fn_8251E530((uint *)(param_1 + 0x230));
          break;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *param_2);
  }
  *param_2 = 0;
  param_2[9] = 0;
  return;
}

