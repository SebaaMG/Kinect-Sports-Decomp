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
extern int fn_8256E1D8();
extern int fn_8266D1B8();
extern int fn_8266EB28();
extern int fn_82673F48();
extern unsigned int uStack_40;
extern U64 storeWordConditionalIndexed();


undefined4 *
fn_8266ECF0(undefined4 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined1 auStack_38 [4];
  int *piStack_34;
  
  fn_82673F48(param_1,param_3,param_2,param_5,param_6,param_7,param_8);
  uStack_40 = 0;
  piStack_3c = (int *)0x0;
  fn_8256E1D8(&uStack_40,*param_1,param_1[1]);
  uVar2 = fn_8266D1B8(auStack_38,&uStack_40,param_4);
  fn_8266EB28(param_2 + 0xd8,uVar2);
  if (ZEXT48(piStack_34) != 0) {
    lVar4 = ZEXT48(piStack_34) + 8;
    do {
      puVar5 = (uint *)lVar4;
      lVar3 = (ulonglong)*puVar5 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar3,0,lVar4);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar3 == 0) {
      (**(code **)(*piStack_34 + 4))();
    }
  }
  if (ZEXT48(piStack_3c) != 0) {
    lVar4 = ZEXT48(piStack_3c) + 8;
    do {
      puVar5 = (uint *)lVar4;
      lVar3 = (ulonglong)*puVar5 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar3,0,lVar4);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar3 == 0) {
      (**(code **)(*piStack_3c + 4))();
    }
  }
  *(undefined4 *)(param_2 + 0xec) = 1;
  return param_1;
}

