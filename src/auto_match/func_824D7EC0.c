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
extern int fn_824CD030();
extern unsigned int lbl_821955D4;
extern unsigned int lbl_821CC160;


void fn_824D7EC0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  dVar5 = (double)lbl_821CC160;
  *(float *)(param_1 + 0x14) = lbl_821CC160;
  iVar2 = fn_824CD030(param_2);
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_2 + 0xf4);
    iVar3 = iVar2 + 0x20;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    lVar4 = 2;
    do {
      puVar1 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
      *puVar1 = in_register_000104d0;
      puVar1[1] = in_register_000104d4;
      puVar1[2] = in_register_000104d8;
      puVar1[3] = in_vr77;
      iVar3 = iVar3 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *(float *)(iVar2 + 100) = (float)dVar5;
    *(undefined4 *)(iVar2 + 0x54) = 1;
    *(undefined4 *)(iVar2 + 0x58) = 1;
    *(undefined4 *)(iVar2 + 0x5c) = lbl_821955D4;
  }
  return;
}

