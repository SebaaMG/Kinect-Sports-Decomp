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


int fn_826D7938(int *param_1,uint *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = param_3 * 0xc + *param_1;
  piVar7 = (int *)(iVar6 + 8);
  if ((*piVar7 == -2) || (iVar3 = param_3, *(int *)(iVar6 + 0xc) != param_3)) {
    return -1;
  }
  do {
    if (piVar7[1] == param_3) {
      pcVar4 = (char *)((*param_2 & 0xfffffffc) + 8);
      pcVar5 = (char *)((piVar7[2] & 0xfffffffcU) + 8);
      do {
        cVar1 = *pcVar5;
        cVar2 = *pcVar4;
        if (cVar1 == '\0') break;
        pcVar5 = pcVar5 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        return iVar3;
      }
    }
    iVar3 = *piVar7;
    if (iVar3 == -1) {
      return -1;
    }
    piVar7 = (int *)(iVar3 * 0xc + *param_1 + 8);
  } while( true );
}

