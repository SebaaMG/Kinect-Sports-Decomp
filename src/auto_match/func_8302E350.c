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
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_8302C580();
extern int fn_8302DD08();
extern int fn_8302EA08();
extern int fn_8302EB70();
extern int fn_83032BE0();


undefined8 fn_8302E350(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined4 *puVar6;
  int *piVar7;
  undefined8 uVar5;
  longlong lVar8;
  undefined2 uVar9;
  undefined2 auStack_30 [2];
  undefined1 auStack_2c [44];
  
  puVar6 = (undefined4 *)fn_8302EB70((ulonglong)*(uint *)(*(int *)(param_2 + 0x78) + 0x10) + 4);
  if (puVar6 != (undefined4 *)0x0) {
    fn_8302EA08(puVar6,param_1,1);
    bVar1 = *(byte *)((int)puVar6 + 10);
    lVar8 = (ulonglong)*(ushort *)(param_1 + 0x48) - 1;
    uVar4 = lVar8 - (((ulonglong)*(ushort *)(param_1 + 0x48) - 2) + (ulonglong)(lVar8 == 0)) & 1;
    bVar3 = (byte)(uVar4 << 7);
    *(byte *)((int)puVar6 + 10) = bVar3 | bVar1 & 0x7f;
    *(byte *)((int)puVar6 + 10) = (*(short *)(param_1 + 0x48) == 0) << 6 | bVar3 | bVar1 & 0x3f;
    if (uVar4 == 0) {
      uVar9 = 1;
    }
    else if ((*(byte *)((int)puVar6 + 10) & 0x40) == 0) {
      uVar9 = *(undefined2 *)(param_1 + 0x48);
    }
    else {
      uVar9 = 1;
    }
    *(undefined2 *)(puVar6 + 2) = uVar9;
    piVar7 = (int *)fn_8302DD08(*puVar6,*(undefined4 *)(param_2 + 8),auStack_30,auStack_2c,
                                      puVar6 + 1,puVar6 + 2);
    if (piVar7 != (int *)0x0) {
      fn_8302C580(param_2 + 0x28,auStack_30[0],1);
      uVar5 = (**(code **)(*piVar7 + 0x18))(piVar7,param_2);
      (**(code **)(*piVar7 + 8))(piVar7);
      return uVar5;
    }
    iVar2 = *(int *)(*(int *)(param_2 + 0x78) + 0x10);
    fn_83032BE0((ulonglong)*(uint *)(iVar2 + 8) - 0x14);
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -0x14;
  }
  uVar5 = (**(code **)(*param_1 + 0x154))(param_1,param_2);
  if ((int)uVar5 == 3) {
    uVar5 = 1;
  }
  return uVar5;
}

