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
extern unsigned int *auStack_150;
extern int fn_829DAEB8();
extern int fn_82A2B130();
extern int fn_82F664B0();


longlong fn_829DB8F0(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  char *pcVar4;
  int aiStack_160 [4];
  undefined1 auStack_150 [336];
  
  aiStack_160[0] = 300;
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  lVar2 = fn_82A2B130(2,0x101,param_1,(int)pcVar4 - (int)param_1,auStack_150,aiStack_160);
  if (aiStack_160[0] == 0) {
    lVar2 = -0x7fffbffb;
  }
  if (((int)lVar2 < 0) || (lVar2 = fn_829DAEB8(param_3,auStack_150), lVar2 < 0)) {
    iVar3 = fn_82F664B0(auStack_150,300,param_2);
    if (iVar3 == 0) {
      lVar2 = fn_829DAEB8(param_3,auStack_150);
    }
  }
  return lVar2;
}

