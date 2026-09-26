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
extern int fn_82ED24C0();
extern int fn_82ED3E48();


longlong fn_82ED4830(int param_1,longlong param_2,ulonglong param_3,ulonglong param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar7;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
LAB_82ed48d0:
    lVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x34) < 1) {
      trapWord(6,(ulonglong)uVar2,0);
      uVar7 = *(int *)(param_1 + 0x2c) + 1;
      *(uint *)(param_1 + 0x2c) = uVar7 - (uVar7 / uVar2) * uVar2;
    }
    else {
      uVar7 = 0;
      if ((ulonglong)uVar2 != 0) {
        iVar5 = 0;
        iVar4 = iVar1;
        do {
          if (0 < *(int *)(iVar4 + 0x14)) {
            *(uint *)(param_1 + 0x2c) = uVar7;
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
            *(undefined4 *)(uVar7 * 0x402c + iVar1 + 0x14) = 0;
            break;
          }
          uVar7 = uVar7 + 1;
          iVar5 = iVar5 + 0x402c;
          iVar4 = iVar5 + iVar1;
        } while (uVar7 < *(uint *)(param_1 + 0x1c));
      }
      if (uVar7 == *(uint *)(param_1 + 0x1c)) goto LAB_82ed48d0;
    }
    fn_82ED24C0((ulonglong)*(uint *)(param_1 + 0x2c) * 0x402c +
                      (ulonglong)*(uint *)(param_1 + 0x18),param_2,param_3,param_4);
    if (param_5 == 0) {
      param_5 = (int)param_2;
    }
    *(int *)(*(int *)(param_1 + 0x2c) * 0x402c + *(int *)(param_1 + 0x18) + 0x10) = param_5;
    if (*(int *)(param_1 + 0x1c) != 0) {
      if (((param_3 & 0xffffffff) == 0) || ((param_4 & 0xffffffff) == 0)) {
        uVar6 = (longlong)*(int *)(param_1 + 0x10) * (longlong)*(int *)(param_1 + 0xc);
        param_3 = uVar6 + param_2;
        param_4 = ((uVar6 & 0xffffffff) >> 2) + param_3;
      }
      fn_82ED3E48((ulonglong)*(uint *)(param_1 + 0x2c) * 0x402c +
                      (ulonglong)*(uint *)(param_1 + 0x18),param_2,param_3,param_4);
    }
    lVar3 = (ulonglong)*(uint *)(param_1 + 0x2c) * 0x402c + (ulonglong)*(uint *)(param_1 + 0x18);
  }
  return lVar3;
}

