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


int fn_82685020(undefined8 param_1,int *param_2,undefined8 param_3)

{
  char cVar6;
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar7;
  
  if ((param_2 == (int *)0x0) || (cVar6 = (**(code **)(*param_2 + 0x28))(param_2), cVar6 != '\0')) {
    iVar3 = 0;
  }
  else {
    (**(code **)(*param_2 + 8))(param_2);
    uVar1 = (**(code **)(*param_2 + 0x14))(param_2);
    uVar2 = (**(code **)(*param_2 + 0x18))(param_2);
    iVar3 = fn_82680AC8(2,uVar2,uVar1,param_3);
    if (iVar3 != 0) {
      uVar7 = 0;
      iVar4 = (**(code **)(*param_2 + 0x14))(param_2);
      if (iVar4 != 0) {
        do {
          iVar4 = (**(code **)(*param_2 + 0x1c))
                            (param_2,(longlong)(int)uVar7 * (longlong)*(int *)(iVar3 + 0x14) +
                                     (ulonglong)*(uint *)(iVar3 + 0x18));
          if (iVar4 == 0) {
            fn_8267C498(iVar3);
            iVar3 = 0;
            break;
          }
          uVar7 = uVar7 + 1;
          uVar5 = (**(code **)(*param_2 + 0x14))(param_2);
        } while (uVar7 < uVar5);
      }
    }
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  return iVar3;
}

