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
extern int fn_82BE5240();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5478();
extern int fn_82BE8020();
extern int fn_82BE8B10();
extern int fn_82BEB650();
extern int fn_82BEB678();
extern int fn_82BEB838();
extern int fn_82BEC2C8();
extern int fn_82BEC378();
extern int fn_82BEE708();
extern unsigned int lbl_8322B130;
extern unsigned int lbl_8322B1C8;
extern unsigned int lbl_8322B1D0;
extern unsigned int lbl_8322B1DC;
extern unsigned int *lbl_8322B224;


void fn_82BE3490(int param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 0x1011) {
    if (*(int *)(param_2 + 0x94) != 0) {
      *(ushort *)(param_1 + 0x134) = *(ushort *)(param_1 + 0x134) | 4;
    }
    puVar5 = (undefined4 *)thunk_FUN_82be5550(0x10);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
    }
    if (puVar5 != (undefined4 *)0x0) {
      fn_82BEC2C8(param_2,puVar5);
      puVar6 = (undefined4 *)thunk_FUN_82be5550(0x10);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
      }
      if (puVar6 != (undefined4 *)0x0) {
        fn_82BEC378(param_2,puVar6);
        fn_82BEE708(puVar6);
        lVar3 = fn_82BE8020(lbl_8322B1DC,puVar5);
        if (lVar3 != 0) {
          *(undefined4 *)(lbl_8322B130 + 0x10) = 0;
          fn_82BE5240(lbl_8322B130,lVar3,0xffffffff820e8f28);
          fn_82BE5340(puVar5);
          while (puVar5[2] != 0) {
            puVar6 = (undefined4 *)fn_82BE5378(puVar5);
            if (puVar6 != (undefined4 *)0x0) {
              (**(code **)*puVar6)(puVar6,1);
            }
            fn_82BE5350(puVar5);
          }
          fn_82BE5478();
          fn_82BE5478(puVar5);
          thunk_FUN_82be5558(puVar5);
        }
        if (*(int *)(param_2 + 0x84) != 0) {
          *(longlong *)(lbl_8322B1DC + 0x68) =
               (longlong)(int)((uint)*(byte *)(param_2 + 0x80) * 60000);
        }
        if (*(int *)(param_2 + 0x8c) != 0) {
          *(longlong *)(lbl_8322B1DC + 0x78) =
               (longlong)(int)((uint)*(byte *)(param_2 + 0x88) * 60000);
        }
        *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0x70);
        uVar4 = fn_82BEB650(param_1 + 0xe0);
        *(undefined8 *)(param_1 + 0x100) = uVar4;
        uVar4 = fn_82BEB678(param_1 + 0xe0);
        *(undefined8 *)(param_1 + 0x140) = uVar4;
        *(undefined8 *)(param_1 + 0x148) = uVar4;
        if (*(int *)(param_2 + 0x7c) != 0) {
          *(longlong *)(param_1 + 0x138) = (longlong)(int)((uint)*(ushort *)(param_2 + 0x7a) * 1000)
          ;
        }
        uVar2 = *(ushort *)(param_2 + 0x78) | *(ushort *)(param_1 + 0x11c);
        *(ushort *)(param_1 + 0x11c) = uVar2;
        if ((uVar2 & 1) != 0) {
          *(undefined4 *)(param_1 + 0x10) = 6;
          return;
        }
        if ((uVar2 & 4) != 0) {
          *(undefined8 *)(lbl_8322B130 + 0x138) = 0;
        }
        if (lbl_8322B224 != (int *)0x0) {
          if ((*(ushort *)(param_1 + 0x11c) & 8) == 0) {
            (**(code **)(*lbl_8322B224 + 0x10))();
          }
          else {
            fn_82BE8B10(lbl_8322B224,0);
          }
        }
        *(undefined4 *)(param_1 + 0x10) = 10;
        goto LAB_82be3764;
      }
    }
    fn_82BEB838(param_1,param_2);
    *(undefined4 *)(lbl_8322B130 + 0x10) = 0;
    fn_82BE5240(lbl_8322B130,0x65,0xffffffff82196582);
  }
  else {
    if (iVar1 == 0x1023) {
      lbl_8322B1D0 = *(undefined8 *)(param_2 + 0x50);
      lbl_8322B1C8 = *(undefined8 *)(param_2 + 0x58);
      *(undefined4 *)(param_1 + 0x10) = 0xb;
    }
    else if (iVar1 == 0x1073) {
      lbl_8322B1C8 = 0;
    }
LAB_82be3764:
    fn_82BEB838(param_1,param_2);
  }
  return;
}

