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
extern int fn_829CFAB0();
extern int fn_829CFBC0();
extern unsigned int lbl_83215000;
extern unsigned int lbl_83215008;
extern unsigned int lbl_83215064;
extern unsigned int lbl_83215A40;
extern unsigned int lbl_83217128;
extern unsigned int lbl_8321712C;
extern unsigned int lbl_83217130;
extern unsigned int lbl_83217134;
extern unsigned int lbl_8321713C;
extern unsigned int lbl_83217148;
extern unsigned int lbl_83217170;


bool fn_829CB948(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  longlong lVar4;
  
  param_1[6] = 0;
  piVar3 = param_2 + -1;
  lVar4 = 10;
  do {
    piVar3 = piVar3 + 1;
    *piVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  if (lbl_83215008 == 0) {
    iVar1 = fn_829CFBC0(0);
    param_1[4] = iVar1;
    if (iVar1 == 0) goto LAB_829cba20;
    *param_2 = lbl_83217128 + 0x40;
    param_2[5] = *(int *)(lbl_83217128 + 0x3c);
    param_1[8] = *(int *)(param_1[4] + 0x68);
    uVar2 = param_1[6] | 0x80;
  }
  else {
    iVar1 = fn_829CFAB0();
    param_1[5] = iVar1;
    if (iVar1 == 0) {
      return false;
    }
    *param_2 = lbl_83217128 + 0x40;
    param_2[5] = *(int *)(lbl_83217128 + 0x3c);
    param_1[8] = *(int *)(param_1[5] + 0x68);
    uVar2 = param_1[6] | 0x20;
  }
  param_1[6] = uVar2;
LAB_829cba20:
  iVar1 = fn_829CFBC0(1);
  param_1[3] = iVar1;
  if (iVar1 != 0) {
    param_2[3] = lbl_8321712C + 0x40;
    param_2[8] = *(int *)(lbl_8321712C + 0x3c);
    param_1[0xb] = *(int *)(param_1[3] + 0x68);
    param_1[6] = param_1[6] | 8;
    if (param_1[5] == 0) {
      *param_2 = lbl_8321712C + 0x40;
      param_2[5] = lbl_8321712C + 0x3c;
      param_1[8] = *(int *)(lbl_8321712C + 0x74);
      param_1[6] = param_1[6] | 0x80;
    }
  }
  if (lbl_83215064 != 0) {
    iVar1 = fn_829CFBC0(3);
    *param_1 = iVar1;
    iVar1 = fn_829CFBC0(2);
    param_1[1] = iVar1;
    iVar1 = fn_829CFBC0(5);
    param_1[2] = iVar1;
    param_1[7] = 0;
    if (param_1[1] != 0) {
      param_2[1] = lbl_83217130 + 0x40;
      param_2[6] = *(int *)(lbl_83217130 + 0x3c);
      param_1[9] = *(int *)(param_1[1] + 0x68);
      param_1[6] = param_1[6] | 2;
    }
    if (param_1[2] != 0) {
      param_2[2] = lbl_8321713C + 0x40;
      param_2[7] = *(int *)(lbl_8321713C + 0x3c);
      param_1[10] = *(int *)(param_1[2] + 0x68);
      param_1[6] = param_1[6] | 0x100;
    }
    iVar1 = 0;
    if (*param_1 != 0) {
      param_2[4] = lbl_83217134 + 0x40;
      param_2[9] = lbl_83217134 + 0x3c;
      if (param_2[1] == 0) {
        param_2[1] = lbl_83217134 + 0x40;
        param_2[6] = *(int *)(lbl_83217134 + 0x3c);
        param_1[9] = *(int *)(lbl_83217134 + 0x74);
      }
      param_1[6] = param_1[6] | 6;
      iVar1 = *param_1;
      param_1[0xc] = *(int *)(iVar1 + 0x68);
    }
    if ((((param_1[1] == 0) && (iVar1 == 0)) &&
        ((lbl_83215A40 != 0 || ((lbl_83215000 & 0x80000000) == 0)))) && (lbl_83217148 == 1)) {
      param_2[1] = lbl_83217170 + 0x30;
      param_2[6] = *(int *)(lbl_83217170 + 100);
      param_1[7] = 1;
      param_1[9] = 0;
      param_1[6] = param_1[6] | 2;
    }
  }
  return param_1[6] != 0;
}

