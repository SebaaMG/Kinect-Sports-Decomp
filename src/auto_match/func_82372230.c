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
extern int fn_822315A0();
extern int fn_82381060();
extern int fn_82381120();
extern int fn_82381248();
extern int fn_823813F8();
extern int fn_823814C0();
extern int fn_823815D0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_831CB188;
extern unsigned int lbl_831DCD58;


void fn_82372230(double param_1,undefined8 param_2,int param_3,int *param_4,int param_5,
                  int param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  
  iVar1 = *(int *)(param_5 + 0x2c);
  uVar6 = *(undefined4 *)(param_5 + 0x28);
  iVar5 = *(int *)(param_6 + 0x2c);
  uVar2 = *(undefined4 *)(param_6 + 0x28);
  iVar4 = param_7 * 0x148 + *param_4;
  iVar8 = iVar4 + 0x1dc;
  if ((double)lbl_8218E8E8 <= param_1) {
    iVar8 = iVar4 + 0x280;
  }
  if (param_7 < 0x18) {
    uVar9 = *(uint *)(&lbl_831DCD58 + param_7 * 4);
  }
  else {
    uVar9 = 6;
  }
  if (uVar9 == 0) {
    fn_82381060(*(undefined4 *)(param_3 + 0x7e4),iVar1);
  }
  else if (uVar9 == 1) {
    fn_82381120(param_2,*(undefined4 *)(param_3 + 0x7e4),param_7,iVar1,uVar6,iVar5,uVar2);
  }
  else if (uVar9 < 3) {
    fn_82381248(*(undefined4 *)(param_3 + 0x7e4),param_7,iVar1,uVar6,iVar5,uVar2);
  }
  else if (uVar9 == 3) {
    fn_823813F8(*(undefined4 *)(param_3 + 0x7e4),param_7,uVar6,iVar5,uVar2);
  }
  else if (uVar9 < 5) {
    uVar3 = *(undefined4 *)(param_3 + 0x7e4);
    if (iVar1 == iVar5) {
      uVar6 = uVar2;
      if (param_7 == 0xe) {
        uVar7 = 7;
      }
      else {
        uVar7 = 0xc;
      }
    }
    else {
      if (param_7 == 0x10) {
        if (*(int *)(iVar8 + 0x24) == 0) {
          uVar7 = 6;
        }
        else {
          uVar7 = 5;
        }
      }
      else {
        uVar7 = 0xc;
      }
      fn_823815D0(uVar3,iVar5,uVar2,uVar7);
      iVar5 = fn_823814C0(uVar3,iVar5);
      uVar7 = 0x10;
      if (*(int *)(&lbl_831CB188 + iVar5 * 0x10) == 0) {
        uVar7 = 0xf;
      }
    }
    fn_823815D0(uVar3,iVar1,uVar6,uVar7);
  }
  if (param_4[1] != 0) {
    fn_822315A0();
  }
  return;
}

