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
extern int fn_822A2FE8();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831CE850;


void fn_822A2C28(double param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  
  iVar2 = *param_2;
  param_2[0xaa] = 0;
  fVar1 = lbl_821CC160;
  if (iVar2 == 1) {
    if (param_2[6] != 0) {
      fVar4 = -(float)((double)(float)param_2[6] - param_1);
      fVar5 = lbl_821CC160;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar4 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar4) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        fVar5 = (float)((double)(float)param_2[6] - param_1);
      }
      param_2[6] = (int)fVar5;
      if (fVar5 == fVar1) {
        fn_822A2FE8(param_2);
        param_2[0xaa] = 1;
        param_2[6] = lbl_831CE850;
      }
    }
  }
  else if (((1 < iVar2) && (iVar2 < 8)) && (param_2[0x87] != 0)) {
    fVar4 = -(float)((double)(float)param_2[0x87] - param_1);
    fVar5 = lbl_821CC160;
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar4 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar4) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar5 = (float)((double)(float)param_2[0x87] - param_1);
    }
    param_2[0x87] = (int)fVar5;
    if (fVar5 == fVar1) {
      iVar2 = *param_2;
      piVar7 = param_2 + iVar2 * 4 + 0x89;
      if (1 < (uint)(param_2[iVar2 * 4 + 0x8a] - *piVar7 >> 3)) {
        uVar3 = param_2[iVar2 * 4 + 0x8a] - *piVar7 >> 3;
        iVar6 = (param_2[0xa9] + 1U) -
                (int)(((ulonglong)(uint)param_2[0xa9] + 1 & 0xffffffff) / (ulonglong)uVar3) * uVar3;
        param_2[0xa9] = iVar6;
        if ((((iVar2 == 2) || (iVar2 == 3)) || ((iVar2 == 4 || ((iVar2 == 5 || (iVar2 == 6)))))) ||
           (iVar2 == 7)) {
          fVar1 = *(float *)(iVar6 * 8 + *piVar7 + 4);
        }
        param_2[0x87] = (int)fVar1;
        param_2[0xaa] = 1;
      }
    }
  }
  return;
}

