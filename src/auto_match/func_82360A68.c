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
extern int fn_822ABA88();
extern int fn_8234B0C8();
extern int fn_827F5708();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82360A68(int param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  
  uVar3 = 0;
  piVar1 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
  iVar2 = *(int *)(piVar1[4] * 4 + *piVar1);
  if (*(int *)(iVar2 + 8) != 0) {
    dVar4 = (double)lbl_821CC160;
    dVar5 = (double)lbl_821CA460;
    do {
      iVar2 = fn_822ABA88(iVar2,uVar3);
      if (*(int *)(*(int *)(iVar2 + 0x118) + 0x2e4) != 0) {
        fn_827F5708(dVar5);
      }
      fn_8234B0C8(dVar4,(ulonglong)*(uint *)(iVar2 + 0x118) + 0x2c0,param_3);
      uVar3 = uVar3 + 1;
      iVar2 = *(int *)(piVar1[4] * 4 + *piVar1);
    } while ((uVar3 & 0xffffffff) < (ulonglong)*(uint *)(iVar2 + 8));
  }
  return;
}

