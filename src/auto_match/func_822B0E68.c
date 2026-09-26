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
extern int fn_822ABBF0();
extern unsigned int lbl_821AC7CC;


void fn_822B0E68(int param_1)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined **appuStack_10 [4];
  
  piVar2 = *(int **)(param_1 + 0xc);
  iVar1 = 0;
  uVar3 = (ulonglong)*(uint *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8);
  if (uVar3 != 0) {
    piVar2 = (int *)(*(int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x10) * 0x150 +
                     *(int *)(param_1 + 0x10) + 0x1080);
    do {
      *(undefined1 *)(piVar2 + 0xd) = 0;
      piVar2 = piVar2 + 0xc;
      *piVar2 = iVar1;
      iVar1 = iVar1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  appuStack_10[0] = &lbl_821AC7CC;
  fn_822ABBF0(*(undefined4 *)((*(int **)(param_1 + 0xc))[4] * 4 + **(int **)(param_1 + 0xc)),
                appuStack_10);
  return;
}

