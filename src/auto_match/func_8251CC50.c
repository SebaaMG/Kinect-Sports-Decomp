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
extern int iRam832960bc;
extern unsigned int lbl_832960A4;
extern unsigned int lbl_832960A8;
extern unsigned int lbl_832960B4;
extern unsigned int lbl_832960B8;
extern unsigned int lbl_832960C4;
extern unsigned int lbl_8329618C;


void fn_8251CC50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    lbl_832960B4 = lbl_832960B4 + -1;
  }
  else {
    lbl_832960B8 = lbl_832960B8 + -1;
  }
  if (lbl_832960B8 != 0) {
    return;
  }
  if (lbl_832960B4 != 0) {
    return;
  }
  if ((iRam832960bc == 0) && (lbl_832960C4 != 0)) {
    lbl_832960A4 = 3;
  }
  else {
    if (lbl_8329618C == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(lbl_8329618C + 4);
    }
    iVar1 = *(int *)(iVar2 + 0x24);
    if ((iVar1 < 1) || (*(int *)((iVar1 + 4) * 4 + iVar2) != param_1)) {
      *(int *)((iVar1 + 5) * 4 + iVar2) = param_1;
      *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + 1;
    }
    lbl_832960A4 = 0;
  }
  lbl_832960A8 = param_1;
  lbl_832960C4 = 1;
  return;
}

