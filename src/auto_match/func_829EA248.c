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
extern int fn_829E9B18();
extern int fn_829E9D38();


undefined8 fn_829EA248(int param_1,ulonglong param_2)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 4);
  uVar2 = (ulonglong)(uint)((int)(*(int *)(param_1 + 8) - uVar5) >> 2);
  if (uVar2 < (param_2 & 0xffffffff)) {
    uVar5 = (int)(*(int *)(param_1 + 0xc) - uVar5) >> 2;
    lVar4 = (longlong)(int)uVar5;
    if ((ulonglong)uVar5 < (param_2 & 0xffffffff)) {
      if (uVar5 == 0) {
        uVar2 = 4;
      }
      else {
        uVar2 = (lVar4 + 7U & 0xffffffff) >> 3;
      }
      uVar3 = param_2 - lVar4;
      if ((uVar3 & 0xffffffff) <= uVar2) {
        if (uVar5 == 0) {
          uVar3 = 4;
        }
        else {
          uVar3 = (lVar4 + 7U & 0xffffffff) >> 3;
        }
      }
      cVar1 = fn_829E9D38(param_1,uVar3);
      if (cVar1 == '\0') {
        return 0xffffffff8007000e;
      }
    }
    lVar4 = (param_2 & 0x3fffffff) * 4;
    uVar5 = *(uint *)(param_1 + 8);
    if ((ulonglong)uVar5 != ((ulonglong)*(uint *)(param_1 + 4) + lVar4 & 0xffffffff)) {
      do {
        uVar5 = uVar5 + 4;
      } while ((ulonglong)uVar5 != ((ulonglong)*(uint *)(param_1 + 4) + lVar4 & 0xffffffff));
    }
    *(uint *)(param_1 + 8) = uVar5;
  }
  else if ((param_2 & 0xffffffff) < uVar2) {
    fn_829E9B18(param_1,(param_2 & 0x3fffffff) * 4 + (ulonglong)uVar5);
  }
  return 0;
}

