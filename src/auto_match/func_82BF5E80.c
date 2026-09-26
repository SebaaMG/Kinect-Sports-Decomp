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
extern int fn_82BE5240();
extern U64 storeWordConditionalIndexed();


undefined8
fn_82BF5E80(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  undefined8 in_MSR;
  char in_RESERVE;
  byte in_cr0;
  
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x18) == 0x4000) {
    lVar4 = param_1 + 0x50;
    do {
      puVar5 = (uint *)lVar4;
      uVar1 = *puVar5;
      if (uVar1 != 1) {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((ulonglong)uVar1,0,lVar4);
          *puVar5 = uVar2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(0,0,lVar4);
        *puVar5 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar1 != 0) {
      *param_2 = *(undefined4 *)(iVar3 + 0x54);
      *param_3 = *(undefined4 *)(iVar3 + 0x58);
      *param_4 = *(undefined4 *)(iVar3 + 0x68);
      *param_5 = *(undefined4 *)(iVar3 + 0x60);
      return 1;
    }
    fn_82BE5240(param_1,0x450,0xffffffff820ebacc,param_4,param_5,in_MSR);
  }
  else {
    fn_82BE5240(param_1,0x450,0xffffffff820e9378,*(int *)(iVar3 + 0x18));
  }
  return 0;
}

