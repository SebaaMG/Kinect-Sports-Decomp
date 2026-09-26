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
extern int fn_82558B08();
extern int fn_82599418();
extern int fn_827D5670();
extern unsigned int lbl_83265A24;
extern unsigned int lbl_832767A8;
extern U64 storeWordConditionalIndexed();


void fn_8251FB10(void)

{
  bool bVar1;
  int iVar2;
  char in_RESERVE;
  byte in_cr0;
  
  do {
    if (in_RESERVE != '\0') {
      lbl_832767A8 = storeWordConditionalIndexed((ulonglong)lbl_832767A8 + 1,0,0xffffffff832767a8);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  while( true ) {
    iVar2 = fn_827D5670(lbl_83265A24,0);
    bVar1 = iVar2 == 0;
    if (bVar1) break;
    fn_82558B08();
    fn_82599418();
  }
  do {
    if (in_RESERVE != '\0') {
      lbl_832767A8 = storeWordConditionalIndexed((ulonglong)lbl_832767A8 - 1,0,0xffffffff832767a8);
      bVar1 = true;
    }
  } while (!bVar1);
  return;
}

