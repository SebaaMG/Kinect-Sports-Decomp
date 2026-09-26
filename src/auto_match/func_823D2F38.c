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
extern int fn_823D32F8();
extern int fn_8251F720();
extern int fn_8251FA58();
extern unsigned int lbl_821CC160;


int * fn_823D2F38(int *param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5,
                   undefined8 param_6)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = (int)param_4;
  param_1[2] = param_5;
  iVar1 = *(int *)(param_2 + 0x4c0);
  param_1[0x3a] = lbl_821CC160;
  param_1[0xd] = 0;
  param_1[0x3e] = 0;
  param_1[3] = iVar1;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  iVar1 = fn_8251F720(param_3,0);
  fn_823D32F8(param_1,iVar1,param_4,param_6);
  param_1[4] = *(int *)(iVar1 + 0x38);
  param_1[5] = *(int *)(iVar1 + 0x3c);
  param_1[6] = *(int *)(iVar1 + 0x40);
  param_1[7] = *(int *)(iVar1 + 0x44);
  param_1[8] = *(int *)(iVar1 + 0x48);
  param_1[9] = *(int *)(iVar1 + 0x4c);
  param_1[0xb] = *(int *)(iVar1 + 0x28);
  param_1[0x3b] = *(int *)(iVar1 + 0x2c);
  param_1[0x3c] = *(int *)(iVar1 + 0x30);
  param_1[0x3d] = *(int *)(iVar1 + 0x34);
  fn_8251FA58(iVar1);
  return param_1;
}

