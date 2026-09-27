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
extern int fn_82397F88();
extern unsigned int lbl_831CD254;
extern unsigned int lbl_831CD258;
extern float lbl_831CD25C;
extern unsigned int lbl_831CD260;


void fn_822E54B0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x1a8) + 4);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1a8) + 8);
    *(undefined4 *)(param_1 + 0x100) = lbl_831CD254;
    uVar3 = lbl_831CD258;
    *(float *)(param_1 + 0x108) = fVar1 * *(float *)(param_1 + 0x2d0);
    *(undefined4 *)(param_1 + 0x10c) = uVar2;
  }
  else {
    iVar4 = fn_82397F88(*(undefined4 *)(param_1 + 0x1bc));
    uVar2 = lbl_831CD260;
    if (iVar4 == 0) {
      return;
    }
    fVar1 = *(float *)(param_1 + 0x2d0) * lbl_831CD25C;
    *(undefined4 *)(param_1 + 0x100) = lbl_831CD254;
    uVar3 = lbl_831CD258;
    *(float *)(param_1 + 0x108) = fVar1;
    *(undefined4 *)(param_1 + 0x10c) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x104) = uVar3;
  return;
}

