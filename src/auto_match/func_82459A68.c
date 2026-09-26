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
extern unsigned int *auStack_44;
extern int fn_82230218();
extern int fn_82230300();
extern int fn_82459C60();
extern int fn_82522FF0();
extern int fn_82CE08B8();
extern int fn_82CE08F0();
extern int fn_82CE0908();
extern int fn_82CE0990();
extern int fn_82CE0BB0();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82459A68(undefined8 *param_1,int param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 auStack_44 [17];
  
  fn_82230218((int)param_1 + 0x24,param_2,0,0xffffffffffffffff);
  fn_82230218(param_1 + 8,param_2 + 0x1c,0,0xffffffffffffffff);
  iVar2 = 0;
  lVar4 = 0x20;
  *(undefined4 *)((int)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x38);
  do {
    *(undefined1 *)((int)param_1 + iVar2 + 0x60) = *(undefined1 *)(param_2 + 0x3c + iVar2);
    iVar2 = iVar2 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x5c);
  fn_82459C60(param_1);
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = fn_82CE08B8(2,1,6);
    *(int *)(param_1 + 4) = (int)uVar1;
    if ((int)uVar1 != -1) {
      uStack_50 = 1;
      uStack_4c = 120000;
      uStack_48 = 120000;
      iVar2 = fn_82CE0908(uVar1,0xffff,4,&uStack_50,4);
      if (((iVar2 == 0) &&
          (iVar2 = fn_82CE0908(*(undefined4 *)(param_1 + 4),0xffff,0x1005,&uStack_4c,4), iVar2 == 0
          )) && (iVar2 = fn_82CE0908(*(undefined4 *)(param_1 + 4),0xffff,0x1006,&uStack_48,4),
                iVar2 == 0)) {
        auStack_44[0] = 1;
        iVar2 = fn_82CE08F0(*(undefined4 *)(param_1 + 4),0xffffffff8004667e,auStack_44);
        if (iVar2 == 0) goto LAB_82459bb4;
      }
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
    }
  }
LAB_82459bb4:
  if (*(int *)(param_1 + 4) == -1) {
    uVar3 = 0xd;
  }
  else {
    iVar2 = (**(code **)(*param_3 + 4))(param_3,(int)param_1 + 0x9c);
    if ((iVar2 < 0) ||
       ((iVar2 = fn_82CE0990(*(undefined4 *)(param_1 + 4),(int)param_1 + 0x9c,0x10), iVar2 == -1 &&
        (iVar2 = fn_82CE0BB0(), iVar2 != 0x2733)))) {
      *(undefined4 *)((int)param_1 + 0x84) = 0xd;
      fn_82459C60(param_1);
      goto LAB_82459c34;
    }
    uVar1 = fn_82522FF0();
    *param_1 = uVar1;
    uVar3 = 2;
  }
  *(undefined4 *)((int)param_1 + 0x84) = uVar3;
LAB_82459c34:
  fn_82230300(param_2 + 0x1c,1,0);
  fn_82230300(param_2,1,0);
  return;
}

