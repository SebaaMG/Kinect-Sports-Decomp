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
extern int fn_82A20370();
extern int fn_82F6DF30();
extern unsigned int iStack0000002c;
extern unsigned int stack0x00000024;
extern unsigned int stack0x0000002c;


bool fn_82A203C0(char *param_1,char *param_2,undefined1 *param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puStack00000024;
  int iStack0000002c;
  
  pcVar5 = param_1;
  if (param_2 == (char *)0x0) {
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    param_2 = pcVar5 + (-1 - (int)param_1);
  }
  pcVar5 = param_1;
  puStack00000024 = param_3;
  iStack0000002c = param_4;
  do {
    while( true ) {
      if (param_1 + (int)param_2 <= pcVar5) {
        return param_4 == 0;
      }
      cVar1 = *pcVar5;
      pcVar6 = pcVar5 + 1;
      if (cVar1 == '*') break;
      if (param_4 == 0) {
        return false;
      }
      uVar2 = *param_3;
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
      pcVar5 = pcVar6;
      puStack00000024 = param_3;
      iStack0000002c = param_4;
      if (cVar1 != '?') {
        iVar3 = fn_82F6DF30(uVar2);
        iVar4 = fn_82F6DF30(cVar1);
        if (iVar3 != iVar4) {
          return false;
        }
      }
    }
    if (pcVar6 == param_1 + (int)param_2) {
      return true;
    }
    pcVar5 = pcVar5 + 2;
    if (*pcVar6 != '.') {
      return false;
    }
    iVar3 = fn_82A20370(&stack0x00000024,&stack0x0000002c,0x2e);
    param_4 = iStack0000002c;
    param_3 = puStack00000024;
  } while (iVar3 != 0);
  return false;
}

