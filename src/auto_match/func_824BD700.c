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
extern int fn_82292450();
extern int fn_8248B7E0();
extern int fn_8248BEA8();
extern int fn_8248C888();
extern int fn_824BF690();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern U64 storeWordConditionalIndexed();


void fn_824BD700(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char in_RESERVE;
  byte in_cr0;
  undefined1 auStack_30 [48];
  
  piVar5 = (int *)param_1;
  fn_8248BEA8(*piVar5);
  iVar1 = *piVar5;
  iVar2 = *(int *)(iVar1 + 0x30);
  while (iVar2 != *(int *)(iVar1 + 0x34)) {
    fn_8248B7E0(iVar2);
    piVar6 = (int *)fn_8248C888(auStack_30,iVar1 + 0x30,iVar2);
    iVar2 = *piVar6;
  }
  fn_824BF690(param_1 + 0x24);
  fn_824BF690(param_1 + 4);
  fn_824BF690(param_1 + 0x14);
  fn_824BF690(param_1 + 0x34);
  do {
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed(0,0,param_1 + 0x6c);
      *(undefined4 *)(param_1 + 0x6c) = uVar3;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  do {
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed(0,0,param_1 + 0x70);
      *(undefined4 *)(param_1 + 0x70) = uVar3;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  do {
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed(0,0,param_1 + 0x74);
      *(undefined4 *)(param_1 + 0x74) = uVar3;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  piVar5[0x15] = 0;
  piVar5[0x1f] = 4;
  iVar2 = lbl_821CC160;
  piVar5[0x20] = 4;
  iVar1 = lbl_821CA460;
  piVar5[0x23] = iVar2;
  piVar5[0x22] = iVar2;
  piVar5[0x21] = iVar2;
  piVar5[0x12d] = iVar1;
  piVar5[0x12e] = iVar1;
  do {
    piVar6 = (int *)(param_1 + 0xe0);
    iVar1 = *piVar6;
    if (in_RESERVE != '\0') {
      iVar4 = storeWordConditionalIndexed(0,0,param_1 + 0xe0);
      *piVar6 = iVar4;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  piVar5[0x37] = iVar2;
  piVar5[0x38] = iVar1;
  piVar5[0x39] = 0xb;
  piVar5[0x36] = 0;
  if (piVar5[0x142] != 0) {
    fn_82292450(piVar5[0x142],1);
  }
  piVar5[0x142] = 0;
  return;
}

