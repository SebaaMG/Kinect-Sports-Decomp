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
extern unsigned int *auStack_1010;
extern int fn_828F5960();
extern int fn_828FA8D8();
extern int fn_828FADC0();
extern unsigned int uStack_11;


void fn_82937278(undefined4 *param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 auStack_1010 [4095];
  undefined1 uStack_11;
  
  param_1[0xd] = 1;
  pcVar3 = "syntax error";
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    cVar2 = *pcVar3;
    if (cVar1 == '\0') break;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    fn_828FADC0(*param_1,2000,param_1 + 4);
  }
  else {
    fn_828F5960(auStack_1010,0x1000,param_2,param_3);
    uStack_11 = 0;
    fn_828FA8D8(*param_1,param_1 + 4,0x1bbc,0xffffffff821c4da8,auStack_1010);
  }
  return;
}

