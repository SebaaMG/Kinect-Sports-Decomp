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
extern int fn_82A1EFC0();


void fn_8241C3A0(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_2 = param_1[0x96];
  param_2[1] = param_1[0x97];
  param_2[2] = param_1[0x95];
  param_2[3] = param_1[0xa3];
  if ((param_1[0xc] == 0) || (iVar1 = 1, *(int *)(param_1[0xc] + 0x78) == 0)) {
    iVar1 = 0;
  }
  param_2[4] = iVar1;
  if (param_1[0xc] != 0) {
    iVar1 = 1;
    if (*(float *)(param_1[0xc] + 100) < *(float *)(*param_1 + 0x310)) goto LAB_8241c424;
  }
  iVar1 = 0;
LAB_8241c424:
  param_2[5] = iVar1;
  param_2[7] = param_1[0x9d];
  if ((param_1[0xc] == 0) || (iVar1 = 1, *(int *)(param_1[0xc] + 0x38) == 0)) {
    iVar1 = 0;
  }
  param_2[8] = iVar1;
  if ((param_1[0xc] == 0) || (iVar1 = 1, *(int *)(param_1[0xc] + 0x1d0) != 3)) {
    iVar1 = 0;
  }
  param_2[9] = iVar1;
  param_2[6] = param_1[0x9c];
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_2 + 10,0,0x3c);
}

