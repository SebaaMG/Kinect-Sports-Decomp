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
extern unsigned int *auStack_30;
extern int fn_8288C2E0();
extern int fn_828B27A8();
extern int fn_828D5330();
extern unsigned int lbl_82024E20;
extern unsigned int lbl_82024E40;


int * fn_828B4A58(int *param_1,int param_2,int *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_30 [4];
  int *apiStack_2c [11];
  
  *param_1 = (int)&lbl_82024E20;
  fn_828D5330(param_1 + 2,auStack_30);
  fn_8288C2E0(param_1 + 8,auStack_30);
  param_1[0xb] = param_2;
  uVar1 = (**(code **)(*param_3 + 0x48))(param_3);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = (int)&lbl_82024E40;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  apiStack_2c[0] = param_3;
  fn_828B27A8(param_1 + 8,param_1[8],apiStack_2c);
  (**(code **)(*param_1 + 0x18))(param_1);
  return param_1;
}

