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
extern unsigned int *auStack_100;
extern int fn_82F691F0();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_8214C300;
extern unsigned int lbl_8214C310;
extern unsigned int uStack_104;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;


/* WARNING: Removing unreachable block (ram,0x82e5d29c) */
/* WARNING: Removing unreachable block (ram,0x82e5d2bc) */

undefined8 fn_82E5CF30(int *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 uVar6;
  int *piStack_138;
  int *piStack_134;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [256];
  
  uVar6 = 1;
  piStack_138 = (int *)0x0;
  piStack_134 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    iVar3 = (**(code **)(*param_1 + 0xa0))(param_1,param_2,&piStack_138);
    if (-1 < iVar3) {
      uStack_110 = lbl_8202E618;
      uStack_10c = lbl_8202E61C;
      uStack_108 = lbl_8202E620;
      uStack_104 = lbl_8202E624;
      iVar3 = (**(code **)(*piStack_138 + 0xc))(piStack_138,&uStack_110);
      if (-1 < iVar3) {
        pbVar4 = (byte *)&uStack_110;
        pbVar5 = &lbl_8214C300;
        do {
          bVar1 = *pbVar5;
          bVar2 = *pbVar4;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar5 = pbVar5 + 1;
          pbVar4 = pbVar4 + 1;
        } while (pbVar5 != &lbl_8214C310);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(auStack_100,0,0xb0);
        }
        uVar6 = 0;
      }
    }
    if (piStack_138 != (int *)0x0) {
      (**(code **)(*piStack_138 + 8))();
      piStack_138 = (int *)0x0;
    }
    if (piStack_134 != (int *)0x0) {
      (**(code **)(*piStack_134 + 8))();
    }
  }
  return uVar6;
}

