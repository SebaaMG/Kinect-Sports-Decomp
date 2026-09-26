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
extern int fn_822D9678();
extern int fn_82359C18();
extern int fn_824D2AE8();
extern int fn_8251FA58();
extern int fn_82529320();
extern int fn_8265CA20();
extern int fn_82F51468();
extern int fn_82F52C20();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;
extern U64 storeWordConditionalIndexed();


void fn_824FC500(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack_30;
  int iStack_2c;
  undefined1 auStack_28 [4];
  int *piStack_24;
  
  if (param_1[6] != 0) {
    uVar3 = fn_82F51468(auStack_28,param_1[5]);
    fn_824D2AE8(&uStack_30,uVar3);
    if (ZEXT48(piStack_24) != 0) {
      lVar6 = ZEXT48(piStack_24) + 8;
      do {
        puVar7 = (uint *)lVar6;
        lVar4 = (ulonglong)*puVar7 - 1;
        if (in_RESERVE != '\0') {
          uVar5 = storeWordConditionalIndexed(lVar4,0,lVar6);
          *puVar7 = uVar5;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if ((int)lVar4 == 0) {
        (**(code **)(*piStack_24 + 4))();
      }
    }
    fn_82F52C20(uStack_30,param_1[6],1);
    if (iStack_2c != 0) {
      fn_822315A0();
    }
  }
  if (*param_1 != 0) {
    fn_82529320(*param_1,0);
  }
  uVar5 = 0;
  if (param_1[0x14] != 0) {
    do {
      iVar1 = param_1[0x12];
      uVar5 = uVar5 + 1;
      param_1[0x12] = iVar1 + 0x10;
      if (iVar1 + 0x10 == param_1[0x11]) {
        param_1[0x12] = param_1[0x10];
      }
    } while (uVar5 < (uint)param_1[0x14]);
  }
  if (param_1[0x10] != 0) {
    fn_8265CA20();
  }
  iVar1 = param_1[9];
  if (iVar1 != 0) {
    fn_822D9678(iVar1);
    fn_8265CA20(iVar1);
  }
  fn_8251FA58(param_1[8]);
  iVar1 = param_1[7];
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x60) != 0) {
      fn_8265CA20();
    }
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(undefined4 *)(iVar1 + 100) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
    fn_82359C18(iVar1);
    fn_8265CA20(iVar1);
  }
  puVar2 = (undefined4 *)param_1[5];
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined4 *)param_1[4];
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined4 *)param_1[3];
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined4 *)param_1[2];
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}

