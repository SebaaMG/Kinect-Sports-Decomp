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


void fn_822923A0(int param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  
  cVar5 = *param_2;
  cVar3 = 'h';
  cVar4 = cVar5;
  if (cVar5 == 'h') {
    cVar4 = 'h';
    pcVar2 = param_2;
    do {
      pcVar2 = pcVar2 + 1;
      if (cVar4 == '\0') {
        return;
      }
      cVar3 = pcVar2[(int)"hasReachedHoldPosition" - (int)param_2];
      cVar4 = *pcVar2;
    } while (cVar4 == cVar3);
  }
  if (cVar4 == cVar3) {
    return;
  }
  cVar4 = 'h';
  if (cVar5 == 'h') {
    iVar1 = (int)"hasReachedEnd" - (int)param_2;
    cVar5 = 'h';
    do {
      param_2 = param_2 + 1;
      if (cVar5 == '\0') goto code_r0x8229243c;
      cVar4 = param_2[iVar1];
      cVar5 = *param_2;
    } while (cVar5 == cVar4);
  }
  if (cVar5 != cVar4) {
    return;
  }
code_r0x8229243c:
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

