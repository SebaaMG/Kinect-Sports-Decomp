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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern int fn_822315A0();
extern int fn_823AB478();
extern int fn_82522588();
extern int fn_82522D98();
extern int fn_827D6E18();
extern int fn_82A264E0();
extern int fn_82A264E8();
extern unsigned int iStack_84;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int lbl_83265A24;
extern unsigned int *lbl_832767C8;
extern unsigned int uStack_70;
extern U64 storeWordConditionalIndexed();


void fn_82522258(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar4;
  ulonglong uVar3;
  int iVar5;
  uint *puVar6;
  char in_RESERVE;
  int iStack_90;
  int iStack_8c;
  undefined1 auStack_88 [4];
  int iStack_84;
  undefined1 auStack_80 [16];
  ulonglong uStack_70;
  
  if (*(int *)(param_1 + 0x120) == -1) {
    return;
  }
  uVar2 = fn_827D6E18(auStack_88,lbl_83265A24);
  fn_82522588(&iStack_90,uVar2);
  if (iStack_84 != 0) {
    fn_822315A0();
  }
  if (iStack_90 != 0) {
    uVar4 = (**(code **)(*lbl_832767C8 + 0x10))();
    fn_82A264E0(*(undefined4 *)(iStack_90 + 0x98),auStack_80);
    uVar3 = fn_82A264E8(uVar4,0);
    if ((uVar3 & 0x7fffffff) << 1 <= (uStack_70 & 0xffffffff)) {
      *(undefined4 *)(param_1 + 0x110) = 1;
      iVar5 = fn_823AB478(param_1);
      if (*(char *)((int)lbl_832767C8 + iVar5 + 0x88) == '\0') {
        puVar6 = (uint *)(ZEXT48(lbl_832767C8) + 0xa0);
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((ulonglong)*puVar6 - 1,0,ZEXT48(lbl_832767C8) + 0xa0);
          *puVar6 = uVar1;
        }
      }
      else {
        *(undefined1 *)((int)lbl_832767C8 + iVar5 + 0x88) = 0;
      }
      if (iStack_8c == 0) {
        return;
      }
      fn_822315A0();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(0x14);
}

