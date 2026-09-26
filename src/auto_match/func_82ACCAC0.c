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
extern int fn_82AC8910();
extern int fn_82ACA998();
extern int fn_82ACB390();
extern int fn_82ACC490();


void fn_82ACCAC0(int param_1,int param_2,undefined8 param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar4;
  ulonglong uVar3;
  uint uVar5;
  
  if ((*(int *)(param_2 + 0x58) != 0) &&
     (uVar4 = fn_82AC8910(*(int *)(param_2 + 0x58),0,*(undefined4 *)(param_1 + 0x2a0)),
     uVar4 <= *(int *)(param_1 + 0x29c) - 1U)) {
    do {
      iVar2 = *(int *)(uVar4 * 4 + *(int *)(param_1 + 0x2c4));
      for (puVar1 = *(uint **)(iVar2 + 4); (puVar1 != (uint *)0x0 && ((*puVar1 & 0xe000000) == 0));
          puVar1 = (uint *)puVar1[2]) {
      }
      uVar5 = *puVar1;
      uVar3 = fn_82ACA998(param_1,param_2,iVar2);
      uVar3 = (ulonglong)(uVar5 >> 0xd) & 0xff0 | uVar3 & 0xffffffff0000000f;
      fn_82ACC490(param_3,uVar3);
      fn_82ACB390(param_3,uVar3,iVar2);
      uVar5 = *(int *)(param_1 + 0x29c) - 1;
      if (uVar4 == uVar5) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = fn_82AC8910(*(undefined4 *)(param_2 + 0x58),uVar4 + 1,
                             *(undefined4 *)(param_1 + 0x2a0));
      }
    } while (uVar4 <= uVar5);
  }
  return;
}

