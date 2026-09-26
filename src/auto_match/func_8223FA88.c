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


undefined1 * fn_8223FA88(undefined8 param_1,undefined1 *param_2,char *param_3,uint param_4)

{
  byte bVar1;
  char *pcVar2;
  
  *param_2 = 0x25;
  pcVar2 = param_2 + 1;
  if ((param_4 & 0x20) != 0) {
    *pcVar2 = '+';
    pcVar2 = param_2 + 2;
  }
  if ((param_4 & 8) != 0) {
    *pcVar2 = '#';
    pcVar2 = pcVar2 + 1;
  }
  if (*param_3 == 'L') {
    *pcVar2 = 'I';
    pcVar2[1] = '6';
    pcVar2 = pcVar2 + 2;
    *pcVar2 = '4';
  }
  else {
    *pcVar2 = *param_3;
  }
  if ((param_4 & 0xe00) == 0x400) {
    bVar1 = 0x6f;
  }
  else if ((param_4 & 0xe00) == 0x800) {
    bVar1 = (~(byte)param_4 & 4) << 3 | 0x58;
  }
  else {
    bVar1 = param_3[1];
  }
  pcVar2[1] = bVar1;
  pcVar2[2] = '\0';
  return param_2;
}

