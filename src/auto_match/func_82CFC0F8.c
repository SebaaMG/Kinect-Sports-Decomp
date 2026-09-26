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


void fn_82CFC0F8(undefined1 *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar3 = param_3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = pcVar3 + (-1 - (int)param_3);
  if ((int)pcVar3 <= (int)(pcVar2 + (-1 - (int)param_2))) {
    iVar4 = 0;
    if (0 < (int)pcVar3) {
      do {
        if (param_2[(int)(pcVar2 + (-1 - (int)param_2) + (iVar4 - (int)pcVar3))] != param_3[iVar4])
        goto code_r0x82cfc140;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)pcVar3);
    }
    *param_1 = 1;
    return;
  }
code_r0x82cfc140:
  *param_1 = 0;
  return;
}

