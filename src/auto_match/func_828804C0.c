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
extern int fn_8287FF40();
extern int fn_828865B0();
extern int fn_828865C0();
extern int fn_82886608();


void fn_828804C0(int param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 0x7c);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return;
    }
    piVar1 = (int *)piVar2[0xc];
    lVar3 = fn_828865B0(piVar2);
    if (param_2 < lVar3) break;
    if (piVar2[0xc] != 0) {
      *(int *)(piVar2[0xc] + 0x34) = piVar2[0xd];
    }
    if (piVar2[0xd] != 0) {
      *(int *)(piVar2[0xd] + 0x30) = piVar2[0xc];
    }
    if (*(int **)(param_1 + 0x7c) == piVar2) {
      *(int *)(param_1 + 0x7c) = piVar2[0xc];
    }
    if (*(int **)(param_1 + 0x80) == piVar2) {
      *(int *)(param_1 + 0x80) = piVar2[0xd];
    }
    piVar2[0xc] = 0;
    piVar2[0xd] = 0;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
    piVar2[0xb] = 0;
    lVar3 = fn_828865C0(piVar2);
    if (((lVar3 < 0) || (lVar3 = fn_828865C0(piVar2), param_2 < lVar3)) ||
       (iVar4 = (**(code **)(*piVar2 + 0x3c))(piVar2), iVar4 == 0)) {
      iVar4 = fn_82886608(piVar2);
      if (iVar4 == 0) {
        *(longlong *)(piVar2 + 0x12) = param_2;
      }
      (**(code **)(*piVar2 + 0x34))(piVar2,param_2);
      fn_8287FF40(param_1 + 0x70,piVar2);
      piVar2 = piVar1;
    }
    else {
      (**(code **)*piVar2)(piVar2,1);
      piVar2 = piVar1;
    }
  }
  return;
}

