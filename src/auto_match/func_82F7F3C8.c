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
extern unsigned int lbl_831BBCA8;


void fn_82F7F3C8(char *param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  
  lVar2 = (longlong)*param_1;
  if (lVar2 != 0) {
    do {
      if ((int)lVar2 == (int)*(char *)**(undefined4 **)(lbl_831BBCA8 + 0xbc)) break;
      param_1 = param_1 + 1;
      lVar2 = (longlong)*param_1;
    } while (lVar2 != 0);
  }
  param_1 = param_1 + 1;
  if ((int)lVar2 != 0) {
    cVar1 = *param_1;
    while (((pcVar4 = param_1, cVar1 != '\0' && (cVar1 != 'e')) && (cVar1 != 'E'))) {
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    }
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + -1;
    } while (*pcVar4 == '0');
    if (*pcVar4 == *(char *)**(undefined4 **)(lbl_831BBCA8 + 0xbc)) {
      pcVar4 = pcVar3 + -2;
    }
    param_1 = param_1 + -1;
    do {
      param_1 = param_1 + 1;
      cVar1 = *param_1;
      pcVar4 = pcVar4 + 1;
      *pcVar4 = cVar1;
    } while (cVar1 != '\0');
    return;
  }
  return;
}

