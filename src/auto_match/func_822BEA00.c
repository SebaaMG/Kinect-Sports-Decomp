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
extern int fn_82320BE0();
extern int fn_82536008();
extern int fn_82536288();
extern int fn_82575DF0();
extern int fn_82F63108();
extern unsigned int lbl_821CC160;


void fn_822BEA00(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x7b0) = 0;
  *(undefined4 *)(param_1 + 0x7a4) = 0;
  *(undefined4 *)(param_1 + 0x7a0) = 0;
  *(undefined4 *)(param_1 + 0x7bc) = 0;
  iVar1 = *(int *)(param_1 + 0x6d0);
  *(undefined4 *)(param_1 + 0x5c4) = lbl_821CC160;
  *(undefined4 *)(param_1 + 0x5c0) = 0;
  *(undefined4 *)(param_1 + 0x720) = 0;
  *(undefined4 *)(iVar1 + 0x100) = 0;
  if (*(int *)(iVar1 + 0xf8) != 0) {
    fn_82575DF0(*(undefined4 *)(*(int *)(iVar1 + 0xfc) + 0x93c));
    *(undefined4 *)(iVar1 + 0xf8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x6d8);
  *(undefined4 *)(iVar1 + 0x100) = 0;
  if (*(int *)(iVar1 + 0xf8) != 0) {
    fn_82575DF0(*(undefined4 *)(*(int *)(iVar1 + 0xfc) + 0x93c));
    *(undefined4 *)(iVar1 + 0xf8) = 0;
  }
  if (*(int *)(param_1 + 0x6e0) != 0) {
    fn_82536008();
    fn_82536288((undefined4 *)(param_1 + 0x6e0));
    *(undefined4 *)(param_1 + 0x6e0) = 0;
  }
  if (*(int *)(param_1 + 0x718) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63108();
  }
  (**(code **)(**(int **)(param_1 + 0x718) + 4))(*(int **)(param_1 + 0x718),1);
  if (*(int *)(param_1 + 0x7d4) != 0) {
    fn_82320BE0(*(int *)(param_1 + 0x7d4),1);
  }
  return;
}

