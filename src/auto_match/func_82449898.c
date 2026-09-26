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
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821CC160;


void fn_82449898(undefined4 *param_1,int param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = lbl_821CC160;
  uVar1 = lbl_82193E50;
  if (*(int *)(((param_4 & 0xff) + 0xc) * 0x30 + *(int *)(param_2 + 0x40)) == 0) {
    *param_1 = lbl_821CC160;
    param_1[1] = uVar1;
  }
  else {
    iVar2 = (param_4 & 0xff) * 0x30 + *(int *)(param_2 + 0x40);
    uVar1 = *(undefined4 *)(iVar2 + 0x264);
    uVar3 = *(undefined4 *)(iVar2 + 0x268);
    *param_1 = *(undefined4 *)(iVar2 + 0x260);
    param_1[1] = uVar1;
  }
  param_1[2] = uVar3;
  return;
}

