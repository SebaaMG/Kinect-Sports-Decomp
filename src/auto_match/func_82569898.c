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
extern unsigned int *auStack_38;
extern int fn_8252D970();
extern int fn_82A1EFC0();
extern unsigned int lbl_821CC160;


void fn_82569898(double param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  undefined1 auStack_38 [56];
  
  fVar1 = lbl_821CC160;
  uVar2 = 0;
  dVar4 = (double)lbl_821CC160;
  *(float *)(param_2 + 0x54) = lbl_821CC160;
  *(float *)(param_2 + 0x50) = fVar1;
  if (*(int *)(param_2 + 0xd4) != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(*(int *)(param_2 + 0xd8) + iVar3 + 0x10) != 0) {
        fn_8252D970(param_1);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x30;
    } while (uVar2 < *(uint *)(param_2 + 0xd4));
  }
  *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_2 + 0x88);
  *(float *)(param_2 + 0x88) = (float)((double)*(float *)(param_2 + 0x94) * param_1);
  *(float *)(param_2 + 0x98) = (float)dVar4;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(auStack_38,0,4);
}

