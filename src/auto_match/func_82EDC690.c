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
extern int fn_82EDB498();
extern int fn_82EDB820();


undefined8
fn_82EDC690(int param_1,undefined8 param_2,undefined8 param_3,int *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)(param_1 + 0x15c);
  if (iVar1 == 0) {
    uVar3 = fn_82EDB498();
    return uVar3;
  }
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x160) == 0) {
      return 1;
    }
    uVar2 = *(uint *)(*(int *)(param_1 + 4) + 8);
    uVar4 = (ulonglong)uVar2;
    if ((int)uVar2 < 1) {
      uVar4 = -uVar4;
    }
    fn_82EDB820(param_1,*(int *)(param_1 + 0x160),param_2,*(undefined4 *)(param_1 + 0x28),
                    *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(*(int *)(param_1 + 4) + 4),uVar4
                    ,*(undefined4 *)(param_1 + 8));
    uVar3 = fn_82EDB498(param_1,*(undefined4 *)(param_1 + 0x160),param_3,param_4,param_5,param_6
                            ,param_7);
  }
  else if (iVar1 == 2) {
    if (*(int *)(param_1 + 0x164) == 0) {
      return 0xffffffff80004005;
    }
    uVar3 = fn_82EDB498(param_1,param_2,param_3,param_4,*(int *)(param_1 + 0x164),param_6,
                            param_7);
    fn_82EDB820(param_1,param_5,*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x20)
                    ,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x30),
                    *(undefined4 *)(param_1 + 0x34),0);
  }
  else {
    if (iVar1 != 3) {
      return 1;
    }
    if (*(int *)(param_1 + 0x164) == 0) {
      return 0xffffffff80004005;
    }
    if (*(int *)(param_1 + 0x160) == 0) {
      return 0xffffffff80004005;
    }
    uVar2 = *(uint *)(*(int *)(param_1 + 4) + 8);
    uVar4 = (ulonglong)uVar2;
    if ((int)uVar2 < 1) {
      uVar4 = -uVar4;
    }
    fn_82EDB820(param_1,*(int *)(param_1 + 0x160),param_2,*(undefined4 *)(param_1 + 0x28),
                    *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(*(int *)(param_1 + 4) + 4),uVar4
                    ,*(undefined4 *)(param_1 + 8));
    uVar3 = fn_82EDB498(param_1,*(undefined4 *)(param_1 + 0x160),param_3,param_4,
                            *(undefined4 *)(param_1 + 0x164),param_6,param_7);
    fn_82EDB820(param_1,param_5,*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x20)
                    ,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x30),
                    *(undefined4 *)(param_1 + 0x34),0);
  }
  if (*param_4 == 0) {
    return 0xffffffff80004005;
  }
  return uVar3;
}

