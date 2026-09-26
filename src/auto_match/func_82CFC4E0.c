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


void fn_82CFC4E0(undefined1 *param_1,uint *param_2,longlong param_3)

{
  char cVar1;
  char *pcVar3;
  longlong lVar2;
  
  lVar2 = param_3;
  do {
    pcVar3 = (char *)lVar2;
    lVar2 = lVar2 + 1;
  } while (*pcVar3 != '\0');
  lVar2 = ((ulonglong)param_2[1] - ((lVar2 - param_3) - 1U & 0xffffffff)) + -1;
  if (lVar2 < 0) {
code_r0x82cfc510:
    *param_1 = 0;
    return;
  }
  cVar1 = *(char *)param_3;
  if (cVar1 != '\0') {
    lVar2 = (ulonglong)*param_2 + lVar2;
    do {
      if (*(char *)lVar2 != cVar1) goto code_r0x82cfc510;
      param_3 = param_3 + 1;
      cVar1 = *(char *)param_3;
      lVar2 = lVar2 + 1;
    } while (cVar1 != '\0');
  }
  *param_1 = 1;
  return;
}

