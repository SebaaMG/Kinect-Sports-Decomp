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


void fn_828509F0(uint *param_1,char *param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  uVar3 = 0;
  if (*param_1 != 0) {
    iVar6 = 0;
    do {
      pcVar5 = *(char **)(iVar6 + param_1[1]);
      pcVar4 = param_2;
      do {
        cVar1 = *pcVar5;
        cVar2 = *pcVar4;
        if (cVar1 == '\0') break;
        pcVar5 = pcVar5 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        iVar6 = uVar3 * 0x50 + param_1[1];
        goto LAB_82850a54;
      }
      uVar3 = uVar3 + 1;
      iVar6 = iVar6 + 0x50;
    } while (uVar3 < *param_1);
  }
  iVar6 = 0;
LAB_82850a54:
  *param_3 = iVar6;
  return;
}

