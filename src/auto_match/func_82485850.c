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
extern int fn_8225F160();
extern int fn_82486958();


void fn_82485850(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(param_1 + 0x234);
  param_2 = param_2 - (int)pcVar4;
  do {
    if ((char *)(param_1 + 0x334) <= pcVar4) break;
    cVar1 = pcVar4[param_2];
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 == (char *)(param_1 + 0x334)) {
    pcVar4[-1] = '\0';
  }
  uVar2 = fn_82486958();
  iVar3 = fn_8225F160();
  *(undefined4 *)(iVar3 + 0xc) = uVar2;
  *(undefined4 *)(iVar3 + 0x18) = uVar2;
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined4 *)(iVar3 + 0x28) = 4;
  return;
}

