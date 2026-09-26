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


longlong fn_82863880(int param_1)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = "04.05.05.0032";
  pcVar6 = (char *)(param_1 + 0xb);
  do {
    cVar1 = *pcVar6;
    cVar2 = *pcVar5;
    if (cVar1 == '\0') break;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    lVar3 = (longlong)*(int *)(param_1 + 0x28) * (longlong)*(int *)(param_1 + 0x24) +
            (ulonglong)*(uint *)(param_1 + 0x20);
  }
  else {
    lVar3 = fn_828177C8(*(undefined4 *)(param_1 + 0x20),0xffffffff8201f9a8);
    iVar4 = fn_828177C8(*(undefined4 *)(param_1 + 0x24),0xffffffff8201f9b0);
    lVar3 = (longlong)*(int *)(param_1 + 0x28) * (longlong)(int)(iVar4 + 3U & 0xfffffffc) +
            (lVar3 + 3U & 0xfffffffc);
  }
  return lVar3;
}

