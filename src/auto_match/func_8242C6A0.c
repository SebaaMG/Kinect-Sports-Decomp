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
#define ZEXT48(x) ((U64)((U32)(x)))
#define NAN(x) ((x) != (x))
extern int fn_822ABA88();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_8242C6A0(int param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int *piVar4;
  int iVar5;
  double dVar6;
  double extraout_f1;
  double dVar7;
  
  piVar4 = *(int **)(param_1 + 8);
  uVar3 = ZEXT48(piVar4);
  iVar5 = 0;
  if ((piVar4[1] - *piVar4 & 0xfffffffcU) != 0) {
    lVar2 = 0;
    dVar6 = (double)lbl_821CC160;
    do {
      piVar4 = *(int **)(*(int *)uVar3 + (int)lVar2);
      iVar1 = fn_822ABA88(*(undefined4 *)(piVar4[4] * 4 + *piVar4),0);
      if (*(int *)(param_2 + 0x2c) == *(int *)(iVar1 + 0x2c)) {
        if (param_4 == 0) {
          *(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x20) = (float)extraout_f1;
        }
        else {
          iVar1 = *(int *)(piVar4[4] * 4 + *piVar4);
          dVar7 = (double)*(float *)(iVar1 + 0x20);
          if (*(float *)(&lbl_821954D8 +
                        ((uint)(byte)(((double)(float)(dVar7 - extraout_f1) < dVar6) << 2) |
                        (uint)(NAN((double)(float)(dVar7 - extraout_f1)) || NAN(dVar6)) << 2)) < 0.0
             ) {
            dVar7 = extraout_f1;
          }
          *(float *)(iVar1 + 0x20) = (float)dVar7;
        }
      }
      iVar5 = iVar5 + 1;
      lVar2 = lVar2 + 4;
    } while (iVar5 < ((int *)uVar3)[1] - *(int *)uVar3 >> 2);
  }
  return;
}

