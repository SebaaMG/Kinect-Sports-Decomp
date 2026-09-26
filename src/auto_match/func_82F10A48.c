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
extern int fn_82BA02A8();
extern int fn_82ED7D48();
extern int fn_82ED7E00();
extern int fn_82F0DD50();
extern int fn_82F0E010();
extern int fn_82F0E0D8();
extern int fn_82F0E1E0();
extern int fn_82F0E698();
extern int fn_82F0E920();
extern int fn_82F0FD50();
extern int fn_82F18420();
extern int fn_82F19330();
extern int fn_82F1ABB8();
extern int fn_82F1ED80();


void fn_82F10A48(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  
  uVar7 = 0;
  uVar6 = 0;
  if (*(int *)(param_1 + 0x658) != 0) {
    puVar9 = (undefined4 *)(param_1 + 0xa58);
    do {
      puVar9[0xdd] = 0;
      uVar7 = uVar7 + 1;
      puVar9[0xdc] = 0;
      puVar9[0xda] = 0;
      puVar9[0xdb] = 0;
      puVar9[0xe0] = 0;
      puVar9[0xde] = 0;
      puVar9[0xdf] = 0;
      puVar9[0xe5] = 0;
      puVar9[0xe6] = 0;
      puVar9[0xe1] = 0;
      puVar9[0xe2] = 0;
      puVar9[0xe3] = 0;
      puVar9[0xe4] = 0;
      puVar9[0xee] = 0;
      puVar9[0xef] = 0;
      puVar9[0xea] = 0;
      puVar9[0xe9] = 0;
      puVar9[0xe8] = 0;
      puVar9[0xe7] = 0;
      puVar9[0xeb] = 0;
      puVar9[0xf4] = 0;
      puVar9[0xf3] = 0;
      puVar9 = puVar9 + 0xf2;
      *puVar9 = 0;
      uVar6 = *(uint *)(param_1 + 0x658);
    } while (uVar7 < uVar6);
  }
  if (uVar6 == 1) {
    if (*(int *)(param_1 + 0x6d54) == 0) {
      if (((*(int *)(param_1 + 0xaf0) != 0) && (*(int *)(param_1 + 0xaf0) != 4)) ||
         (*(int *)(param_1 + 0xa0c) != 0)) {
        uVar5 = *(undefined4 *)(param_1 + 0xd4c);
        uVar4 = *(undefined4 *)(param_1 + 0xc40);
        uVar2 = *(undefined4 *)(param_1 + 0xc28);
        goto LAB_82f10b68;
      }
      fn_82ED7D48(param_1,*(undefined4 *)(param_1 + 0xc28),*(undefined4 *)(param_1 + 0xc2c),
                        *(undefined4 *)(param_1 + 0xc40),*(undefined4 *)(param_1 + 0xd48),
                        *(undefined4 *)(param_1 + 0xd4c));
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0xd4c);
      uVar4 = *(undefined4 *)(param_1 + 0xc40);
      uVar2 = *(undefined4 *)(param_1 + 0xc28);
      if (*(int *)(param_1 + 0x7b38) == 0) {
        fn_82BA02A8();
      }
      else {
LAB_82f10b68:
        fn_82F1ED80(param_1,uVar2,*(undefined4 *)(param_1 + 0xc2c),uVar4,uVar5);
      }
    }
    if (*(int *)(param_1 + 0x6d54) == 0) {
      if (((*(int *)(param_1 + 0xaf0) != 0) && (*(int *)(param_1 + 0xaf0) != 4)) ||
         (*(int *)(param_1 + 0xa0c) != 0)) {
        uVar5 = *(undefined4 *)(param_1 + 0xd50);
        uVar4 = *(undefined4 *)(param_1 + 0xd4c);
        uVar2 = *(undefined4 *)(param_1 + 0xc40);
        uVar3 = *(undefined4 *)(param_1 + 0xc28);
        goto LAB_82f10bf8;
      }
      fn_82ED7E00(param_1,*(undefined4 *)(param_1 + 0xc28),*(undefined4 *)(param_1 + 0xc2c),
                        *(undefined4 *)(param_1 + 0xc40),*(undefined4 *)(param_1 + 0xd48),
                        *(undefined4 *)(param_1 + 0xd4c),*(undefined4 *)(param_1 + 0xd50));
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0xd50);
      uVar4 = *(undefined4 *)(param_1 + 0xd4c);
      uVar2 = *(undefined4 *)(param_1 + 0xc40);
      uVar3 = *(undefined4 *)(param_1 + 0xc28);
      if (*(int *)(param_1 + 0x7b38) == 0) {
        fn_82BA02A8();
      }
      else {
LAB_82f10bf8:
        fn_82F1ABB8(param_1,uVar3,*(undefined4 *)(param_1 + 0xc2c),uVar2,uVar4,uVar5);
      }
    }
    fn_82F0E698(param_1,param_1 + 0xb20);
  }
  if ((*(int *)(param_1 + 0xaf0) == 1) || (*(int *)(param_1 + 0xaf0) == 2)) {
    if ((*(int *)(param_1 + 0x648) != 0) && (*(int *)(param_1 + 0x1db0) != 1)) {
      uVar1 = fn_82F0E010(param_1,*(undefined4 *)(param_1 + 0x658));
      fn_82F0FD50(uVar1,*(undefined4 *)(param_1 + 0x658));
      goto LAB_82f10ccc;
    }
    uVar6 = 0;
    puVar8 = *(uint **)(param_1 + 0x1e54);
    if (*(int *)(param_1 + 0x2d4) != 0) {
      do {
        uVar7 = 0;
        if (*(int *)(param_1 + 0x2d0) != 0) {
          do {
            iVar10 = 0;
            lVar11 = 6;
            *puVar8 = *puVar8 & 0xe8ffffff;
            do {
              *(undefined1 *)((int)puVar8 + iVar10 + 0x38) = 0;
              iVar10 = iVar10 + 1;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
            uVar7 = uVar7 + 1;
            puVar8 = puVar8 + 0x45;
          } while (uVar7 < *(uint *)(param_1 + 0x2d0));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x2d4));
    }
  }
  fn_82F0DD50(param_1,*(undefined4 *)(param_1 + 0x658));
LAB_82f10ccc:
  if ((*(int *)(param_1 + 0xaf0) == 1) || (*(int *)(param_1 + 0xaf0) == 2)) {
    if (*(int *)(param_1 + 0x6d54) == 0) {
      fn_82F18420(param_1);
      if ((*(int *)(param_1 + 0x202c) != 0) && (*(int *)(param_1 + 4) == 8)) {
        return;
      }
    }
    else if (*(int *)(param_1 + 0x7b38) == 0) {
      fn_82BA02A8(param_1);
      if (*(int *)(param_1 + 0x202c) != 0) {
        return;
      }
    }
    else {
      fn_82BA02A8(param_1);
    }
    if ((*(int *)(param_1 + 0x648) == 0) && (*(int *)(param_1 + 0x658) == 1)) {
      fn_82F0E920(param_1,param_1 + 0xb20);
    }
  }
  if ((*(int *)(param_1 + 0x648) != 0) &&
     (((*(int *)(param_1 + 0xaf0) == 1 || (*(int *)(param_1 + 0xaf0) == 2)) &&
      (*(int *)(param_1 + 0x658) == 1)))) {
    fn_82F0E920(param_1,param_1 + 0xb20);
  }
  if ((*(int *)(param_1 + 0xaf0) == 0) || (*(int *)(param_1 + 0xaf0) == 4)) {
    if ((*(uint *)(param_1 + 0x924) & 4) != 0) {
      fn_82F19330(param_1,5);
    }
  }
  else if (*(int *)(param_1 + 0x7b38) == 0) {
    if (*(int *)(param_1 + 0x6d54) == 0) {
      fn_82F19330(param_1,0);
      if (*(int *)(param_1 + 0x89c) == 0) {
        fn_82F19330(param_1,1);
      }
      fn_82F0E0D8(param_1,0,*(undefined4 *)(param_1 + 0x658));
      fn_82F0E1E0();
    }
    else {
      fn_82F19330(param_1,0);
      fn_82BA02A8(param_1);
      fn_82BA02A8(param_1);
      fn_82BA02A8(param_1);
      fn_82BA02A8(param_1);
      if (*(int *)(param_1 + 0x89c) == 0) {
        fn_82BA02A8(param_1);
      }
    }
  }
  else {
    fn_82BA02A8();
    fn_82BA02A8(param_1);
    fn_82BA02A8(param_1);
    if (*(int *)(param_1 + 0x89c) == 0) {
      fn_82BA02A8(param_1);
    }
  }
  if (((*(int *)(param_1 + 0x6d54) != 0) && (*(int *)(param_1 + 0x7b38) == 0)) &&
     ((*(int *)(param_1 + 0xaf0) == 0 || (*(int *)(param_1 + 0xaf0) == 4)))) {
    fn_82F19330(param_1,2);
  }
  if ((*(int *)(param_1 + 4) == 8) &&
     ((*(int *)(param_1 + 0xaf0) == 0 || (*(int *)(param_1 + 0xaf0) == 4)))) {
    fn_82F19330(param_1,4);
  }
  if (*(int *)(param_1 + 0xaf0) == 2) {
    fn_82F19330(param_1,3);
  }
  return;
}

