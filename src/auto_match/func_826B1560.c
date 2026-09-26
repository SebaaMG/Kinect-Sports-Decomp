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
extern int fn_826B14D8();


int fn_826B1560(int param_1,longlong param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char cVar5;
  int iVar3;
  int iVar4;
  undefined1 auStack_40 [64];
  
  iVar1 = fn_826B14D8(param_1,param_3);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
  }
  piVar2 = (int *)(*(int *)(param_1 + 0x2a0) + 0x10);
  auStack_40[0] = 0;
  cVar5 = (**(code **)(*piVar2 + 0x2c))
                    (piVar2,param_2 + 0x78,(param_3 + 2) * 4 + param_1,auStack_40);
  iVar4 = iVar1;
  if ((cVar5 != '\0') && (iVar3 = fn_82696958(auStack_40,param_2), iVar3 != 0)) {
    *(uint *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1U & 0x8fffffff;
    cVar5 = (**(code **)(*(int *)(iVar3 + 0x10) + 0x2c))
                      (iVar3 + 0x10,param_2 + 0x78,param_1 + 0x130,auStack_40);
    if (cVar5 != '\0') {
      iVar4 = fn_82696958(auStack_40,param_2);
      if (iVar4 != 0) {
        *(uint *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1U & 0x8fffffff;
      }
      if (iVar1 != 0) {
        fn_826824B0(iVar1);
      }
    }
    fn_826824B0(iVar3);
  }
  fn_82696330(auStack_40);
  if (iVar4 != 0) {
    fn_826824B0(iVar4);
  }
  return iVar4;
}

