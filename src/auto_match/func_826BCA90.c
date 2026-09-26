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


char * fn_826BCA90(ulonglong param_1,int param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  char *pcVar8;
  
  uVar3 = param_3 - 1;
  uVar6 = 0;
  pcVar4 = (char *)(uVar3 + param_2);
  *(undefined1 *)(uVar3 + param_2) = 0;
  if (param_4 == 2) {
    uVar7 = 1;
    pcVar8 = pcVar4;
    pcVar4 = (char *)0x0;
    do {
      if (uVar3 <= uVar6) break;
      pcVar8 = pcVar8 + -1;
      if ((uVar7 & param_1) == 0) {
        cVar5 = '0';
      }
      else {
        cVar5 = '1';
        pcVar4 = pcVar8;
      }
      *pcVar8 = cVar5;
      uVar1 = uVar7 & 0x7fffffff;
      uVar7 = uVar1 << 1;
      if (uVar1 == 0) {
        uVar7 = 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x20);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)(param_2 + param_3 + -2);
    }
  }
  else if (param_4 == 8) {
    uVar6 = 0;
    if (uVar3 != 0) {
      do {
        bVar2 = (byte)param_1;
        param_1 = (param_1 & 0xffffffff) >> 3;
        pcVar4 = pcVar4 + -1;
        *pcVar4 = (bVar2 & 7) + 0x30;
        if (param_1 == 0) {
          return pcVar4;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
  }
  else {
    if (param_4 != 0x10) {
      uVar6 = param_3 - 1;
      uVar7 = (ulonglong)((int)param_1 >> 0x1f);
      uVar3 = 0;
      pcVar4 = (char *)(uVar6 + param_2);
      uVar7 = (param_1 ^ uVar7) - uVar7;
      *(undefined1 *)(uVar6 + param_2) = 0;
      if (uVar6 != 0) {
        do {
          pcVar8 = pcVar4;
          uVar1 = uVar7 & 0xffffffff;
          cVar5 = (char)uVar7;
          uVar7 = (uVar7 & 0xffffffff) / 10;
          pcVar4 = pcVar8 + -1;
          *pcVar4 = cVar5 + (char)(uVar1 / 10) * -10 + '0';
          if ((int)uVar7 == 0) break;
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar6);
        if ((uVar3 < uVar6) && ((int)param_1 < 0)) {
          pcVar4 = pcVar8 + -2;
          *pcVar4 = '-';
        }
      }
      return pcVar4;
    }
    if (uVar3 != 0) {
      do {
        pcVar4 = pcVar4 + -1;
        cVar5 = (char)(param_1 & 0xf);
        if ((param_1 & 0xf) < 10) {
          cVar5 = cVar5 + '0';
        }
        else {
          cVar5 = cVar5 + 'W';
        }
        param_1 = (param_1 & 0xffffffff) >> 4;
        *pcVar4 = cVar5;
      } while ((param_1 != 0) && (uVar6 = uVar6 + 1, uVar6 < uVar3));
    }
  }
  return pcVar4;
}

