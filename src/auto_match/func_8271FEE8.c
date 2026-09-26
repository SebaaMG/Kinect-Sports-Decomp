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
extern unsigned int *auStack_40;
extern int fn_826824B0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696AD0();
extern int fn_826A2FF8();


undefined8 fn_8271FEE8(int param_1,int *param_2,int param_3)

{
  char cVar4;
  int iVar2;
  int iVar3;
  undefined8 uVar1;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_40 [64];
  
  if ((param_2 == (int *)0x0) || (param_3 == 0)) {
LAB_8271fff4:
    uVar1 = 0;
  }
  else {
    auStack_40[0] = 0;
    cVar4 = (**(code **)(*param_2 + 0x2c))
                      (param_2,param_1 + 0x78,(ulonglong)*(uint *)(param_1 + 0x78) + 0x140,
                       auStack_40);
    if (cVar4 != '\0') {
      iVar2 = fn_82696958(auStack_40,param_1);
      if ((iVar2 != 0) &&
         (iVar3 = (**(code **)(*(int *)(iVar2 + 0x10) + 8))(iVar2 + 0x10), iVar3 == 7)) {
        uVar6 = (ulonglong)*(uint *)(iVar2 + 0x38) - 1;
        *(uint *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1U & 0x8fffffff;
        if (-1 < (longlong)uVar6) {
          lVar5 = (uVar6 & 0x3fffffff) << 2;
          do {
            iVar3 = *(int *)((int)lVar5 + *(int *)(iVar2 + 0x34));
            if ((iVar3 != 0) && (iVar3 = fn_82696AD0(iVar3,param_1), iVar3 == param_3)) {
              fn_826A2FF8(iVar2,uVar6,1);
              fn_826824B0(iVar2);
              fn_82696330(auStack_40);
              goto LAB_8271fff4;
            }
            uVar6 = uVar6 - 1;
            lVar5 = lVar5 + -4;
          } while (-1 < (longlong)uVar6);
        }
        fn_826824B0(iVar2);
      }
    }
    fn_82696330(auStack_40);
    uVar1 = 1;
  }
  return uVar1;
}

