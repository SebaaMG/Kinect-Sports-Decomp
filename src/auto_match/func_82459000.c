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
extern unsigned int *auStack_90;
extern int fn_822315A0();
extern int fn_82264CE0();
extern int fn_82458910();
extern int fn_82F63108();
extern unsigned int iStack_84;
extern unsigned int iStack_88;
extern unsigned int iStack_8c;


void fn_82459000(undefined4 *param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_90 [4];
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  
  fn_82458910(&iStack_88,*param_1,*(undefined4 *)(param_2 + 0x2c));
  fn_82458910(auStack_90,*param_1,*(undefined4 *)(param_3 + 0x2c));
  uVar1 = *(undefined4 *)(iStack_88 + 0xb8);
  uVar2 = *(undefined4 *)(iStack_88 + 0xb0);
  uVar3 = *(undefined4 *)(iStack_88 + 0x84);
  uVar4 = *(uint *)(iStack_88 + 0x98);
  uVar5 = *(uint *)(iStack_88 + 0x9c);
  if (param_1[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63108();
  }
  uVar6 = (**(code **)(*(int *)param_1[0xe] + 4))((int *)param_1[0xe],param_3);
  if (param_1[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63108();
  }
  uVar7 = (**(code **)(*(int *)param_1[0xe] + 4))((int *)param_1[0xe],param_2);
  fn_82264CE0(param_1[0x16],param_4,uVar7,uVar6,(ulonglong)uVar5 + (ulonglong)uVar4,uVar3,
                    uVar2,uVar1);
  param_1[0x17] = 0;
  if (iStack_8c != 0) {
    fn_822315A0();
  }
  if (iStack_84 != 0) {
    fn_822315A0();
  }
  return;
}

