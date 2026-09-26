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
extern int fn_8265CA20();
extern unsigned int lbl_832967A0;
extern unsigned int lbl_832967A4;
extern unsigned int lbl_832967A8;
extern unsigned int lbl_832967AC;
extern unsigned int lbl_832967B0;


void fn_825303A0(void)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = (ulonglong)lbl_832967B0;
  while ((uVar2 & 0xffffffff) != 0) {
    uVar2 = uVar2 - 1;
    lbl_832967B0 = (uint)uVar2;
    if (uVar2 == 0) {
      lbl_832967AC = 0;
    }
  }
  iVar1 = lbl_832967A4;
  if (lbl_832967A8 != 0) {
    iVar4 = lbl_832967A8 << 2;
    iVar3 = lbl_832967A8;
    do {
      iVar4 = iVar4 + -4;
      iVar3 = iVar3 + -1;
      if (*(int *)(iVar4 + iVar1) != 0) {
        fn_8265CA20(*(int *)(iVar4 + iVar1));
        iVar1 = lbl_832967A4;
      }
    } while (iVar3 != 0);
  }
  if (iVar1 != 0) {
    fn_8265CA20();
  }
  lbl_832967A8 = 0;
  lbl_832967A4 = 0;
  fn_8265CA20(lbl_832967A0);
  lbl_832967A0 = 0;
  return;
}

