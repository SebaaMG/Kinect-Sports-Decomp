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
extern int fn_828223C8();
extern int fn_82F672D8();


void fn_8282D970(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int aiStack_20 [2];
  
  fn_82F672D8(param_1,0xffffffff8201ed64,4);
  fn_82F672D8(param_1 + 4,0xffffffff8201ed6c,0x10);
  pcVar3 = (char *)0x0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(char *)(param_1 + 0x52) = (char)*(undefined4 *)(param_1 + 0x3dc);
  if (*(char *)(param_1 + 0x3ed) != '\0') {
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  iVar2 = param_1 + 0x2f4;
  while( true ) {
    *(char **)(param_1 + 0x54) = pcVar3;
    fn_828223C8(iVar2,aiStack_20);
    if (aiStack_20[0] == 0) break;
    pcVar3 = *(char **)(aiStack_20[0] + 8);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = pcVar3 + (*(int *)(param_1 + 0x54) - (int)*(char **)(aiStack_20[0] + 8));
    iVar2 = aiStack_20[0];
  }
  return;
}

