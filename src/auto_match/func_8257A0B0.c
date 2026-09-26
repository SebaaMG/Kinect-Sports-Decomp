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
extern unsigned int *auStack_20;
extern int fn_82579DB0();
extern int fn_82F67FE8();
extern unsigned int lbl_82195518;


undefined8 fn_8257A0B0(undefined8 param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined8 auStack_20 [4];
  
  pcVar2 = (char *)fn_82579DB0();
  pcVar4 = pcVar2;
  if (pcVar2 != (char *)0x0) {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if ((int)pcVar4 - (int)pcVar2 != 1) {
      auStack_20[0] = lbl_82195518;
      iVar3 = fn_82F67FE8(pcVar2,0xffffffff821c5508,auStack_20);
      if (iVar3 == 1) {
        return auStack_20[0];
      }
    }
  }
  return param_1;
}

