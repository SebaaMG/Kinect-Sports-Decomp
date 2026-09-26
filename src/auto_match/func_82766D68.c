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


undefined8 fn_82766D68(int param_1,int param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar6;
  undefined8 uVar5;
  
  if (param_1 != *param_3) {
    return 0;
  }
  iVar3 = param_3[1];
  pcVar4 = (char *)((*(uint *)(iVar3 + 0xc) & 0xfffffffc) + 8);
  pcVar6 = (char *)((*(uint *)(param_2 + 0xc) & 0xfffffffc) + 8);
  do {
    cVar1 = *pcVar6;
    cVar2 = *pcVar4;
    if (cVar1 == '\0') break;
    pcVar6 = pcVar6 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 == cVar2);
  if (((cVar1 != cVar2) || (*(int *)(param_2 + 8) != *(int *)(iVar3 + 8))) ||
     (uVar5 = 1, *(int *)(param_2 + 0x10) != *(int *)(iVar3 + 0x10))) {
    uVar5 = 0;
  }
  return uVar5;
}

