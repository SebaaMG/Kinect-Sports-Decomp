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
extern int fn_82539560();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831CD2A4;
extern unsigned int lbl_831CD2A8;
extern unsigned int lbl_83265A28;


double fn_822F1AB8(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x178);
  fVar1 = lbl_821CC160;
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x1bc);
      iVar3 = *(int *)(iVar2 + 0x2d8);
      fVar1 = *(float *)(iVar3 + 0x174);
                    /* WARNING: Subroutine does not return */
      fn_82539560((double)(*(float *)(*(int *)(iVar2 + 0x2e0) + 0x94) + *(float *)(iVar3 + 0x170)),
                   (double)(fVar1 * lbl_831CD2A4),(double)(fVar1 * lbl_831CD2A8),
                   (double)lbl_821CC160,(double)lbl_821CA460);
    }
    iVar2 = *(int *)(param_1 + 0x14);
    fVar1 = *(float *)(*(int *)(param_1 + 0x20) + 0x10);
    fVar4 = (*(float *)(iVar2 + 0x54) - *(float *)(iVar2 + 0x4c)) * fVar1 + *(float *)(iVar2 + 0x4c)
    ;
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar1 = (((*(float *)(iVar2 + 0x58) - *(float *)(iVar2 + 0x50)) * fVar1 +
             *(float *)(iVar2 + 0x50)) - fVar4) *
            ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + fVar4;
  }
  return (double)fVar1;
}

