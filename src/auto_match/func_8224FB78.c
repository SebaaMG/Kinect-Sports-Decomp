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
extern int fn_823AB470();
extern int fn_82512308();
extern int fn_82519EF0();
extern int fn_8251A108();
extern int fn_82521120();
extern int fn_82593A50();
extern int fn_828BB4B8();
extern int fn_828EB518();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659D4;
extern unsigned int lbl_83265A58;
extern unsigned int lbl_83265A5C;


void fn_8224FB78(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_40 [64];
  
  iVar5 = lbl_83265988;
  iVar6 = 0;
  if ((lbl_83265988 == 0) ||
     ((*(int *)(param_1 + 0x34) == 2 &&
      (iVar4 = fn_823AB470(lbl_83265988), iVar6 = lbl_83265988, iVar4 != 2)))) {
    if (lbl_832659D4 != '\0') {
      return;
    }
    if (lbl_83265A58 == 1) {
      return;
    }
    if (lbl_83265A5C != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      uVar7 = 0;
      if (iVar5 == 0) {
        do {
          iVar5 = iVar6;
          if ((uVar7 & 0xffffffff) != 0xff) {
            iVar5 = fn_828EB518(uVar7);
            iVar6 = lbl_83265988;
          }
          if (iVar5 != 0) {
            fn_82593A50();
            break;
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < 4);
      }
      else {
        fn_82512308();
      }
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      return;
    }
  }
  else if (*(int *)(param_1 + 0x3c) != 0) {
    uVar3 = fn_828BB4B8(auStack_40,*(undefined4 *)(param_1 + 0x30));
    fn_82519EF0(*(undefined4 *)(param_1 + 0x28),uVar3);
    **(undefined4 **)(param_1 + 0x28) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x24) = 2;
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x28) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x2c) = 8;
    puVar1 = *(undefined4 **)(param_1 + 0x2c);
    iVar5 = *(int *)(param_1 + 0x28);
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    fn_82521120(puVar1);
    *puVar1 = uVar2;
    *(undefined1 *)((int)puVar1 + 0x4d) = 0;
    *(undefined1 *)(puVar1 + 0x15) = 1;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1[0x14] = 0;
    if (iVar5 == 0) {
      *(undefined1 *)(puVar1 + 0x13) = 0;
    }
    else {
      *(undefined1 *)(puVar1 + 0x13) = 1;
      fn_8251A108(puVar1 + 3,iVar5);
    }
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    return;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}

