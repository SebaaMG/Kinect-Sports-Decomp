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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_826824B0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696AD0();
extern int fn_82696CB8();
extern int fn_826A2F80();


undefined8 fn_8271FDB0(int param_1,int *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  char cVar7;
  int iVar5;
  int iVar6;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar8;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  if ((param_2 == (int *)0x0) || ((param_3 & 0xffffffff) == 0)) {
LAB_8271fed8:
    uVar4 = 0;
  }
  else {
    auStack_60[0] = 0;
    cVar7 = (**(code **)(*param_2 + 0x2c))
                      (param_2,param_1 + 0x78,(ulonglong)*(uint *)(param_1 + 0x78) + 0x140,
                       auStack_60);
    if ((cVar7 != '\0') &&
       ((iVar5 = fn_82696958(auStack_60,param_1), iVar5 != 0 &&
        (iVar6 = (**(code **)(*(int *)(iVar5 + 0x10) + 8))(iVar5 + 0x10), iVar6 == 7)))) {
      uVar8 = 0;
      uVar1 = *(uint *)(iVar5 + 0x38);
      *(uint *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1U & 0x8fffffff;
      if (uVar1 != 0) {
        iVar6 = 0;
        do {
          iVar2 = *(int *)(*(int *)(iVar5 + 0x34) + iVar6);
          if ((iVar2 != 0) &&
             (uVar3 = fn_82696AD0(iVar2,param_1),
             (uVar3 & 0xffffffff) == (param_3 & 0xffffffff))) {
            fn_826824B0(iVar5);
            fn_82696330(auStack_60);
            goto LAB_8271fed8;
          }
          uVar8 = uVar8 + 1;
          iVar6 = iVar6 + 4;
        } while (uVar8 < uVar1);
      }
      auStack_50[0] = 0;
      fn_82696CB8(auStack_50,param_3);
      fn_826A2F80(iVar5,auStack_50);
      fn_82696330(auStack_50);
      fn_826824B0(iVar5);
    }
    fn_82696330(auStack_60);
    uVar4 = 1;
  }
  return uVar4;
}

