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


double fn_824B5408(int param_1)

{
  float fVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  iVar2 = *(int *)(param_1 + 0x48);
  if (iVar2 == 1) {
    iVar2 = -0x7ce3ba7c;
  }
  else if (iVar2 == 2) {
    iVar2 = -0x7ce3ba68;
  }
  else {
    if (iVar2 != 3) {
      return (double)lbl_821CC160;
    }
    iVar2 = -0x7ce3ba54;
  }
  fVar1 = *(float *)(iVar2 + 8);
  dVar4 = (double)lbl_821CC160;
  dVar5 = (double)lbl_821CA460;
  if (*(float *)(iVar2 + 0xc) != fVar1) {
    dVar3 = (double)(float)((double)((*(float *)(param_1 + 0x4c) - fVar1) /
                                    (*(float *)(iVar2 + 0xc) - fVar1)) *
                            (double)(float)(dVar5 - dVar4) + dVar4);
    if (dVar5 <= dVar4) {
      if (dVar5 <= dVar3) {
        if (dVar4 < dVar3) {
          return dVar4;
        }
        return dVar3;
      }
    }
    else if (dVar3 <= dVar5) {
      if (dVar3 < dVar4) {
        return dVar4;
      }
      return dVar3;
    }
  }
  return dVar5;
}

