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


void fn_825A2520(char *param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char acStack_11 [17];
  
  pcVar4 = param_1;
  if (param_3 == 0) {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)param_1;
    if (uVar5 < param_2) {
      param_1[uVar5 - 1] = '0';
      param_1[uVar5] = '\0';
      return;
    }
    return;
  }
  acStack_11[1] = 0;
  if (param_3 < 0) {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)param_1;
    if (uVar5 < param_2) {
      param_1[uVar5 - 1] = '-';
      param_1[uVar5] = '\0';
    }
    param_3 = -param_3;
  }
  iVar2 = 0;
  if (param_3 != 0) {
    do {
      pcVar4 = acStack_11 + 1;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar4 - (int)(acStack_11 + 1);
      if (uVar5 < 0x10) {
        acStack_11[uVar5 + 1] = '\0';
        acStack_11[uVar5] = (char)param_3 + (char)(param_3 / 10) * -10 + '0';
      }
      param_3 = param_3 / 10;
      iVar2 = iVar2 + 1;
    } while (param_3 != 0);
    pcVar4 = param_1;
    iVar3 = iVar2;
    if (0 < iVar2) {
      do {
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        uVar5 = (int)pcVar4 - (int)param_1;
        if (uVar5 < param_2) {
          param_1[uVar5] = '\0';
          param_1[uVar5 - 1] = acStack_11[iVar3];
        }
        iVar2 = iVar2 + -1;
        pcVar4 = param_1;
        iVar3 = iVar3 + -1;
      } while (iVar2 != 0);
      return;
    }
    return;
  }
  return;
}

