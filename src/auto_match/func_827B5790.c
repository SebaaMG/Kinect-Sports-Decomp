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


void fn_827B5790(int param_1,int param_2,int param_3,char *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((char *)0x4 < param_4) {
    pbVar1 = (byte *)(param_2 + 1);
    pcVar4 = (char *)(param_3 + 2);
    do {
      pcVar2 = pcVar4 + 1;
      pbVar1 = pbVar1 + 1;
      pcVar3 = (char *)((uint)*pbVar1 + param_1 + 0x3a0);
      pcVar4[-2] = pcVar3[0x200] + pcVar4[-2];
      pcVar4[-1] = pcVar4[-1] + pcVar3[0x100];
      *pcVar4 = *pcVar3 + *pcVar4;
      pcVar4[1] = pcVar4[1] + pcVar3[0x100];
      pcVar4[2] = pcVar3[0x200] + pcVar4[2];
      pcVar4 = pcVar2;
    } while (pcVar2 + (2 - param_3) < param_4);
  }
  return;
}

