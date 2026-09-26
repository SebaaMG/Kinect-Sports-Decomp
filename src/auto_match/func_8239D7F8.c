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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_822ABA88();


undefined8 fn_8239D7F8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  piVar1 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
  uVar4 = ZEXT48(piVar1);
  if (*(int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8) != 0) {
    do {
      iVar2 = fn_822ABA88(*(undefined4 *)(((int *)uVar4)[4] * 4 + *(int *)uVar4));
      if (((*(int *)(*(int *)(iVar2 + 0x110) + 0x18) != 2) &&
          (*(int *)(*(int *)(iVar2 + 0x110) + 0x1c) == 2)) || (*(int *)(iVar2 + 0x27c) != 0)) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) <
             (ulonglong)*(uint *)(*(int *)(((int *)uVar4)[4] * 4 + *(int *)uVar4) + 8));
  }
  return 0;
}

