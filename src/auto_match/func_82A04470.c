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
extern float lbl_82002C5C;
extern unsigned int lbl_82015D08;
extern unsigned int lbl_8201DFF4;
extern unsigned int lbl_82021538;
extern unsigned int lbl_820579A8;
extern unsigned int lbl_821AAD20;


double fn_82A04470(int param_1,int param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  fVar1 = *(float *)(param_1 + 0x40c8);
  dVar2 = (double)*(float *)(param_2 * 0x20 + -0x7cea36a0);
  if (fVar1 != lbl_821AAD20) {
    switch(param_2) {
    case 3:
    case 6:
    case 0x17:
    case 0x18:
      if (*(float *)(param_1 + 0x40a0) != lbl_821AAD20) {
        dVar3 = (double)((*(float *)(param_1 + 0x40a0) / fVar1) * lbl_82002C5C);
        if ((float)(dVar3 / dVar2) < lbl_820579A8) {
          return (double)((float)(dVar3 + dVar2) * lbl_82002C5C);
        }
        if ((float)(dVar3 / dVar2) < lbl_8201DFF4) {
          return dVar3;
        }
      }
      break;
    case 7:
    case 10:
    case 0x1b:
    case 0x1c:
      if (*(float *)(param_1 + 0x40a8) != lbl_821AAD20) {
        dVar3 = (double)((*(float *)(param_1 + 0x40a8) / fVar1) * lbl_82002C5C);
        fVar1 = lbl_820579A8;
        if ((param_2 != 7) && (param_2 != 10)) {
          fVar1 = lbl_8201DFF4;
        }
        if ((float)(dVar3 / dVar2) < fVar1) goto LAB_82a0460c;
      }
      break;
    case 0xc:
    case 0xd:
    case 0x19:
    case 0x1a:
      if ((*(float *)(param_1 + 0x40b0) != lbl_821AAD20) &&
         (dVar3 = (double)((*(float *)(param_1 + 0x40b0) / fVar1) * lbl_82002C5C),
         lbl_82015D08 < (float)(dVar3 / dVar2))) {
LAB_82a0460c:
        return (double)((float)(dVar3 + dVar2) * lbl_82002C5C);
      }
      break;
    case 0x15:
    case 0x16:
      if (*(float *)(param_1 + 0x40d8) != lbl_821AAD20) {
        dVar3 = (double)(*(float *)(param_1 + 0x40d8) / fVar1);
        if ((float)(dVar3 / dVar2) < lbl_820579A8) {
          return (double)((float)(dVar3 + dVar2) * lbl_82002C5C);
        }
        if ((float)(dVar3 / dVar2) < lbl_82021538) {
          return dVar3;
        }
      }
    }
  }
  return dVar2;
}

