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


undefined8 fn_82930800(int *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  switch(*param_1) {
  case 0:
  case 2:
  case 3:
  case 4:
    bVar8 = param_1[2] == param_2[2];
    break;
  case 1:
    pbVar4 = (byte *)(param_2 + 2);
    pbVar6 = (byte *)(param_1 + 2);
    do {
      iVar3 = (uint)*pbVar6 - (uint)*pbVar4;
      if (*pbVar6 == 0) break;
      pbVar6 = pbVar6 + 1;
      pbVar4 = pbVar4 + 1;
    } while (iVar3 == 0);
    goto LAB_82930888;
  case 5:
  case 6:
  case 7:
  case 8:
    bVar8 = *(double *)(param_1 + 2) == *(double *)(param_2 + 2);
    break;
  case 9:
    pbVar4 = (byte *)param_2[2];
    pbVar6 = (byte *)param_1[2];
    do {
      iVar3 = (uint)*pbVar6 - (uint)*pbVar4;
      if (*pbVar6 == 0) break;
      pbVar6 = pbVar6 + 1;
      pbVar4 = pbVar4 + 1;
    } while (iVar3 == 0);
LAB_82930888:
    if (iVar3 != 0) {
      return 0;
    }
    return 1;
  case 10:
    pcVar5 = (char *)param_2[2];
    pcVar7 = (char *)param_1[2];
    do {
      cVar1 = *pcVar7;
      cVar2 = *pcVar5;
      if (cVar1 == '\0') break;
      pcVar7 = pcVar7 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 != cVar2) {
      return 0;
    }
  default:
    goto switchD_82930844_default;
  }
  if (!bVar8) {
    return 0;
  }
switchD_82930844_default:
  return 1;
}

