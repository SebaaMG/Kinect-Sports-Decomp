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
extern int fn_8267BE38();
extern int fn_82688D90();
extern int fn_8268C510();
extern U64 storeWordConditionalIndexed();


void fn_8272BB58(int param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint *puVar5;
  char in_RESERVE;
  byte in_cr0;
  uint auStack_30 [2];
  uint *puStack_28;
  uint *puStack_24;
  
  uVar2 = (**(code **)(*param_3 + 8))(param_3);
  if ((uVar2 & 0xff00) == 0x200) {
    uVar3 = (**(code **)(*(int *)param_3[3] + 0x3c))();
    fn_8268C510(auStack_30,uVar3);
    puStack_28 = auStack_30;
    puStack_24 = auStack_30;
    fn_82688D90(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),&puStack_28);
    lVar4 = ((ulonglong)auStack_30[0] & 0xfffffffc) + 4;
    do {
      puVar5 = (uint *)lVar4;
      uVar2 = (ulonglong)*puVar5;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar2 - 1,0,lVar4);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar2 == 1) {
      fn_8267BE38();
    }
  }
  return;
}

