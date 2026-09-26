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
extern int fn_826944C8();
extern int fn_8269F440();
extern int fn_8269F500();


void fn_8269FC90(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  fn_8269F440();
  iVar2 = *(int *)(param_1 + 0x80);
  if (iVar2 == 0) {
    iVar2 = fn_8269F500(param_1);
  }
  if (iVar2 != 0) {
    iVar1 = *param_2;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    lVar3 = (ulonglong)*(uint *)(*(int *)(iVar2 + 0x10) + 8) - 1;
    *(int *)(*(int *)(iVar2 + 0x10) + 8) = (int)lVar3;
    if (lVar3 == 0) {
      fn_826944C8();
    }
    *(int *)(iVar2 + 0x10) = iVar1;
  }
  return;
}

