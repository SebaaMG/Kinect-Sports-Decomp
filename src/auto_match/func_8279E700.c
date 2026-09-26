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
extern int fn_8267BF50();
extern int fn_8279B270();
extern int fn_8279B4E0();


int * fn_8279E700(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  fn_8279B4E0(param_1 + 4);
  iVar1 = *(int *)(*(int *)(param_2 + 8) + 8);
  if (iVar1 == 0) {
    iVar1 = fn_8267BF50();
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x1c);
  }
  param_1[0x30] = iVar1;
  param_1[0x2f] = 0;
  param_1[0x31] = (int)(param_1 + 0x2f);
  param_1[0x34] = 0;
  fn_8279B270(param_1 + 0x31);
  fn_8279B4E0(param_1 + 0x35);
  fn_8279B4E0(param_1 + 0x60);
  fn_8279B4E0(param_1 + 0x8b);
  param_1[0x141] = 0;
  param_1[0x24c] = 0;
  param_1[0x24e] = 0;
  param_1[0x24d] = 0;
  *(undefined1 *)(param_1 + 0x253) = 0;
  *(undefined1 *)((int)param_1 + 0x94d) = 0;
  param_1[0x24f] = param_3;
  return param_1;
}

