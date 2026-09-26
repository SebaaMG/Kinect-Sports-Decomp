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


void fn_8232DA08(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x27c);
  if (*(int *)(iVar3 + 0x5c0) == *(int *)(iVar3 + 0x6c4)) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  piVar5 = *(int **)(iVar3 + 100);
  if (piVar5 != (int *)0x0) {
    if (piVar5[1] == 2) {
      return;
    }
    (**(code **)(*piVar5 + 8))();
  }
  piVar5 = *(int **)(iVar3 + 0x54);
  while( true ) {
    if (piVar5 == *(int **)(iVar3 + 0x58)) {
      return;
    }
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 4) == 2) break;
    piVar5 = piVar5 + 2;
  }
  iVar2 = piVar5[1];
  iVar7 = 0;
  iVar6 = 0;
  if ((iVar2 != 0) && (cVar4 = fn_8223AAC0(iVar2), cVar4 != '\0')) {
    iVar7 = iVar2;
    iVar6 = iVar1;
  }
  iVar1 = *(int *)(iVar3 + 0x68);
  *(int *)(iVar3 + 0x68) = iVar7;
  *(int *)(iVar3 + 100) = iVar6;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  (**(code **)(**(int **)(iVar3 + 100) + 4))();
  return;
}

