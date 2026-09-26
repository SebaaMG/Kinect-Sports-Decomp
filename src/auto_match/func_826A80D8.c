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
extern int fn_8267C4F0();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696D38();


void fn_826A80D8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar5;
  int *piVar6;
  undefined8 uVar4;
  undefined4 *puStack_30;
  undefined4 *apuStack_2c [11];
  
  if (1 < *(int *)(param_1 + 0x1c)) {
    iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x18) + 0x74) + 0x40))();
    piVar6 = (int *)(**(code **)(*(int *)(iVar5 + 8) + 0xc))(iVar5 + 8,0x1b);
    if (piVar6 != (int *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,1);
      fn_82696D38(apuStack_2c,uVar4,uVar1,0xffffffffffffffff,0);
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar2 = *apuStack_2c[0];
      uVar4 = fn_826957D0(param_1,0);
      fn_82696D38(&puStack_30,uVar4,uVar1,0xffffffffffffffff,0);
      (**(code **)(*piVar6 + 100))(piVar6,iVar5,*puStack_30,uVar2);
      uVar3 = puStack_30[2];
      puStack_30[2] = (int)((ulonglong)uVar3 - 1);
      if ((ulonglong)uVar3 - 1 == 0) {
        fn_826944C8(puStack_30);
      }
      uVar3 = apuStack_2c[0][2];
      apuStack_2c[0][2] = (int)((ulonglong)uVar3 - 1);
      if ((ulonglong)uVar3 - 1 == 0) {
        fn_826944C8(apuStack_2c[0]);
      }
      fn_8267C4F0(piVar6);
    }
  }
  return;
}

