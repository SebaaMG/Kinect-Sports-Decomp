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
extern int fn_8263AC58();
extern int fn_82AA7C38();
extern unsigned int lbl_821A7F10;
extern unsigned int stack0x00000044;
extern unsigned int stack0x0000004c;
extern unsigned int stack0x00000054;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;


void fn_82AA7DC0(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
                  ulonglong param_5,ulonglong param_6,uint param_7,ulonglong param_8)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uStack00000044;
  uint uStack0000004c;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  undefined4 in_stack_00000064;
  
  uVar11 = in_stack_0000005c;
  uVar2 = in_stack_0000005c & 0x3f;
  uStack0000004c = (uint)param_8;
  uVar9 = (ulonglong)(byte)(&lbl_821A7F10)[uVar2];
  uStack00000044 = param_7;
  if ((in_stack_0000005c & 0x100) != 0) {
    fn_8263AC58(&stack0x00000044,&stack0x0000004c,&stack0x00000054,uVar9,uVar2,
                      in_stack_00000064,1);
    param_8 = (ulonglong)uStack0000004c;
  }
  uVar6 = param_8;
  uVar5 = uStack00000044;
  if (uVar2 < 0x32) {
    if (uVar2 == 0x31) {
LAB_82aa7e98:
      uVar9 = uVar9 << 4;
      uVar6 = (param_8 + 3 & 0xffffffff) >> 2;
      uVar5 = uStack00000044 + 3 >> 2;
    }
    else if (10 < uVar2) {
      if (uVar2 < 0xd) {
        uVar9 = uVar9 << 1;
        uVar5 = uStack00000044 + 1 >> 1;
      }
      else if ((0x11 < uVar2) && (uVar2 < 0x15)) goto LAB_82aa7e98;
    }
  }
  else if ((0x32 < uVar2) && ((uVar2 < 0x36 || ((0x39 < uVar2 && (uVar2 < 0x3e))))))
  goto LAB_82aa7e98;
  uVar2 = (int)uVar11 >> 6 & 3;
  if (((int)uVar11 >> 6 & 3U) == 0) {
    uVar7 = (uVar9 & 0x7fff8) << 0xd;
  }
  else {
    if (uVar2 == 1) {
      uVar7 = 0x20000;
    }
    else {
      if (2 < uVar2) {
        if (uVar2 == 3) {
          uVar7 = 0x40002;
        }
        else {
          uVar7 = 0;
        }
        goto LAB_82aa7ef8;
      }
      uVar7 = 0x40000;
    }
    uVar7 = uVar7 | 1;
  }
LAB_82aa7ef8:
  uVar1 = uVar7 >> 0x10;
  uVar4 = (uVar9 >> 3) - 1;
  trapWord(6,uVar9,0);
  uVar2 = (uint)uVar9 >> (0x23U - (int)LZCOUNT((int)(uVar7 >> 0x10) + -1) & 0x3f);
  if (((((uVar4 & param_2) == 0) && ((param_2 & 0xffffffff) == (param_5 & 0xffffffff))) &&
      (0x10 < uStack00000044)) && (0x10 < (param_8 & 0xffffffff))) {
    iVar3 = (int)(((param_2 & 0x1fffffff) << 3) / uVar9);
    if (((in_stack_00000054 < 2) || ((uVar4 & param_3) != 0)) ||
       ((param_3 & 0xffffffff) != (param_6 & 0xffffffff))) {
      uVar11 = 0;
      if (in_stack_00000054 != 0) {
        do {
          fn_82AA7C38(param_1,param_4,uVar7,uVar1,
                        (longlong)(int)(uVar2 * iVar3) * (longlong)(int)uVar6);
          uVar11 = uVar11 + 1;
          param_1 = param_1 + param_3;
          param_4 = param_4 + param_6;
        } while (uVar11 < in_stack_00000054);
      }
    }
    else {
      fn_82AA7C38(param_1,param_4,uVar7,uVar1,
                    (longlong)(int)(uVar2 * iVar3 * (int)uVar6) * (longlong)(int)in_stack_00000054);
    }
  }
  else {
    uVar11 = 0;
    if (in_stack_00000054 != 0) {
      do {
        if ((uVar6 & 0xffffffff) != 0) {
          lVar8 = param_4;
          lVar10 = param_1;
          uVar9 = uVar6;
          do {
            fn_82AA7C38(lVar10,lVar8,uVar7,uVar1,(longlong)(int)uVar2 * (longlong)(int)uVar5);
            uVar9 = uVar9 - 1;
            lVar10 = lVar10 + param_2;
            lVar8 = lVar8 + param_5;
          } while (uVar9 != 0);
        }
        uVar11 = uVar11 + 1;
        param_1 = param_1 + param_3;
        param_4 = param_4 + param_6;
      } while (uVar11 < in_stack_00000054);
    }
  }
  return;
}

