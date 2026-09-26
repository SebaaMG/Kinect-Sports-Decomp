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


undefined8 fn_82874A10(int param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 4);
  iVar1 = 0;
  while( true ) {
    if (pcVar2 == *(char **)(param_1 + 8)) {
      return 0xffffffffa0260000;
    }
    if (*pcVar2 == '\0') break;
    pcVar2 = pcVar2 + 0x70;
    iVar1 = iVar1 + 1;
  }
  *param_2 = iVar1;
  return 0x20260000;
}

