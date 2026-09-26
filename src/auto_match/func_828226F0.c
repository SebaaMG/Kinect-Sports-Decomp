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
extern unsigned int lbl_8320A650;


void fn_828226F0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  param_1[param_2 + -1] = '\0';
  if (lbl_8320A650 == '\0') {
    *param_1 = '\0';
    return;
  }
  param_2 = param_2 + -1;
  if (param_2 == 0) {
    return;
  }
  pcVar2 = param_1;
  do {
    pcVar3 = pcVar2;
    cVar1 = pcVar3[(int)&lbl_8320A650 - (int)param_1];
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    param_2 = param_2 + -1;
    pcVar2 = pcVar3 + 1;
  } while (param_2 != 0);
  if (param_2 == 0) {
    return;
  }
  param_2 = param_2 + -1;
  if (param_2 != 0) {
    if (param_2 != 0) {
      do {
        pcVar3 = pcVar3 + 1;
        *pcVar3 = '\0';
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      return;
    }
    return;
  }
  return;
}

