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
extern int fn_82F68CC0();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


int * fn_82414898(int *param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  
  *param_1 = param_3;
  fn_82F68CC0(param_1 + 1,param_2,0x104);
  param_1[0x49] = param_1[0x2a];
  param_1[0x42] = param_4;
  param_1[0x48] = 1;
  iVar1 = lbl_821CA460;
  param_1[0x45] = lbl_821CC160;
  param_1[0x46] = iVar1;
  param_1[0x47] = iVar1;
  param_1[0x43] = param_1[0x32];
  param_1[0x44] = param_1[0x32];
  param_1[0x4a] = param_1[0x24];
  if ((param_1[0x31] != 0) && (*(int *)(param_3 + 4) != 0)) {
    *(int *)(param_3 + 0x1e0) = iVar1;
    *(undefined4 *)(param_3 + 0x1d4) = 0;
    *(undefined4 *)(param_3 + 0x1cc) = 0;
    *(undefined4 *)(param_3 + 0x1d0) = lbl_82192734;
  }
  return param_1;
}

