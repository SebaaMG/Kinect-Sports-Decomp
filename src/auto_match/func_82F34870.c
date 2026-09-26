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
extern int fn_82E4FE40();
extern unsigned int lbl_82162AA8;


void fn_82F34870(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  
  *param_1 = &lbl_82162AA8;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 8))();
    param_1[1] = 0;
  }
  if ((param_1[3] != 0) && (param_1[2] != 0)) {
    uVar1 = 0;
    iVar2 = 0;
    do {
      if (*(int **)(param_1[3] + iVar2) != (int *)0x0) {
        (**(code **)(**(int **)(param_1[3] + iVar2) + 8))();
        *(undefined4 *)(param_1[3] + iVar2) = 0;
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (uVar1 < (uint)param_1[2]);
  }
  if (param_1[3] != 0) {
    fn_82E4FE40();
  }
  param_1[3] = 0;
  return;
}

