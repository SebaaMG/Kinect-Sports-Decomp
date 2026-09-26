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


undefined8 fn_8278B348(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (((*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) &&
      (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))) &&
     (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) {
    pcVar3 = (char *)((*(uint *)(param_2 + 0xc) & 0xfffffffc) + 8);
    pcVar4 = (char *)((*(uint *)(param_1 + 0xc) & 0xfffffffc) + 8);
    do {
      cVar1 = *pcVar4;
      cVar2 = *pcVar3;
      if (cVar1 == '\0') break;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 == cVar2);
    if (((cVar1 == cVar2) && (*(float *)(param_1 + 0x10) == *(float *)(param_2 + 0x10))) &&
       (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18))) {
      return 1;
    }
  }
  return 0;
}

