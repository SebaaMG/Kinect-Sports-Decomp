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


undefined8
fn_826367A8(uint *param_1,uint *param_2,longlong param_3,ulonglong param_4,longlong param_5,
             ulonglong param_6,ulonglong param_7,code *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined4 in_stack_00000054;
  
  uVar4 = 0;
  if (((ulonglong)*param_2 == (param_4 & 0xffffffff)) && ((param_1[1] & 0x800) == 0)) {
    *param_2 = (*param_1 & 0xfff) * 0xc;
  }
  if ((param_7 & 6) != 0) {
    uVar1 = param_1[1];
    if ((uVar1 & 0x800) == 0) {
      uVar5 = *param_2;
    }
    else {
      uVar5 = 0;
      param_4 = param_6;
      param_3 = param_5;
    }
    uVar2 = *param_1;
    uVar3 = uVar2 >> 0xc;
    if ((uVar3 & 7) != 0) {
      uVar6 = ((ulonglong)uVar2 & 0xfff) * 0xc;
      if ((uVar6 < uVar5) || ((param_4 & 0xffffffff) < ((ulonglong)uVar3 & 7) * 0xc + uVar6)) {
        uVar4 = 0xffffffff80004005;
      }
      else {
        param_3 = uVar6 + param_3;
        uVar5 = uVar2 >> 0x10 & 0xfff;
        uVar6 = 0;
        if ((uVar3 & 7) != 0) {
          uVar8 = 0;
          do {
            uVar7 = (-(ulonglong)((1 << (uVar8 & 0x3f) & uVar5) != 0) & 0xfffffffe) + 4;
            if ((2 << (uVar8 & 0x3f) & uVar5) != 0) {
              uVar7 = uVar7 | 0x20;
            }
            if ((1 << ((uint)uVar6 & 0x3f) & ((uVar1 & 3) << 4 | uVar2 >> 0x1c)) != 0) {
              uVar7 = uVar7 | 0x10;
            }
            if ((param_1[1] & 0x800) != 0) {
              uVar7 = uVar7 | 0x40;
            }
            if ((param_1[1] & 0xf000) == 0x5000) {
              uVar7 = uVar7 | 0x80;
            }
            if (((uVar7 & param_7 & 6) != 0) &&
               (uVar4 = (*param_8)(uVar7,((ulonglong)*param_1 & 0xfff) + uVar6,param_3,
                                   in_stack_00000054), (int)uVar4 < 0)) {
              return uVar4;
            }
            uVar6 = uVar6 + 1;
            uVar8 = uVar8 + 2;
            param_3 = param_3 + 0xc;
          } while ((uVar6 & 0xffffffff) < ((ulonglong)uVar3 & 7));
        }
      }
    }
  }
  return uVar4;
}

