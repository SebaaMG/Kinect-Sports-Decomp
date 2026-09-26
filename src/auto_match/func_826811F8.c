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
extern int fn_8267C498();
extern int fn_82680AC8();


int fn_826811F8(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int *piVar3;
  char cVar6;
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar4;
  int iVar5;
  uint uVar7;
  
  piVar3 = (int *)(**(code **)(*param_2 + 4))(param_2,param_1);
  if (piVar3 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    cVar6 = (**(code **)(*piVar3 + 0x28))(piVar3);
    if (cVar6 == '\0') {
      uVar1 = (**(code **)(*piVar3 + 0x14))(piVar3);
      uVar2 = (**(code **)(*piVar3 + 0x18))(piVar3);
      iVar4 = fn_82680AC8(2,uVar2,uVar1,param_3);
      if ((iVar4 != 0) && (uVar7 = 0, *(int *)(iVar4 + 0x10) != 0)) {
        do {
          iVar5 = (**(code **)(*piVar3 + 0x1c))
                            (piVar3,(longlong)*(int *)(iVar4 + 0x14) * (longlong)(int)uVar7 +
                                    (ulonglong)*(uint *)(iVar4 + 0x18));
          if (iVar5 == 0) {
            fn_8267C498(iVar4);
            goto LAB_826812f4;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(iVar4 + 0x10));
      }
    }
    else {
LAB_826812f4:
      iVar4 = 0;
    }
    (**(code **)*piVar3)(piVar3,1);
  }
  return iVar4;
}

