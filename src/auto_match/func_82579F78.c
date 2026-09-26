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
extern int fn_82579DB0();
extern int fn_82F65AC0();


bool fn_82579F78(void)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar3 = (char *)fn_82579DB0();
  pcVar5 = pcVar3;
  if (pcVar3 != (char *)0x0) {
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (((int)pcVar5 - (int)pcVar3 != 1) &&
       (iVar4 = fn_82F65AC0(0xffffffff82196f18,pcVar3), iVar4 != 0)) {
      pcVar5 = "1";
      do {
        cVar1 = *pcVar5;
        cVar2 = *pcVar3;
        if (cVar1 == '\0') break;
        pcVar5 = pcVar5 + 1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 == cVar2);
      return cVar1 == cVar2;
    }
  }
  return true;
}

