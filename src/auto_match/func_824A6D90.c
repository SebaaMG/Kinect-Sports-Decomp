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
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


double fn_824A6D90(int param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (*(int *)(iVar1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    if ((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc)) / 0xa0 <= iVar2) {
      iVar2 = iVar2 - (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0xa0;
    }
    iVar2 = iVar2 * 0xa0 + *(int *)(iVar1 + 0xc);
  }
  if (iVar2 != 0) {
    dVar5 = (double)lbl_821CC160;
    if ((double)*(float *)(iVar2 + 0x90) == dVar5) {
      return dVar5;
    }
    dVar7 = (double)(*(float *)(iVar2 + 0x30) - *(float *)(iVar2 + 0x70));
    dVar8 = (double)(*(float *)(iVar2 + 0x30) - *(float *)(iVar2 + 0x10));
    dVar4 = (double)(float)((double)*(float *)(iVar1 + 0x1c) * (double)*(float *)(iVar2 + 0x90));
    dVar6 = (double)lbl_821CA460;
    dVar3 = (double)(float)(dVar8 - dVar7);
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((dVar3 < dVar5) << 2) | (uint)(NAN(dVar3) || NAN(dVar5)) << 2)) <
        0.0) {
      dVar8 = dVar7;
    }
    if (dVar4 != dVar5) {
      dVar8 = (double)(float)((double)((float)(dVar8 - dVar5) / (float)(dVar4 - dVar5)) *
                              (double)(float)(dVar6 - dVar5) + dVar5);
      if (dVar6 <= dVar5) {
        if (dVar6 <= dVar8) {
          if (dVar5 < dVar8) {
            return dVar5;
          }
          return dVar8;
        }
      }
      else if (dVar8 <= dVar6) {
        if (dVar8 < dVar5) {
          return dVar5;
        }
        return dVar8;
      }
    }
    return dVar6;
  }
  return (double)lbl_821CC160;
}

