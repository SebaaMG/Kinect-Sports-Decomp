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


char * fn_82F64C68(char *param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  
  if (*param_2 == '\0') {
    return param_1;
  }
  lVar2 = (longlong)*param_1;
  if (lVar2 != 0) {
    iVar1 = (int)param_1 - (int)param_2;
    do {
      pcVar3 = param_2;
      if ((int)lVar2 != 0) {
        do {
          if ((*pcVar3 == '\0') || (pcVar3[iVar1] != *pcVar3)) break;
          pcVar3 = pcVar3 + 1;
        } while (pcVar3[iVar1] != '\0');
      }
      if (*pcVar3 == '\0') {
        return param_1;
      }
      param_1 = param_1 + 1;
      iVar1 = iVar1 + 1;
      lVar2 = (longlong)*param_1;
    } while (lVar2 != 0);
  }
  return (char *)0x0;
}

