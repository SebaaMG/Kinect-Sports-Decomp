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
extern int fn_8302B6E0();


void fn_8302D178(int param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  if ((*(byte *)(param_1 + 0x11f) & 1) == 0) {
    iVar2 = fn_8302B6E0(param_1 + 0x8c,param_3);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x10c);
  }
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(iVar2 + 0xc) = cVar1;
  sVar4 = *(short *)(param_2 + 0xe) + -1;
  if (cVar1 == '\0') {
    sVar4 = *(short *)(param_2 + 0xe) + 1;
  }
  *(short *)(iVar2 + 0xe) = sVar4;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x88) + 0xc))();
  if ((sVar4 + 1 == iVar3) && ((*(byte *)(param_1 + 0x11f) & 4) == 0)) {
    *(undefined2 *)(iVar2 + 0xe) = 0xffff;
  }
  else if ((sVar4 == 0) && (*(char *)(iVar2 + 0xc) == '\0')) {
    *(undefined1 *)(iVar2 + 0xc) = 1;
  }
  return;
}

