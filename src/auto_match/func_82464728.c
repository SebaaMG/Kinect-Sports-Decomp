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
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82464728(double param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = param_2[1];
  if (iVar3 != 8) {
    if (iVar3 == 9) {
                    /* WARNING: Could not recover jumptable at 0x82464784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 4))(param_2,10);
      return;
    }
    if (iVar3 != 10) {
      if (iVar3 == 0xb) goto LAB_82464788;
      if (iVar3 != 0xc) {
        return;
      }
    }
    if (param_2[4] == 0) {
      return;
    }
    *(undefined1 *)(param_2[4] + 100) = 1;
    param_2[4] = 0;
    return;
  }
LAB_82464788:
  fVar1 = (float)param_2[5];
  iVar3 = param_2[4];
  fVar2 = (float)param_2[6];
  param_2[5] = (int)(float)((double)fVar1 - param_1);
  *(undefined4 *)(iVar3 + 0x5c) = lbl_821CC160;
  fVar1 = lbl_821CA460 - (float)((double)fVar1 - param_1) / fVar2;
  *(float *)(iVar3 + 0x60) = fVar1;
  *(float *)(iVar3 + 0x50) = fVar1;
  *(undefined1 *)(iVar3 + 0x66) = 1;
  return;
}

