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
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern int fn_8245D538();
extern int fn_8245D620();
extern int fn_8245DD40();
extern int fn_8245E230();
extern int fn_82522D98();
extern int fn_82522ED8();
extern int fn_82A1DDC0();
extern unsigned int iStack_8c;
extern unsigned int lbl_83276594;
extern U64 storeWordConditionalIndexed();


void fn_824BEAC0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char in_RESERVE;
  byte bVar5;
  undefined1 auStack_90 [4];
  int iStack_8c;
  undefined1 auStack_88 [136];
  
  if (lbl_83276594 == 0) {
    fn_8245D538();
  }
  fn_8245E230(lbl_83276594);
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0xd8) = 0;
  auStack_90[0] = (undefined1)*(undefined4 *)(iVar2 + 0xc0);
  if (lbl_83276594 == 0) {
    fn_8245D538();
  }
  iVar3 = lbl_83276594;
  if (*(int *)(lbl_83276594 + 0x58) == 0) {
    puVar4 = (undefined4 *)(lbl_83276594 + 0x1c);
    if ((*(int *)(lbl_83276594 + 0x1c) != 1) && (*(int *)(lbl_83276594 + 0xc) != 0)) {
      fn_82522ED8();
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *puVar4 = 0;
    }
    if (*(int *)(iVar3 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82522D98(1);
    }
    if (*(int *)(iVar3 + 0xc) != 0) {
      fn_82A1DDC0(*(int *)(iVar3 + 0xc),auStack_90,1);
      *puVar4 = 1;
    }
  }
  if (lbl_83276594 == 0) {
    fn_8245D538();
  }
  iVar3 = fn_8245D620(lbl_83276594,auStack_88,&iStack_8c);
  bVar5 = (iVar3 == 0) << 1;
  if ((iVar3 == 0) && (iStack_8c != 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98(8);
  }
  if (lbl_83276594 == 0) {
    fn_8245D538();
  }
  iVar3 = lbl_83276594;
  *(undefined4 *)(lbl_83276594 + 0x58) = 0;
  if ((*(int *)(iVar3 + 0x54) != 0) && (*(int *)(iVar3 + 0x50) == 0)) {
    fn_8245DD40();
  }
  *(undefined4 *)(iVar2 + 0xe4) = 0x11;
  do {
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(1,0,param_1 + 0xe0);
      *(undefined4 *)(param_1 + 0xe0) = uVar1;
      bVar5 = 2;
    }
  } while (!(bool)(bVar5 >> 1 & 1));
  return;
}

