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
extern int fn_826BCD88();
extern int fn_82791560();
extern int fn_827917E8();


void fn_827918F8(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  if (*(int *)(param_1 + 4) == 7) {
    fn_827917E8();
    puVar6 = (uint *)(param_1 + 8);
    uVar5 = *(uint *)(param_1 + 8);
    uVar4 = *(uint *)(param_1 + 0x10);
    if (uVar5 < uVar4) {
      do {
        uVar1 = *(uint *)(param_1 + 0x14);
        iVar2 = fn_826BCD88(0xffffffff820083c8,uVar1 & 0xffff);
        if ((iVar2 == 0) || (uVar1 == 0x3d)) break;
        fn_82791560(puVar6);
        uVar5 = *puVar6;
        uVar4 = *(uint *)(param_1 + 0x10);
      } while (uVar5 < uVar4);
      if (uVar5 < uVar4) {
        iVar2 = *(int *)(param_1 + 0x14);
        if (iVar2 == 0x3d) {
          fn_82791560(puVar6);
          fn_827917E8(param_1);
          *(undefined4 *)(param_1 + 4) = 8;
        }
        else if ((iVar2 == 0x2f) || (iVar2 == 0x3e)) {
          *(undefined4 *)(param_1 + 4) = 9;
        }
        else {
          *(undefined4 *)(param_1 + 4) = 1;
        }
        goto LAB_827919c8;
      }
    }
    uVar3 = 1;
LAB_82791a48:
    *(undefined4 *)(param_1 + 4) = uVar3;
  }
  else {
LAB_827919c8:
    if (*(int *)(param_1 + 4) != 8) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x14);
    if ((iVar2 == 0x22) || (iVar2 == 0x27)) {
      puVar6 = (uint *)(param_1 + 8);
      do {
        fn_82791560(puVar6);
        if (*(uint *)(param_1 + 0x10) <= *puVar6) goto LAB_82791a18;
      } while (*(int *)(param_1 + 0x14) != iVar2);
      if (*puVar6 < *(uint *)(param_1 + 0x10)) {
        fn_82791560(puVar6);
        fn_827917E8(param_1);
        if ((*(int *)(param_1 + 0x14) == 0x3e) || (*(int *)(param_1 + 0x14) == 0x2f)) {
          *(undefined4 *)(param_1 + 4) = 9;
          return;
        }
        uVar3 = 7;
        goto LAB_82791a48;
      }
    }
LAB_82791a18:
    *(undefined4 *)(param_1 + 4) = 1;
  }
  return;
}

