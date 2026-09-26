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
extern int fn_82C55350();
extern int fn_82F68CC0();
extern int fn_82F6E7A8();
extern unsigned int iStack_98;
extern unsigned int iStack_ac;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;


undefined8 fn_82C494E8(int param_1,uint param_2,ulonglong param_3,ulonglong param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar4;
  undefined8 uVar3;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  
  iVar1 = *(int *)(param_1 + 0x6070);
  if (*(int *)(iVar1 + 0x2c8) == 0) {
    if ((*(uint *)(param_1 + 0x5614) & 1 << (param_2 & 0x3f)) != 0) {
      uStack_b0 = *(undefined4 *)(param_1 + 0x5610);
      uStack_9c = (undefined4)param_3;
      uStack_a8 = *(undefined4 *)(param_1 + 0xb148);
      iStack_ac = param_1;
      uStack_a4 = param_2;
      uStack_a0 = (int)param_4;
      iStack_98 = param_5;
      uVar3 = (**(code **)(iVar1 + 0xc0))(&uStack_b0);
      return uVar3;
    }
  }
  else if ((3 < (int)param_2) && ((int)param_2 < 9)) {
    uVar2 = **(uint **)(param_1 + 0x6084);
    if ((*(uint **)(param_1 + 0x6084) == (uint *)0x0) || (*(uint *)(iVar1 + 0x56f8) <= uVar2)) {
      fn_82F6E7A8(0xffffffff820fbbbc,0xffffffff820fbbc8,0x1aa9);
      uVar3 = 0xffffffff820fbb38;
    }
    else {
      puVar4 = (undefined4 *)fn_82C55350(*(undefined4 *)(iVar1 + 0xa8));
      *(undefined4 **)((uVar2 + 2) * 4 + *(int *)(param_1 + 0x6084)) = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        fn_82F6E7A8(0xffffffff820fbbbc,0xffffffff820fbbc8,0x1aa4);
        uVar3 = 0xffffffff820fbb68;
      }
      else {
        **(int **)(param_1 + 0x6084) = uVar2 + 1;
        *puVar4 = 0;
        puVar4[1] = 3;
        if ((param_3 & 0xffffffff) == 0) {
          return 0;
        }
        if ((param_4 & 0xffffffff) == 0) {
          return 0;
        }
        if ((param_5 == 3) && ((param_4 & 0xffffffff) <= (ulonglong)*(uint *)(iVar1 + 0x56f4))) {
          *puVar4 = (int)param_4;
          puVar4[1] = 3;
          puVar4[2] = 0x123 - param_2;
          fn_82F68CC0(puVar4 + 3,param_3,param_4);
          return 0;
        }
        fn_82F6E7A8(0xffffffff820fbbbc,0xffffffff820fbbc8,0x1a9e);
        uVar3 = 0xffffffff820fbb70;
      }
    }
    fn_82F6E7A8(uVar3);
    fn_82F6E7A8(0xffffffff821cc86c);
  }
  return 0;
}

