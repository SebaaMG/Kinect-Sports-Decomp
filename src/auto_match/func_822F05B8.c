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
extern int fn_822F01F8();
extern int fn_82539560();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831CD294;
extern unsigned int lbl_831CD298;


undefined8 fn_822F05B8(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) {
    if (*(int *)(*(int *)(param_1 + 0x10) + 0x178) == 2) {
      iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x1bc);
      iVar3 = *(int *)(iVar2 + 0x2d8);
      fVar1 = *(float *)(iVar3 + 0x174);
                    /* WARNING: Subroutine does not return */
      fn_82539560((double)(*(float *)(*(int *)(iVar2 + 0x2e0) + 0x94) + *(float *)(iVar3 + 0x170)),
                   (double)(fVar1 * lbl_831CD294),(double)(fVar1 * lbl_831CD298),
                   (double)lbl_821CC160,(double)lbl_821CA460);
    }
  }
  else {
    if (*(int *)(param_1 + 0x28) == 0) {
      if ((*(int *)(*(int *)(param_1 + 0x24) + 0x114) != 0) ||
         (uVar4 = 0, *(int *)(*(int *)(param_1 + 0x24) + 0x124) != 0)) {
        uVar4 = 1;
      }
      *(undefined4 *)(param_1 + 0x28) = uVar4;
    }
    uVar5 = fn_822F01F8();
  }
  return uVar5;
}

