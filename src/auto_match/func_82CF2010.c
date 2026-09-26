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
extern int fn_82CE5410();
extern int fn_82CED958();
extern int fn_82CEDAE8();
extern int fn_82CEDB38();
extern int fn_82CEDE90();
extern int fn_82CEE1B0();
extern int fn_82CF0DC8();
extern int fn_82CF1C18();
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_82CF2010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint *param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined1 auStack_60 [96];
  
  uVar1 = fn_82CF0DC8(param_1,0,param_5[2],*(undefined1 *)(param_5 + 4));
  *param_5 = uVar1;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0x80000000;
  fn_82CEE1B0(auStack_60,&uStack_70);
  fn_82CEDE90(auStack_60,0xffffffff82133080);
  iVar4 = (int)param_2;
  iVar2 = (int)param_3;
  if ((1 < iVar4) || (0 < iVar2)) {
    lVar5 = 0;
    if (0 < iVar4) {
      do {
        lVar3 = ((longlong)(int)param_5[1] * (longlong)(int)lVar5 - (ulonglong)uStack_6c) +
                (ulonglong)*param_5;
        if (0 < lVar3) {
          do {
            fn_82CEDAE8(auStack_60,0x20);
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
        }
        fn_82CEDE90(auStack_60,0xffffffff82133074,lVar5);
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < iVar4);
    }
    lVar5 = 0;
    if (0 < iVar2) {
      do {
        lVar3 = ((longlong)((int)lVar5 + iVar4) * (longlong)(int)param_5[1] - (ulonglong)uStack_6c)
                + (ulonglong)*param_5;
        if (0 < lVar3) {
          do {
            fn_82CEDAE8(auStack_60,0x20);
            lVar3 = lVar3 + -1;
          } while (lVar3 != 0);
        }
        fn_82CEDE90(auStack_60,0xffffffff8213306c,lVar5);
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < iVar2);
    }
    iVar6 = iVar4 + iVar2;
    if (1 < iVar4) {
      lVar5 = ((longlong)(int)param_5[1] * (longlong)iVar6 - (ulonglong)uStack_6c) +
              (ulonglong)*param_5;
      if (0 < lVar5) {
        do {
          fn_82CEDAE8(auStack_60,0x20);
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      iVar6 = iVar6 + 1;
      fn_82CEDE90(auStack_60,0xffffffff82133060);
    }
    if (1 < iVar2) {
      lVar5 = ((longlong)(int)param_5[1] * (longlong)iVar6 - (ulonglong)uStack_6c) +
              (ulonglong)*param_5;
      if (0 < lVar5) {
        do {
          fn_82CEDAE8(auStack_60,0x20);
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      fn_82CEDE90(auStack_60,0xffffffff82133054);
    }
  }
  fn_82CEDB38(param_4,uStack_70);
  fn_82CEDE90(param_4,0xffffffff8202e4d0);
  fn_82CF1C18(param_4,param_1,0,param_2,param_3,param_5);
  fn_82CED958(auStack_60);
  iVar2 = fn_82CE5410();
  uStack_6c = 0;
  if ((uStack_68 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar2 + 0x10) + 0x10))
              (*(int **)(iVar2 + 0x10),uStack_70,uStack_68 & 0x3fffffff,1);
  }
  return;
}

