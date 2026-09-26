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
#define TBLr 0
extern int fn_82A595E8();
extern int fn_82A59E40();
extern int fn_82A5AC60();
extern int fn_82A5CC60();


longlong fn_82A5ADB0(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  piVar5 = (int *)(param_1 + 0x40);
  (**(code **)(*(int *)(param_1 + 0x40) + 8))(piVar5);
  lVar1 = TBLr;
  (**(code **)**(undefined4 **)(param_1 + 0x6c))();
  lVar3 = fn_82A5CC60(*(undefined4 *)(param_1 + 0x74));
  if (-1 < lVar3) {
    if (*(int *)(param_1 + 0x23c) != 0) {
      lVar3 = fn_82A5AC60(param_1);
    }
    if (-1 < (int)lVar3) {
      lVar3 = fn_82A595E8(*(undefined4 *)(param_1 + 0x70));
    }
  }
  puVar6 = *(undefined4 **)(param_1 + 0x22c);
  while (puVar6 != (undefined4 *)0x0) {
    if ((int)lVar3 < 0) goto LAB_82a5ae90;
    if (puVar6 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)*puVar6;
      puVar6 = (undefined4 *)puVar6[1];
    }
    lVar3 = (**(code **)*puVar4)();
  }
  if (-1 < (int)lVar3) {
    (**(code **)(**(int **)(param_1 + 0x6c) + 4))();
  }
LAB_82a5ae90:
  uVar2 = TBLr;
  if (uVar2 - lVar1 < 0x100000000) {
    fn_82A59E40(param_1,uVar2 - lVar1 & 0xffffffff,uVar2 & 0xffffffff);
  }
  (**(code **)(*piVar5 + 0x14))(piVar5);
  return lVar3;
}

