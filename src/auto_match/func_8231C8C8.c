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
extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_8231CB88();
extern unsigned int lbl_82192734;
extern unsigned int lbl_82192F70;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;


undefined8 fn_8231C8C8(undefined8 param_1,int param_2,float *param_3,float *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  uVar4 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar6 = (uint)(((float)(uVar4 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_82192F70);
  if (param_5 != 0) {
    uVar6 = uVar6 & 0xfffffffe;
  }
  fStack_2c = param_4[1];
  fVar1 = param_3[1];
  if ((fStack_2c - lbl_82193AF0 <= fVar1) && (fVar1 <= fStack_2c + lbl_82193AF0)) {
    uVar6 = uVar6 & 4 | 3;
  }
  fVar2 = *param_4;
  fVar3 = *param_3;
  fStack_40 = -fVar2;
  fStack_38 = -fVar3;
  fVar5 = lbl_82192734 - -fStack_2c;
  fStack_34 = -fVar1 + fVar5;
  fVar1 = fVar1 + fVar5;
  fStack_3c = -fStack_2c + fVar5;
  fStack_2c = fStack_2c + fVar5;
  fStack_24 = fVar1;
  fStack_28 = fStack_40;
  fStack_30 = fStack_38;
  if (((((uVar6 == 0) || (fStack_28 = fStack_38, fStack_30 = fVar3, uVar6 == 1)) ||
       (fStack_28 = fVar3, fStack_30 = fVar2, uVar6 < 3)) ||
      ((fStack_24 = fStack_34, fStack_2c = fVar1, uVar6 == 3 ||
       (fStack_24 = fStack_3c, fStack_2c = fStack_34, uVar6 < 5)))) ||
     (fStack_28 = fStack_38, fStack_30 = fVar3, uVar6 == 5)) {
    fStack_3c = fStack_24;
    fStack_40 = fStack_28;
    fStack_34 = fStack_2c;
    fStack_38 = fStack_30;
  }
  else if (6 < uVar6) {
    fStack_3c = fStack_34;
    fStack_34 = fVar1;
  }
  fVar1 = fStack_40;
  fStack_38 = fStack_38 - fStack_40;
  uVar6 = uVar4 * 0x19660d + 0x3c6ef35f;
  lbl_83265A28 = uVar6 * 0x19660d + 0x3c6ef35f;
  fStack_40 = (float)(uVar6 & 0x7fffff | 0x3f800000);
  fVar2 = fStack_40;
  fStack_40 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
  if ((lbl_821CC160 < fStack_38 * (fVar2 - lbl_821CA460) + fVar1) &&
     ((fStack_34 - fStack_3c) * (fStack_40 - lbl_821CA460) + fStack_3c < lbl_821CC160)) {
    *(undefined4 *)(param_2 + 0x2b0) = 1;
  }
  fn_8231CB88(param_1);
  return param_1;
}

