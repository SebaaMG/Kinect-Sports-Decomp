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


int * fn_824C5838(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int **ppiVar4;
  int *piVar5;
  int *piVar6;
  int *piStack_40;
  int *apiStack_3c [15];
  
  piVar1 = *(int **)(param_1 + 0x2c);
  piVar2 = *(int **)(param_1 + 0x28);
  apiStack_3c[0] = piVar1;
  piVar5 = piVar2;
  piVar6 = piVar2;
  if (piVar2 != piVar1) {
    do {
      piVar6 = piVar5;
      if (*piVar5 == *(int *)(param_1 + 0x38)) break;
      piVar5 = piVar5 + 2;
      piVar6 = piVar5;
    } while (piVar5 != piVar1);
  }
  while( true ) {
    piStack_40 = piVar5 + 2;
    if (piStack_40 == piVar1) {
      piStack_40 = piVar2;
    }
    ppiVar4 = apiStack_3c;
    if (piStack_40 != piVar6) {
      ppiVar4 = &piStack_40;
    }
    piVar5 = *ppiVar4;
    if (piVar5 == piVar1) break;
    iVar3 = (**(code **)(*(int *)*piVar5 + 0xc))();
    if (iVar3 != 0) {
      return piVar5;
    }
  }
  return (int *)(param_1 + 0x38);
}

