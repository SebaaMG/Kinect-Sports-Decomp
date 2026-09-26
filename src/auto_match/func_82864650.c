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
extern int fn_82864528();
extern int fn_82864580();
extern int fn_828645C8();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832116B8;
extern unsigned int lbl_832116BC;


void fn_82864650(int param_1)

{
  longlong lVar1;
  int iVar2;
  
  fn_82864528();
  iVar2 = 0;
  lbl_832116B8 = *(undefined4 *)(param_1 + 0x2c);
  lbl_832116BC = *(undefined4 *)(param_1 + 0x30);
  if (*(short *)(param_1 + 0x38) != 0) {
    lVar1 = 0;
    do {
      fn_82864580(lVar1 + (ulonglong)*(uint *)(param_1 + 0x34));
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 0x2c;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x38));
  }
  iVar2 = 0;
  lbl_832116B8 = 1;
  lbl_832116BC = lbl_821AAD20;
  if (*(short *)(param_1 + 0x40) != 0) {
    lVar1 = 0;
    do {
      fn_828645C8((ulonglong)*(uint *)(param_1 + 0x3c) + lVar1);
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 0x14;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x40));
  }
  return;
}

