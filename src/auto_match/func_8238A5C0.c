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
extern int fn_82372F88();
extern unsigned int lbl_82192754;


void fn_8238A5C0(int param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  double dVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar2 = fn_82372F88(iVar3);
  uVar4 = 0;
  piVar1 = *(int **)(iVar2 * 4 + **(int **)(iVar3 + 8));
  iVar3 = *(int *)(piVar1[4] * 4 + *piVar1);
  if (*(int *)(iVar3 + 8) != 0) {
    dVar5 = (double)lbl_82192754;
    do {
      iVar3 = fn_822ABA88(iVar3,uVar4);
      if (*(int *)(iVar3 + 0x24) != 0) {
        fn_8234B0C8(dVar5,(ulonglong)*(uint *)(iVar3 + 0x118) + 0x2c0,param_2);
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(piVar1[4] * 4 + *piVar1);
    } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(iVar3 + 8));
  }
  return;
}

