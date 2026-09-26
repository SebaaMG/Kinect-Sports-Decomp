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
extern int fn_8256E1D8();
extern int fn_8266CB08();
extern unsigned int uStack_28;
extern unsigned int uStack_30;
extern U64 storeWordConditionalIndexed();


void fn_8266CC70(int param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  
  fn_8266CB08(&uStack_30,param_1);
  fn_8256E1D8(param_1,*param_2,param_2[1]);
  uVar4 = ZEXT48(piStack_2c);
  *(undefined4 *)(param_1 + 8) = param_2[2];
  fn_8256E1D8(param_2,uStack_30,uVar4);
  param_2[2] = uStack_28;
  if (uVar4 != 0) {
    do {
      puVar3 = (uint *)(uVar4 + 8);
      lVar2 = (ulonglong)*puVar3 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar2,0,uVar4 + 8);
        *puVar3 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar2 == 0) {
      (**(code **)(*piStack_2c + 4))(uVar4);
    }
  }
  return;
}

