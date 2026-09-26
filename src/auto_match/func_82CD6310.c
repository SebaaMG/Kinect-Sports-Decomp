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
extern int fn_82CD5C30();
extern unsigned int iStack0000001c;
extern unsigned int iStack00000044;


void fn_82CD6310(uint param_1,int param_2,int param_3,int param_4,ulonglong param_5,
                  ulonglong param_6,int param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  int iStack0000001c;
  int iStack00000044;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  uint in_stack_0000006c;
  int in_stack_0000007c;
  
  uVar14 = in_stack_00000064;
  if ((in_stack_00000064 ^ (int)in_stack_00000064 >> 0x1f) - ((int)in_stack_00000064 >> 0x1f) != 1)
  {
    uVar14 = (int)in_stack_00000064 >> 1;
  }
  uVar16 = in_stack_0000006c;
  if ((in_stack_0000006c ^ (int)in_stack_0000006c >> 0x1f) - ((int)in_stack_0000006c >> 0x1f) != 1)
  {
    uVar16 = (int)in_stack_0000006c >> 1;
  }
  lVar5 = (param_6 & 0xffff) * 0x10000;
  uVar13 = (ulonglong)in_stack_0000005c - 1;
  uVar18 = lVar5 - 0x10000;
  lVar8 = (param_5 & 0xffff) * 0x10000;
  uVar1 = (int)uVar18 / (int)uVar13;
  uVar12 = lVar8 - 0x10000;
  uVar10 = (ulonglong)in_stack_00000054 - 1;
  iVar7 = ((int)uVar1 >> 4) + (uint)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + (int)lVar5 + -0x8000;
  trapWord(6,uVar13,0);
  uVar2 = (int)uVar12 / (int)uVar10;
  trapWord(6,uVar10,0);
  trapWord(5,uVar10 & ~(((uVar12 & 0x7fffffff) << 1 | (uVar12 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,uVar13 & ~(((uVar18 & 0x7fffffff) << 1 | (uVar18 & 0xffffffff) >> 0x1f) - 1),0xffff);
  iVar9 = 0x8000;
  iVar15 = (int)lVar8;
  if (0x7fff < iVar7) {
    iVar11 = ((int)uVar2 >> 4) + (uint)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + iVar15 + -0x8000;
    do {
      iVar19 = 0;
      iVar6 = 0x8000;
      if (0x7fff < iVar11) {
        iVar17 = (iVar9 >> 0x11) * param_8;
        do {
          iVar4 = iVar6 >> 0x11;
          iVar6 = uVar2 * 2 + iVar6;
          uVar3 = *(undefined1 *)(iVar17 + iVar4 + param_3);
          *(undefined1 *)(in_stack_0000007c + 1 + iVar19) =
               *(undefined1 *)(iVar17 + param_4 + iVar4);
          *(undefined1 *)(in_stack_0000007c + iVar19) = uVar3;
          iVar19 = iVar19 + uVar16 * 2;
        } while (iVar6 <= iVar11);
      }
      iVar9 = uVar1 * 2 + iVar9;
      in_stack_0000007c = in_stack_0000007c + uVar14 * 2;
    } while (iVar9 <= iVar7);
  }
  if (((param_1 & 3) == 0) && ((in_stack_00000054 & 3) == 0)) {
    iStack0000001c = param_2;
    iStack00000044 = param_7;
    fn_82CD5C30(param_1,param_2,param_7,in_stack_00000064);
  }
  else {
    iVar9 = 0x8000;
    if (0x7fff < iVar7) {
      iVar15 = ((int)uVar2 >> 4) + (uint)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + iVar15 + -0x8000;
      do {
        iVar11 = 0;
        iVar6 = 0x8000;
        if (0x7fff < iVar15) {
          do {
            iVar19 = iVar6 >> 0x10;
            iVar6 = iVar6 + uVar2;
            uVar3 = *(undefined1 *)(((int)(iVar9 + uVar1) >> 0x10) * param_7 + param_2 + iVar19);
            *(undefined1 *)(param_1 + iVar11) =
                 *(undefined1 *)((iVar9 >> 0x10) * param_7 + param_2 + iVar19);
            *(undefined1 *)(param_1 + in_stack_00000064 + iVar11) = uVar3;
            iVar11 = iVar11 + in_stack_0000006c;
          } while (iVar6 <= iVar15);
        }
        iVar9 = uVar1 * 2 + iVar9;
        param_1 = in_stack_00000064 * 2 + param_1;
      } while (iVar9 <= iVar7);
    }
  }
  return;
}

