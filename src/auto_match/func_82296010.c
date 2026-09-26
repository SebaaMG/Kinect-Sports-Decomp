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


void fn_82296010(undefined1 *param_1,char *param_2,uint param_3)

{
  byte bVar1;
  char *pcVar2;
  
  *param_1 = 0x25;
  pcVar2 = param_1 + 1;
  if ((param_3 & 0x20) != 0) {
    *pcVar2 = '+';
    pcVar2 = param_1 + 2;
  }
  if ((param_3 & 8) != 0) {
    *pcVar2 = '#';
    pcVar2 = pcVar2 + 1;
  }
  if (*param_2 == 'L') {
    *pcVar2 = 'I';
    pcVar2[1] = '6';
    pcVar2 = pcVar2 + 2;
    *pcVar2 = '4';
  }
  else {
    *pcVar2 = *param_2;
  }
  if ((param_3 & 0xe00) == 0x400) {
    bVar1 = 0x6f;
  }
  else if ((param_3 & 0xe00) == 0x800) {
    bVar1 = (~(byte)param_3 & 4) << 3 | 0x58;
  }
  else {
    bVar1 = param_2[1];
  }
  pcVar2[1] = bVar1;
  pcVar2[2] = '\0';
  return;
}

