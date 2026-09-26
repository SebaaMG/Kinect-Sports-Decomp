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
extern int fn_82A6CF00();
extern unsigned int lbl_8208EDB0;


undefined8 fn_82A6D090(int param_1,uint param_2,uint *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  if (param_2 < 0x19) {
    uVar2 = *(uint *)(param_1 + 0x28);
    if (uVar2 < param_2) {
      uVar3 = *(uint *)(param_1 + 0x30);
      if (uVar3 != 0) {
        uVar4 = 0x20 - uVar2;
        if (uVar3 <= 0x20 - uVar2) {
          uVar4 = uVar3;
        }
        uVar3 = uVar3 - uVar4;
        *(uint *)(param_1 + 0x30) = uVar3;
        *(uint *)(param_1 + 0x24) =
             *(int *)(param_1 + 0x24) << (uVar4 & 0x3f) |
             *(uint *)(param_1 + 0x2c) >> (uVar3 & 0x3f);
        *(uint *)(param_1 + 0x2c) = (1 << (uVar3 & 0x3f)) - 1U & *(uint *)(param_1 + 0x2c);
        *(uint *)(param_1 + 0x28) = uVar2 + uVar4;
      }
      uVar2 = *(uint *)(param_1 + 0x28);
      while ((uVar2 < 0x19 && (*(int *)(param_1 + 0x20) != 0))) {
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) << 8;
        uVar1 = **(undefined1 **)(param_1 + 0x1c);
        *(undefined1 **)(param_1 + 0x1c) = *(undefined1 **)(param_1 + 0x1c) + 1;
        uVar3 = (**(code **)(param_1 + 0x54))(uVar1);
        uVar2 = *(int *)(param_1 + 0x28) + 8;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
        *(uint *)(param_1 + 0x28) = uVar2;
        *(uint *)(param_1 + 0x24) = uVar3 & 0xff | *(uint *)(param_1 + 0x24);
      }
      if ((*(uint *)(param_1 + 0x28) < param_2) &&
         (uVar5 = fn_82A6CF00(param_1,2,param_2), (int)uVar5 < 0)) {
        return uVar5;
      }
    }
    uVar2 = *(int *)(param_1 + 0x28) - param_2;
    *(uint *)(param_1 + 0x28) = uVar2;
    *param_3 = *(uint *)(param_1 + 0x24) >> (uVar2 & 0x3f) & *(uint *)(&lbl_8208EDB0 + param_2 * 4);
  }
  else {
    uVar5 = 0xffffffff80070057;
  }
  return uVar5;
}

