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


void fn_8265B658(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  
  pcVar1 = (char *)*param_1;
  iVar2 = 0;
  cVar3 = *pcVar1;
  if (cVar3 != '\0') {
    pcVar4 = pcVar1;
    do {
      if (cVar3 == '_') break;
      pcVar4[param_2 - (int)pcVar1] = cVar3;
      iVar2 = iVar2 + 1;
      pcVar4 = pcVar4 + 1;
      cVar3 = *pcVar4;
    } while (cVar3 != '\0');
  }
  *(undefined1 *)(iVar2 + param_2) = 0;
  *param_1 = pcVar1 + iVar2 + 1;
  return;
}

