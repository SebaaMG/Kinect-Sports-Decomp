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
extern int fn_82CD5DD0();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000014;
extern unsigned int uStack00000044;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_82CD6530(uint param_1,int param_2,int param_3,int param_4,ulonglong param_5,
                  ulonglong param_6,ulonglong param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  uint uStack00000014;
  int iStack0000001c;
  undefined4 uStack00000044;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  uint in_stack_0000006c;
  uint in_stack_0000007c;
  int in_stack_00000084;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  uStack00000044 = (undefined4)param_7;
  if ((in_stack_00000064 ^ (int)in_stack_00000064 >> 0x1f) - ((int)in_stack_00000064 >> 0x1f) == 1)
  {
    uStack_a0 = in_stack_00000064;
  }
  else {
    uStack_a0 = (int)in_stack_00000064 >> 1;
  }
  uVar6 = in_stack_0000006c;
  if ((in_stack_0000006c ^ (int)in_stack_0000006c >> 0x1f) - ((int)in_stack_0000006c >> 0x1f) != 1)
  {
    uVar6 = (int)in_stack_0000006c >> 1;
  }
  lVar10 = (param_5 & 0xffff) * 0x10000;
  iVar5 = (int)lVar10;
  lVar12 = (param_6 & 0xffff) * 0x10000;
  uVar7 = lVar10 - 0x10000;
  uVar19 = lVar12 - 0x10000;
  uVar18 = (ulonglong)in_stack_00000054 - 1;
  uVar15 = (ulonglong)in_stack_0000005c - 1;
  uVar1 = (int)uVar7 / (int)uVar18;
  trapWord(6,uVar18,0);
  trapWord(5,uVar18 & ~(((uVar7 & 0x7fffffff) << 1 | (uVar7 & 0xffffffff) >> 0x1f) - 1),0xffff);
  uVar2 = (int)uVar19 / (int)uVar15;
  trapWord(6,uVar15,0);
  trapWord(5,uVar15 & ~(((uVar19 & 0x7fffffff) << 1 | (uVar19 & 0xffffffff) >> 0x1f) - 1),0xffff);
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  if (((in_stack_0000007c & 3) == 0) &&
     (((longlong)((int)in_stack_0000005c >> 1) +
       (ulonglong)((int)in_stack_0000005c < 0 && (in_stack_0000005c & 1) != 0) & 3) == 0)) {
    fn_82CD5DD0();
    fn_82CD5DD0(in_stack_00000084,param_4);
    iVar5 = uStack_9c;
  }
  else {
    uStack_9c = (int)lVar12;
    iVar17 = 0x8000;
    iVar14 = ((int)uVar2 >> 4) + (uint)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + uStack_9c + -0x8000;
    if (0x7fff < iVar14) {
      iVar8 = 0;
      iVar16 = ((int)uVar1 >> 4) + (uint)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + iVar5 + -0x8000;
      do {
        iVar13 = 0;
        iVar11 = 0x8000;
        if (0x7fff < iVar16) {
          iVar20 = (iVar17 >> 0x11) * param_8;
          iVar9 = iVar8;
          do {
            iVar4 = iVar11 >> 0x11;
            iVar11 = uVar1 * 2 + iVar11;
            uVar3 = *(undefined1 *)(iVar20 + param_4 + iVar4);
            *(undefined1 *)(iVar9 + in_stack_0000007c) = *(undefined1 *)(iVar20 + iVar4 + param_3);
            *(undefined1 *)(iVar8 + in_stack_00000084 + iVar13) = uVar3;
            iVar13 = iVar13 + uVar6;
            iVar9 = iVar8 + iVar13;
          } while (iVar11 <= iVar16);
        }
        iVar17 = uVar2 * 2 + iVar17;
        iVar8 = iVar8 + uStack_a0;
      } while (iVar17 <= iVar14);
      param_7 = param_7 & 0xffffffff;
    }
  }
  if (((param_1 & 3) == 0) && ((in_stack_0000005c & 3) == 0)) {
    fn_82CD5DD0(param_1,param_2,param_7,in_stack_0000006c,param_5,param_6,
                  (ulonglong)in_stack_00000054,in_stack_0000005c);
  }
  else {
    iVar14 = 0x8000;
    iVar17 = ((int)uVar2 >> 4) + (uint)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + uStack_9c + -0x8000;
    if (0x7fff < iVar17) {
      iVar5 = ((int)uVar1 >> 4) + (uint)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + iVar5 + -0x8000;
      do {
        iVar8 = 0;
        iVar16 = 0x8000;
        if (0x7fff < iVar5) {
          do {
            iVar11 = iVar16 >> 0x10;
            iVar16 = iVar16 + uVar1;
            uVar3 = *(undefined1 *)
                     (((int)(iVar14 + uVar2) >> 0x10) * (int)param_7 + param_2 + iVar11);
            *(undefined1 *)(param_1 + iVar8) =
                 *(undefined1 *)((iVar14 >> 0x10) * (int)param_7 + param_2 + iVar11);
            *(undefined1 *)(param_1 + in_stack_00000064 + iVar8) = uVar3;
            iVar8 = iVar8 + in_stack_0000006c;
          } while (iVar16 <= iVar5);
        }
        iVar14 = uVar2 * 2 + iVar14;
        param_1 = in_stack_00000064 * 2 + param_1;
      } while (iVar14 <= iVar17);
    }
  }
  return;
}

