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
extern int fn_82350888();
extern int fn_82355538();
extern int fn_82358A60();
extern int (*lbl_83276778)();
extern int (*lbl_83276794)();


void fn_82351E78(undefined8 param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x354) == 0) {
    if (*(int *)(param_2 + 0x3e4) == 0) {
      if (lbl_83276778 != (code *)0x0) {
        (*lbl_83276778)(0,0,1,0xffffffff821b2100,0xffffffff821b1fb8,0x87f);
      }
      *(undefined4 *)(param_2 + 0x3e4) = 1;
    }
    if (lbl_83276794 == (code *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*lbl_83276794)();
    }
    if (iVar1 != 0) {
      if ((*(int **)(param_2 + 0x18) == (int *)0x0) ||
         (iVar1 = (**(code **)(**(int **)(param_2 + 0x18) + 0x10))(param_1), iVar1 != 0)) {
        if (*(int *)(param_2 + 0x350) == 0) {
          fn_82358A60(*(undefined4 *)(param_2 + 0x18));
          *(undefined4 *)(param_2 + 0x350) = 1;
        }
        else {
          fn_82355538(param_2);
          *(undefined4 *)(param_2 + 0x354) = 1;
        }
      }
    }
  }
  else {
    fn_82350888(param_2,7);
  }
  return;
}

