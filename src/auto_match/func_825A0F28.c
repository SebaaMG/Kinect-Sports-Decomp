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
extern unsigned int *auStack_130;
extern unsigned int *auStack_230;
extern int fn_82526C70();
extern int fn_825A1048();


void fn_825A0F28(undefined8 param_1,char *param_2,char *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char cStack_231;
  undefined1 auStack_230 [256];
  undefined1 auStack_130 [304];
  
  pcVar4 = param_3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = (int)pcVar4 - (int)param_3;
  iVar3 = 0;
  pcVar4 = param_2;
  if (iVar5 != 0) {
    pcVar2 = &cStack_231;
    do {
      cVar1 = param_3[iVar3];
      if ((((('/' < cVar1) && (cVar1 < ':')) || (('@' < cVar1 && (cVar1 < '[')))) ||
          ((('`' < cVar1 && (cVar1 < '{')) || (cVar1 == '_')))) || (cVar1 == '\0')) {
        pcVar2 = pcVar2 + 1;
        *pcVar2 = cVar1;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if ((int)pcVar4 - (int)param_2 == 1) {
    fn_82526C70(auStack_130,0x100,0xffffffff821c4da8,auStack_230);
  }
  else {
    fn_82526C70(auStack_130,0x100,0xffffffff821c7ef4,param_2,auStack_230);
  }
  fn_825A1048(param_1,auStack_130,param_4,param_5,param_6);
  return;
}

