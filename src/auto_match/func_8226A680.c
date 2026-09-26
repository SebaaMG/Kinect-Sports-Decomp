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


void fn_8226A680(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = 0;
  piVar4 = *(int **)(iVar1 + 700);
  iVar2 = *(int *)(iVar1 + 0x390) + 1;
  *(int *)(iVar1 + 0x390) = iVar2;
  for (; (piVar4 != (int *)0x0 && (*piVar4 != 0));
      piVar4 = (int *)(-(uint)(piVar4[1] != 0) & (uint)(piVar4 + 1))) {
    iVar3 = iVar3 + 1;
  }
  if (iVar2 == iVar3) {
    *(undefined4 *)(iVar1 + 0x390) = 0;
  }
  *(undefined4 *)(iVar1 + 0x2b8) = 1;
  return;
}

