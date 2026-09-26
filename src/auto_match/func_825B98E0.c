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
extern unsigned int iStack_c;
extern unsigned int lbl_82195598;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


double fn_825B98E0(double param_1,ushort *param_2,undefined8 param_3,undefined4 *param_4,
                    undefined4 *param_5)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  int iStack_c;
  
  uVar3 = (uint)*param_2;
  if (uVar3 == 1) {
    uVar2 = **(undefined4 **)(param_2 + 4);
    *param_5 = uVar2;
    dVar4 = (double)lbl_821CC160;
    *param_4 = uVar2;
    return dVar4;
  }
  dVar4 = (double)lbl_821CA460;
  fVar1 = (float)((double)*param_2 - dVar4);
  dVar5 = (double)(fVar1 * (float)(param_1 / (double)*(float *)(param_2 + 2)));
  iStack_c = (int)(longlong)(fVar1 * (float)(param_1 / (double)*(float *)(param_2 + 2)));
  if (iStack_c == 0) {
    *param_4 = **(undefined4 **)(param_2 + 4);
    dVar4 = (double)lbl_821CC160;
    uVar2 = *(undefined4 *)(*(int *)(param_2 + 4) + 4);
  }
  else {
    if (iStack_c != uVar3 - 1) {
      dVar4 = dVar5 - lbl_82195598;
      *param_4 = *(undefined4 *)(iStack_c * 4 + *(int *)(param_2 + 4));
      *param_5 = *(undefined4 *)(iStack_c * 4 + *(int *)(param_2 + 4) + 4);
      return (double)(float)(dVar5 - (double)(longlong)dVar4);
    }
    *param_4 = *(undefined4 *)((uVar3 - 2) * 4 + *(int *)(param_2 + 4));
    uVar2 = *(undefined4 *)((uint)*param_2 * 4 + *(int *)(param_2 + 4) + -4);
  }
  *param_5 = uVar2;
  return dVar4;
}

