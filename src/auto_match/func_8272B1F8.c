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
extern int fn_8267BE38();
extern int fn_8267BED0();
extern int fn_8267C498();
extern int fn_8268C510();
extern int fn_8272AE80();
extern unsigned int uStack_40;
extern U64 storeWordConditionalIndexed();


/* WARNING: Type propagation algorithm not settling */

void fn_8272B1F8(int param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  char in_RESERVE;
  byte in_cr0;
  uint uStack_40;
  int aiStack_3c [3];
  uint *puStack_30;
  int *piStack_2c;
  
  if (*(int *)(param_1 + 0xec) == 0) {
    aiStack_3c[1] = 2;
    puVar2 = (undefined4 *)fn_8267BED0(param_1,4,aiStack_3c + 1);
    in_cr0 = (puVar2 == (undefined4 *)0x0) << 1;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
    }
    *(undefined4 **)(param_1 + 0xec) = puVar2;
  }
  if (param_3 != 0) {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  aiStack_3c[0] = param_3;
  fn_8268C510(&uStack_40,param_2);
  puStack_30 = &uStack_40;
  piStack_2c = aiStack_3c;
  fn_8272AE80(*(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xec),&puStack_30);
  lVar3 = ((ulonglong)uStack_40 & 0xfffffffc) + 4;
  do {
    puVar4 = (uint *)lVar3;
    uVar5 = (ulonglong)*puVar4;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar3);
      *puVar4 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  if (aiStack_3c[0] != 0) {
    fn_8267C498();
  }
  return;
}

