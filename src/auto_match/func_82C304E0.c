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


undefined8 fn_82C304E0(int param_1,int *param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0;
  if (*(int *)(param_1 + 0x28) == 0) goto LAB_82c30560;
  do {
    lVar6 = 0;
    uVar4 = *(int *)(param_1 + 0x24) << (0x20U - *(int *)(param_1 + 0x28) & 0x3f);
    uVar5 = (ulonglong)uVar4;
    if ((uVar4 & 0x80000000) != 0) {
      do {
        uVar2 = uVar5 << 1;
        uVar5 = uVar2 & 0xfffffffe;
        lVar6 = lVar6 + 1;
      } while ((uVar2 & 0x80000000) != 0);
    }
    *param_2 = *param_2 + (int)lVar6;
    lVar6 = ((ulonglong)*(uint *)(param_1 + 0x28) - lVar6) + -1;
    *(int *)(param_1 + 0x28) = (int)lVar6;
    if (-1 < lVar6) {
      return uVar7;
    }
LAB_82c30560:
    uVar4 = *(uint *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (uVar4 != 0) {
      uVar3 = 0x20;
      if (uVar4 < 0x21) {
        uVar3 = uVar4;
      }
      uVar4 = uVar4 - uVar3;
      *(uint *)(param_1 + 0x28) = uVar3;
      *(uint *)(param_1 + 0x30) = uVar4;
      *(uint *)(param_1 + 0x24) =
           *(uint *)(param_1 + 0x2c) >> (uVar4 & 0x3f) | *(int *)(param_1 + 0x24) << (uVar3 & 0x3f);
      *(uint *)(param_1 + 0x2c) = (1 << (uVar4 & 0x3f)) - 1U & *(uint *)(param_1 + 0x2c);
    }
    uVar4 = *(uint *)(param_1 + 0x28);
    while ((uVar4 < 0x19 && (*(int *)(param_1 + 0x20) != 0))) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) << 8;
      uVar1 = **(undefined1 **)(param_1 + 0x1c);
      *(undefined1 **)(param_1 + 0x1c) = *(undefined1 **)(param_1 + 0x1c) + 1;
      uVar3 = (**(code **)(param_1 + 0x54))(uVar1);
      uVar4 = *(int *)(param_1 + 0x28) + 8;
      *(uint *)(param_1 + 0x28) = uVar4;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      *(uint *)(param_1 + 0x24) = uVar3 & 0xff | *(uint *)(param_1 + 0x24);
    }
  } while ((*(int *)(param_1 + 0x28) != 0) ||
          (uVar7 = fn_82A6CF00(param_1,2,1), -1 < (int)uVar7));
  return uVar7;
}

