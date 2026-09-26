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
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82D7E268();
extern int fn_82D7EDB0();
extern int fn_82D9D3A8();
extern int fn_82DACF28();
extern unsigned int lbl_821415C4;


void fn_82D8AD50(undefined4 *param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  puVar2 = (undefined4 *)param_1[0x26];
  *param_1 = &lbl_821415C4;
  if (puVar2 != (undefined4 *)0x0) {
    iVar5 = 0;
    if (*(ushort *)(param_1 + 0x81) != 0) {
      piVar6 = (int *)param_1[0x80];
      do {
        if ((undefined4 *)*piVar6 == puVar2 + 2) goto LAB_82d8adb4;
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar5 < (int)(uint)*(ushort *)(param_1 + 0x81));
    }
    iVar5 = -1;
LAB_82d8adb4:
    *(undefined4 *)(iVar5 * 4 + param_1[0x80]) = 0;
    (**(code **)*puVar2)(puVar2,1);
    param_1[0x26] = 0;
  }
  fn_82DACF28(param_1);
  iVar5 = param_1[0x85];
  if (iVar5 != 0) {
    fn_82D7EDB0(iVar5);
    iVar4 = fn_82CE5410();
    (**(code **)(**(int **)(iVar4 + 0x10) + 8))(*(int **)(iVar4 + 0x10),iVar5,0x10);
  }
  if (param_1[0x84] != 0) {
    fn_82CE4118();
  }
  param_1[0x84] = 0;
  uVar1 = *(ushort *)((int)param_1 + 0x20e);
  if ((uVar1 & 0x8000) == 0) {
    uVar3 = param_1[0x82];
    iVar5 = fn_82CE5410();
    (**(code **)(**(int **)(iVar5 + 0x10) + 8))
              (*(int **)(iVar5 + 0x10),uVar3,((ulonglong)uVar1 & 0x3fff) << 2);
  }
  uVar1 = *(ushort *)((int)param_1 + 0x206);
  if ((uVar1 & 0x8000) == 0) {
    uVar3 = param_1[0x80];
    iVar5 = fn_82CE5410();
    (**(code **)(**(int **)(iVar5 + 0x10) + 8))
              (*(int **)(iVar5 + 0x10),uVar3,((ulonglong)uVar1 & 0x3fff) << 2);
  }
  fn_82D9D3A8(param_1 + 0x38);
  iVar5 = fn_82CE5410();
  piVar6 = *(int **)(iVar5 + 0x10);
  param_1[0x31] = 0;
  if ((param_1[0x32] & 0x80000000) == 0) {
    (**(code **)(*piVar6 + 0x10))(piVar6,param_1[0x30],param_1[0x32] & 0x3fffffff,1);
  }
  param_1[0x30] = 0;
  param_1[0x32] = 0x80000000;
  iVar5 = fn_82CE5410();
  piVar6 = *(int **)(iVar5 + 0x10);
  param_1[0x2e] = 0;
  if ((param_1[0x2f] & 0x80000000) == 0) {
    (**(code **)(*piVar6 + 0x10))(piVar6,param_1[0x2d],param_1[0x2f] & 0x3fffffff,4);
  }
  param_1[0x2d] = 0;
  param_1[0x2f] = 0x80000000;
  uVar1 = *(ushort *)((int)param_1 + 0xb2);
  if ((uVar1 & 0x8000) == 0) {
    uVar3 = param_1[0x2b];
    iVar5 = fn_82CE5410();
    (**(code **)(**(int **)(iVar5 + 0x10) + 8))
              (*(int **)(iVar5 + 0x10),uVar3,
               (((ulonglong)uVar1 & 0x3fff) + ((ulonglong)uVar1 & 0x3fff) * 2) * 0x10);
  }
  fn_82D7E268(param_1);
  return;
}

