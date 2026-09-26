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
extern int fn_82359C18();
extern int fn_824D2AE8();
extern int fn_8265CA20();
extern int fn_82F51468();
extern int fn_82F52C20();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;
extern U64 storeWordConditionalIndexed();


void fn_824FD3D0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack_30;
  int iStack_2c;
  undefined1 auStack_28 [4];
  int *piStack_24;
  
  if (*(int *)(param_1 + 0xb88) != 0) {
    uVar4 = fn_82F51468(auStack_28,*(undefined4 *)(param_1 + 0xb60));
    fn_824D2AE8(&uStack_30,uVar4);
    if (ZEXT48(piStack_24) != 0) {
      lVar6 = ZEXT48(piStack_24) + 8;
      do {
        puVar7 = (uint *)lVar6;
        lVar5 = (ulonglong)*puVar7 - 1;
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed(lVar5,0,lVar6);
          *puVar7 = uVar3;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if ((int)lVar5 == 0) {
        (**(code **)(*piStack_24 + 4))();
      }
    }
    fn_82F52C20(uStack_30,*(undefined4 *)(param_1 + 0xb88),1);
    if (iStack_2c != 0) {
      fn_822315A0();
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb60);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb70);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb7c);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  iVar2 = *(int *)(param_1 + 0xb84);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x60) != 0) {
      fn_8265CA20();
    }
    *(undefined4 *)(iVar2 + 0x60) = 0;
    *(undefined4 *)(iVar2 + 100) = 0;
    *(undefined4 *)(iVar2 + 0x68) = 0;
    fn_82359C18(iVar2);
    fn_8265CA20(iVar2);
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb78);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined4 **)(param_1 + 0xb74);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

