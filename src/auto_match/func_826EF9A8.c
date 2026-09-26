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
extern unsigned int lbl_8200D940;


void fn_826EF9A8(undefined4 *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  param_1[1] = param_2;
  pcVar2 = (char *)0x0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &lbl_8200D940;
  param_1[3] = param_3;
  pcVar3 = param_3;
  if (param_3 != (char *)0x0) {
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar2 = pcVar3 + (-1 - (int)param_3);
  }
  param_1[4] = pcVar2;
  return;
}

