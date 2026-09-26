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


undefined8 fn_82EF3A68(int param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    pcVar2 = *(char **)(param_1 + 0x48);
    lVar4 = (ulonglong)*(uint *)(param_1 + 0x54) + 0x28;
    pcVar3 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      lVar4 = (ulonglong)(uint)((int)pcVar3 - (int)pcVar2) + lVar4;
    }
    pcVar2 = *(char **)(param_1 + 0x4c);
    pcVar3 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      lVar4 = (ulonglong)(uint)((int)pcVar3 - (int)pcVar2) + lVar4;
    }
    pcVar2 = *(char **)(param_1 + 0x58);
    pcVar3 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      lVar4 = (ulonglong)(uint)((int)pcVar3 - (int)pcVar2) + lVar4;
    }
    if (param_2 != (longlong *)0x0) {
      *param_2 = lVar4;
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = lVar4;
    }
    *(longlong *)(param_1 + 0x20) = lVar4;
    return 0;
  }
  return 0xffffffffc00d36b6;
}

