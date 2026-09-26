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
extern int fn_82862388();


void fn_828624A8(int param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  
  pcVar5 = (char *)(param_1 + 0xb);
  pcVar4 = "04.05.05.0032";
  do {
    cVar1 = *pcVar5;
    cVar2 = *pcVar4;
    if (cVar1 == '\0') break;
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 == cVar2);
  iVar3 = 0;
  if (*(ushort *)(param_1 + 0x38) != 0) {
    do {
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 0x38));
  }
  iVar3 = 0;
  if (*(short *)(param_1 + 0x40) != 0) {
    lVar6 = 0;
    do {
      fn_82862388(lVar6 + (ulonglong)*(uint *)(param_1 + 0x3c),cVar1 == cVar2,param_2);
      iVar3 = iVar3 + 1;
      lVar6 = lVar6 + 0x14;
    } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 0x40));
  }
  return;
}

