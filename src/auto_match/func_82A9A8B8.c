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
extern int fn_8265C940();


void fn_82A9A8B8(int param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  *(undefined4 *)(param_1 + 0x8c) = param_3;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 1;
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar2 = fn_8265C940((int)pcVar3 - (int)param_2,0x24870000);
  *(int *)(param_1 + 0x84) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x90) = 0x80004005;
  }
  else {
    param_2 = param_2 + -1;
    pcVar3 = (char *)(iVar2 + -1);
    do {
      param_2 = param_2 + 1;
      cVar1 = *param_2;
      pcVar3 = pcVar3 + 1;
      *pcVar3 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}

