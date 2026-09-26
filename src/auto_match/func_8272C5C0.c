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
extern unsigned int *auStack_28;
extern int fn_8267BE38();
extern int fn_8269A190();
extern int fn_82799E48();
extern int fn_82799E80();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern U64 storeWordConditionalIndexed();


undefined8 fn_8272C5C0(undefined8 param_1,int param_2,int param_3,char param_4)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  char in_RESERVE;
  byte bVar7;
  uint uStack_30;
  uint uStack_2c;
  uint auStack_28 [4];
  
  bVar7 = (param_4 == '\0') << 1;
  if (param_4 == '\0') {
    uVar3 = fn_82799E48(auStack_28,*(undefined4 *)(param_2 + 0xa0));
    fn_8269A190(param_1,(ulonglong)*(uint *)(param_3 + 0x78) + 0x254,uVar3);
    lVar4 = ((ulonglong)auStack_28[0] & 0xfffffffc) + 4;
    do {
      puVar5 = (uint *)lVar4;
      uVar6 = (ulonglong)*puVar5;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar6 - 1,0,lVar4);
        *puVar5 = uVar1;
        bVar7 = 2;
      }
    } while (!(bool)(bVar7 >> 1 & 1));
  }
  else {
    if ((*(int **)(param_2 + 0xd0) == (int *)0x0) || (bVar2 = true, **(int **)(param_2 + 0xd0) == 0)
       ) {
      bVar2 = false;
    }
    if (bVar2) {
      fn_8269A190(param_1,(ulonglong)*(uint *)(param_3 + 0x78) + 0x254,param_2 + 0xcc);
      return param_1;
    }
    bVar2 = (*(ushort *)(param_2 + 200) >> 1 & 1) == 0;
    bVar7 = bVar2 << 1;
    if (bVar2) {
      uVar3 = fn_82799E48(&uStack_2c,*(undefined4 *)(param_2 + 0xa0));
      fn_8269A190(param_1,(ulonglong)*(uint *)(param_3 + 0x78) + 0x254,uVar3);
      lVar4 = ((ulonglong)uStack_2c & 0xfffffffc) + 4;
      do {
        puVar5 = (uint *)lVar4;
        uVar6 = (ulonglong)*puVar5;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar6 - 1,0,lVar4);
          *puVar5 = uVar1;
          bVar7 = 2;
        }
      } while (!(bool)(bVar7 >> 1 & 1));
    }
    else {
      uVar3 = fn_82799E80(&uStack_30);
      fn_8269A190(param_1,(ulonglong)*(uint *)(param_3 + 0x78) + 0x254,uVar3);
      lVar4 = ((ulonglong)uStack_30 & 0xfffffffc) + 4;
      do {
        puVar5 = (uint *)lVar4;
        uVar6 = (ulonglong)*puVar5;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar6 - 1,0,lVar4);
          *puVar5 = uVar1;
          bVar7 = 2;
        }
      } while (!(bool)(bVar7 >> 1 & 1));
    }
  }
  if (uVar6 == 1) {
    fn_8267BE38();
  }
  return param_1;
}

