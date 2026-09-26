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


void fn_82F6EE10(ulonglong param_1,char *param_2,ulonglong param_3,int param_4)

{
  ulonglong uVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = param_2;
  if (param_4 != 0) {
    pcVar3 = param_2 + 1;
    *param_2 = '-';
    param_1 = -param_1;
    param_2 = pcVar3;
  }
  do {
    pcVar4 = param_2;
    trapWord(6,param_3,0);
    uVar1 = param_1 - (longlong)(int)((param_1 & 0xffffffff) / (param_3 & 0xffffffff)) *
                      (longlong)(int)param_3;
    param_1 = (param_1 & 0xffffffff) / (param_3 & 0xffffffff);
    trapWord(6,param_3,0);
    cVar2 = (char)uVar1;
    if ((uVar1 & 0xffffffff) < 10) {
      cVar2 = cVar2 + '0';
    }
    else {
      cVar2 = cVar2 + 'W';
    }
    *pcVar4 = cVar2;
    param_2 = pcVar4 + 1;
  } while (param_1 != 0);
  pcVar4[1] = '\0';
  do {
    cVar2 = *pcVar4;
    *pcVar4 = *pcVar3;
    pcVar4 = pcVar4 + -1;
    *pcVar3 = cVar2;
    pcVar3 = pcVar3 + 1;
  } while (pcVar3 < pcVar4);
  return;
}

