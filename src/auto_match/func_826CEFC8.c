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
extern unsigned int *auStack_6c;
extern int fn_8267B890();
extern int fn_82681728();
extern int fn_82681838();
extern int fn_826824B0();
extern int fn_82693A98();
extern int fn_826944C8();
extern int fn_82696480();
extern int fn_82696BC8();
extern int fn_82698D50();
extern int fn_8269AEB8();
extern int fn_8269FD90();
extern int fn_826A87D8();
extern int fn_826CD928();
extern int fn_827403B0();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


bool fn_826CEFC8(int *param_1,int param_2,int *param_3,int *param_4,undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar6;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar7;
  char acStack_70 [4];
  uint auStack_6c [3];
  int *piStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  cVar6 = fn_8269AEB8(param_4,0);
  if (cVar6 == '\0') {
LAB_826cf130:
    if (((param_2 != 0) && (*param_4 == *(int *)(*(int *)(param_2 + 0x78) + 0x134))) ||
       ((param_3 != (int *)0x0 && (*param_4 == *(int *)(*param_3 + 0x134))))) {
      fn_82696BC8(param_5,param_1[0x1b]);
      return true;
    }
    if (param_1[0x6c] != 0) {
      fn_826CD928(auStack_6c,param_1[0x6c],0);
      bVar2 = false;
      if (((param_2 != 0) &&
          (cVar6 = (**(code **)(*(int *)(param_1[0x6c] + 0x10) + 0x10))
                             (param_1[0x6c] + 0x10,param_2,param_4,param_5), cVar6 != '\0')) ||
         ((param_3 != (int *)0x0 &&
          (cVar6 = (**(code **)(*(int *)(param_1[0x6c] + 0x10) + 0x2c))
                             (param_1[0x6c] + 0x10,param_3,param_4,param_5), cVar6 != '\0')))) {
        bVar2 = true;
      }
      uVar5 = auStack_6c[0];
      fn_826CD928(auStack_6c,param_1[0x6c],auStack_6c[0]);
      if (auStack_6c[0] != 0) {
        fn_826824B0();
      }
      bVar1 = uVar5 != 0;
      if (bVar2) goto joined_r0x826cf120;
      if (bVar1) {
        fn_826824B0(uVar5);
      }
    }
    lVar7 = fn_82698D50(param_1 + 0x2a,param_1 + 0x52,param_4);
    if (lVar7 == 0) {
      iVar4 = param_1[0x1b];
      if ((iVar4 == 0) ||
         (((param_2 == 0 ||
           (cVar6 = (**(code **)(*(int *)(iVar4 + 0x10) + 0x10))
                              (iVar4 + 0x10,param_2,param_4,param_5), cVar6 == '\0')) &&
          ((param_3 == (int *)0x0 ||
           (cVar6 = (**(code **)(*(int *)(iVar4 + 0x10) + 0x2c))
                              (iVar4 + 0x10,param_3,param_4,param_5), cVar6 == '\0')))))) {
        iVar4 = fn_82693A98(param_4);
        if ((iVar4 != 0) && (**(char **)*param_4 == '_')) {
          uStack_5c = (undefined4)param_5;
          uStack_58 = 0;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          piStack_60 = param_4;
          fn_826A87D8(acStack_70,param_1 + 0x34,&piStack_60);
          if (acStack_70[0] != '\0') {
            return acStack_70[0] == '\x01';
          }
        }
        return false;
      }
    }
    else {
      fn_82696480(param_5);
    }
  }
  else {
    uVar3 = fn_8269FD90(param_1,param_4);
    cVar6 = (**(code **)(*param_1 + 0x100))(param_1,uVar3,param_5,0);
    if (cVar6 != '\0') {
      return true;
    }
    if ((int)uVar3 != 0x23) {
      if (((int)uVar3 == 0x6a) && (-1 < param_1[0x6a])) {
        iVar4 = (**(code **)(*param_1 + 0x5c))(param_1);
        fn_82681728(auStack_6c,(ulonglong)*(uint *)(iVar4 + 0x78) + 0x254,0xffffffff8200c060);
        fn_82681838(param_5,auStack_6c);
        lVar7 = (ulonglong)*(uint *)(auStack_6c[0] + 8) - 1;
        *(int *)(auStack_6c[0] + 8) = (int)lVar7;
        if (lVar7 != 0) {
          return true;
        }
        fn_826944C8();
        return true;
      }
      goto LAB_826cf130;
    }
    iVar4 = (**(code **)(*param_1 + 0x5c))(param_1);
    lVar7 = fn_8267B890(*(undefined4 *)(*(int *)(iVar4 + 0x78) + 0x288),0x44,0);
    if (lVar7 == 0) {
      uVar5 = 0;
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x5c))(param_1);
      uVar5 = fn_827403B0(lVar7,uVar3,param_1);
    }
    fn_82696BC8(param_5,uVar5);
    bVar1 = uVar5 != 0;
joined_r0x826cf120:
    if (bVar1) {
      fn_826824B0(uVar5);
    }
  }
  return true;
}

