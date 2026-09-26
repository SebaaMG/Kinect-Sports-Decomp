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
extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_82545810();
extern int fn_82545950();
extern int fn_82545A90();
extern int fn_8262FEC8();
extern int fn_8263CBB0();
extern int fn_82A1F2B8();
extern unsigned int lbl_8320A898;


void fn_825CE0F8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 0x11c);
  while (cVar1 != '\0') {
    fn_82A1F2B8(0xffffffff821c91cc);
    cVar1 = *(char *)(param_1 + 0x11c);
  }
  *(undefined1 *)(param_1 + 0x11c) = 1;
  if (*(char *)(param_1 + 0x11d) == '\0') {
    *(undefined1 *)(param_1 + 0x11c) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_82545950(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    fn_82545950(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    fn_82545950(param_1 + 0x18);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    fn_82545A90(param_1 + 0x1c);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    fn_82545950(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    fn_82545A90(param_1 + 0x24);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    fn_82545A90(param_1 + 0x28);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    fn_82545A90(param_1 + 0x2c);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    fn_82545A90(param_1 + 0x30);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_82545950(param_1 + 0x34);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    fn_82545A90(param_1 + 0x38);
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    fn_82545950(param_1 + 0x3c);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    fn_82545A90(param_1 + 0x40);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    fn_8262FEC8();
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_8262FEC8();
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    fn_8262FEC8();
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    fn_8262FEC8();
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    fn_82545810(param_1 + 0xbc);
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    fn_8262FEC8();
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  if (*(int *)(param_1 + 0xc4) != 0) {
    fn_8262FEC8();
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  if (*(int *)(param_1 + 200) != 0) {
    fn_8262FEC8();
    *(undefined4 *)(param_1 + 200) = 0;
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    fn_8262FEC8();
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  if (*(int *)(param_1 + 0xd0) != 0) {
    fn_8262FEC8();
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  if (*(int *)(param_1 + 0xd4) != 0) {
    fn_8262FEC8();
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  iVar3 = *(int *)(param_1 + 0x124);
  if (*(int *)(param_1 + 0x124) != 0) {
    do {
      iVar2 = *(int *)(iVar3 + 0xc4);
      if (*(int *)(iVar3 + 0xa8) != 0) {
        fn_8262FEC8();
        *(undefined4 *)(iVar3 + 0xa8) = 0;
      }
      if (*(int *)(iVar3 + 0xac) != 0) {
        fn_8262FEC8();
        *(undefined4 *)(iVar3 + 0xac) = 0;
      }
      if (*(int *)(iVar3 + 0xb0) != 0) {
        fn_8262FEC8();
        *(undefined4 *)(iVar3 + 0xb0) = 0;
      }
      fn_82522ED8(iVar3);
      iVar3 = iVar2;
    } while (iVar2 != 0);
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x128);
  if (iVar3 != 0) {
    do {
      iVar3 = *(int *)(iVar3 + 0x88);
      fn_82522ED8();
    } while (iVar3 != 0);
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  iVar3 = *(int *)(param_1 + 300);
  if (*(int *)(param_1 + 300) != 0) {
    do {
      iVar2 = *(int *)(iVar3 + 8);
      if (*(int *)(iVar3 + 4) != 0) {
        fn_82545810(iVar3 + 4);
      }
      fn_82522ED8(iVar3);
      iVar3 = iVar2;
    } while (iVar2 != 0);
    *(undefined4 *)(param_1 + 300) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x130);
  if (*(int *)(param_1 + 0x130) != 0) {
    do {
      iVar2 = *(int *)(iVar3 + 8);
      if (*(int *)(iVar3 + 4) != 0) {
        fn_82545810((undefined4 *)(iVar3 + 4));
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      fn_82522ED8(iVar3);
      iVar3 = iVar2;
    } while (iVar2 != 0);
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x134);
  if (*(int *)(param_1 + 0x134) != 0) {
    do {
      iVar2 = *(int *)(iVar3 + 8);
      if (*(int *)(iVar3 + 4) != 0) {
        fn_8251FA58();
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      fn_82522ED8(iVar3);
      iVar3 = iVar2;
    } while (iVar2 != 0);
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    fn_8251FA58();
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(lbl_8320A898,0,0,0x80000000);
}

