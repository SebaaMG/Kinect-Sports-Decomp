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
extern int fn_82FA5190();
extern int fn_82FB7F40();
extern int fn_82FB7FD0();
extern int fn_82FB8030();
extern int fn_82FB80D0();
extern int fn_82FB81B8();
extern int fn_82FB8358();
extern int fn_82FB8A98();
extern int fn_82FB9020();
extern int fn_8300EA70();
extern unsigned int lbl_831BC768;
extern unsigned int uStack_30;


undefined8 fn_82FB91C0(uint *param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  int *piVar6;
  char acStack_40 [8];
  int *piStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  
  fn_82FB7FD0();
  fn_82FB7F40(param_1);
  uVar5 = 1;
  param_1[4] = 0;
  piStack_38 = (int *)0x0;
  piStack_34 = (int *)0x0;
  uStack_30 = 0;
  acStack_40[0] = '\0';
  *(undefined1 *)(param_1 + 6) = 1;
  iVar3 = fn_82FB80D0(param_1,(ulonglong)*param_1 + 0xac,param_2,&piStack_38,acStack_40);
  if ((acStack_40[0] == '\0') || (iVar3 != 1)) {
LAB_82fb9304:
    uVar5 = 2;
  }
  else {
    piVar6 = piStack_38;
    if (piStack_38 == piStack_34) {
      uVar5 = 2;
    }
    else {
      do {
        piVar1 = (int *)*piVar6;
        cVar4 = (**(code **)(*piVar1 + 4))(piVar1);
        if (cVar4 != '\0') break;
        iVar3 = fn_82FB81B8(param_1,piVar1);
        if (iVar3 != 1) {
          fn_82FB8030(param_1);
          goto LAB_82fb9304;
        }
        piVar6 = piVar6 + 1;
        if (piVar6 == piStack_34) {
          fn_82FB9020(param_1);
          fn_8300EA70(&piStack_38);
          return 1;
        }
        uVar2 = *(uint *)(*(int *)(*piVar6 + 4) + 0x1c);
        if (uVar2 < 4) {
          if ((uVar2 == 0) || (uVar2 == 1)) {
            fn_82FB8358(param_1);
          }
          else {
            fn_82FB8A98(param_1);
          }
        }
      } while (piVar6 != piStack_34);
      uVar2 = piVar1[4];
      param_1[4] = uVar2;
      *(char *)(param_1 + 6) = '\x01' - (uVar2 == 0);
      param_1[5] = piVar1[2];
      *(undefined2 *)((int)param_1 + 0x2a) = *(undefined2 *)(piVar1 + 3);
    }
  }
  if (piStack_38 != (int *)0x0) {
    piStack_34 = piStack_38;
    fn_82FA5190(lbl_831BC768);
  }
  return uVar5;
}

