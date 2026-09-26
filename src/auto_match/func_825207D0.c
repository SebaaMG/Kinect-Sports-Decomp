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


undefined8 fn_825207D0(longlong *param_1,int param_2,uint param_3)

{
  char *pcVar1;
  longlong *plVar2;
  uint uVar3;
  
  uVar3 = 7;
  if (7 < param_3) {
    plVar2 = param_1;
    do {
      if (*(longlong *)((param_2 - (int)param_1) + (int)plVar2) != *plVar2) {
        return 1;
      }
      uVar3 = uVar3 + 8;
      plVar2 = plVar2 + 1;
    } while (uVar3 < param_3);
  }
  uVar3 = uVar3 - 7;
  if (uVar3 < param_3) {
    pcVar1 = (char *)(uVar3 + param_2);
    do {
      if (*pcVar1 != pcVar1[(int)param_1 - param_2]) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      pcVar1 = pcVar1 + 1;
    } while (uVar3 < param_3);
  }
  return 0;
}

