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
extern int fn_82512C30();
extern int fn_82512CC8();


void fn_82512B70(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  iVar3 = fn_82512C30();
  piVar6 = *(int **)(iVar3 + 0x14);
  do {
    piVar5 = piVar6;
    if (piVar5 == *(int **)(iVar3 + 0x18)) goto LAB_82512c14;
    piVar6 = piVar5 + 3;
  } while (*piVar5 != param_1);
  piVar1 = *(int **)(iVar3 + 0x18);
  for (; piVar6 != piVar1; piVar6 = piVar6 + 3) {
    *piVar5 = *piVar6;
    piVar5[1] = piVar6[1];
    piVar5[2] = piVar6[2];
    piVar5 = piVar5 + 3;
  }
  iVar2 = *(int *)(iVar3 + 0x18);
  for (iVar4 = iVar2 + -0xc; iVar4 != iVar2; iVar4 = iVar4 + 0xc) {
  }
  *(int *)(iVar3 + 0x18) = iVar2 + -0xc;
LAB_82512c14:
  fn_82512CC8();
  return;
}

