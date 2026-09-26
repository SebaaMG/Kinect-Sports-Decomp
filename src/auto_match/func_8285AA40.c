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


void fn_8285AA40(int param_1,undefined8 param_2,char *param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  
  iVar7 = 0;
  if (*(ushort *)(param_1 + 0x44) != 0) {
    iVar4 = 0;
    do {
      iVar3 = *(int *)(iVar4 + *(int *)(param_1 + 0x40));
      pcVar5 = *(char **)(iVar3 + 0x38);
      pcVar6 = param_3;
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        *param_4 = iVar3;
        return;
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar7 < (int)(uint)*(ushort *)(param_1 + 0x44));
  }
  *param_4 = 0;
  return;
}

