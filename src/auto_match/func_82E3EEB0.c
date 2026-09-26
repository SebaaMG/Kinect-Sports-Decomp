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
extern unsigned int *auStack_68;
extern int fn_82E3BF28();
extern int fn_82E3C5F8();
extern int fn_82E3E5A8();
extern int fn_82E50BE8();
extern int fn_82E6F550();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


longlong fn_82E3EEB0(int param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  int *piStack_70;
  undefined4 *puStack_6c;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  
  if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
    lVar6 = -0x7fffbffd;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0xbc);
    if ((uint)uVar1 < *(uint *)(param_1 + 0xb8)) {
      *(ushort *)(param_1 + 0xbc) = uVar1 + 1;
      fn_82E3C5F8(param_1 + 0x78,(uint)uVar1,&puStack_6c);
      uVar2 = *(undefined2 *)puStack_6c;
      uStack_5c = lbl_8202E61C;
      uStack_58 = lbl_8202E620;
      uStack_60 = lbl_8202E618;
      uStack_54 = lbl_8202E624;
      uStack_50 = uVar2;
      uVar3 = fn_82E50BE8(0x70,0,0,0,0);
      if ((uVar3 & 0xffffffff) == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)
                 fn_82E6F550(uVar3,param_2,uVar2,param_3,param_4,*(undefined4 *)(param_1 + 0x54)
                                 ,*(uint *)(param_1 + 0x44) & 4);
      }
      if (puVar4 == (undefined4 *)0x0) {
        lVar6 = -0x7ff8fff2;
      }
      else {
        piStack_70 = (int *)0x0;
        puStack_6c = puVar4;
        iVar5 = fn_82E3BF28(param_1 + 0x1ac,&uStack_60,&piStack_70,auStack_68);
        if (iVar5 == 0) {
          lVar6 = fn_82E3E5A8(param_1 + 0x1ac,&uStack_60,&puStack_6c);
        }
        else {
          lVar6 = (**(code **)(*piStack_70 + 0x1c))(piStack_70,puVar4);
        }
        if (-1 < lVar6) {
          puVar4 = (undefined4 *)0x0;
          *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 1;
        }
        if (puVar4 != (undefined4 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
    else {
      lVar6 = 0;
    }
  }
  return lVar6;
}

