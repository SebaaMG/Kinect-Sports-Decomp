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
extern int fn_82C4B368();
extern int fn_82C52CA0();
extern int fn_82C53AE8();


undefined8 fn_82C4D2F0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  *(undefined4 *)(param_1 + 0x5630) = 1;
  fn_82C52CA0();
  iVar1 = *(int *)(param_1 + 0x9c);
  iVar2 = *(int *)(param_1 + 0xa0);
  uVar7 = fn_82C4B368(param_1,0,0);
  if ((int)uVar7 == 0) {
    iVar3 = *(int *)(param_1 + 0x9c);
    if ((iVar3 <= *(int *)(param_1 + 0x5628)) &&
       (iVar4 = *(int *)(param_1 + 0xa0), iVar4 <= *(int *)(param_1 + 0x562c))) {
      if ((iVar1 != iVar3) || (iVar2 != iVar4)) {
        *(int *)(param_1 + 0x5644) = iVar1;
        *(int *)(param_1 + 0x5648) = iVar2;
      }
      if ((iVar3 == iVar1) && (iVar4 == iVar2)) {
        *(undefined4 *)(param_1 + 0x5580) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x5580) = 1;
        *(int *)(param_1 + 0xb0c8) = *(int *)(param_1 + 0xb0c8) + 1;
      }
      uVar7 = fn_82C53AE8(param_1);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      uVar5 = *(uint *)(param_1 + 0x55e8);
      *(undefined4 *)(param_1 + 0x5630) = 1;
      *(undefined4 *)(param_1 + 0xe90) = 1;
      if (0 < (int)uVar5) {
        uVar6 = *(uint *)(param_1 + 0x55e0);
        trapWord(6,(ulonglong)uVar5,0);
        *(undefined4 *)(param_1 + 0x55e8) = 0;
        *(undefined4 *)(param_1 + 0x55e0) = 0;
        *(uint *)(param_1 + 0x55e4) = uVar6 / uVar5;
        return uVar7;
      }
      *(undefined4 *)(param_1 + 0x55e4) = 1;
      *(undefined4 *)(param_1 + 0x55e8) = 0;
      *(undefined4 *)(param_1 + 0x55e0) = 0;
      return 0;
    }
    uVar7 = 1;
  }
  *(int *)(param_1 + 0xa0) = iVar2;
  *(int *)(param_1 + 0x9c) = iVar1;
  return uVar7;
}

