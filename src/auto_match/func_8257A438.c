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
extern int fn_82F66368();
extern int fn_82F668D8();


void fn_8257A438(char *param_1,undefined1 *param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  iVar4 = 0;
  *param_2 = 0;
  bVar2 = false;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = pcVar3 + (-1 - (int)param_1);
  do {
    if (pcVar3 < (char *)0x3) {
LAB_8257a4c8:
      pcVar3 = param_1;
      if (!bVar2) {
        fn_82F66368(param_2,0x104,0xffffffff821c135c,0x103);
        pcVar5 = param_1;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if ((pcVar5 + (-1 - (int)param_1) != (char *)0x0) &&
           (param_2[(int)(pcVar5 + (-1 - (int)param_1) + -1)] != '\\')) {
          fn_82F668D8(param_2,0x104,0xffffffff821c5510,1);
        }
      }
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      fn_82F668D8(param_2,0x104,param_1,pcVar3 + (-1 - (int)param_1));
      return;
    }
    if (param_1[iVar4] == ':') {
      bVar2 = true;
      goto LAB_8257a4c8;
    }
    iVar4 = iVar4 + 1;
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = pcVar3 + ((-1 - (int)param_1) - iVar4);
  } while( true );
}

