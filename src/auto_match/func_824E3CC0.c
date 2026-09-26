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
extern int fn_8225F160();
extern unsigned int lbl_831D131C;
extern unsigned int lbl_831D1324;
extern unsigned int lbl_832765BC;


void fn_824E3CC0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xd54) + 0x14);
  if (((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 0xd54) + 0x18) == 0)) && (lbl_832765BC == 0)) {
    if (*(int *)(iVar1 + 0x10) == 0) {
      lbl_831D131C = 1;
    }
    else {
      iVar1 = fn_8225F160();
      lbl_831D131C = *(undefined4 *)(iVar1 + 0x34);
    }
    iVar1 = fn_8225F160();
    lbl_831D1324 = *(undefined4 *)(iVar1 + 0xc);
  }
  return;
}

