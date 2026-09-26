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
extern unsigned int *auStack_38;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_82F4FEA0();
extern int fn_82F52348();
extern int fn_82F57198();
extern int fn_82F5B310();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;
extern U64 storeWordConditionalIndexed();


undefined8
fn_82F52428(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,float *param_5)

{
  uint uVar1;
  undefined4 *puVar4;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  char in_RESERVE;
  byte in_cr0;
  double dVar8;
  undefined4 uStack_40;
  int iStack_3c;
  undefined1 auStack_38 [4];
  int *piStack_34;
  
  puVar4 = (undefined4 *)fn_82F57198(auStack_38,*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  uStack_40 = 0;
  iStack_3c = 0;
  fn_82517978(&uStack_40,*puVar4,puVar4[1],0);
  uVar2 = fn_82F5B310(uStack_40,param_2,param_3,param_4);
  if (iStack_3c != 0) {
    fn_822315A0(iStack_3c);
  }
  if (ZEXT48(piStack_34) != 0) {
    lVar6 = ZEXT48(piStack_34) + 8;
    do {
      puVar7 = (uint *)lVar6;
      lVar5 = (ulonglong)*puVar7 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar5,0,lVar6);
        *puVar7 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar5 == 0) {
      (**(code **)(*piStack_34 + 4))();
    }
  }
  if (param_5 != (float *)0x0) {
    uVar3 = fn_82F4FEA0(param_2);
    dVar8 = (double)fn_82F52348(param_1,uVar3);
    *param_5 = (float)dVar8;
  }
  return uVar2;
}

