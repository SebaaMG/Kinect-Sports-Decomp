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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_28;
extern int fn_822315A0();
extern int fn_823D22D0();
extern int fn_82517978();
extern int fn_82F57198();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;
extern U64 storeWordConditionalIndexed();


void fn_82F51FD0(int param_1,char param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack_30;
  int iStack_2c;
  undefined1 auStack_28 [4];
  int *piStack_24;
  
  puVar2 = (undefined4 *)fn_82F57198(auStack_28,*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  uStack_30 = 0;
  iStack_2c = 0;
  fn_82517978(&uStack_30,*puVar2,puVar2[1],0);
  iVar3 = fn_823D22D0(uStack_30);
  if (iStack_2c != 0) {
    fn_822315A0(iStack_2c);
  }
  if (ZEXT48(piStack_24) != 0) {
    lVar5 = ZEXT48(piStack_24) + 8;
    do {
      puVar6 = (uint *)lVar5;
      lVar4 = (ulonglong)*puVar6 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar4,0,lVar5);
        *puVar6 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar4 == 0) {
      (**(code **)(*piStack_24 + 4))();
    }
  }
  *(uint *)(iVar3 + 0x10) = (uint)(param_2 != '\0');
  return;
}

