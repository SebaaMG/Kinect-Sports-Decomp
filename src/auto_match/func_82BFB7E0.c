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
extern int fn_82A277E0();
extern int fn_82A28568();
extern int fn_82A2A360();
extern U64 storeWordConditionalIndexed();


ulonglong fn_82BFB7E0(int param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint *puVar5;
  char in_RESERVE;
  byte in_cr0;
  
  if ((int)param_2 < 1) {
    uVar2 = 0;
  }
  else {
    puVar5 = (uint *)param_3;
    if (param_1 == 0) {
      uVar3 = fn_82A2A360();
      uVar2 = fn_82A28568(uVar3,0,param_2);
      if ((((uVar2 & 0xffffffff) != 0) && ((param_3 & 0xffffffff) != 0)) &&
         (lVar4 = fn_82A277E0(uVar3,0,uVar2), 0 < (int)lVar4)) {
        do {
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(lVar4 + (ulonglong)*puVar5,0,param_3);
            *puVar5 = uVar1;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
    }
    else {
      uVar2 = (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 4),param_2);
      if ((param_3 & 0xffffffff) != 0) {
        do {
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed(param_2 + (ulonglong)*puVar5,0,param_3);
            *puVar5 = uVar1;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
    }
  }
  return uVar2;
}

