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
extern U64 storeWordConditionalIndexed();


void fn_82A4D0E8(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  char in_RESERVE;
  byte in_cr0;
  
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x50) == 1) {
    lVar6 = param_1 + 0x40;
    do {
      uVar2 = *(uint *)(iVar4 + 0x48);
      do {
        puVar7 = (uint *)lVar6;
        uVar1 = *puVar7;
        if (uVar1 != uVar2 * 0xc + iVar4 + 0x28) {
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)uVar1,0,lVar6);
            *puVar7 = uVar2;
            in_cr0 = 2;
          }
          break;
        }
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed(((ulonglong)uVar2 ^ 1) * 0xc + param_1 + 0x28,0,lVar6)
          ;
          *puVar7 = uVar3;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      sync(1);
    } while (uVar1 == 0xffffffff);
    *(uint *)(iVar4 + 0x48) = *(uint *)(iVar4 + 0x48) ^ 1;
  }
  iVar5 = (*(uint *)(iVar4 + 0x48) ^ 1) * 0xc + iVar4;
  *param_2 = *(undefined4 *)(iVar5 + 0x28);
  param_2[1] = *(undefined4 *)(iVar5 + 0x2c);
  param_2[2] = *(undefined4 *)(iVar5 + 0x30);
  *(undefined4 *)(iVar4 + 0x50) = 0;
  return;
}

