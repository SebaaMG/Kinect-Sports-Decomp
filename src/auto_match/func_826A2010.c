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
extern int fn_82681838();
extern int fn_8268AFB0();
extern int fn_8268AFD8();
extern int fn_826944C8();
extern int fn_82694610();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_826A1E40();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_826A2010(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar5;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 *puStack_50;
  int aiStack_4c [3];
  uint uStack_40;
  undefined4 uStack_3c;
  
  cVar5 = fn_82695468(param_1,7);
  if (cVar5 == '\0') {
    fn_826954C0(param_1,0xffffffff82006e38,0,0);
  }
  else {
    lVar7 = (ulonglong)*(uint *)(param_1 + 8) - 0x10;
    if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
      lVar7 = 0;
    }
    fn_8268AFB0(&uStack_40,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288));
    if (*(int *)(param_1 + 0x1c) == 0) {
      fn_826A1E40(lVar7,*(undefined4 *)(param_1 + 0x18),&uStack_40,0xffffffff82196fac);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      fn_82696D38(&puStack_50,uVar3,uVar1,0xffffffffffffffff,0);
      fn_826A1E40(lVar7,*(undefined4 *)(param_1 + 0x18),&uStack_40,*puStack_50);
      uVar2 = puStack_50[2];
      puStack_50[2] = (int)((ulonglong)uVar2 - 1);
      if ((ulonglong)uVar2 - 1 == 0) {
        fn_826944C8(puStack_50);
      }
    }
    uVar6 = (ulonglong)uStack_40;
    if (uVar6 == 0) {
      uVar6 = 0xffffffff82196582;
    }
    iVar4 = fn_82694610((ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,uVar6,
                              uStack_3c);
    *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
    aiStack_4c[0] = iVar4;
    fn_82681838(*(undefined4 *)(param_1 + 4),aiStack_4c);
    lVar7 = (ulonglong)*(uint *)(iVar4 + 8) - 1;
    *(int *)(iVar4 + 8) = (int)lVar7;
    if (lVar7 == 0) {
      fn_826944C8(iVar4);
    }
    fn_8268AFD8(&uStack_40);
  }
  return;
}

