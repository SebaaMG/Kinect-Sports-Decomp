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
extern int fn_82AB15D0();


void fn_82BBBE08(int param_1,longlong param_2,longlong param_3,undefined4 param_4,int param_5,
                  undefined4 param_6)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((param_5 != 5) && (param_5 != 6)) {
    if ((*(int *)((int)((param_2 + 0xf4U & 0xffffffff) << 2) + param_1) == 0x21) &&
       (*(int *)((int)(((param_2 + 0x45U & 0x3fffffff) * 4 + param_3 & 0xffffffff) << 2) + param_1)
        != 0)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0b88,0xffffffff820e0c10,0x8a);
    }
    *(undefined4 *)
     ((int)(((param_2 + 0x45U & 0x3fffffff) * 4 + param_3 & 0xffffffff) << 2) + param_1) = param_4;
    *(int *)((int)(((param_2 + 0x55U & 0x3fffffff) * 4 + param_3 & 0xffffffff) << 2) + param_1) =
         param_5;
    *(undefined4 *)
     ((int)(((param_2 + 0x65U & 0x3fffffff) * 4 + param_3 & 0xffffffff) << 2) + param_1) = param_6;
    return;
  }
  iVar1 = (int)((param_2 + 0xe4U & 0xffffffff) << 2);
  if (*(int *)(iVar1 + param_1) != 0) {
    iVar2 = (int)((param_2 + 0xf4U & 0xffffffff) << 2);
    if ((*(int *)(iVar2 + param_1) != 0x21) ||
       (*(int *)((int)(((param_2 + 0x45U & 0x3fffffff) * 4 + param_3 & 0xffffffff) << 2) + param_1)
        != 0)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0b00,0xffffffff820e0c10,0x7a);
    }
    *(undefined4 *)(iVar1 + param_1) = 0;
    *(undefined1 *)((int)param_2 + param_1 + 0x380) = 0;
    lVar7 = 4;
    *(int *)((int)((param_2 + 0x104U & 0xffffffff) << 2) + param_1) = (int)param_2;
    *(undefined4 *)(iVar2 + param_1) = 0;
    lVar6 = 0;
    do {
      uVar5 = (param_2 + 0x45U & 0x3fffffff) * 4 + lVar6;
      uVar4 = (param_2 + 0x55U & 0x3fffffff) * 4 + lVar6;
      uVar3 = (param_2 + 0x65U & 0x3fffffff) * 4 + lVar6;
      lVar6 = lVar6 + 1;
      *(undefined4 *)((int)((uVar5 & 0xffffffff) << 2) + param_1) = 0;
      *(undefined4 *)((int)((uVar4 & 0xffffffff) << 2) + param_1) = 0x13;
      *(undefined4 *)((int)((uVar3 & 0xffffffff) << 2) + param_1) = 0;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    return;
  }
  return;
}

