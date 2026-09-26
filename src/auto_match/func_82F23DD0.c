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
extern int fn_82BA02A8();
extern int fn_82F0F9A0();
extern int fn_82F23B08();
extern int fn_82F23C88();


void fn_82F23DD0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0x6d54) == 0) {
    iVar1 = *(int *)(param_1 + 0xaf0);
    if ((iVar1 != 0) && (iVar1 != 4)) {
      if (iVar1 == 2) {
        uVar3 = 0;
        if (*(int *)(param_1 + 0x2d8) != 0) {
          piVar4 = (int *)(*(int *)(param_1 + 0x1e54) + 4);
          do {
            lVar6 = 6;
            piVar5 = piVar4;
            do {
              if (0 < *piVar5) {
                *piVar5 = 1;
              }
              piVar5 = piVar5 + 1;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
            uVar3 = uVar3 + 1;
            piVar4 = piVar4 + 0x45;
          } while (uVar3 < *(uint *)(param_1 + 0x2d8));
        }
      }
LAB_82f23f00:
      fn_82F23B08(param_1);
      fn_82F23C88(param_1);
      return;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xaf0);
    if (*(int *)(param_1 + 0x7b38) == 0) {
      if ((iVar1 == 0) || (iVar1 == 4)) {
        fn_82BA02A8(param_1,0,*(undefined4 *)(param_1 + 0x2d4),*(undefined4 *)(param_1 + 0x4a94),
                     *(undefined4 *)(param_1 + 0x4a98),*(undefined4 *)(param_1 + 0x4a9c),
                     *(undefined4 *)(param_1 + 0x1e54));
        uVar2 = 0x13;
      }
      else {
        fn_82BA02A8(param_1,0,*(undefined4 *)(param_1 + 0x2d4),*(undefined4 *)(param_1 + 0x4a94),
                     *(undefined4 *)(param_1 + 0x4a98),*(undefined4 *)(param_1 + 0x4a9c),
                     *(undefined4 *)(param_1 + 0x1e54));
        uVar2 = 0x15;
      }
      goto LAB_82f23e14;
    }
    if ((iVar1 != 0) && (iVar1 != 4)) goto LAB_82f23f00;
  }
  uVar2 = 0xd;
LAB_82f23e14:
  fn_82F0F9A0(param_1,uVar2);
  return;
}

