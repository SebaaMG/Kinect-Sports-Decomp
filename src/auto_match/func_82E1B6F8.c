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
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern int fn_82CEAC20();
extern int fn_82D000A0();
extern int fn_82D00450();
extern int fn_82E1ADB0();
extern int fn_82E1B428();
extern int fn_82E1BDF0();
extern unsigned int iStack_6c;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


undefined8
fn_82E1B6F8(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar6;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar7;
  int *piVar8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int *piStack_74;
  uint uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0x80000000;
  piStack_74 = (int *)0x0;
  uStack_70 = 0;
  iStack_6c = -1;
  iVar6 = fn_82CE5410();
  fn_82CEAB00(&piStack_74,*(undefined4 *)(iVar6 + 0x10),0);
  uStack_68 = 0xffffffff;
  uVar2 = fn_82CEAC20(param_2);
  uVar3 = fn_82CEAC20(param_2);
  uVar2 = fn_82D00450(param_4,uVar3,uVar2);
  uVar2 = fn_82E1B428(param_1,param_2,uVar2,&uStack_80);
  uVar3 = fn_82CEAC20();
  fn_82D000A0(param_5,uVar3,uVar2);
  if ((uStack_70 & 0x7fffffff) != 0) {
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0xffffffff;
    iVar6 = fn_82CE5410();
    fn_82CEAB00(&uStack_a0,*(undefined4 *)(iVar6 + 0x10),0);
    iVar6 = 0;
    piVar8 = piStack_74;
    if (-1 < iStack_6c) {
      do {
        if (*piVar8 != -1) break;
        iVar6 = iVar6 + 1;
        piVar8 = piVar8 + 2;
      } while (iVar6 <= iStack_6c);
    }
    if (iVar6 <= iStack_6c) {
      do {
        iVar1 = piStack_74[iVar6 * 2];
        uVar3 = fn_82CEAC20(iVar1);
        uVar4 = fn_82CEAC20(iVar1);
        uVar3 = fn_82D00450(param_4,uVar4,uVar3);
        uVar5 = (**(code **)(*param_3 + 0x2c))(param_3,uVar3);
        if (((uVar5 & 0xffffffff) != 0) ||
           (uVar5 = fn_82D00450(param_5,uVar3,0), (uVar5 & 0xffffffff) != 0)) {
          iVar7 = fn_82CE5410();
          fn_82CEA160(&uStack_a0,*(undefined4 *)(iVar7 + 0x10),iVar1,uVar5);
        }
        iVar6 = iVar6 + 1;
        if (iVar6 <= iStack_6c) {
          piVar8 = piStack_74 + iVar6 * 2;
          do {
            if (*piVar8 != -1) break;
            iVar6 = iVar6 + 1;
            piVar8 = piVar8 + 2;
          } while (iVar6 <= iStack_6c);
        }
      } while (iVar6 <= iStack_6c);
    }
    fn_82E1ADB0(&uStack_80,&uStack_a0);
    iVar6 = fn_82CE5410();
    fn_82CEA4B8(&uStack_a0,*(undefined4 *)(iVar6 + 0x10));
    fn_82BA02A8(&uStack_a0);
  }
  if ((uStack_70 & 0x7fffffff) != 0) {
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0xffffffff;
    iVar6 = fn_82CE5410();
    fn_82CEAB00(&uStack_90,*(undefined4 *)(iVar6 + 0x10),0);
    iVar6 = 0;
    piVar8 = piStack_74;
    if (-1 < iStack_6c) {
      do {
        if (*piVar8 != -1) break;
        iVar6 = iVar6 + 1;
        piVar8 = piVar8 + 2;
      } while (iVar6 <= iStack_6c);
    }
    if (iVar6 <= iStack_6c) {
      do {
        iVar1 = piStack_74[iVar6 * 2];
        uVar3 = fn_82E1B6F8(param_1,iVar1,param_3,param_4,param_5);
        iVar7 = fn_82CE5410();
        fn_82CEA160(&uStack_90,*(undefined4 *)(iVar7 + 0x10),iVar1,uVar3);
        iVar6 = iVar6 + 1;
        if (iVar6 <= iStack_6c) {
          piVar8 = piStack_74 + iVar6 * 2;
          do {
            if (*piVar8 != -1) break;
            iVar6 = iVar6 + 1;
            piVar8 = piVar8 + 2;
          } while (iVar6 <= iStack_6c);
        }
      } while (iVar6 <= iStack_6c);
    }
    fn_82E1ADB0(&uStack_80,&uStack_90);
    iVar6 = fn_82CE5410();
    fn_82CEA4B8(&uStack_90,*(undefined4 *)(iVar6 + 0x10));
    fn_82BA02A8(&uStack_90);
  }
  fn_82E1BDF0(&uStack_80);
  return uVar2;
}

