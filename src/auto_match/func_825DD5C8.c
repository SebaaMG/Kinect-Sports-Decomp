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
#define NAN(x) ((x) != (x))
extern int fn_82539560();
extern int fn_82560708();
extern int fn_82A1DD38();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_825DD5C8(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar3 = 0;
    do {
      if (*(int *)(iVar3 + *(int *)(param_1 + 0x10)) == param_3) {
        iVar2 = iVar2 * 0x10 + *(int *)(param_1 + 0x10);
        goto LAB_825dd618;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  iVar2 = 0;
LAB_825dd618:
  fn_82A1DD38(param_4,iVar2,0x10);
  iVar2 = fn_82560708();
  if (iVar2 != 0) {
    *(float *)(param_4 + 4) = *(float *)(*(int *)(param_1 + 8) + 0x10) * *(float *)(param_4 + 4);
  }
  iVar2 = *(int *)(param_1 + 8);
  fVar1 = (float)((double)lbl_821CA460 - (double)*(float *)(param_2 + 0x7a0));
  dVar4 = (double)lbl_821CA460;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    dVar4 = (double)*(float *)(param_2 + 0x7a0);
  }
                    /* WARNING: Subroutine does not return */
  fn_82539560(dVar4,(double)*(float *)(iVar2 + 0x14),(double)*(float *)(iVar2 + 0x18),
               (double)*(float *)(iVar2 + 0x1c),(double)*(float *)(iVar2 + 0x20));
}

