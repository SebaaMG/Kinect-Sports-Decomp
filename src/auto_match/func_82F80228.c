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


undefined8 fn_82F80228(uint *param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar3 = param_1[1];
  if (uVar3 == 0) {
    return 1;
  }
  pcVar5 = (char *)(uVar3 + 8);
  if (*(char *)(uVar3 + 8) == '\0') {
    return 1;
  }
  if (uVar3 != param_2[1]) {
    pcVar4 = (char *)(param_2[1] + 8);
    do {
      cVar1 = *pcVar5;
      cVar2 = *pcVar4;
      if (cVar1 == '\0') break;
      pcVar5 = pcVar5 + 1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 != cVar2) {
      return 0;
    }
  }
  if ((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
     (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) {
    if ((*param_3 & 2) == 0) {
      return 1;
    }
    if ((*param_1 & 2) != 0) {
      return 1;
    }
  }
  return 0;
}

