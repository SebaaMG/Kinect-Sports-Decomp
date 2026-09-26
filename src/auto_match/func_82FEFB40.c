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
extern int fn_830184C0();
extern unsigned int lbl_832642FC;


void fn_82FEFB40(int param_1)

{
  longlong lVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0xec);
  lVar1 = 4;
  do {
    if (*piVar2 != 0) {
      fn_830184C0(lbl_832642FC);
    }
    lVar1 = lVar1 + -1;
    piVar2 = piVar2 + 4;
  } while (lVar1 != 0);
  if (*(int *)(param_1 + 300) != 0) {
    fn_830184C0(lbl_832642FC);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    fn_830184C0(lbl_832642FC,param_1);
  }
  return;
}

