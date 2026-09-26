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
extern int fn_8256E1D8();
extern int fn_8266CB08();
extern int fn_8266D210();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern U64 storeWordConditionalIndexed();


void fn_8266D4A8(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack_50;
  uint uStack_4c;
  uint uStack_48;
  
  puVar5 = param_1;
  if (param_1 != param_2) {
    while (puVar7 = puVar5 + 3, puVar7 != param_2) {
      fn_8266CB08(&uStack_50,puVar7);
      uVar1 = uStack_48;
      if (uStack_48 < (uint)param_1[2]) {
        fn_8266D210(param_1,puVar7,puVar5 + 6);
        uVar6 = (ulonglong)uStack_4c;
        fn_8256E1D8(param_1,uStack_50,uVar6);
        param_1[2] = uVar1;
      }
      else {
        uVar3 = puVar5[2];
        puVar5 = puVar7;
        while (uVar1 < uVar3) {
          fn_8256E1D8(puVar5,puVar5[-3],puVar5[-2]);
          puVar5[2] = puVar5[-1];
          uVar3 = puVar5[-4];
          puVar5 = puVar5 + -3;
        }
        uVar6 = (ulonglong)uStack_4c;
        fn_8256E1D8(puVar5,uStack_50,uVar6);
        puVar5[2] = uVar1;
      }
      puVar5 = puVar7;
      if (uVar6 != 0) {
        do {
          puVar4 = (uint *)(uVar6 + 8);
          lVar2 = (ulonglong)*puVar4 - 1;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar2,0,uVar6 + 8);
            *puVar4 = uVar1;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        if ((int)lVar2 == 0) {
          (**(code **)(*(int *)uVar6 + 4))(uVar6);
        }
      }
    }
  }
  return;
}

