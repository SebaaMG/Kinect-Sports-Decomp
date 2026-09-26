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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_30;
extern int fn_82535298();
extern int fn_82536070();
extern int fn_82536288();
extern int fn_8255AEF0();
extern unsigned int lbl_821B3ED0;
extern unsigned int lbl_821B3F50;


void fn_82384660(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar8;
  undefined8 uVar7;
  uint auStack_30 [12];
  
  iVar3 = fn_8255AEF0((ulonglong)*param_1 + 0x81c,param_1 + 3);
  if ((iVar3 != 0) && ((uVar1 = param_1[6], uVar1 < 0x1f || (param_1[7] < 0x1f)))) {
    uVar6 = uVar1;
    if (0x1d < (int)uVar1) {
      uVar6 = 0x1e;
    }
    uVar2 = param_1[7];
    uVar8 = uVar2;
    if (0x1d < (int)uVar2) {
      uVar8 = 0x1e;
    }
    if (uVar1 == uVar2) {
      fn_82536070(0xffffffff821b3fcc,(&lbl_821B3F50)[uVar6]);
      uVar4 = 0xffffffff821b3d30;
    }
    else {
      fn_82536070(0xffffffff821b3fcc,(&lbl_821B3ED0)[uVar6]);
      uVar4 = ZEXT48((&lbl_821B3ED0)[uVar8]);
    }
    fn_82536070(0xffffffff821b3fe8,uVar4);
    uVar7 = 0xffffffff821b4008;
    uVar5 = uVar7;
    if (param_1[4] != 0) {
      uVar5 = 0xffffffff821b4004;
    }
    fn_82536070(0xffffffff821b4010,uVar5);
    if (param_1[5] != 0) {
      uVar7 = 0xffffffff821b4030;
    }
    fn_82536070(0xffffffff821b4038,uVar7);
    auStack_30[0] = param_1[2];
    auStack_30[0] =
         fn_82535298(auStack_30,*(undefined4 *)(*param_1 + 0x84c),0xffffffff83296bc0,
                           0xffffffff83296bd0);
    fn_82536288(auStack_30);
  }
  return;
}

