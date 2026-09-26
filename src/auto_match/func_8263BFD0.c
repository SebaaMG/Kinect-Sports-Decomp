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
extern int fn_8263ABD0();
extern int fn_8263AD78();
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_8263BFD0(int param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint *in_stack_0000006c;
  undefined4 *in_stack_00000074;
  uint *in_stack_0000007c;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  
  lVar7 = ((ulonglong)in_stack_00000054 & 0x7fffffff) * 2 + 1;
  lVar3 = param_4;
  if (param_1 == 3) {
LAB_8263c080:
    uVar4 = 1;
LAB_8263c08c:
    if (param_1 != 0x11) {
LAB_8263c094:
      lVar3 = 1;
    }
  }
  else {
    if (param_1 != 0x11) {
      if (param_1 == 0x12) {
        uVar4 = 3;
      }
      else {
        if (param_1 == 0x13) goto LAB_8263c080;
        uVar4 = uStack_78;
        if (param_1 != 0x14) goto LAB_8263c08c;
        uVar4 = 0;
        param_8 = 0;
      }
      goto LAB_8263c094;
    }
    uVar4 = 2;
  }
  if ((param_5 & 0xffffffff) == 0) {
    param_5 = fn_8263ABD0(param_2,param_3,lVar3,in_stack_00000054);
  }
  if ((int)param_8 == 2) {
    param_8 = -(ulonglong)(1 < param_5) & 1;
  }
  fn_8263AD78(param_2,param_3,param_4,param_5,param_7 & 0x3f,uVar4,(param_7 & 0xffffffff) >> 8 & 1
                ,param_8);
  uVar6 = 0x100003;
  if ((param_6 & 4) != 0) {
    uVar6 = 0x300003;
  }
  if ((param_6 & 0x200) != 0) {
    uVar6 = uVar6 | 0x400000;
  }
  *in_stack_0000006c = uVar6;
  uVar6 = in_stack_0000006c[0xc];
  in_stack_0000006c[1] = 1;
  uVar2 = (uVar4 & 3) << 9;
  in_stack_0000006c[5] = 0xffff0000;
  in_stack_0000006c[6] = 0xffff0000;
  in_stack_0000006c[2] = 0;
  in_stack_0000006c[0xc] = uVar2 | uVar6 & 0xfffff9ff;
  iVar8 = (int)param_2;
  iVar1 = (int)lVar7;
  if (uVar4 == 0) {
    uVar4 = in_stack_0000006c[9] & 0xff000000 | iVar8 - iVar1 & 0xffffffU;
LAB_8263c1ec:
    in_stack_0000006c[9] = uVar4;
  }
  else {
    if (uVar4 == 1) {
      in_stack_0000006c[9] = in_stack_0000006c[9] & 0xffffe000 | iVar8 - iVar1 & 0x1fffU;
      uVar5 = (uint)((param_3 - lVar7 & 0xffffffffU) << 0xd) & 0x3ffe000 |
              (uint)((param_4 - 1U & 0xffffffff) << 0x1a);
      uVar4 = in_stack_0000006c[9] & 0x1fff;
    }
    else {
      if (2 < uVar4) {
        if (uVar4 != 3) goto LAB_8263c1f0;
        uVar4 = (uint)((param_4 - 1U & 0xffffffff) << 0x1a) |
                (uint)((param_3 - lVar7 & 0xffffffffU) << 0xd) & 0x3ffe000 | iVar8 - iVar1 & 0x1fffU
        ;
        goto LAB_8263c1ec;
      }
      in_stack_0000006c[9] = in_stack_0000006c[9] & 0xfffff800 | iVar8 - iVar1 & 0x7ffU;
      uVar4 = iVar8 - iVar1 & 0x7ff;
      uVar5 = (uint)((param_3 - lVar7 & 0xffffffffU) << 0xb) & 0x3ff800 |
              (uint)((param_4 - lVar7 & 0xffffffffU) << 0x16);
    }
    in_stack_0000006c[9] = uVar5 | uVar4;
  }
LAB_8263c1f0:
  iVar8 = (int)param_7;
  in_stack_0000006c[7] =
       ((((iVar8 >> 0xf & 3U) << 2 | iVar8 >> 0xd & 3U) << 2 | iVar8 >> 0xb & 3U) << 2 |
       iVar8 >> 9 & 3U) << 2 |
       (((iVar8 >> 8) << 0xe | uStack_80 & 0x3fff) & 0x7fe0) << 0x11 |
       in_stack_0000006c[7] & 0x3ffc00 | 2;
  in_stack_0000006c[0xb] =
       (uint)((param_5 - 1 & 0xffffffff) << 6) & 0x3c0 | in_stack_0000006c[0xb] & 0xfffffc3f;
  in_stack_0000006c[8] =
       (uint)(param_1 == 0x13) << 10 |
       (iVar8 >> 6 & 3U) << 6 | in_stack_0000006c[8] & 0xfffffb00 | (uint)(param_7 & 0x3f);
  in_stack_0000006c[0xc] =
       (uint)((param_8 & 0xffffffff) << 0xb) & 0x800 | uVar2 | uVar6 & 0xfffff1ff;
  in_stack_0000006c[10] =
       (in_stack_0000005c & 0x3f | in_stack_00000054 << 0x12) << 0xd | iVar8 >> 0x11 & 0x1fffU |
       in_stack_0000006c[10] & 0x7ff80000;
  *in_stack_00000074 = uStack_7c;
  *in_stack_0000007c = uStack_78;
  return;
}

