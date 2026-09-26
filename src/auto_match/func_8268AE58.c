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


int fn_8268AE58(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  pcVar2 = param_2;
  iVar3 = param_3;
  if (param_3 == 0) {
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return -(int)(pcVar2 + (-1 - (int)param_2));
  }
  do {
    cVar1 = *param_1;
    if ((cVar1 < 'A') || (iVar4 = cVar1 + 0x20, 'Z' < cVar1)) {
      iVar4 = (int)cVar1;
    }
    cVar1 = *pcVar2;
    param_1 = param_1 + 1;
    iVar5 = (int)cVar1;
    if (('@' < cVar1) && (cVar1 < '[')) {
      iVar5 = iVar5 + 0x20;
    }
    iVar3 = iVar3 + -1;
    pcVar2 = pcVar2 + 1;
    if ((iVar3 == 0) || (iVar4 == 0)) break;
    if (iVar4 != iVar5) goto code_r0x8268af14;
  } while (*pcVar2 != '\0');
  if ((iVar4 == iVar5) && ((pcVar6 = param_2, iVar3 != 0 || (*pcVar2 != '\0')))) {
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    return param_3 - (int)(pcVar6 + (-1 - (int)param_2));
  }
code_r0x8268af14:
  return iVar4 - iVar5;
}

