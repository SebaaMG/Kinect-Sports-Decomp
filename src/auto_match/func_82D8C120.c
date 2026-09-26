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
#define CARRY8(a,b) ((((U64)(a)) + ((U64)(b))) < ((U64)(a)))


byte * fn_82D8C120(byte *param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar4;
  ulonglong uVar3;
  int iVar5;
  byte bVar6;
  
  piVar1 = *(int **)(param_2 + 0x10);
  if (piVar1 == (int *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  bVar6 = 1;
  iVar5 = piVar1[3];
  if ((*(char *)(param_2 + 0xe8) == '\x05') || (bVar2 = false, *(char *)(param_2 + 0xe8) == '\x04'))
  {
    bVar2 = true;
  }
  if ((!bVar2) && ((iVar5 == 10 || (iVar5 == 8)))) {
    piVar4 = (int *)(**(code **)(*piVar1 + 0x10))(piVar1);
    uVar3 = (**(code **)(*piVar4 + 4))();
    bVar6 = -!CARRY8(100 - uVar3,uVar3 ^ 0x80000000) & 1;
  }
  if ((iVar5 == 0x18) || (iVar5 == 7)) {
    iVar5 = (**(code **)(*(int *)(*(int *)(param_2 + 0x10) + 0x10) + 4))
                      (*(int *)(param_2 + 0x10) + 0x10);
    if (iVar5 < 0x65) goto LAB_82d8c248;
  }
  else if (iVar5 != 0xf) {
    if (iVar5 == 9) {
      uVar3 = (**(code **)(piVar1[4] + 4))(piVar1 + 4);
      bVar6 = -!CARRY8(100 - uVar3,uVar3 ^ 0x80000000) & bVar6;
    }
LAB_82d8c248:
    *param_1 = bVar6;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}

