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
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82521AB0();
extern int fn_82522258();
extern int fn_82522588();
extern int fn_82522D98();
extern int fn_8259BDA8();
extern int fn_827D6E18();
extern int fn_828EA610();
extern int fn_82A264D8();
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int lbl_83265A24;
extern U64 storeWordConditionalIndexed();


undefined8 fn_82521888(longlong param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar6;
  undefined8 uVar4;
  int iVar5;
  uint *puVar7;
  char in_RESERVE;
  byte bVar8;
  undefined4 *apuStack_50 [2];
  int iStack_48;
  int iStack_44;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  cVar6 = fn_828EA610(param_2);
  if (((cVar6 == '\0') && (bVar1 = *(char *)(param_2 + 0xd8) == '\0', bVar8 = bVar1 << 1, bVar1)) &&
     (*(int *)(param_2 + 0x120) != -1)) {
    uVar4 = fn_827D6E18(auStack_40,lbl_83265A24);
    fn_82522588(&iStack_48,uVar4);
    if (iStack_3c != 0) {
      fn_822315A0();
    }
    if (*(int *)(iStack_48 + 0x98) != 0) {
      iVar5 = fn_82A264D8(*(int *)(iStack_48 + 0x98),0);
      bVar8 = (iVar5 == 0) << 1;
      if (iVar5 != 0) {
LAB_82521954:
        do {
          puVar7 = (uint *)(param_1 + 0xa0);
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed((ulonglong)*puVar7 + 1,0,param_1 + 0xa0);
            *puVar7 = uVar3;
            bVar8 = 2;
          }
        } while (!(bool)(bVar8 >> 1));
        fn_82521AB0(param_2);
                    /* WARNING: Subroutine does not return */
        fn_82522D98(0x14);
      }
    }
    puVar2 = *(undefined4 **)(iStack_48 + 0xa0);
    apuStack_50[0] = (undefined4 *)*puVar2;
    while (apuStack_50[0] != puVar2) {
      iVar5 = fn_82A264D8(apuStack_50[0][3],0);
      bVar8 = (iVar5 == 0) << 1;
      if (iVar5 != 0) goto LAB_82521954;
      fn_8259BDA8(apuStack_50);
    }
    if (*(int *)(param_2 + 0x110) == 1) {
      *(undefined4 *)(param_2 + 0x110) = 0;
      do {
        puVar7 = (uint *)(param_1 + 0xa0);
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((ulonglong)*puVar7 + 1,0,param_1 + 0xa0);
          *puVar7 = uVar3;
          bVar8 = 2;
        }
      } while (!(bool)(bVar8 >> 1 & 1));
      fn_82522258(param_2);
    }
    if (iStack_44 != 0) {
      fn_822315A0();
    }
  }
  return 0;
}

