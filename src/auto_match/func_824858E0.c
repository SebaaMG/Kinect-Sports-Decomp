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


byte fn_824858E0(char *param_1)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  
  cVar5 = *param_1;
  cVar3 = 'b';
  cVar4 = cVar5;
  if (cVar5 == 'b') {
    cVar4 = 'b';
    pcVar1 = param_1;
    do {
      pcVar1 = pcVar1 + 1;
      if (cVar4 == '\0') goto LAB_8248593c;
      cVar3 = pcVar1[(int)"boxing_main" - (int)param_1];
      cVar4 = *pcVar1;
    } while (cVar4 == cVar3);
  }
  if (cVar4 == cVar3) {
LAB_8248593c:
    bVar2 = 2;
  }
  else {
    cVar3 = 'f';
    cVar4 = cVar5;
    if (cVar5 == 'f') {
      cVar4 = 'f';
      pcVar1 = param_1;
      do {
        pcVar1 = pcVar1 + 1;
        if (cVar4 == '\0') goto LAB_82485990;
        cVar3 = pcVar1[(int)"football_main" - (int)param_1];
        cVar4 = *pcVar1;
      } while (cVar4 == cVar3);
    }
    if (cVar4 == cVar3) {
LAB_82485990:
      bVar2 = 3;
    }
    else {
      cVar3 = 'v';
      cVar4 = cVar5;
      if (cVar5 == 'v') {
        cVar4 = 'v';
        pcVar1 = param_1;
        do {
          pcVar1 = pcVar1 + 1;
          if (cVar4 == '\0') goto LAB_824859e4;
          cVar3 = pcVar1[(int)"volleyball_main" - (int)param_1];
          cVar4 = *pcVar1;
        } while (cVar4 == cVar3);
      }
      if (cVar4 == cVar3) {
LAB_824859e4:
        bVar2 = 4;
      }
      else {
        cVar3 = 't';
        cVar4 = cVar5;
        if (cVar5 == 't') {
          cVar4 = 't';
          pcVar1 = param_1;
          do {
            pcVar1 = pcVar1 + 1;
            if (cVar4 == '\0') goto LAB_82485a38;
            cVar3 = pcVar1[(int)"tabletennis_main" - (int)param_1];
            cVar4 = *pcVar1;
          } while (cVar4 == cVar3);
        }
        if (cVar4 == cVar3) {
LAB_82485a38:
          bVar2 = 5;
        }
        else {
          cVar4 = 'b';
          if (cVar5 == 'b') {
            cVar5 = 'b';
            pcVar1 = param_1;
            do {
              pcVar1 = pcVar1 + 1;
              if (cVar5 == '\0') goto LAB_82485a8c;
              cVar4 = pcVar1[(int)"bowling_main" - (int)param_1];
              cVar5 = *pcVar1;
            } while (cVar5 == cVar4);
          }
          if (cVar5 == cVar4) {
LAB_82485a8c:
            bVar2 = 6;
          }
          else {
            pcVar1 = strstr(param_1,"athletics_main");
            bVar2 = -(pcVar1 != (char *)0x0) & 7;
          }
        }
      }
    }
  }
  return bVar2;
}

