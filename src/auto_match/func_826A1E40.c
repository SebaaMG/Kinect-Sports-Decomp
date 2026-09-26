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
extern int fn_8268B118();
extern int fn_8268B1F0();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_82696D38();


void fn_826A1E40(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puStack_60;
  undefined4 *apuStack_5c [3];
  undefined1 auStack_50 [80];
  undefined4 *puVar2;
  
  fn_8268B118(param_3);
  iVar5 = 0;
  uVar4 = 0;
  auStack_50[0] = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    do {
      if (uVar4 != 0) {
        fn_8268B1F0(param_3,param_4,0xffffffffffffffff);
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x34) + iVar5);
      if (iVar3 == 0) {
        fn_82696D38(apuStack_5c,auStack_50,param_2,0xffffffffffffffff,0);
        fn_8268B1F0(param_3,*apuStack_5c[0],0xffffffffffffffff);
        puVar2 = apuStack_5c[0];
      }
      else {
        fn_82696D38(&puStack_60,iVar3,param_2,0xffffffffffffffff,0);
        fn_8268B1F0(param_3,*puStack_60,0xffffffffffffffff);
        puVar2 = puStack_60;
      }
      uVar1 = puVar2[2];
      puVar2[2] = (int)((ulonglong)uVar1 - 1);
      if ((ulonglong)uVar1 - 1 == 0) {
        fn_826944C8(puVar2);
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar4 < *(uint *)(param_1 + 0x38));
  }
  fn_82696330(auStack_50);
  return;
}

