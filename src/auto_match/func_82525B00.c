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


void fn_82525B00(double param_1,int param_2,char param_3,undefined8 param_4,int param_5)

{
  float *pfVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_5 == -1) {
    iVar3 = 0;
    lVar4 = 2;
    pfVar1 = (float *)(param_2 + 0x319a8);
    do {
      if ((*(char *)(param_2 + 0x319a5 + iVar3) != param_3) && (param_3 != '\0')) {
        *pfVar1 = (float)param_1;
      }
      *(char *)(param_2 + 0x319a5 + iVar3) = param_3;
      iVar3 = iVar3 + 1;
      pfVar1 = pfVar1 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return;
  }
  pcVar2 = (char *)(param_5 + param_2 + 0x319a5);
  if ((*pcVar2 != param_3) && (param_3 != '\0')) {
    *(float *)((param_5 + 0xc66a) * 4 + param_2) = (float)param_1;
  }
  *pcVar2 = param_3;
  return;
}

