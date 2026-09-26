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
extern int fn_82EE3630();


undefined8 fn_82EE3930(int param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int *apiStack_40 [16];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else {
    lVar2 = 0x2a;
    uVar3 = 0;
    if (*(int *)(param_1 + 0xb0) != 0) {
      do {
        fn_82EE3630(param_1 + 0x48,uVar3,apiStack_40);
        if (*(int *)(*apiStack_40[0] + 0x40) != 0) {
          lVar2 = lVar2 + 2;
        }
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xb0));
    }
    if (param_2 != (longlong *)0x0) {
      *param_2 = lVar2;
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = lVar2;
    }
    *(longlong *)(param_1 + 0x20) = lVar2;
    uVar1 = 0;
  }
  return uVar1;
}

