typedef unsigned char undefined1, byte, undefined, bool;
#define true 1
#define false 0
typedef unsigned short undefined2, ushort, word;
typedef unsigned int undefined4, uint, dword, ulong;
typedef unsigned __int64 undefined8, ulonglong, qword;
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


void fn_825541F8(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  short *psVar3;
  char *pcVar4;
  char *pcVar5;

  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar5 = (char *)0x0;
  pcVar4 = pcVar4 + (-1 - (int)param_2);
  if (pcVar4 != (char *)0x0) {
    psVar3 = (short *)(param_1 + -2);
    do {
      if (param_3 <= pcVar5) break;
      pcVar2 = param_2 + (int)pcVar5;
      pcVar5 = pcVar5 + 1;
      psVar3 = psVar3 + 1;
      *psVar3 = (short)*pcVar2;
    } while (pcVar5 < pcVar4);
  }
  if (param_3 <= pcVar4) {
    return;
  }
  *(undefined2 *)((int)pcVar4 * 2 + param_1) = 0;
  return;
}
