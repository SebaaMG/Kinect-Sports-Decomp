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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82277A58();
extern int fn_82539560();
extern unsigned int lbl_82192480;
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_821CC160;


void fn_822775F8(int param_1,char param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x44) = 0;
    *(ulonglong *)(param_1 + 0x2c) = CONCAT44(lbl_821CC160,lbl_821CC160);
  }
  else {
    if (*(char *)(param_1 + 0x44) == '\0') {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x30);
    }
    else {
      fn_82277A58(param_1,param_1 + 0x24,param_3);
      *(undefined1 *)(param_1 + 0x44) = 0;
    }
    fVar5 = param_3[1] + *(float *)(param_1 + 0x30);
    fVar1 = *param_3;
    fVar2 = *(float *)(param_1 + 0x2c);
    fVar3 = *(float *)(param_1 + 0x10);
    fVar4 = *(float *)(param_1 + 0xc);
    param_3[1] = fVar5;
    *param_3 = fVar2 + fVar1;
    fVar5 = fVar5 - fVar3;
    fVar4 = (fVar2 + fVar1) - fVar4;
    dVar6 = (double)SQRT(fVar4 * fVar4 + fVar5 * fVar5);
    if (((double)lbl_82193CC0 <= dVar6) &&
       ((double)lbl_82193CC0 <=
        (double)SQRT(*(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30) + fVar2 * fVar2))) {
                    /* WARNING: Subroutine does not return */
      fn_82539560(dVar6,(double)lbl_821CC160,(double)lbl_82192480);
    }
  }
  return;
}

