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
extern int fn_828EA130();


void fn_828ABAC8(int param_1,undefined8 param_2,int *param_3)

{
  int iVar2;
  int iVar3;
  longlong lVar1;
  int iVar4;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar2 = *(int *)(param_1 + 0x14);
    iVar3 = fn_828E9DA8(param_2);
    iVar4 = fn_828E9D90(param_2);
    if (iVar3 - iVar4 < iVar2) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_828E9FF8(param_2,iVar2);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = *(int *)(param_1 + 0xc) + iVar2;
    }
  }
  else {
    iVar2 = fn_828E9DA8(param_2);
    iVar3 = fn_828E9D90(param_2);
    if (iVar2 - iVar3 < 5) {
      lVar1 = 0;
    }
    else {
      lVar1 = fn_828E9FF8(param_2,5);
    }
    iVar2 = fn_828E9DA8(param_2);
    iVar3 = fn_828E9D90(param_2);
    if (iVar2 - iVar3 < (int)(lVar1 + 1)) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_828EA130(param_2,lVar1 + 1);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar2;
    }
  }
  return;
}

