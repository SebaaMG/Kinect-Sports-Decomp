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
extern int fn_825200A8();


void fn_82507738(undefined8 param_1,int *param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar1 = (**(code **)(*(int *)*param_2 + 0x20))();
  iVar2 = fn_825200A8(uVar1,param_1);
  if (iVar2 != 0) {
    (*param_3)(param_2,param_4);
  }
  if ((param_2[9] & 0x40000000U) != 0) {
    iVar2 = *param_2;
    uVar4 = 0;
    if (*(int *)(iVar2 + 0x9c) != 0) {
      lVar3 = 0;
      do {
        fn_82507738(param_1,(ulonglong)*(uint *)(iVar2 + 0x98) + lVar3,param_3,param_4);
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 0x1a0;
      } while (uVar4 < *(uint *)(iVar2 + 0x9c));
    }
  }
  return;
}

