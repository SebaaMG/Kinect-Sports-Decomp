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
extern int fn_822315A0();
extern int fn_8223AAC0();


void fn_8232C528(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar4 = *(int **)(param_1 + 100);
  if (piVar4 != (int *)0x0) {
    if (piVar4[1] == param_2) {
      return;
    }
    (**(code **)(*piVar4 + 8))();
  }
  piVar4 = *(int **)(param_1 + 0x54);
  while( true ) {
    if (piVar4 == *(int **)(param_1 + 0x58)) {
      return;
    }
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 4) == param_2) break;
    piVar4 = piVar4 + 2;
  }
  iVar2 = piVar4[1];
  iVar6 = 0;
  iVar5 = 0;
  if ((iVar2 != 0) && (cVar3 = fn_8223AAC0(iVar2), cVar3 != '\0')) {
    iVar6 = iVar2;
    iVar5 = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar6;
  *(int *)(param_1 + 100) = iVar5;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  (**(code **)(**(int **)(param_1 + 100) + 4))();
  return;
}

