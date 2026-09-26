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


char * fn_826BCA20(ulonglong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar6 = param_3 - 1;
  uVar7 = (ulonglong)((int)param_1 >> 0x1f);
  uVar3 = 0;
  pcVar4 = (char *)(uVar6 + param_2);
  uVar7 = (param_1 ^ uVar7) - uVar7;
  *(undefined1 *)(uVar6 + param_2) = 0;
  if (uVar6 != 0) {
    do {
      pcVar5 = pcVar4;
      uVar1 = uVar7 & 0xffffffff;
      cVar2 = (char)uVar7;
      uVar7 = (uVar7 & 0xffffffff) / 10;
      pcVar4 = pcVar5 + -1;
      *pcVar4 = cVar2 + (char)(uVar1 / 10) * -10 + '0';
      if ((int)uVar7 == 0) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar6);
    if ((uVar3 < uVar6) && ((int)param_1 < 0)) {
      pcVar4 = pcVar5 + -2;
      *pcVar4 = '-';
    }
  }
  return pcVar4;
}

