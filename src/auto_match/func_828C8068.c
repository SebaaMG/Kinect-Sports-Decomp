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
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();


void fn_828C8068(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = fn_828E9DA8(param_2);
  iVar2 = fn_828E9D90(param_2);
  if (iVar1 - iVar2 < 2) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_828E9FF8(param_2,2);
  }
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  iVar1 = fn_828E9DA8(param_2);
  iVar2 = fn_828E9D90(param_2);
  if (iVar1 - iVar2 < 6) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_828E9FF8(param_2,6);
  }
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  iVar1 = fn_828E9DA8(param_2);
  iVar2 = fn_828E9D90(param_2);
  if (iVar1 - iVar2 < 0x10) {
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  else {
    uVar3 = fn_828E9FF8(param_2,0x10);
    *(undefined4 *)(param_1 + 0x88) = uVar3;
  }
  return;
}

