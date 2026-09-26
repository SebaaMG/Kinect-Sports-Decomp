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
extern int fn_82BD7AE8();


void fn_82BD8860(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 2;
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -2;
  iVar2 = fn_82BD7AE8(*(undefined4 *)(param_1 + 0x19c),2,iVar1);
  if (iVar2 < 0) {
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -2;
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 2;
  }
  else {
    param_2[1] = 0;
    if (*(int *)(param_1 + 0x194) == 0) {
      *(int **)(param_1 + 400) = param_2;
    }
    else {
      *(int **)(*(int *)(param_1 + 0x194) + 4) = param_2;
    }
    *(int **)(param_1 + 0x194) = param_2;
  }
  return;
}

