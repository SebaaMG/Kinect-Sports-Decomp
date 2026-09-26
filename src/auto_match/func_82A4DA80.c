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
extern int fn_82F68CC0();
extern U64 storeWordConditionalIndexed();


void fn_82A4DA80(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  undefined8 in_MSR;
  char in_RESERVE;
  byte in_cr0;
  
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 200) == 1) {
    lVar5 = param_1 + 0x98;
    do {
      uVar2 = *(uint *)(iVar4 + 0xa0);
      do {
        puVar6 = (uint *)lVar5;
        uVar1 = *puVar6;
        if (uVar1 != uVar2 * 0x18 + iVar4 + 0x50) {
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)uVar1,0,lVar5);
            *puVar6 = uVar2;
            in_cr0 = 2;
          }
          break;
        }
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed
                            (((ulonglong)uVar2 ^ 1) * 0x18 + param_1 + 0x50,0,lVar5);
          *puVar6 = uVar3;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      sync(1);
    } while (uVar1 == 0xffffffff);
    *(uint *)(iVar4 + 0xa0) = *(uint *)(iVar4 + 0xa0) ^ 1;
    param_5 = in_MSR;
  }
  fn_82F68CC0(param_2 + 3,*(undefined4 *)(((*(uint *)(iVar4 + 0xa0) ^ 1) + 4) * 0x18 + iVar4),
               ((longlong)*(int *)(iVar4 + 0x20) * (longlong)*(int *)(iVar4 + 0x1c) & 0x3fffffffU)
               << 2,param_4,param_5);
  param_2[1] = *(undefined4 *)((*(uint *)(iVar4 + 0xa0) ^ 1) * 0x18 + iVar4 + 0x54);
  *param_2 = *(undefined4 *)((*(uint *)(iVar4 + 0xa0) ^ 1) * 0x18 + iVar4 + 0x50);
  param_2[2] = *(undefined4 *)((*(uint *)(iVar4 + 0xa0) ^ 1) * 0x18 + iVar4 + 0x58);
  *(undefined4 *)(iVar4 + 200) = 0;
  return;
}

