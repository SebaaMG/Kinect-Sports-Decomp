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
extern int fn_8265C940();
extern int fn_82EDFFC0();
extern int fn_82F142E8();
extern int fn_82F44B68();


int * fn_82F143B0(int *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = -1;
  param_1[2] = -1;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = -1;
  param_1[6] = -1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  fn_82EDFFC0(param_1,param_3);
  fn_82EDFFC0(param_1 + 4,param_4);
  param_1[8] = (param_1[2] - *param_1) * (param_1[3] - param_1[1]);
  param_1[10] = param_1[2] - *param_1;
  param_1[0xb] = param_1[3] - param_1[1];
  param_1[9] = (param_1[7] - param_1[5]) * (param_1[6] - param_1[4]);
  param_1[0xc] = param_1[6] - param_1[4];
  param_1[0xd] = param_1[7] - param_1[5];
  uVar1 = fn_8265C940(0x18,0x248c8000);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82F44B68(uVar1,param_2,param_4,0);
  }
  param_1[0xf] = iVar2;
  if (iVar2 == 0) {
LAB_82f14548:
    *param_2 = -3;
    fn_82F142E8(param_1);
  }
  else {
    if (*param_2 == 0) {
      uVar1 = fn_8265C940(0x18,0x248c8000);
      if ((uVar1 & 0xffffffff) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = fn_82F44B68(uVar1,param_2,param_4,0);
      }
      param_1[0x10] = iVar2;
      if (iVar2 == 0) goto LAB_82f14548;
      if (*param_2 == 0) {
        uVar1 = fn_8265C940(0x18,0x248c8000);
        if ((uVar1 & 0xffffffff) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = fn_82F44B68(uVar1,param_2,param_3,0);
        }
        param_1[0xe] = iVar2;
        if (iVar2 == 0) goto LAB_82f14548;
        if (*param_2 == 0) {
          return param_1;
        }
      }
    }
    fn_82F142E8(param_1);
  }
  return param_1;
}

