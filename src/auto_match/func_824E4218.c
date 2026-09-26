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
extern unsigned int lbl_8326183C;
extern U64 storeWordConditionalIndexed();


void fn_824E4218(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  char in_RESERVE;
  byte in_cr0;
  
  uVar2 = (ulonglong)lbl_8326183C;
  do {
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(2,0,uVar2 + 0x2b50);
      *(undefined4 *)(uVar2 + 0x2b50) = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  return;
}

