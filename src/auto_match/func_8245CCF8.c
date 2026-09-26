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
extern int fn_82230300();
extern int fn_8265CA20();


void fn_8245CCF8(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    for (; iVar2 != *(int *)(param_1 + 0x14); iVar2 = iVar2 + 4) {
    }
    fn_8265CA20();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  piVar1 = *(int **)(param_1 + 4);
  piVar3 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  if (piVar3 != *(int **)(param_1 + 4)) {
    do {
      piVar1 = (int *)*piVar3;
      fn_82230300(piVar3 + 9,1,0);
      fn_82230300(piVar3 + 2,1,0);
      fn_8265CA20(piVar3);
      piVar3 = piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 4));
  }
  fn_8265CA20(*(undefined4 *)(param_1 + 4));
  return;
}

