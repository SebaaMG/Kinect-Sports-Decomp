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
extern int fn_8268C750();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern U64 storeWordConditionalIndexed();


void fn_826C8EB8(int param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  char in_RESERVE;
  byte in_cr0;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x14);
  if (piVar1 != (int *)0x0) {
    uVar2 = param_3[3];
    uVar3 = param_3[2];
    uVar4 = param_3[1];
    uVar5 = *param_3;
    fn_8268C750(&uStack_50);
    uStack_4c = uVar5;
    uStack_48 = uVar4;
    uStack_44 = uVar3;
    uStack_40 = uVar2;
    (**(code **)(*piVar1 + 8))(piVar1,&uStack_50,param_4);
    lVar7 = ((ulonglong)uStack_50 & 0xfffffffc) + 4;
    do {
      puVar8 = (uint *)lVar7;
      uVar9 = (ulonglong)*puVar8;
      if (in_RESERVE != '\0') {
        uVar6 = storeWordConditionalIndexed(uVar9 - 1,0,lVar7);
        *puVar8 = uVar6;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar9 == 1) {
      fn_8267BE38();
    }
  }
  return;
}

