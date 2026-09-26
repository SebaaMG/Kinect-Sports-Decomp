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
extern int fn_829302D0();
extern int fn_82F691F0();


undefined8 fn_829020B8(int param_1,int param_2)

{
  int iVar2;
  undefined8 uVar1;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)(param_2 + 0x14) == 0) || (*(int *)(param_2 + 0x38) == 0)) ||
     (*(int *)(param_2 + 0x50) != 0)) {
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x4c) = 0;
    if (*(int *)(param_2 + 0x14) != 0) {
      uVar3 = 0;
      do {
        uVar4 = *(int *)(*(int *)(*(int *)((*(int *)(param_2 + 0x10) + uVar3) * 4 +
                                          *(int *)(param_1 + 0x18)) * 4 +
                                 *(int *)(*(int *)(param_1 + 8) + 0x14)) + 0x70) + 1;
        if (*(uint *)(param_2 + 0x4c) < uVar4) {
          *(uint *)(param_2 + 0x4c) = uVar4;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_2 + 0x14));
    }
    iVar2 = fn_829302D0(*(int *)(param_2 + 0x4c) << 2,0x10);
    *(int *)(param_2 + 0x50) = iVar2;
    if (iVar2 != 0) {
      iVar2 = fn_829302D0(*(int *)(param_2 + 0x14) << 2,0x10);
      *(int *)(param_2 + 0x54) = iVar2;
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(undefined4 *)(param_2 + 0x50),0,*(int *)(param_2 + 0x4c) << 2);
      }
    }
    uVar1 = 0xffffffff8007000e;
  }
  return uVar1;
}

