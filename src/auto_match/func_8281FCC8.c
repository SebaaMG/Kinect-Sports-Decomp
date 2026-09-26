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


longlong fn_8281FCC8(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar4 = 0;
  uVar3 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x24);
  if (uVar3 != 0) {
    iVar5 = 0;
    do {
      pcVar7 = (char *)(*(int *)(iVar5 + *(int *)(param_1 + 0x3c)) + *(int *)(param_1 + 0x40));
      pcVar6 = param_2;
      do {
        cVar1 = *pcVar7;
        cVar2 = *pcVar6;
        if (cVar1 == '\0') break;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        return uVar4 + 1;
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
    } while ((uVar4 & 0xffffffff) < (ulonglong)uVar3);
  }
  return 0;
}

