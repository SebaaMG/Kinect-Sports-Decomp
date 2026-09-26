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
extern int fn_82B7BD28();


void fn_82BA71F8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = 4;
  if (*(char *)(param_1 + 5) == '\0') {
    uVar4 = 2;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x5a8);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x1c);
  piVar3 = puVar2 + 1;
  *puVar2 = uVar1;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *piVar3 = param_2;
    puVar2[2] = uVar4;
    puVar2[3] = 1;
    puVar2[6] = 0;
  }
  piVar3[3] = param_1;
  piVar3[2] = 1;
  piVar3[4] = 0;
  return;
}

