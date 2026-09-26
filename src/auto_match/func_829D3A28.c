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


undefined8 fn_829D3A28(char *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + (-1 - (int)param_1);
  param_2[0x14] = (int)pcVar4;
  if (pcVar4 < (char *)0x14) {
    uVar3 = 0;
    piVar2 = param_2;
    if (pcVar4 != (char *)0x0) {
      do {
        cVar1 = param_1[uVar3];
        *piVar2 = cVar1 + -0x30;
        if (3 < cVar1 + -0x30) {
          return 0xffffffff80070057;
        }
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar3 < (uint)param_2[0x14]);
    }
    return 0;
  }
  return 0xffffffff8007000e;
}

