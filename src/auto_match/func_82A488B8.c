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
extern int fn_82A45350();
extern int fn_82A47958();
extern int fn_82A47A60();
extern int fn_82A47EB8();
extern int fn_82A48358();


void fn_82A488B8(int param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = ((ulonglong)*(uint *)(param_1 + 0x40) & 0x7fffffff) << 1;
  trapWord(6,uVar4,0);
  if (((ulonglong)*(uint *)(param_1 + 0x1e4) < (param_3 & 0xffffffff) / uVar4) &&
     (lVar2 = fn_82A47EB8(param_1,*(undefined4 *)(param_1 + 0xd4)), lVar2 < 0)) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x34) + 4) + 8))(*(int *)(param_1 + 0x34) + 4);
  }
  else {
    uVar4 = fn_82A45350(*(undefined4 *)(param_1 + 0x1d8),0);
    uVar6 = 1;
    if (1 < *(uint *)(param_1 + 0x1c0)) {
      do {
        uVar3 = fn_82A45350(*(undefined4 *)(param_1 + 0x1d8),uVar6);
        if ((uVar3 & 0xffffffff) <= (uVar4 & 0xffffffff)) {
          uVar4 = uVar3;
        }
        uVar6 = uVar6 + 1;
      } while ((uVar6 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x1c0));
    }
    uVar6 = ((ulonglong)*(uint *)(param_1 + 0x40) & 0x7fffffff) << 1;
    trapWord(6,uVar6,0);
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x1e4) - (param_2 & 0xffffffff) / uVar6;
    if ((uVar6 & 0xffffffff) <= (uVar4 & 0xffffffff)) {
      uVar4 = uVar6;
    }
    if ((uVar4 & 0xffffffff) != 0) {
      if (*(uint *)(param_1 + 0x40) < 3) {
        uVar6 = fn_82A47A60(param_1,uVar4,*(undefined4 *)(param_1 + 0x1e8));
        if ((uVar6 & 0xffffffff) != (uVar4 & 0xffffffff)) {
          uVar1 = *(uint *)(param_1 + 0x1e4);
          uVar3 = *(uint *)(param_1 + 0x1e8) + uVar6;
          trapWord(6,(ulonglong)uVar1,0);
          fn_82A47A60(param_1,uVar4 - uVar6,
                        uVar3 - (longlong)(int)((uVar3 & 0xffffffff) / (ulonglong)uVar1) *
                                (longlong)(int)uVar1);
        }
      }
      else {
        uVar6 = 0;
        if (*(int *)(param_1 + 0x1c0) != 0) {
          do {
            uVar3 = fn_82A47958(param_1,uVar6,uVar4,*(undefined4 *)(param_1 + 0x1e8));
            if ((uVar3 & 0xffffffff) != (uVar4 & 0xffffffff)) {
              uVar1 = *(uint *)(param_1 + 0x1e4);
              uVar5 = *(uint *)(param_1 + 0x1e8) + uVar3;
              trapWord(6,(ulonglong)uVar1,0);
              fn_82A47958(param_1,uVar6,uVar4 - uVar3,
                            uVar5 - (longlong)(int)((uVar5 & 0xffffffff) / (ulonglong)uVar1) *
                                    (longlong)(int)uVar1);
            }
            uVar6 = uVar6 + 1;
          } while ((uVar6 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x1c0));
        }
      }
      uVar3 = (ulonglong)*(uint *)(param_1 + 0x1e8);
      uVar6 = uVar4;
      if ((ulonglong)*(uint *)(param_1 + 0x1e4) < (uVar3 + uVar4 & 0xffffffff)) {
        lVar2 = *(uint *)(param_1 + 0x1e4) - uVar3;
        fn_82A48358(param_1,lVar2);
        uVar3 = 0;
        uVar6 = uVar4 - lVar2;
      }
      fn_82A48358(param_1,uVar6,uVar3);
      uVar1 = *(uint *)(param_1 + 0x1e4);
      uVar4 = *(uint *)(param_1 + 0x1e8) + uVar4;
      trapWord(6,(ulonglong)uVar1,0);
      *(uint *)(param_1 + 0x1e8) =
           (int)uVar4 - (int)((uVar4 & 0xffffffff) / (ulonglong)uVar1) * uVar1;
    }
  }
  return;
}

