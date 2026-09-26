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
extern unsigned int lbl_8200571C;


undefined8 fn_827A88C0(double param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  uint uVar4;
  
  if ((uint)param_2[5] < (uint)param_2[1]) {
    piVar2 = *(int **)(param_2[5] * 4 + *param_2);
    iVar1 = *piVar2;
    if (iVar1 < 0) {
      uVar4 = (uint)*(ushort *)(piVar2 + 5);
    }
    else {
      uVar4 = piVar2[5];
    }
    if (uVar4 != 0) {
      if (iVar1 < 0) {
        uVar4 = (uint)*(ushort *)((int)piVar2 + 0x16);
      }
      else {
        uVar4 = piVar2[6];
      }
      if (uVar4 != 0) {
        if (iVar1 < 0) {
          uVar4 = (uint)*(ushort *)((int)piVar2 + 0x16);
        }
        else {
          uVar4 = piVar2[6];
        }
        fVar3 = ((float)param_2[9] - (float)param_2[7]) + lbl_8200571C;
        if (((float)((double)(longlong)piVar2[4] + param_1) <= fVar3) &&
           (fVar3 < (float)((double)(longlong)piVar2[4] + param_1) + (float)(longlong)(int)uVar4)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

