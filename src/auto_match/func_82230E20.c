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
extern int fn_82230F00();
extern unsigned int lbl_832766F7;
extern int (*lbl_83276794)();


void fn_82230E20(int param_1,ulonglong param_2)

{
  int iVar1;
  
  if ((lbl_832766F7 == '\0') || (*(int *)(param_1 + 8) != 0)) {
    if (*(int *)(param_1 + 0x58) == 0) {
      if (lbl_83276794 == (code *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (*lbl_83276794)();
      }
      if ((iVar1 == 0) || ((param_2 & 0xffffffff) == 0x25)) {
        *(undefined4 *)(param_1 + 8) = 0;
        if ((((param_2 & 0xffffffff) != 0) &&
            (((param_2 & 0xffffffff) != 0x12 && ((param_2 & 0xffffffff) != 0x19)))) &&
           (((param_2 & 0xffffffff) < 0x1e || (0x1f < (param_2 & 0xffffffff))))) {
          fn_82230F00(param_1,param_2);
        }
      }
      else {
        *(int *)(param_1 + 8) = (int)param_2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  return;
}

