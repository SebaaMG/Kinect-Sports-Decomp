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
extern int fn_8226CDF0();
extern unsigned int lbl_82195530;
extern unsigned int lbl_82195690;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_8227A7B8(int param_1,undefined4 *param_2,undefined4 *param_3,float *param_4,float *param_5
                  ,float *param_6)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_3c = param_2[1];
  uStack_38 = *param_2;
  uStack_40 = *param_3;
  uStack_34 = param_3[1];
  fn_8226CDF0(*(undefined4 *)(param_1 + 0xf0),param_2,param_6);
  fn_8226CDF0(*(undefined4 *)(param_1 + 0xf0),param_3,param_6 + 4);
  fn_8226CDF0(*(undefined4 *)(param_1 + 0xf0),&uStack_40,param_6 + 2);
  fn_8226CDF0(*(undefined4 *)(param_1 + 0xf0),&uStack_38,param_6 + 6);
  fVar2 = lbl_82195690;
  fVar1 = lbl_82195530;
  lVar3 = 4;
  *param_4 = lbl_82195530;
  *param_5 = fVar2;
  param_4[1] = fVar1;
  param_5[1] = fVar2;
  do {
    fVar1 = *param_6;
    if (fVar1 < *param_4) {
      *param_4 = fVar1;
    }
    if (*param_5 < fVar1) {
      *param_5 = fVar1;
    }
    fVar1 = param_6[1];
    if (fVar1 < param_4[1]) {
      param_4[1] = fVar1;
    }
    if (param_5[1] < fVar1) {
      param_5[1] = fVar1;
    }
    param_6 = param_6 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

