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


void fn_822A3450(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar2 = param_2 * 0x39c + param_1;
  iVar3 = param_3 * 0x5c + iVar2 + 0x1188;
  *(undefined4 *)(iVar2 + 0x1188) = 1;
  *(undefined4 *)(iVar3 + -0x58) = 1;
  iVar3 = param_4 * 0x18 + iVar3;
  pcVar4 = (char *)(iVar3 + -0x58);
  *(undefined4 *)(iVar3 + -0x5c) = 1;
  param_5 = param_5 - (int)pcVar4;
  do {
    if ((char *)(iVar3 + -0x48) <= pcVar4) break;
    cVar1 = pcVar4[param_5];
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 == (char *)(iVar3 + -0x48)) {
    pcVar4[-1] = '\0';
  }
  *(undefined4 *)(iVar3 + -0x48) = param_6;
  *(undefined4 *)(param_1 + 0x1ff8) = 1;
  return;
}

