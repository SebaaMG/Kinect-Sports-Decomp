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
extern int fn_8268B368();
extern int fn_82F68CC0();
extern unsigned int lbl_831E7E64;


int * fn_8268C590(int *param_1,char *param_2,char *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar3 = param_2;
  if (param_2 == (char *)0x0) {
    pcVar3 = (char *)0x0;
  }
  else {
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = pcVar3 + (-1 - (int)param_2);
  }
  pcVar5 = param_3;
  if (param_3 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + (-1 - (int)param_3);
  }
  pcVar4 = param_4;
  if (param_4 == (char *)0x0) {
    pcVar4 = (char *)0x0;
  }
  else {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = pcVar4 + (-1 - (int)param_4);
  }
  iVar2 = fn_8268B368(param_1,lbl_831E7E64,pcVar4 + (int)pcVar5 + (int)pcVar3,0);
  fn_82F68CC0(iVar2 + 8,param_2,pcVar3);
  fn_82F68CC0(pcVar3 + iVar2 + 8,param_3,pcVar5);
  fn_82F68CC0(pcVar5 + iVar2 + (int)pcVar3 + 8,param_4,pcVar4);
  *param_1 = iVar2;
  return param_1;
}

