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
extern int fn_828177C8();


void fn_8285A848(int param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  *(int *)(param_2 + 4) = param_3;
  pcVar6 = (char *)(param_1 + 0xb);
  pcVar5 = "04.05.05.0032";
  do {
    cVar1 = *pcVar6;
    cVar2 = *pcVar5;
    if (cVar1 == '\0') break;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    iVar3 = *(int *)(param_1 + 0x24) * param_3 + *(int *)(param_1 + 0x20);
  }
  else {
    iVar3 = fn_828177C8(*(undefined4 *)(param_1 + 0x20),0xffffffff8201f830);
    iVar4 = fn_828177C8(*(undefined4 *)(param_1 + 0x24),0xffffffff8201f838);
    iVar3 = (iVar4 + 3U & 0xfffffffc) * param_3 + (iVar3 + 3U & 0xfffffffc);
  }
  *(int *)(param_2 + 8) = iVar3 + param_2;
  return;
}

