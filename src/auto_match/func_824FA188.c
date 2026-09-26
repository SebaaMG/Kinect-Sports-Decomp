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
extern float fRam831c3140;
extern float fRam831c3148;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C3120;
extern unsigned int lbl_831E4E38;


void fn_824FA188(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar5;
  undefined4 uVar6;
  longlong lVar4;
  
  if ((lbl_831C3120 == 4) || (lbl_831C3120 == 5)) {
    iVar5 = -0x7ce2bd08;
code_r0x824fa1cc:
    fVar1 = *(float *)(iVar5 + 0x10);
    fVar2 = *(float *)(iVar5 + 0x18);
  }
  else {
    fVar1 = fRam831c3140;
    fVar2 = fRam831c3148;
    if (lbl_831C3120 == 6) {
      iVar5 = -0x7ce2bc88;
      goto code_r0x824fa1cc;
    }
  }
  if (param_2 == 0) {
    param_2 = 1;
    *(undefined4 *)(param_1 + 0x2d8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x218) = lbl_831E4E38;
    goto code_r0x824fa2fc;
  }
  if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x2d8) = 0xffffffff;
    goto code_r0x824fa2fc;
  }
  if (param_2 != 3) goto code_r0x824fa2fc;
  *(undefined4 *)(param_1 + 0x2d8) = 0xffffffff;
  if (*(float *)(param_1 + 0x220) <= lbl_821CC160) {
    *(float *)(param_1 + 0x220) = -fVar1;
    lVar4 = 1;
    pfVar3 = (float *)(param_1 + 0x2c8);
    do {
      if (*(int *)(param_1 + 0x2d8) != -1) break;
      if (*pfVar3 <= *(float *)(param_1 + 0x218)) {
        *(int *)(param_1 + 0x2d8) = (int)lVar4;
      }
      lVar4 = lVar4 + -1;
      pfVar3 = pfVar3 + -4;
    } while (-1 < lVar4);
    if (*(int *)(param_1 + 0x2d8) == -1) {
      uVar6 = 1;
      goto code_r0x824fa2a4;
    }
  }
  else {
    *(float *)(param_1 + 0x220) = fVar1;
    iVar5 = 0;
    pfVar3 = (float *)(param_1 + 0x2b8);
    do {
      if (*(int *)(param_1 + 0x2d8) != -1) break;
      if (*(float *)(param_1 + 0x218) <= *pfVar3) {
        *(int *)(param_1 + 0x2d8) = iVar5;
      }
      iVar5 = iVar5 + 1;
      pfVar3 = pfVar3 + 4;
    } while (iVar5 < 2);
    if (*(int *)(param_1 + 0x2d8) == -1) {
      uVar6 = 0;
code_r0x824fa2a4:
      *(undefined4 *)(param_1 + 0x2d8) = uVar6;
    }
  }
  if (*(float *)(param_1 + 0x21c) <= *(float *)(*(int *)(param_1 + 0x2d8) * 0x10 + param_1 + 700)) {
    *(float *)(param_1 + 0x2dc) = fVar2;
  }
  else {
    *(float *)(param_1 + 0x2dc) = -fVar2;
  }
code_r0x824fa2fc:
  *(int *)(param_1 + 0x70) = param_2;
  return;
}

