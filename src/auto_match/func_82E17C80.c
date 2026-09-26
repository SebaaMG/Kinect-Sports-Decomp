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


void fn_82E17C80(int param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = 0;
  pcVar2 = (char *)(*param_2 + param_1);
  cVar1 = *pcVar2;
  while (cVar1 != '\0') {
    uVar3 = uVar3 + 1;
    cVar1 = pcVar2[uVar3];
  }
  do {
    uVar3 = uVar3 + 1;
  } while ((uVar3 & 3) != 0);
  *param_2 = *param_2 + uVar3;
  return;
}

