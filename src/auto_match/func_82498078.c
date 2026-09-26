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
extern int fn_8248F8E8();
extern unsigned int lbl_821BEBB0;


void fn_82498078(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    for (; iVar3 != *(int *)(param_1 + 0x14); iVar3 = iVar3 + 4) {
    }
    fn_8248F8E8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  piVar1 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  if (piVar2 != *(int **)(param_1 + 4)) {
    do {
      piVar1 = (int *)*piVar2;
      piVar2[3] = (int)&lbl_821BEBB0;
      fn_8248F8E8();
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 4));
  }
  fn_8248F8E8(*(undefined4 *)(param_1 + 4));
  return;
}

