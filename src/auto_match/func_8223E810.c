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


undefined1 * fn_8223E810(undefined8 param_1,undefined1 *param_2,char param_3,uint param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  
  *param_2 = 0x25;
  puVar2 = param_2 + 1;
  if ((param_4 & 0x20) != 0) {
    *puVar2 = 0x2b;
    puVar2 = param_2 + 2;
  }
  if ((param_4 & 0x10) != 0) {
    *puVar2 = 0x23;
    puVar2 = puVar2 + 1;
  }
  *puVar2 = 0x2e;
  puVar2[1] = 0x2a;
  pcVar1 = puVar2 + 2;
  if (param_3 != '\0') {
    *pcVar1 = param_3;
    pcVar1 = puVar2 + 3;
  }
  param_4 = param_4 & 0x3000;
  if (param_4 == 0x2000) {
    cVar3 = 'f';
  }
  else if (param_4 == 0x3000) {
    cVar3 = 'a';
  }
  else {
    cVar3 = 'e';
    if (param_4 != 0x1000) {
      cVar3 = 'g';
    }
  }
  *pcVar1 = cVar3;
  pcVar1[1] = '\0';
  return param_2;
}

