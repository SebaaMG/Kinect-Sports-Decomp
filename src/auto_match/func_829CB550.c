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
extern unsigned int *auStack_10;
extern unsigned int lbl_8315C3E8;
extern U64 storeWordConditionalIndexed();


void fn_829CB550(void)

{
  int iVar1;
  char in_RESERVE;
  byte in_cr0;
  undefined4 auStack_10 [4];
  
  auStack_10[0] = 0;
  iVar1 = XamXStudioRequest(1,auStack_10);
  if (-1 < iVar1) {
    do {
      if (in_RESERVE != '\0') {
        lbl_8315C3E8 =
             (undefined *)storeWordConditionalIndexed(0xffffffff829c9120,0,0xffffffff8315c3e8);
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  return;
}

