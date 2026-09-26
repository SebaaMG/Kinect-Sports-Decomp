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
extern unsigned int *auStack_30;
extern int fn_825E8220();
extern int fn_82A1E7D8();
extern int fn_82A1E968();
extern unsigned int lbl_82195518;
extern U64 storeWordConditionalIndexed();


void fn_825E8140(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int *piVar4;
  uint *puVar5;
  char in_RESERVE;
  byte in_cr0;
  undefined1 auStack_30 [8];
  code *pcStack_28;
  
  fn_825E8220(auStack_30,param_1 + 0x18);
  do {
    piVar4 = (int *)param_1;
  } while (*piVar4 != 0);
  for (puVar5 = (uint *)piVar4[1]; puVar5 != (uint *)piVar4[2]; puVar5 = puVar5 + 1) {
    fn_82A1E7D8(*(undefined4 *)*puVar5);
    uVar1 = *puVar5;
    do {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(0xffffffffffffffff,0,(ulonglong)uVar1 + 0xc);
        *(undefined4 *)((ulonglong)uVar1 + 0xc) = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  do {
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(0,0,param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x28) = uVar2;
      in_cr0 = 2;
    }
    uVar3 = lbl_82195518;
  } while (!(bool)(in_cr0 >> 1 & 1));
  *(undefined8 *)(piVar4 + 0xe) = lbl_82195518;
  *(undefined8 *)(piVar4 + 0x10) = uVar3;
  fn_82A1E968(param_1 + 0x30);
  (*pcStack_28)(auStack_30);
  return;
}

