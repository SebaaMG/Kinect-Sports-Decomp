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
extern unsigned int *auStack_18;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_828EA5F8();
extern int fn_82F57198();
extern unsigned int iStack_1c;
extern unsigned int uStack_20;
extern U64 storeWordConditionalIndexed();


undefined8 fn_82F51E28(int param_1)

{
  uint uVar1;
  undefined4 *puVar3;
  undefined8 uVar2;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack_20;
  int iStack_1c;
  undefined1 auStack_18 [4];
  int *piStack_14;
  
  puVar3 = (undefined4 *)fn_82F57198(auStack_18,*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  uStack_20 = 0;
  iStack_1c = 0;
  fn_82517978(&uStack_20,*puVar3,puVar3[1],0);
  uVar2 = fn_828EA5F8(uStack_20);
  if (iStack_1c != 0) {
    fn_822315A0(iStack_1c);
  }
  if (ZEXT48(piStack_14) != 0) {
    lVar5 = ZEXT48(piStack_14) + 8;
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
      (**(code **)(*piStack_14 + 4))();
    }
  }
  return uVar2;
}

