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
extern int fn_8225F670();
extern int fn_8225FDE0();
extern int fn_82458910();
extern int fn_82E1CAD0();
extern int fn_82E1CB88();
extern int fn_82E1CCA8();
extern unsigned int iStack_74;
extern unsigned int iStack_78;
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int lbl_83276584;


void fn_82458E80(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char *pcVar13;
  int iVar14;
  char cVar15;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  
  fn_82458910(&iStack_78,*param_1,*(undefined4 *)(param_2 + 0x2c));
  fn_82458910(&iStack_80,*param_1,*(undefined4 *)(param_3 + 0x2c));
  uVar12 = lbl_83276584;
  uVar1 = *(undefined4 *)(iStack_80 + 0x68);
  uVar2 = *(undefined4 *)(iStack_80 + 0x60);
  uVar3 = *(undefined4 *)(iStack_80 + 0x34);
  uVar4 = *(uint *)(iStack_80 + 0x48);
  uVar5 = *(uint *)(iStack_80 + 0x4c);
  uVar6 = *(undefined4 *)(iStack_78 + 0x68);
  uVar7 = *(undefined4 *)(iStack_78 + 0x60);
  uVar8 = *(undefined4 *)(iStack_78 + 0x34);
  uVar9 = *(uint *)(iStack_78 + 0x48);
  uVar10 = *(uint *)(iStack_78 + 0x4c);
  uVar11 = param_1[0x16];
  pcVar13 = (char *)fn_8225F670();
  if (*pcVar13 != '\0') {
    iVar14 = fn_8225FDE0(0x16,1);
    if ((iVar14 == 0) && (cVar15 = fn_82E1CAD0(0x16), cVar15 != '\0')) {
      fn_82E1CB88(0xffffffff821a684c,uVar12);
      fn_82E1CB88(0xffffffff821a7640,uVar11);
      fn_82E1CB88(0xffffffff821a7790,(ulonglong)uVar10 + (ulonglong)uVar9);
      fn_82E1CB88(0xffffffff821a77a4,uVar8);
      fn_82E1CB88(0xffffffff821a77b8,uVar7);
      fn_82E1CB88(0xffffffff821a77d0,uVar6);
      fn_82E1CB88(0xffffffff821a77e4,(ulonglong)uVar5 + (ulonglong)uVar4);
      fn_82E1CB88(0xffffffff821a77f8,uVar3);
      fn_82E1CB88(0xffffffff821a780c,uVar2);
      fn_82E1CB88(0xffffffff821a7824,uVar1);
      fn_82E1CCA8();
    }
  }
  param_1[0x16] = param_1[0x16] + 1;
  if (iStack_7c != 0) {
    fn_822315A0();
  }
  if (iStack_74 != 0) {
    fn_822315A0();
  }
  return;
}

