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
extern unsigned int uStack_c;


void fn_82428FD8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_c;
  
  iVar1 = *(int *)(param_2 + 0x30);
  if ((*(int *)(param_2 + 0x184) != 0) && (*(int *)(param_2 + 0x198) <= iVar1)) {
    iVar1 = *(int *)(param_2 + 0x198);
  }
  *(int *)(param_2 + 0x198) = iVar1;
  iVar1 = *(int *)(param_2 + 0x30);
  if (*(int *)(param_2 + 0x30) < *(int *)(param_2 + 0x184)) {
    iVar1 = *(int *)(param_2 + 0x184);
  }
  *(int *)(param_2 + 0x184) = iVar1;
  *(int *)(param_2 + 0x18c) = *(int *)(param_2 + 0x18c) + *(int *)(param_2 + 0x30);
  iVar1 = *(int *)(param_2 + 0x188);
  if (*(int *)(param_2 + 0x188) <= *(int *)(param_2 + 0xe4)) {
    iVar1 = *(int *)(param_2 + 0xe4);
  }
  *(int *)(param_2 + 0x188) = iVar1;
  *(int *)(param_2 + 400) = *(int *)(param_2 + 400) + 1;
  uStack_c = (int)(longlong)*(float *)(*(int *)(param_1 + 4) + 0x2e4);
  *(int *)(param_2 + 0x194) = uStack_c + *(int *)(param_2 + 0x194);
  return;
}

