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
extern int fn_828000F0();


bool fn_827FA328(undefined8 param_1,int param_2)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(param_2 + 10);
  pcVar4 = "03.12.07.0040";
  do {
    cVar1 = *pcVar5;
    cVar2 = *pcVar4;
    if (cVar1 == '\0') break;
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    uVar3 = fn_828000F0(*(undefined4 *)(param_2 + 0x24));
    *(undefined2 *)(*(int *)(param_2 + 0x24) + 0x16) = uVar3;
    uVar3 = fn_828000F0(*(undefined4 *)(param_2 + 0x28));
    *(undefined2 *)(*(int *)(param_2 + 0x28) + 0x16) = uVar3;
    uVar3 = fn_828000F0(*(undefined4 *)(param_2 + 0x2c));
    *(undefined2 *)(*(int *)(param_2 + 0x2c) + 0x16) = uVar3;
  }
  return cVar1 != cVar2;
}

