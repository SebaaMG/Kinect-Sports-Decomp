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
extern int fn_82F66570();
extern int fn_82F6B0C0();


undefined8 fn_82E1D068(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = param_2;
  if (*(char *)(param_1 + 0x18) != '\0') {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = pcVar4 + (-1 - (int)param_2);
    pcVar5 = param_3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + (-1 - (int)param_3);
    if (((int)pcVar4 < (int)pcVar5) && (iVar3 = 0, 0 < (int)pcVar5)) {
      do {
        iVar2 = fn_82F66570(param_3 + iVar3,0x2e);
        if (((char *)((iVar2 - (int)param_3) - iVar3) == pcVar4) &&
           (iVar3 = fn_82F6B0C0(param_3 + iVar3,param_2,pcVar4), iVar3 == 0)) {
          return 1;
        }
        iVar3 = (iVar2 - (int)param_3) + 1;
      } while (iVar3 < (int)pcVar5);
    }
  }
  return 0;
}

