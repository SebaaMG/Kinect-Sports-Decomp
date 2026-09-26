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


int fn_82555A88(int *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  
  iVar7 = param_1[1];
  iVar4 = 0;
  if (0 < iVar7) {
    iVar3 = 0;
    do {
      pcVar6 = *(char **)(iVar3 + *param_1 + 0x19c);
      pcVar5 = param_2;
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        return iVar3 + *param_1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x1a0;
    } while (iVar4 < iVar7);
  }
  iVar4 = 0;
  if (0 < iVar7) {
    iVar7 = 0;
    do {
      if (((((uint *)(*param_1 + iVar7))[9] & 0x40000000) != 0) &&
         (iVar3 = fn_82555A88((ulonglong)*(uint *)(*param_1 + iVar7) + 0x98,param_2), iVar3 != 0))
      {
        return iVar3;
      }
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + 0x1a0;
    } while (iVar4 < param_1[1]);
  }
  return 0;
}

