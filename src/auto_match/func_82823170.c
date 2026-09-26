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
extern unsigned int lbl_8320A778;


void fn_82823170(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_r9;
  int in_r10;
  int *in_r11;
  int *piVar4;
  byte in_cr6;
  
  while (piVar4 = in_r11, !(bool)(in_cr6 >> 1 & 1)) {
    in_r11 = (int *)*piVar4;
    in_cr6 = (in_r11 == (int *)in_r10) << 1;
    in_r9 = piVar4;
  }
  *param_2 = (int)in_r9;
  iVar2 = in_r9[1];
  *param_2 = iVar2;
  if (iVar2 == in_r10) {
    *param_2 = 0;
  }
  iVar2 = lbl_8320A778;
  iVar1 = *param_2;
  if (*param_2 == 0) {
    *param_2 = (int)in_r9;
    return;
  }
  do {
    iVar3 = iVar1;
    iVar1 = *(int *)(iVar3 + 4);
    *param_2 = iVar1;
    if (iVar1 == iVar2) {
      *param_2 = 0;
    }
    iVar1 = *param_2;
  } while (*param_2 != 0);
  *param_2 = iVar3;
  return;
}

