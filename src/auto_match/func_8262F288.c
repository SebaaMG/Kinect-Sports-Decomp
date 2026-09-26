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
extern int fn_82529320();
extern int fn_825298E8();
extern int fn_8288B760();


void fn_8262F288(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  
  piVar1 = *(int **)(param_1 + 0x314);
  for (piVar4 = *(int **)(param_1 + 0x310); piVar4 < piVar1; piVar4 = piVar4 + 2) {
    iVar2 = *piVar4;
    if (*(int *)(iVar2 + 0x20) == 0) {
      cVar5 = *(int *)(iVar2 + 0x24) != 0;
    }
    else {
      cVar5 = fn_8288B760();
    }
    if (((cVar5 != '\0') && ((param_2 == 0 || ((*(uint *)(iVar2 + 0xb20) & param_2) != 0)))) &&
       ((*(int *)(iVar2 + 0xb1c) != 0 || (*(int *)(iVar2 + 0xb20) == 0)))) {
      fn_82529320(iVar2,1);
    }
  }
  iVar2 = param_1 + 1000;
  while (iVar3 = iVar2, iVar2 = *(int *)(iVar3 + 4), iVar2 != 0) {
    if (*(int *)(iVar2 + -0x10) == 0) {
      cVar5 = *(int *)(iVar2 + -0xc) != 0;
    }
    else {
      cVar5 = fn_8288B760();
    }
    if (((cVar5 != '\0') && ((param_2 == 0 || ((*(uint *)(iVar2 + 0xaf0) & param_2) != 0)))) &&
       ((*(int *)(iVar2 + 0xaec) != 0 || (*(int *)(iVar2 + 0xaf0) == 0)))) {
      fn_825298E8(iVar2 + -0x30);
      iVar2 = iVar3;
    }
  }
  return;
}

