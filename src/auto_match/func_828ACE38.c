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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_82230180();
extern int fn_8265C9E0();
extern int fn_82884B20();
extern int fn_82886518();
extern int fn_8288A398();
extern int fn_82897BD0();
extern int fn_8289D8D0();
extern int fn_8289D8D8();
extern int fn_8289DAC8();
extern int fn_8289F350();
extern int fn_8289F3A8();
extern int fn_828A0AA0();
extern int fn_828A1C08();
extern int fn_828A1C10();
extern int fn_828A3410();
extern int fn_828ACDB8();
extern int fn_828AD7A0();
extern int fn_828AF610();
extern int fn_828B1760();
extern int fn_828BE158();
extern int fn_828D15E0();
extern int fn_82CE0668();
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


undefined8 fn_828ACE38(int param_1,char param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar8;
  ulonglong uVar6;
  undefined8 uVar7;
  int *piVar9;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [128];
  
  uStack_b0 = 0;
  if (param_2 == '\0') {
    uVar1 = *(uint *)(param_1 + 0x8c);
    uVar6 = fn_8265C9E0(0xd0);
    if ((uVar6 & 0xffffffff) == 0) {
      uVar4 = 0;
    }
    else {
      fn_82230110(auStack_a0,0xffffffff820245ac);
      uVar4 = fn_828AF610(uVar6,param_1,1,(ulonglong)uVar1 + 0x14,0xffffffffffffffff,
                              0xffffffffffffffff,(ulonglong)uVar1 + 0x1c);
      fn_82230180(auStack_a0);
    }
    fn_8289DAC8(uVar4,1);
    fn_82CE0668(&uStack_b0,8);
    uVar6 = fn_8265C9E0(200);
    if ((uVar6 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      iVar8 = fn_8288A398();
      uVar3 = *(undefined4 *)(iVar8 + 0x38);
      fn_828AD7A0(auStack_80);
      fn_828A1C10(param_1);
      fn_828A1C08(param_1);
      uVar5 = fn_828D15E0(uVar6,uVar3,*(undefined4 *)(param_1 + 0x7c),
                              *(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                              CONCAT44(uStack_b0,uStack_ac),uVar2,uVar2);
      fn_82230180(auStack_80);
    }
    *(undefined4 *)(param_1 + 0x84) = 0;
    fn_82886518(uVar5,1000,0xffffffffffffffff);
    uVar4 = fn_82897BD0(uVar4);
    fn_828BE158(param_1,uVar5,uVar4,0);
    fn_828ACDB8(param_1,2);
    fn_828B1760(param_1,CONCAT44(uStack_b0,uStack_ac));
    *(undefined4 *)(param_1 + 0x80) = 0;
    uVar4 = 1;
  }
  else {
    uVar4 = fn_82884B20(0x1000);
    uVar5 = fn_828A0AA0(param_1);
    iVar8 = fn_8289F350(param_1,uVar5);
    if (iVar8 == 0) {
      fn_828A3410(&uStack_b0,param_1);
      if (((((U64)(uStack_b0) >> 0) & 0xFF) != '\0') && (iVar8 = fn_8289F3A8(param_1,uStack_ac), iVar8 == 0)) {
        uVar6 = fn_8265C9E0(0x68);
        if ((uVar6 & 0xffffffff) != 0) {
          uVar7 = fn_828AD7A0(auStack_a0);
          fn_8289D8D8(uVar6,param_1,uVar4,uStack_ac,uVar5,*(undefined4 *)(param_1 + 0x7c),
                            uVar7);
          fn_82230180(auStack_a0);
        }
        uVar4 = fn_8289D8D0(param_1);
        fn_8289DAC8(uVar4,1);
        piVar9 = (int *)fn_8289D8D0(param_1);
        (**(code **)(*piVar9 + 0x14))();
        fn_828ACDB8(param_1,4);
        *(undefined4 *)(param_1 + 0x7c) = 0;
        *(undefined4 *)(param_1 + 0x80) = 0;
        return 1;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

