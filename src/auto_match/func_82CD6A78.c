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
extern int fn_82CD5D00();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int *iStack00000044;
extern unsigned int uStack_a0;


void fn_82CD6A78(int param_1,int param_2,int param_3,int param_4,ulonglong param_5,
                  ulonglong param_6,int param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  int iStack00000014;
  int iStack0000001c;
  int iStack00000044;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  uint in_stack_0000006c;
  int in_stack_0000007c;
  int in_stack_00000084;
  undefined4 uStack_a0;
  
  uVar8 = in_stack_00000064;
  if ((in_stack_00000064 ^ (int)in_stack_00000064 >> 0x1f) - ((int)in_stack_00000064 >> 0x1f) != 1)
  {
    uVar8 = (int)in_stack_00000064 >> 1;
  }
  uVar17 = in_stack_0000006c;
  if ((in_stack_0000006c ^ (int)in_stack_0000006c >> 0x1f) - ((int)in_stack_0000006c >> 0x1f) != 1)
  {
    uVar17 = (int)in_stack_0000006c >> 1;
  }
  lVar11 = (param_5 & 0xffff) * 0x10000;
  iVar7 = (int)lVar11;
  lVar14 = (param_6 & 0xffff) * 0x10000;
  uVar5 = lVar11 - 0x10000;
  uVar21 = lVar14 - 0x10000;
  uVar18 = (ulonglong)in_stack_00000054 - 1;
  uVar9 = (ulonglong)in_stack_0000005c - 1;
  uVar1 = (int)uVar5 / (int)uVar18;
  trapWord(6,uVar18,0);
  trapWord(5,uVar18 & ~(((uVar5 & 0x7fffffff) << 1 | (uVar5 & 0xffffffff) >> 0x1f) - 1),0xffff);
  uVar2 = (int)uVar21 / (int)uVar9;
  trapWord(6,uVar9,0);
  trapWord(5,uVar9 & ~(((uVar21 & 0x7fffffff) << 1 | (uVar21 & 0xffffffff) >> 0x1f) - 1),0xffff);
  iStack00000014 = param_1;
  iStack0000001c = param_2;
  iStack00000044 = param_7;
  if (((in_stack_0000007c + 1U & 3) == 0) &&
     ((((int)in_stack_00000054 >> 1) +
       (uint)((int)in_stack_00000054 < 0 && (in_stack_00000054 & 1) != 0) & 3) == 0)) {
    fn_82CD5D00(in_stack_0000007c + -3);
    fn_82CD5D00(in_stack_00000084 + -3,param_4);
    iVar7 = uStack_a0;
  }
  else {
    uStack_a0 = (int)lVar14;
    iVar20 = 0x8000;
    iVar16 = ((int)uVar2 >> 4) + (uint)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + uStack_a0 + -0x8000;
    if (0x7fff < iVar16) {
      iVar13 = 0;
      iVar19 = ((int)uVar1 >> 4) + (uint)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + iVar7 + -0x8000;
      do {
        iVar15 = 0;
        iVar12 = 0x8000;
        if (0x7fff < iVar19) {
          iVar6 = (iVar20 >> 0x11) * param_8;
          iVar10 = iVar13;
          do {
            iVar4 = iVar12 >> 0x11;
            iVar12 = uVar1 * 2 + iVar12;
            uVar3 = *(undefined1 *)(iVar6 + param_4 + iVar4);
            *(undefined1 *)(iVar10 + in_stack_0000007c) = *(undefined1 *)(iVar6 + iVar4 + param_3);
            *(undefined1 *)(iVar13 + in_stack_00000084 + iVar15) = uVar3;
            iVar15 = iVar15 + uVar17;
            iVar10 = iVar13 + iVar15;
          } while (iVar12 <= iVar19);
        }
        iVar20 = uVar2 * 2 + iVar20;
        iVar13 = iVar13 + uVar8;
      } while (iVar20 <= iVar16);
    }
  }
  if (((param_1 + 1U & 3) == 0) && ((in_stack_00000054 & 3) == 0)) {
    fn_82CD5D00(param_1 + -3,iStack0000001c,iStack00000044,in_stack_00000064,param_5,param_6,
                  (longlong)(int)uVar1,uVar2);
  }
  else {
    iVar16 = 0x8000;
    iVar20 = ((int)uVar2 >> 4) + (uint)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + uStack_a0 + -0x8000;
    if (0x7fff < iVar20) {
      iVar7 = ((int)uVar1 >> 4) + (uint)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + iVar7 + -0x8000;
      do {
        iVar13 = 0;
        lVar11 = 0x8000;
        if (0x7fff < iVar7) {
          do {
            iVar19 = (int)lVar11 >> 0x10;
            lVar11 = lVar11 + (int)uVar1;
            uVar3 = *(undefined1 *)
                     (((int)(iVar16 + uVar2) >> 0x10) * iStack00000044 + iStack0000001c + iVar19);
            *(undefined1 *)(param_1 + iVar13) =
                 *(undefined1 *)((iVar16 >> 0x10) * iStack00000044 + iStack0000001c + iVar19);
            *(undefined1 *)(param_1 + in_stack_00000064 + iVar13) = uVar3;
            iVar13 = iVar13 + in_stack_0000006c;
          } while ((int)lVar11 <= iVar7);
        }
        iVar16 = uVar2 * 2 + iVar16;
        param_1 = in_stack_00000064 * 2 + param_1;
      } while (iVar16 <= iVar20);
    }
  }
  return;
}

