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
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_82270110();
extern int fn_8227B968();
extern int fn_822848B8();
extern int fn_82292AE8();
extern int fn_8229E260();
extern int fn_822AE2B0();
extern int fn_822B5EC0();
extern int fn_82355458();
extern int fn_823577F0();
extern int fn_8248F8E8();
extern int fn_824910D0();
extern int fn_8249ABC0();
extern int fn_824C8148();
extern int fn_8251FA58();
extern int fn_82536288();
extern int fn_82536590();
extern int fn_8254B4E8();
extern int fn_825604A0();
extern int fn_82566E58();
extern int fn_8265CA20();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern int iRam83276734;


void fn_82356690(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined4 auStack_70 [4];
  undefined1 auStack_60 [96];
  
  if (*(int *)(param_1 + 0x3ec) != 0) {
    if (*(int *)(param_1 + 0x288) != 0) {
      fn_8227B968();
    }
    if (*(int *)(param_1 + 0x27c) != 0) {
      fn_8227B968();
    }
    iVar3 = fn_82292AE8();
    if (*(int *)(iVar3 + 0x20) != 0) {
      fn_82864988(auStack_60,0xffffffff821aa34c);
      auStack_70[0] = fn_828647D8();
      fn_82864898(auStack_60);
      fn_82536590(auStack_70,0);
      *(undefined4 *)(iVar3 + 0x20) = 0;
    }
    fn_82270110(0);
    if (*(int *)(*(int *)(param_1 + 0x14) + 0x8c8) != 0) {
      fn_8254B4E8();
    }
    if (*(int *)(param_1 + 800) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x844);
      iVar1 = *(int *)(iVar3 + 0x358);
      if (iVar1 != 0) {
        if ((*(uint *)(iVar1 + 0x118) & 0x40) != 0) {
          if (iVar3 != -0x30) {
            *(uint *)(iVar3 + 0xd8) = *(uint *)(iVar3 + 0xd8) & 0xffffff7f;
          }
          piVar4 = (int *)(iVar1 + 0x80);
          if (piVar4 == (int *)0x0) {
            bVar5 = false;
          }
          else {
            bVar5 = *piVar4 != 0;
          }
          if (bVar5) {
            fn_82536590(piVar4,0);
          }
          *(undefined4 *)(iVar1 + 0x88) = *(undefined4 *)(iVar1 + 0x94);
        }
      }
      *(undefined4 *)(param_1 + 800) = 0;
    }
    if (*(int *)(param_1 + 0x31c) != 0) {
      fn_822848B8();
      *(undefined4 *)(param_1 + 0x31c) = 0;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x18);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    iVar3 = *(int *)(param_1 + 0x38c);
    *(undefined4 *)(param_1 + 0x38c) = 0;
    *(undefined4 *)(param_1 + 0x388) = 0;
    if (iVar3 != 0) {
      fn_822315A0();
    }
    iVar3 = fn_8249ABC0();
    *(undefined4 *)(iVar3 + 0x20) = 0;
    fn_824C8148(param_1 + 0x40);
    puVar2 = *(undefined4 **)(param_1 + 0x20);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    iVar3 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (iVar3 != 0) {
      fn_822AE2B0(iVar3);
      fn_8265CA20(iVar3);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    iVar3 = iRam83276734;
    if (*(int *)(param_1 + 0x28) != 0) {
      if (iRam83276734 != 0) {
        fn_824910D0(iRam83276734);
        fn_8248F8E8(iVar3);
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      iRam83276734 = 0;
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      fn_822B5EC0();
    }
    puVar2 = *(undefined4 **)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    fn_823577F0(param_1 + 0x288,param_1 + 0x290);
    fn_823577F0(param_1 + 0x27c,param_1 + 0x284);
    iVar3 = *(int *)(param_1 + 0x2ac);
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 0xc) != 0) {
        fn_822315A0();
      }
      fn_8265CA20(iVar3);
      *(undefined4 *)(param_1 + 0x2ac) = 0;
    }
    if (*(int *)(param_1 + 0x294) != 0) {
      fn_82566E58(*(int *)(param_1 + 0x294),*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x844))
      ;
      *(undefined4 *)(param_1 + 0x294) = 0;
    }
    if (*(int *)(param_1 + 0xa0) != 0) {
      fn_825604A0(param_1 + 0xb0);
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
    if (*(undefined4 **)(param_1 + 0x3ac) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x3ac))();
      fn_82536288((undefined4 *)(param_1 + 0x3ac));
      *(undefined4 *)(param_1 + 0x3ac) = 0;
    }
    if (*(int *)(param_1 + 0x338) != 0) {
      fn_8229E260();
      *(undefined4 *)(param_1 + 0x338) = 0;
    }
    fn_82355458(param_1);
    *(undefined4 *)(param_1 + 0x3ec) = 0;
    if (*(int *)(param_1 + 0x42c) != 0) {
      fn_8251FA58();
      *(undefined4 *)(param_1 + 0x42c) = 0;
    }
  }
  return;
}

