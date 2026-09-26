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


void fn_82A77200(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  char in_RESERVE;
  byte in_cr0;
  
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0xf8) == 1) {
    lVar6 = param_1 + 0xf0;
    do {
      uVar2 = *(uint *)(iVar5 + 0xf4);
      do {
        puVar7 = (uint *)lVar6;
        uVar1 = *puVar7;
        if (uVar1 != (uVar2 + 0xd) * 0x10 + iVar5) {
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)uVar1,0,lVar6);
            *puVar7 = uVar2;
            in_cr0 = 2;
          }
          break;
        }
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed
                            (((ulonglong)((uVar2 ^ 1) + 0xd) & 0xfffffff) * 0x10 + param_1,0,lVar6);
          *puVar7 = uVar4;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      sync(1);
    } while (uVar1 == 0);
    *(uint *)(iVar5 + 0xf4) = *(uint *)(iVar5 + 0xf4) ^ 1;
  }
  iVar3 = ((*(uint *)(iVar5 + 0xf4) ^ 1) + 0xd) * 0x10;
  *param_2 = *(undefined8 *)(iVar3 + iVar5);
  param_2[1] = *(undefined8 *)(iVar3 + iVar5 + 8);
  *(undefined4 *)(iVar5 + 0xf8) = 0;
  return;
}

