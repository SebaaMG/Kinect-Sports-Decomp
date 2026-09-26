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
extern int fn_8245A5C8();
extern int fn_8245AA30();
extern int fn_8245D538();
extern int fn_8245DD40();
extern int fn_8245E230();
extern unsigned int lbl_83276594;
extern U64 storeWordConditionalIndexed();


void fn_824BEEE8(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  char in_RESERVE;
  byte in_cr0;
  
  if (lbl_83276594 == 0) {
    fn_8245D538();
  }
  fn_8245E230(lbl_83276594);
  if (lbl_83276594 == 0) {
    fn_8245D538();
  }
  iVar2 = lbl_83276594;
  *(undefined4 *)(lbl_83276594 + 0x58) = 0;
  if ((*(int *)(iVar2 + 0x54) != 0) && (*(int *)(iVar2 + 0x50) == 0)) {
    fn_8245DD40();
  }
  fn_8245A5C8();
  fn_8245AA30();
  *(undefined4 *)((int)param_1 + 0xd8) = 0;
  *(undefined4 *)((int)param_1 + 0xe4) = 0xc;
  do {
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(1,0,param_1 + 0xe0);
      *(undefined4 *)(param_1 + 0xe0) = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  return;
}

