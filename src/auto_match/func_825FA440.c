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
extern unsigned int *auStack_90;
extern int fn_8226D318();
extern int fn_82522DF8();
extern int fn_82522ED8();
extern int fn_82544718();
extern int fn_8262F8D8();
extern int fn_8262FEC8();
extern int fn_82630040();
extern int fn_8263C910();
extern int fn_82F68CC0();
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


undefined8 fn_825FA440(undefined8 param_1,ulonglong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar6;
  int iVar7;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [144];
  
  if ((param_2 & 0xffffffff) != 0) {
    iVar6 = fn_82522DF8(0x98);
    if (iVar6 != 0) {
      *(undefined4 *)(iVar6 + 4) = 1;
      iVar7 = fn_82522DF8(param_2 * 0x50);
      *(int *)(iVar6 + 0x90) = iVar7;
      if (iVar7 != 0) {
        iVar7 = fn_82522DF8(param_2);
        *(int *)(iVar6 + 0x94) = iVar7;
        uVar3 = lbl_8326B434;
        uVar2 = lbl_8326B430;
        if (iVar7 != 0) {
          uStack_a0 = fn_8226D318(lbl_8326B430,lbl_8326B434,0x1a220197,0);
          uStack_9c = 0;
          uStack_98 = 0;
          uStack_94 = 0;
          lVar4 = fn_8263C910(uVar2,uVar3,0x1a2201bf,0,&uStack_a0);
          *(int *)(iVar6 + 0x38) = (int)lVar4;
          if (-1 < (longlong)-(ulonglong)(lVar4 == 0)) {
            uVar5 = fn_82544718(auStack_90,uVar2,uVar3,0x1a22ab60,0,0);
            fn_82F68CC0(iVar6 + 0x3c,uVar5,0x34);
            if ((param_2 & 0xffffffff) < 0x186a1) {
              *(int *)(iVar6 + 8) = (int)param_2;
            }
            else {
              *(undefined4 *)(iVar6 + 8) = 100000;
            }
            lVar4 = fn_82630040((ulonglong)*(uint *)(iVar6 + 8) * 0x70,0,0);
            *(int *)(iVar6 + 0x88) = (int)lVar4;
            if (-1 < (longlong)-(ulonglong)(lVar4 == 0)) {
              iVar6 = *(int *)(iVar6 + 0x88);
              uVar1 = *(uint *)(iVar6 + 0x18) & 0xfffffffc;
                    /* WARNING: Subroutine does not return */
              fn_8262F8D8(iVar6,10,0,uVar1,0,uVar1,*(uint *)(iVar6 + 0x1c) & 0x3fffffc,0);
            }
            fn_8262FEC8(*(undefined4 *)(iVar6 + 0x38));
          }
        }
        fn_82522ED8(*(undefined4 *)(iVar6 + 0x90));
      }
      fn_82522ED8(iVar6);
    }
  }
  return 0;
}

