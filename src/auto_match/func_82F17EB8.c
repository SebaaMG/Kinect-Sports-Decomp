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
extern int fn_82EDFFC0();
extern int fn_82F17D48();
extern int fn_82F17DD8();


void fn_82F17EB8(int *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  piVar4 = param_1 + 0x16;
  piVar3 = param_1 + 0x1c;
  fn_82EDFFC0(param_1,param_3);
  fn_82EDFFC0(param_1 + 4,param_4);
  iVar1 = param_1[3] - param_1[1];
  iVar2 = param_1[2] - *param_1;
  param_1[8] = iVar2 * iVar1;
  param_1[10] = iVar2;
  param_1[0xb] = iVar1;
  param_1[9] = (param_1[6] - param_1[4]) * (param_1[7] - param_1[5]);
  param_1[0xc] = param_1[6] - param_1[4];
  param_1[0xd] = param_1[7] - param_1[5];
  if (param_6 == 0) {
    param_1[0xe] = iVar2 + -0x40;
    param_1[0xf] = iVar1 + -0x40;
  }
  else {
    param_1[0xe] = param_6;
    param_1[0xf] = param_7;
  }
  iVar2 = (int)param_5 >> 1;
  iVar1 = fn_82F17DD8(piVar4,param_1 + 0x17,param_1 + 0x18,param_4,iVar2);
  *param_2 = iVar1;
  if (iVar1 == 0) {
    if ((*piVar4 != 0) && (param_1[0x17] != 0)) {
      iVar2 = fn_82F17DD8(piVar3,param_1 + 0x1d,param_1 + 0x1e,param_4,iVar2);
      *param_2 = iVar2;
      if (iVar2 != 0) goto LAB_82f18090;
      if ((*piVar3 != 0) && (param_1[0x1d] != 0)) {
        iVar2 = fn_82F17DD8(param_1 + 0x10,param_1 + 0x11,param_1 + 0x12,param_3,param_5);
        *param_2 = iVar2;
        if (iVar2 != 0) goto LAB_82f18090;
        iVar2 = param_1[0x10];
        if ((iVar2 != 0) && (param_1[0x11] != 0)) {
          param_1[0x22] = iVar2;
          param_1[0x23] = *piVar4;
          param_1[0x24] = *piVar3;
          return;
        }
      }
    }
    *param_2 = -3;
  }
LAB_82f18090:
  fn_82F17D48(param_1);
  return;
}

