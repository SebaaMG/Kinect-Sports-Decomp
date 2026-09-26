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


char * fn_82F8ACA0(int param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0x38) + param_2);
  pcVar2 = (char *)(*(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x38));
  if ((*pcVar1 == *pcVar2) && (pcVar1[1] == pcVar2[1])) {
    pcVar3 = pcVar2 + 2;
    pcVar1 = pcVar1 + 2;
    while (((((pcVar4 = pcVar3 + 1, pcVar3[1] == pcVar1[1] &&
              (pcVar4 = pcVar3 + 2, pcVar3[2] == pcVar1[2])) &&
             (pcVar4 = pcVar3 + 3, pcVar3[3] == pcVar1[3])) &&
            ((pcVar4 = pcVar3 + 4, pcVar3[4] == pcVar1[4] &&
             (pcVar4 = pcVar3 + 5, pcVar3[5] == pcVar1[5])))) &&
           ((pcVar4 = pcVar3 + 6, pcVar3[6] == pcVar1[6] &&
            (pcVar4 = pcVar3 + 7, pcVar3[7] == pcVar1[7]))))) {
      pcVar1 = pcVar1 + 8;
      pcVar3 = pcVar3 + 8;
      pcVar4 = pcVar3;
      if ((*pcVar3 != *pcVar1) || (pcVar2 + 0x102 <= pcVar3)) break;
    }
    pcVar4 = pcVar4 + (0x102 - (int)(pcVar2 + 0x102));
    if (2 < (int)pcVar4) {
      *(int *)(param_1 + 0x70) = param_2;
      if (*(char **)(param_1 + 0x74) < pcVar4) {
        pcVar4 = *(char **)(param_1 + 0x74);
      }
      return pcVar4;
    }
  }
  return (char *)0x2;
}

