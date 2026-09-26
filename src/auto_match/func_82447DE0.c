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
extern unsigned int lbl_821CC160;


void fn_82447DE0(int *param_1,int param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = lbl_821CC160;
  param_4 = param_4 & 0xff;
  piVar1 = *(int **)(param_2 + 0x40);
  if (piVar1[(param_4 + 0xc) * 0xc] == 0) {
    iVar2 = *(int *)(*piVar1 + 0x174);
    param_1[2] = lbl_821CC160;
    param_1[1] = *(int *)(*(int *)(iVar2 + 4) + 0x10);
  }
  else {
    iVar3 = piVar1[param_4 * 0xc + 0x98];
    iVar2 = piVar1[param_4 * 0xc + 0x9a];
    param_1[1] = piVar1[param_4 * 0xc + 0x99];
    param_1[2] = iVar2;
  }
  *param_1 = iVar3;
  return;
}

