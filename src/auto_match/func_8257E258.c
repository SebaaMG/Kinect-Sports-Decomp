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


undefined1 fn_8257E258(double param_1,int param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  undefined1 uVar2;
  float fVar3;
  int iVar4;
  double dVar5;
  
  if (*(char *)(param_2 + 0x66) != '\0') {
    uVar2 = *(undefined1 *)(param_2 + 100);
    iVar4 = param_4 * 0xc + param_2;
    *(undefined4 *)(iVar4 + 0x68) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(iVar4 + 0x70) = *(undefined4 *)(param_2 + 0x60);
    *(undefined4 *)((param_4 + 9) * 0xc + param_2) = *(undefined4 *)(param_2 + 0x5c);
    return uVar2;
  }
  fVar1 = (float)((double)*(float *)(param_2 + 0x54) + param_1);
  dVar5 = (double)fVar1;
  *(float *)(param_2 + 0x54) = fVar1;
  fVar1 = lbl_821CA460;
  fVar3 = lbl_821CC160;
  if (*(char *)(param_2 + 0x65) != '\0') {
    fVar1 = lbl_821CC160;
    fVar3 = lbl_821CA460;
  }
                    /* WARNING: Subroutine does not return */
  fn_82539560(dVar5,(double)lbl_821CC160,(double)*(float *)(param_2 + 0x58),(double)fVar1,
               (double)fVar3,(double)*(float *)(param_2 + 0x58) <= dVar5);
}

