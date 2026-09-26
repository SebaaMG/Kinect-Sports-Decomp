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
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;


void fn_82A67B88(int param_1,int param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  
  fVar4 = lbl_82002AE0;
  fVar3 = lbl_8200133C;
  uVar6 = 0;
  if (3 < (int)param_3) {
    pfVar7 = (float *)(param_2 + 0xc);
    pfVar8 = (float *)(param_1 + 4);
    do {
      fVar1 = pfVar7[-3];
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar4 < fVar1)) {
        fVar2 = fVar4;
      }
      pfVar8[-1] = fVar2;
      fVar1 = *(float *)((param_2 - param_1) + (int)pfVar8);
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar4 < fVar1)) {
        fVar2 = fVar4;
      }
      *pfVar8 = fVar2;
      fVar1 = pfVar7[-1];
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar4 < fVar1)) {
        fVar2 = fVar4;
      }
      pfVar8[1] = fVar2;
      fVar1 = *pfVar7;
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar4 < fVar1)) {
        fVar2 = fVar4;
      }
      uVar6 = uVar6 + 4;
      pfVar8[2] = fVar2;
      pfVar8 = pfVar8 + 4;
      pfVar7 = pfVar7 + 4;
    } while (uVar6 < param_3 - 3);
  }
  if (uVar6 < param_3) {
    iVar5 = param_3 - uVar6;
    pfVar7 = (float *)(uVar6 * 4 + param_1);
    do {
      fVar1 = *(float *)((int)pfVar7 + (param_2 - param_1));
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar4 < fVar1)) {
        fVar2 = fVar4;
      }
      *pfVar7 = fVar2;
      pfVar7 = pfVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return;
  }
  return;
}

