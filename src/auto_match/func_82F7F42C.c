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


void fn_82F7F42C(void)

{
  char cVar1;
  int in_r8;
  char *pcVar2;
  longlong in_r10;
  char *in_r11;
  char *pcVar3;
  byte in_cr0;
  
  while (((pcVar3 = in_r11, !(bool)(in_cr0 >> 1 & 1) && ((int)in_r10 != 0x65)) &&
         ((int)in_r10 != 0x45))) {
    in_r11 = in_r11 + 1;
    in_r10 = (longlong)*in_r11;
    in_cr0 = (in_r10 == 0) << 1;
  }
  do {
    pcVar2 = pcVar3;
    pcVar3 = pcVar2 + -1;
  } while (*pcVar3 == '0');
  if (*pcVar3 == *(char *)**(undefined4 **)(in_r8 + 0xbc)) {
    pcVar3 = pcVar2 + -2;
  }
  pcVar2 = in_r11 + -1;
  do {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar3 = pcVar3 + 1;
    *pcVar3 = cVar1;
  } while (cVar1 != '\0');
  return;
}

