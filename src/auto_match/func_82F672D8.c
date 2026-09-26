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


void fn_82F672D8(char *param_1,int param_2,ulonglong param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((param_3 & 0xffffffff) == 0) {
    return;
  }
  pcVar2 = param_1;
  do {
    pcVar3 = pcVar2;
    cVar1 = pcVar3[param_2 - (int)param_1];
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    param_3 = param_3 - 1;
    pcVar2 = pcVar3 + 1;
  } while (param_3 != 0);
  if ((param_3 & 0xffffffff) == 0) {
    return;
  }
  param_3 = param_3 - 1;
  if (param_3 != 0) {
    if ((param_3 & 0xffffffff) != 0) {
      do {
        pcVar3 = pcVar3 + 1;
        *pcVar3 = '\0';
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return;
    }
    return;
  }
  return;
}

