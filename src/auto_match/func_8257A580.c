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


int fn_8257A580(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = (int)pcVar4 - (int)param_1;
  if (iVar5 == 1) {
    return 0;
  }
  uVar2 = iVar5 - 2;
  uVar6 = 0;
  if (iVar5 != 1) {
    do {
      if ((param_1[uVar6] != ' ') && (param_1[uVar6] != '\t')) break;
      uVar6 = uVar6 + 1;
    } while (uVar6 < iVar5 - 1U);
  }
  for (; (uVar2 != 0 && ((param_1[uVar2] == ' ' || (param_1[uVar2] == '\t')))); uVar2 = uVar2 - 1) {
  }
  if (uVar2 < uVar6) {
    *param_1 = '\0';
    return 0;
  }
  iVar5 = (uVar2 - uVar6) + 1;
  if (uVar6 != 0) {
    iVar3 = 0;
    for (iVar7 = iVar5; iVar7 != 0; iVar7 = iVar7 + -1) {
      param_1[iVar3] = param_1[iVar3 + uVar6];
      iVar3 = iVar3 + 1;
    }
  }
  param_1[iVar5] = '\0';
  return iVar5;
}

