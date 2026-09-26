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
extern int fn_82CC6160();
extern int fn_82EDC068();
extern int fn_82F2CD08();


undefined8 fn_82EDC118(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar5 = (ulonglong)uVar1;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  if (*(int *)(param_1 + 0x158) == 0) {
    if ((*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x28)) ||
       (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x2c))) {
      *(undefined4 *)(param_1 + 0x15c) = 1;
    }
    if ((*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x30)) ||
       (uVar1 != *(uint *)(param_1 + 0x34))) {
      *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 2;
    }
    *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 0x14);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x15c) = 3;
    *(uint *)(*(int *)(param_1 + 4) + 8) =
         ((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0);
    uVar5 = (longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 4) = *(undefined4 *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 4);
  uVar4 = fn_82EDC068(param_1,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
  *(undefined4 *)(iVar3 + 0x14) = uVar4;
  if (*(int *)(param_1 + 0x154) == 0) {
    fn_82F2CD08(param_1 + 0x40,*(undefined4 *)(param_1 + 0x10),
                 *(undefined4 *)(*(int *)(param_1 + 4) + 8),*(undefined4 *)(param_1 + 0x20),uVar5);
  }
  else {
    fn_82CC6160(param_1 + 0xcc);
  }
  return 1;
}

