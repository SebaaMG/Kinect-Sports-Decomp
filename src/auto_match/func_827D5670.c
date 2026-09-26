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
extern int fn_82F68B64();
extern unsigned int iStack_5c;
extern unsigned int iStack_64;


longlong fn_827D5670(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar5;
  int iVar6;
  longlong lVar3;
  short sVar8;
  undefined8 uVar4;
  undefined4 *puVar7;
  undefined4 *puStack_70;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  int iStack_64;
  undefined1 auStack_60 [4];
  int iStack_5c;
  
  iVar5 = fn_82F68B64(param_1 + 0x110);
  if ((param_2 == 0) && (iVar6 = fn_827D5740(param_1), iVar6 == 0)) {
    lVar3 = 1;
  }
  else {
    fn_827D5610(param_1);
    while (iVar6 = fn_827D5710(param_1), iVar6 == 0) {
      (**(code **)(**(int **)((int)param_1 + 0x2c4) + 0x10))();
      fn_82A1E300();
    }
    while( true ) {
      iVar6 = RtlTryEnterCriticalSection(iVar5 + 400);
      if (iVar6 != 0) break;
      (**(code **)(**(int **)((int)param_1 + 0x2c4) + 0x10))();
      fn_82A1E300();
    }
    puVar1 = *(undefined4 **)(iVar5 + 4);
    lVar3 = 0;
    puVar7 = (undefined4 *)*puVar1;
    while (puVar7 != puVar1) {
      uVar2 = puVar7[3];
      sVar8 = fn_827E25F8(uVar2);
      if (sVar8 == 0) {
        lVar3 = lVar3 + 1;
        uVar4 = fn_827E0250(iVar5,puVar7 + 2);
        fn_827E0438(iVar5,puVar7,uVar4);
        fn_827E8720(&puStack_70,iVar5 + 4,puVar7);
        puVar7 = (undefined4 *)fn_827E2790(auStack_68,uVar2);
        fn_827D5070(*puVar7);
        fn_827E1280(iVar5 + 0xf0,auStack_6c);
        if (iStack_64 != 0) {
          fn_822315A0();
        }
        fn_827DCBF8(iVar5 + 0x168,auStack_6c);
        puVar7 = puStack_70;
      }
      else {
        puVar7 = (undefined4 *)*puVar7;
      }
    }
    puVar1 = *(undefined4 **)(iVar5 + 0x7c);
    puVar7 = (undefined4 *)*puVar1;
    while (puVar7 != puVar1) {
      uVar2 = puVar7[3];
      sVar8 = fn_827E25F8(uVar2);
      if (sVar8 == 0) {
        lVar3 = lVar3 + 1;
        uVar4 = fn_827E0250(iVar5 + 0x78,puVar7 + 2);
        fn_827E0438(iVar5 + 0x78,puVar7,uVar4);
        fn_827E8720(auStack_6c,iVar5 + 0x7c,puVar7);
        puVar7 = (undefined4 *)fn_827E2790(auStack_60,uVar2);
        fn_827D5070(*puVar7);
        fn_827E1280(iVar5 + 0xf0,&puStack_70);
        if (iStack_5c != 0) {
          fn_822315A0();
        }
        fn_827DCBF8(iVar5 + 0x168,&puStack_70);
        puVar7 = puVar1;
      }
      else {
        puVar7 = (undefined4 *)*puVar7;
      }
    }
    lVar3 = (*(int *)(iVar5 + 0x16c) - *(int *)(iVar5 + 0x168) >> 2) + lVar3;
    RtlLeaveCriticalSection(iVar5 + 400);
    fn_827D5630(param_1);
  }
  return lVar3;
}

