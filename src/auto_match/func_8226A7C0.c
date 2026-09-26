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
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821A7E24;
extern unsigned int lbl_821A7E38;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_8226A7C0(double param_1,double param_2,double param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int in_r9;
  undefined4 *puVar6;
  longlong lVar7;
  
  param_4[6] = 0xffffffff;
  *param_4 = &lbl_821A7E24;
  uVar1 = lbl_821CC160;
  if (in_r9 == 0) {
    *(undefined1 *)(param_4 + 1) = 0;
    uVar3 = lbl_821CA460;
    uVar2 = lbl_82193E50;
    param_4[2] = uVar1;
    param_4[3] = uVar1;
    param_4[4] = uVar3;
    param_4[5] = uVar2;
  }
  else {
    puVar6 = (undefined4 *)(in_r9 + -4);
    lVar7 = 5;
    puVar5 = param_4;
    do {
      puVar6 = puVar6 + 1;
      puVar5 = puVar5 + 1;
      *puVar5 = *puVar6;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  uVar1 = *param_5;
  uVar2 = param_5[1];
  param_4[0xb] = (float)param_1;
  uVar3 = *param_6;
  uVar4 = param_6[1];
  param_4[0xc] = (float)param_2;
  param_4[0xd] = (float)param_3;
  *param_4 = &lbl_821A7E38;
  param_4[7] = uVar1;
  param_4[8] = uVar2;
  param_4[9] = uVar3;
  param_4[10] = uVar4;
  param_4[0xe] = uVar1;
  param_4[0xf] = uVar2;
  param_4[0x10] =
       -((float)param_4[0xf] * (float)param_4[10] + (float)param_4[0xe] * (float)param_4[9]);
  return;
}

