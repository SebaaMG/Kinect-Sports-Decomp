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


void fn_82A99F88(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar2 = param_2;
  if (*(int *)(param_1 + 0xc) < 0) {
    return;
  }
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((uint)((int)pcVar2 - (int)param_2) <=
      (uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18))) {
    pcVar2 = param_2 + -1;
    pcVar3 = (char *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18) + -1);
    do {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar3 = pcVar3 + 1;
      *pcVar3 = cVar1;
      pcVar4 = param_2;
    } while (cVar1 != '\0');
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    *(char **)(param_1 + 0x18) = pcVar4 + *(int *)(param_1 + 0x18) + (-1 - (int)param_2);
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0x80004005;
  return;
}

