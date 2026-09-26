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
extern int fn_82A1E810();
extern int fn_82A1E968();
extern unsigned int lbl_8326F740;
extern unsigned int lbl_8326F748;
extern unsigned int lbl_8326F750;
extern unsigned int lbl_8326F754;
extern unsigned int lbl_832748CC;
extern unsigned int lbl_832748D0;
extern unsigned int uStack_20;
extern U64 storeDoubleWordConditionalIndexed();
extern U64 storeWordConditionalIndexed();


void fn_8259C888(int param_1)

{
  int iVar1;
  char in_RESERVE;
  byte in_cr0;
  undefined8 uStack_20;
  
  if ((lbl_832748CC == 0) && (lbl_832748D0 == 0)) {
    lbl_8326F740 = lbl_8326F740 + 1;
    fn_82A1E968(&uStack_20);
    do {
      iVar1 = lbl_8326F754;
      if (in_RESERVE != '\0') {
        lbl_8326F754 = storeWordConditionalIndexed
                                 ((ulonglong)*(uint *)(param_1 + 4),0,0xffffffff8326f754);
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (iVar1 != *(int *)(param_1 + 4)) {
      lbl_8326F748 = storeDoubleWordConditionalIndexed(uStack_20,0,0xffffffff8326f748);
      fn_82A1E810(lbl_8326F750);
    }
  }
  return;
}

