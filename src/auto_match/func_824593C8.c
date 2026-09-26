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
extern int fn_8225FCE8();
extern int fn_8225FDE0();
extern int fn_82458910();
extern int fn_82E1CAD0();
extern int fn_82E1CB88();
extern int fn_82E1CC60();
extern int fn_82E1CCA8();
extern int fn_82F63108();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int lbl_83276584;


void fn_824593C8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  char cVar8;
  undefined8 uVar9;
  int iStack_60;
  int iStack_5c;
  
  fn_82458910(&iStack_60,*param_1,*(undefined4 *)(param_2 + 0x2c));
  if (param_1[0x14] == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63108();
  }
  uVar9 = (**(code **)(*(int *)param_1[0x14] + 4))((int *)param_1[0x14],param_2);
  uVar5 = lbl_83276584;
  iVar7 = *(int *)(param_2 + 0x24);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  uVar2 = param_1[0x16];
  uVar3 = *(undefined4 *)(iStack_60 + 0x60);
  uVar4 = *(undefined4 *)(iStack_60 + 0xb0);
  pcVar6 = (char *)fn_8225F670();
  if (*pcVar6 != '\0') {
    iVar7 = fn_8225FDE0(0x14,iVar7 != 0);
    if ((iVar7 == 0) && (cVar8 = fn_82E1CAD0(0x14), cVar8 != '\0')) {
      fn_82E1CB88(0xffffffff821a684c,uVar5);
      fn_82E1CB88(0xffffffff821a7640,uVar2);
      fn_82E1CB88(0xffffffff821a69c0,uVar1);
      fn_82E1CB88(0xffffffff821a76f8,uVar4);
      fn_82E1CB88(0xffffffff821a770c,uVar3);
      fn_82E1CC60(uVar9,0xffffffff821a7774);
      fn_8225FCE8(0xffffffff821a6940);
      fn_82E1CCA8();
    }
  }
  if (iStack_5c != 0) {
    fn_822315A0();
  }
  return;
}

