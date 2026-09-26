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
extern int fn_82CD5F00();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000044;


void fn_82CD72C0(int param_1,int param_2,int param_3,int param_4,ulonglong param_5,
                  ulonglong param_6,ulonglong param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  int iStack0000001c;
  undefined4 uStack00000044;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  uint in_stack_00000064;
  uint in_stack_0000006c;
  int in_stack_0000007c;
  
  uStack00000044 = (undefined4)param_7;
  uVar14 = in_stack_00000064;
  if ((in_stack_00000064 ^ (int)in_stack_00000064 >> 0x1f) - ((int)in_stack_00000064 >> 0x1f) != 1)
  {
    uVar14 = (int)in_stack_00000064 >> 1;
  }
  uVar15 = in_stack_0000006c;
  if ((in_stack_0000006c ^ (int)in_stack_0000006c >> 0x1f) - ((int)in_stack_0000006c >> 0x1f) != 1)
  {
    uVar15 = (int)in_stack_0000006c >> 1;
  }
  lVar5 = (param_6 & 0xffff) * 0x10000;
  uVar12 = (ulonglong)in_stack_0000005c - 1;
  uVar17 = lVar5 - 0x10000;
  lVar8 = (param_5 & 0xffff) * 0x10000;
  uVar1 = (int)uVar17 / (int)uVar12;
  uVar10 = lVar8 - 0x10000;
  uVar9 = (ulonglong)in_stack_00000054 - 1;
  iVar7 = ((int)uVar1 >> 4) + (uint)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + (int)lVar5 + -0x8000;
  trapWord(6,uVar9,0);
  trapWord(6,uVar12,0);
  uVar2 = (int)uVar10 / (int)uVar9;
  trapWord(5,uVar9 & ~(((uVar10 & 0x7fffffff) << 1 | (uVar10 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,uVar12 & ~(((uVar17 & 0x7fffffff) << 1 | (uVar17 & 0xffffffff) >> 0x1f) - 1),0xffff);
  iVar11 = 0x8000;
  iVar18 = (int)lVar8;
  if (0x7fff < iVar7) {
    iVar13 = ((int)uVar2 >> 4) + (uint)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + iVar18 + -0x8000;
    do {
      iVar19 = 0;
      iVar6 = 0x8000;
      if (0x7fff < iVar13) {
        iVar16 = (iVar11 >> 0x11) * param_8;
        do {
          iVar4 = iVar6 >> 0x11;
          iVar6 = uVar2 * 2 + iVar6;
          uVar3 = *(undefined1 *)(iVar16 + iVar4 + param_3);
          *(undefined1 *)(in_stack_0000007c + 1 + iVar19) =
               *(undefined1 *)(iVar16 + param_4 + iVar4);
          *(undefined1 *)(in_stack_0000007c + iVar19) = uVar3;
          iVar19 = iVar19 + uVar15 * 2;
        } while (iVar6 <= iVar13);
      }
      iVar11 = uVar1 * 2 + iVar11;
      in_stack_0000007c = in_stack_0000007c + uVar14 * 2;
    } while (iVar11 <= iVar7);
    param_7 = param_7 & 0xffffffff;
  }
  if (((param_1 + 1U & 3) == 0) && ((in_stack_0000005c & 3) == 0)) {
    iStack0000001c = param_2;
    fn_82CD5F00(param_1 + -3,param_2,param_7,in_stack_0000006c);
  }
  else {
    iVar11 = 0x8000;
    if (0x7fff < iVar7) {
      iVar18 = ((int)uVar2 >> 4) + (uint)((int)uVar2 < 0 && (uVar2 & 0xf) != 0) + iVar18 + -0x8000;
      do {
        iVar13 = 0;
        iVar6 = 0x8000;
        if (0x7fff < iVar18) {
          do {
            iVar19 = iVar6 >> 0x10;
            iVar6 = iVar6 + uVar2;
            uVar3 = *(undefined1 *)
                     (((int)(iVar11 + uVar1) >> 0x10) * (int)param_7 + param_2 + iVar19);
            *(undefined1 *)(param_1 + iVar13) =
                 *(undefined1 *)((iVar11 >> 0x10) * (int)param_7 + param_2 + iVar19);
            *(undefined1 *)(param_1 + in_stack_00000064 + iVar13) = uVar3;
            iVar13 = iVar13 + in_stack_0000006c;
          } while (iVar6 <= iVar18);
        }
        iVar11 = uVar1 * 2 + iVar11;
        param_1 = in_stack_00000064 * 2 + param_1;
      } while (iVar11 <= iVar7);
    }
  }
  return;
}

