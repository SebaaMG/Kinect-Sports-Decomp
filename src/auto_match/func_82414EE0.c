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
extern unsigned int lbl_821CA460;


void fn_82414EE0(double param_1,int *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2[0x31] != 0) {
    param_2[0x45] = (int)(float)param_1;
    param_2[0x44] = param_2[param_4 + 0x3d];
    param_2[0x46] = param_2[0x2e];
    param_2[0x47] = param_2[0x2f];
    return;
  }
  iVar2 = *param_2;
  iVar1 = param_2[0x2e];
  if (*(int *)(iVar2 + 4) == 0) {
    return;
  }
  *(int *)(iVar2 + 0x1dc) = param_2[0x2f];
  *(float *)(iVar2 + 0x1d0) = (float)param_1;
  *(int *)(iVar2 + 0x1d8) = iVar1;
  *(int *)(iVar2 + 0x1cc) = param_4;
  *(undefined4 *)(iVar2 + 0x1d4) = 1;
  *(undefined4 *)(iVar2 + 0x1e0) = lbl_821CA460;
  return;
}

