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
extern int fn_82A28E60();
extern int fn_82A2A360();
extern U64 storeWordConditionalIndexed();


void fn_82BFB8C0(int param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  char in_RESERVE;
  byte in_cr0;
  
  if (param_1 == 0) {
    uVar2 = fn_82A2A360();
    if (((param_3 & 0xffffffff) != 0) &&
       (lVar3 = fn_82A277E0(uVar2,0,param_2), 0 < (int)lVar3)) {
      do {
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((ulonglong)*(uint *)param_3 - lVar3,0,param_3);
          *(uint *)param_3 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
    uVar2 = fn_82A2A360();
    fn_82A28E60(uVar2,0,param_2);
  }
  else {
    (**(code **)(param_1 + 0xc))(*(undefined4 *)(param_1 + 4));
  }
  return;
}

