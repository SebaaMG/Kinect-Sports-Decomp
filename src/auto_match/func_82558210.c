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
extern int fn_82586A48();


void fn_82558210(int param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = fn_82586A48(param_2);
  pcVar3 = (char *)(param_1 + 2);
  iVar2 = iVar2 - (int)pcVar3;
  do {
    if ((char *)(param_1 + 0x42) <= pcVar3) break;
    cVar1 = pcVar3[iVar2];
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 == (char *)(param_1 + 0x42)) {
    pcVar3[-1] = '\0';
  }
  return;
}

