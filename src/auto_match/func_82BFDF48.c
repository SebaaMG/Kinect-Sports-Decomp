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
extern int fn_82BFDD90();
extern int fn_82BFEB30();
extern U64 storeWordConditionalIndexed();


void fn_82BFDF48(longlong param_1,undefined8 param_2,undefined8 param_3,code *param_4,int param_5,
                  ulonglong param_6,undefined8 param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  char in_RESERVE;
  byte in_cr0;
  
  iVar2 = (int)param_1;
  uVar7 = 0;
  if (*(int *)(iVar2 + 0x24) == 0) {
    fn_82BFDD90();
  }
  else {
    iVar3 = fn_82BFDD90();
    if (iVar3 == 0x102) {
      if (param_5 != 0) {
        lVar5 = 1000;
        uVar4 = uVar7;
        do {
          do {
            uVar4 = uVar4 - 1;
          } while (-1 < (longlong)uVar4);
          if ((int)uVar7 < 0x200) {
            uVar7 = (uVar7 & 0x7fffffff) * 2 + 1;
          }
          iVar3 = fn_82BFDD90(param_1,param_2);
          if (iVar3 != 0x102) {
            return;
          }
          lVar5 = lVar5 + -1;
          in_cr0 = (lVar5 == 0) << 1;
          uVar4 = uVar7;
        } while (lVar5 != 0);
      }
      lVar5 = param_1 + 0x20;
      do {
        puVar6 = (uint *)lVar5;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((ulonglong)*puVar6 + 1,0,lVar5);
          *puVar6 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      iVar3 = fn_82BFDD90(param_1,param_2);
      while (iVar3 == 0x102) {
        uVar4 = uVar7;
        if (param_5 != 0) {
          do {
            uVar4 = uVar4 - 1;
            in_cr0 = (uVar4 == 0) << 1;
          } while (-1 < (longlong)uVar4);
          if ((int)uVar7 < 0x200) {
            uVar7 = (uVar7 & 0x7fffffff) * 2 + 1;
          }
        }
        if (param_4 == (code *)0x0) {
          if ((param_6 & 0xffffffff) == 0) {
            iVar3 = 0x102;
          }
          else {
            iVar3 = fn_82BFEB30(*(undefined4 *)(iVar2 + 0x24),param_6,param_7);
          }
        }
        else {
          iVar3 = (*param_4)(param_3,*(undefined4 *)(iVar2 + 0x24),param_6,param_7);
        }
        if (iVar3 != 0) {
          do {
            if (in_RESERVE != '\0') {
              uVar1 = storeWordConditionalIndexed((ulonglong)*puVar6 - 1,0,lVar5);
              *puVar6 = uVar1;
              in_cr0 = 2;
            }
          } while (!(bool)(in_cr0 >> 1 & 1));
          return;
        }
        iVar3 = fn_82BFDD90(param_1,param_2);
      }
      do {
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((ulonglong)*puVar6 - 1,0,lVar5);
          *puVar6 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
  }
  return;
}

