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
extern int fn_829E9888();
extern int fn_829EE280();
extern int fn_829EE368();


undefined8 fn_829EE3F8(int param_1,ulonglong param_2)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar3 = (ulonglong)(uint)((int)(*(int *)(param_1 + 8) - uVar1) / 0x24);
  if (uVar3 < (param_2 & 0xffffffff)) {
    uVar1 = (int)(*(int *)(param_1 + 0xc) - uVar1) / 0x24;
    lVar5 = (longlong)(int)uVar1;
    if ((ulonglong)uVar1 < (param_2 & 0xffffffff)) {
      if (uVar1 == 0) {
        uVar3 = 4;
      }
      else {
        uVar3 = (lVar5 + 7U & 0xffffffff) >> 3;
      }
      uVar4 = param_2 - lVar5;
      if ((uVar4 & 0xffffffff) <= uVar3) {
        if (uVar1 == 0) {
          uVar4 = 4;
        }
        else {
          uVar4 = (lVar5 + 7U & 0xffffffff) >> 3;
        }
      }
      cVar2 = fn_829EE280(param_1,uVar4);
      if (cVar2 == '\0') {
        return 0xffffffff8007000e;
      }
    }
    for (uVar3 = (ulonglong)*(uint *)(param_1 + 8);
        (uVar3 & 0xffffffff) != ((ulonglong)*(uint *)(param_1 + 4) + param_2 * 0x24 & 0xffffffff);
        uVar3 = uVar3 + 0x24) {
      if ((uVar3 & 0xffffffff) != 0) {
        fn_829E9888(uVar3);
      }
    }
    *(int *)(param_1 + 8) = (int)uVar3;
  }
  else if ((param_2 & 0xffffffff) < uVar3) {
    fn_829EE368(param_1,param_2 * 0x24 + (ulonglong)uVar1);
  }
  return 0;
}

