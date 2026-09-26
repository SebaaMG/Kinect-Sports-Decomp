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
extern int fn_82549960();
extern int fn_8265C9E0();


undefined8 fn_824FA3B0(int param_1,int param_2)

{
  ulonglong uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  uVar1 = fn_8265C9E0(0x200);
  if ((uVar1 & 0xffffffff) == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)fn_82549960(uVar1,param_2 + 0xa4,0,0,0,0);
  }
  *(int **)(param_1 + 0x200) = piVar2;
  uVar3 = (**(code **)(*piVar2 + 0x4c))();
  *(undefined4 *)(param_1 + 0x204) = uVar3;
  puVar4 = (undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0xd0);
  puVar5 = (undefined4 *)(param_2 + 0xb8);
  lVar6 = 5;
  do {
    puVar4[-4] = puVar5[-4];
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
    *puVar4 = *puVar5;
    *(undefined4 *)(param_1 + 0x20c) = 0;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined4 *)(param_1 + 0x70) = 0;
  return 1;
}

