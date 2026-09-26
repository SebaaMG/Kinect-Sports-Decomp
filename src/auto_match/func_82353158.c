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


longlong fn_82353158(double param_1,int param_2,undefined8 param_3,int *param_4,
                      undefined4 *param_5)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  
  iVar2 = *(int *)(param_2 + 0x2c4);
  uVar3 = 0;
  dVar4 = (double)lbl_821CC160;
  fVar1 = *(float *)(iVar2 + 0x60);
  if (*(uint *)(iVar2 + 0x68) != 0) {
    do {
      dVar4 = (double)(float)((double)fVar1 + dVar4);
      if (param_1 < dVar4) {
                    /* WARNING: Subroutine does not return */
        fn_82539560();
      }
      uVar3 = uVar3 + 1;
      fVar1 = (float)((double)*(float *)(iVar2 + 100) * (double)fVar1);
    } while (uVar3 < *(uint *)(iVar2 + 0x68));
  }
  iVar2 = *(int *)(*(int *)(param_2 + 0x2c4) + 0x6c);
  uVar3 = *(uint *)(*(int *)(param_2 + 0x2c4) + 0x68);
  *param_5 = lbl_821CA460;
  *param_4 = iVar2 + -1;
  return (ulonglong)uVar3 - 1;
}

