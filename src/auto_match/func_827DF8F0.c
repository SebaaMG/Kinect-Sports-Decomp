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
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_6c;
extern int fn_822315A0();
extern int fn_827D5070();
extern int fn_827D5610();
extern int fn_827D5630();
extern int fn_827D5710();
extern int fn_827D5740();
extern int fn_827DCBF8();
extern int fn_827E0250();
extern int fn_827E0438();
extern int fn_827E1280();
extern int fn_827E25F8();
extern int fn_827E2790();
extern int fn_827E8720();
extern int fn_82A1E300();
extern unsigned int iStack_5c;
extern unsigned int iStack_64;


longlong fn_827DF8F0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar5;
  longlong lVar3;
  short sVar7;
  undefined8 uVar4;
  undefined4 *puVar6;
  undefined4 *puStack_70;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  int iStack_64;
  undefined1 auStack_60 [4];
  int iStack_5c;
  
  if ((param_3 == 0) && (iVar5 = fn_827D5740(param_2), iVar5 == 0)) {
    lVar3 = 1;
  }
  else {
    fn_827D5610(param_2);
    while (iVar5 = fn_827D5710(param_2), iVar5 == 0) {
      (**(code **)(**(int **)(param_2 + 0x2c4) + 0x10))();
      fn_82A1E300();
    }
    while( true ) {
      iVar5 = RtlTryEnterCriticalSection(param_1 + 400);
      if (iVar5 != 0) break;
      (**(code **)(**(int **)(param_2 + 0x2c4) + 0x10))();
      fn_82A1E300();
    }
    puVar1 = *(undefined4 **)(param_1 + 4);
    lVar3 = 0;
    puVar6 = (undefined4 *)*puVar1;
    while (puVar6 != puVar1) {
      uVar2 = puVar6[3];
      sVar7 = fn_827E25F8(uVar2);
      if (sVar7 == 0) {
        lVar3 = lVar3 + 1;
        uVar4 = fn_827E0250(param_1,puVar6 + 2);
        fn_827E0438(param_1,puVar6,uVar4);
        fn_827E8720(&puStack_70,param_1 + 4,puVar6);
        puVar6 = (undefined4 *)fn_827E2790(auStack_68,uVar2);
        fn_827D5070(*puVar6);
        fn_827E1280(param_1 + 0xf0,auStack_6c);
        if (iStack_64 != 0) {
          fn_822315A0();
        }
        fn_827DCBF8(param_1 + 0x168,auStack_6c);
        puVar6 = puStack_70;
      }
      else {
        puVar6 = (undefined4 *)*puVar6;
      }
    }
    puVar1 = *(undefined4 **)(param_1 + 0x7c);
    puVar6 = (undefined4 *)*puVar1;
    while (puVar6 != puVar1) {
      uVar2 = puVar6[3];
      sVar7 = fn_827E25F8(uVar2);
      if (sVar7 == 0) {
        lVar3 = lVar3 + 1;
        uVar4 = fn_827E0250(param_1 + 0x78,puVar6 + 2);
        fn_827E0438(param_1 + 0x78,puVar6,uVar4);
        fn_827E8720(auStack_6c,param_1 + 0x7c,puVar6);
        puVar6 = (undefined4 *)fn_827E2790(auStack_60,uVar2);
        fn_827D5070(*puVar6);
        fn_827E1280(param_1 + 0xf0,&puStack_70);
        if (iStack_5c != 0) {
          fn_822315A0();
        }
        fn_827DCBF8(param_1 + 0x168,&puStack_70);
        puVar6 = puVar1;
      }
      else {
        puVar6 = (undefined4 *)*puVar6;
      }
    }
    lVar3 = (*(int *)(param_1 + 0x16c) - *(int *)(param_1 + 0x168) >> 2) + lVar3;
    RtlLeaveCriticalSection(param_1 + 400);
    fn_827D5630(param_2);
  }
  return lVar3;
}

