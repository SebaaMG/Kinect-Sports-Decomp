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
extern int fn_8284E5C0();
extern int fn_82A1DDC0();


void fn_8284F5C0(int param_1,undefined4 param_2,int param_3,undefined8 param_4,longlong param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar1 = (int)param_4;
  lVar5 = param_5;
  uVar3 = fn_8284E5C0(param_1,*(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar1 + 0x2c));
  fn_82A1DDC0(lVar5,param_4,uVar3);
  iVar2 = (int)param_5;
  *(undefined4 *)(iVar2 + 4) = param_2;
  iVar6 = 0;
  *(int *)(iVar2 + 8) = (int)(param_5 + 0x40);
  lVar5 = ((ulonglong)*(uint *)(param_1 + 8) * 0xc + (ulonglong)*(uint *)(param_1 + 0x10)) * 0x14 +
          param_5 + 0x40;
  *(int *)(iVar2 + 0x28) = (int)lVar5;
  uVar7 = ((ulonglong)*(uint *)(iVar1 + 0x2c) & 0x3fffffff) * 4 + lVar5 + 0xf & 0xfffffff0;
  if (0 < (int)*(uint *)(iVar1 + 0x2c)) {
    iVar8 = 0;
    do {
      if (*(int *)(iVar8 + *(int *)(iVar1 + 0x28)) != 0) {
        *(int *)(iVar8 + *(int *)(iVar2 + 0x28)) = (int)uVar7;
        uVar4 = (ulonglong)*(uint *)(*(int *)(iVar1 + 0x30) + iVar8);
        lVar5 = fn_8284E5C0(uVar4,0,0);
        uVar7 = lVar5 + uVar7;
        fn_8284F5C0(uVar4,*(undefined4 *)(iVar8 + param_3),0,
                      *(undefined4 *)(iVar8 + *(int *)(iVar1 + 0x28)),
                      *(undefined4 *)(iVar8 + *(int *)(iVar2 + 0x28)));
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar6 < *(int *)(iVar1 + 0x2c));
  }
  return;
}

