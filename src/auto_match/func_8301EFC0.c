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
extern unsigned int *auStack_50;
extern int fn_82FF4D30();
extern unsigned int lbl_83264304;
extern unsigned int uStack_10;


void fn_8301EFC0(undefined8 param_1,uint param_2,undefined4 param_3,char param_4,int param_5,
                  int param_6)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_50 [12];
  int aiStack_44 [6];
  int aiStack_2c [7];
  undefined4 uStack_10;
  char cStack_c;
  
  uVar1 = 0;
  if (param_2 == 0) {
LAB_8301f000:
    piVar2 = aiStack_44 + uVar1;
    for (iVar3 = 6 - uVar1; iVar3 != 0; iVar3 = iVar3 + -1) {
      piVar2 = piVar2 + 1;
      *piVar2 = 0;
    }
  }
  else {
    piVar2 = aiStack_44;
    uVar1 = param_2;
    do {
      piVar2 = piVar2 + 1;
      *piVar2 = param_6;
      param_6 = param_6 + 0x40;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    uVar1 = param_2;
    if (param_2 < 6) goto LAB_8301f000;
  }
  uVar1 = 0;
  if ((param_4 != '\0') && (param_2 != 0)) {
    piVar2 = aiStack_2c;
    uVar1 = param_2;
    do {
      piVar2 = piVar2 + 1;
      *piVar2 = param_5;
      param_5 = param_5 + 0x40;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    uVar1 = param_2;
    if (5 < param_2) goto LAB_8301f090;
  }
  piVar2 = aiStack_2c + uVar1;
  for (iVar3 = 6 - uVar1; iVar3 != 0; iVar3 = iVar3 + -1) {
    piVar2 = piVar2 + 1;
    *piVar2 = 0;
  }
LAB_8301f090:
  uStack_10 = param_3;
  cStack_c = param_4;
  fn_82FF4D30(lbl_83264304,param_1,auStack_50);
  return;
}

