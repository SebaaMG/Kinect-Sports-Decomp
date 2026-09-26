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
extern unsigned int *auStack_20;
extern int fn_8267BE38();
extern int fn_8268C3A8();
extern int fn_826E9530();
extern U64 storeWordConditionalIndexed();


void fn_826DF898(int param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  char in_RESERVE;
  byte in_cr0;
  uint auStack_20 [4];
  
  fn_8268C3A8(auStack_20,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1c));
  iVar4 = *(int *)(param_1 + 0x314);
  if (iVar4 == 0) {
    iVar4 = param_1 + 0x28;
  }
  fn_826E9530(iVar4,auStack_20);
  if (*(int *)(param_1 + 0x2e8) == 1) {
    piVar1 = *(int **)(param_1 + 0x2ec);
    pcVar2 = *(code **)(*piVar1 + 0x48);
  }
  else {
    piVar1 = *(int **)(param_1 + 0x20);
    pcVar2 = *(code **)(*piVar1 + 4);
  }
  (*pcVar2)(piVar1,auStack_20,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc));
  lVar6 = ((ulonglong)auStack_20[0] & 0xfffffffc) + 4;
  do {
    puVar7 = (uint *)lVar6;
    uVar5 = (ulonglong)*puVar7;
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed(uVar5 - 1,0,lVar6);
      *puVar7 = uVar3;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  return;
}

