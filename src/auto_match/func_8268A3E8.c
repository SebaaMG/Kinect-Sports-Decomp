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
extern int fn_8268A388();
extern int fn_8268BA10();
extern int fn_8268C510();
extern unsigned int uStack_20;
extern U64 storeWordConditionalIndexed();


undefined8 fn_8268A3E8(int param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  char in_RESERVE;
  byte in_cr0;
  uint uStack_20;
  uint *puStack_1c;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    fn_8268C510(&uStack_20,param_3);
    puStack_1c = &uStack_20;
    iVar2 = fn_8268A388(*(undefined4 *)(param_1 + 0xc),&puStack_1c);
    lVar3 = ((ulonglong)uStack_20 & 0xfffffffc) + 4;
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
    if (iVar2 != 0) {
      fn_8268BA10(param_2,iVar2);
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar2 + 4);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar2 + 8);
      return 1;
    }
  }
  return 0;
}

