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
extern int fn_822AF138();
extern int fn_8288B760();


void fn_822B0668(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  uVar1 = *(uint *)(*(int *)((*(int **)(param_1 + 0xc))[4] * 4 + **(int **)(param_1 + 0xc)) + 8);
  if (uVar1 != 0) {
    do {
      iVar2 = fn_822ABA88(*(undefined4 *)
                             ((*(int **)(param_1 + 0xc))[4] * 4 + **(int **)(param_1 + 0xc)),uVar5);
      if (*(int *)(iVar2 + 0x168) == 0) {
        uVar3 = *(uint *)(iVar2 + 0x16c);
      }
      else {
        uVar3 = fn_8288B760();
        uVar3 = uVar3 & 0xff;
      }
      if (uVar3 != 0) {
        uVar4 = 3;
        iVar2 = fn_822ABA88(*(undefined4 *)
                               ((*(int **)(param_1 + 0xc))[4] * 4 + **(int **)(param_1 + 0xc)),uVar5
                             );
        fn_822AF138(*(undefined4 *)(iVar2 + 0x110),uVar4);
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (ulonglong)uVar1);
  }
  return;
}

