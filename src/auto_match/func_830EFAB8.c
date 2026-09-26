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
extern unsigned int *auStack_74;
extern int fn_82CC4918();
extern int fn_830EF918();
extern int fn_830EF9E8();
extern unsigned int lbl_83232460;
extern unsigned int lbl_83232464;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_830EFAB8(int param_1,uint param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  short sVar6;
  ulonglong uVar5;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 in_stack_00000054;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint auStack_74 [29];
  
  uVar9 = *(uint *)(param_1 + 0x124);
  uVar1 = *(uint *)(((uint)*(ushort *)(param_1 + 0x32) * param_3 + param_2) * 8 +
                   *(int *)(param_1 + 0x15c));
  param_2 = param_3 << 0x10 | param_2;
  iVar3 = param_2 * 0x40;
  sVar6 = (short)uVar1;
  uStack_7c = (int)uVar1 >> 0x10;
  uStack_80 = (uint)sVar6;
  uStack_78 = ((int)(((int)sVar6 & 3U) + 1) >> 2) + (int)sVar6 >> 1;
  uVar8 = (ulonglong)(int)uStack_78;
  uVar7 = (int)(((int)((uStack_7c & 3) + 1) >> 2) + uStack_7c) >> 1;
  auStack_74[0] = uVar7;
  if (((iVar3 + (uVar1 & 0x8000) * -2 + uVar1 + 0x730073 |
       (*(int *)(param_1 + 0x11c) + (param_2 & 0x3ffffff) * -0x40) - uVar1) & 0x80008000) != 0) {
    fn_830EF918(&uStack_80,&uStack_7c,iVar3);
  }
  uVar1 = uStack_7c;
  uVar2 = uStack_80;
  lVar4 = (longlong)(iVar3 >> 1);
  uVar5 = ((ulonglong)uVar7 & 0xffff) << 0x10 | uVar8 & 0xffffffff0000ffff;
  if (((uVar5 + (uVar8 & 0x8000) * -2 + lVar4 + 0x3b003b | (uVar9 - uVar5) - lVar4) & 0x80008000) !=
      0) {
    fn_830EF9E8(&uStack_78,auStack_74,lVar4,(ulonglong)uVar9);
    uVar8 = (ulonglong)uStack_78;
    uVar7 = auStack_74[0];
  }
  uVar5 = (ulonglong)*(ushort *)(param_1 + 0x4a);
  param_4 = (longlong)((int)uVar1 >> 2) * (longlong)(int)(uint)*(ushort *)(param_1 + 0x4a) +
            (longlong)((int)uVar2 >> 2) + param_4;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 3) + (uint)((int)lbl_83232460 < 0 && (lbl_83232460 & 7) != 0)) * 8) {
    dataCacheBlockTouch(param_4 + 0x80);
    dataCacheBlockTouch(uVar5 + 0x80 + param_4);
    dataCacheBlockTouch((uVar5 + 0x40) * 2 + param_4);
    dataCacheBlockTouch(uVar5 * 3 + 0x80 + param_4);
    dataCacheBlockTouch((uVar5 + 0x20) * 4 + param_4);
    dataCacheBlockTouch(uVar5 * 5 + 0x80 + param_4);
    dataCacheBlockTouch(uVar5 * 6 + 0x80 + param_4);
    dataCacheBlockTouch(uVar5 * 7 + 0x80 + param_4);
    lbl_83232460 = 0;
  }
  dataCacheBlockTouch((uVar5 + 8) * 8 + param_4);
  dataCacheBlockTouch(uVar5 * 9 + 0x40 + param_4);
  dataCacheBlockTouch(uVar5 * 10 + 0x40 + param_4);
  dataCacheBlockTouch(uVar5 * 0xb + 0x40 + param_4);
  dataCacheBlockTouch(uVar5 * 0xc + 0x40 + param_4);
  dataCacheBlockTouch(uVar5 * 0xd + 0x40 + param_4);
  dataCacheBlockTouch(uVar5 * 0xe + 0x40 + param_4);
  dataCacheBlockTouch(uVar5 * 0xf + 0x40 + param_4);
  uVar1 = uVar1 & 3;
  lbl_83232460 = lbl_83232460 + 1;
  iVar3 = (**(code **)(((uVar2 & 3) * 4 + uVar1 + 0xf1) * 4 + param_1))
                    (param_4,uVar5,param_7,uVar5,param_1,uVar2 & 3,uVar1,1);
  if (iVar3 != 0) {
    fn_82CC4918(param_4,uVar5,param_7,uVar5,uVar2 & 3,uVar1,*(undefined1 *)(param_1 + 0x23),1)
    ;
  }
  uVar5 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  uVar9 = (uint)uVar8;
  lVar4 = (longlong)((int)uVar7 >> 2) * (longlong)(int)(uint)*(ushort *)(param_1 + 0x4c) +
          (longlong)((int)uVar9 >> 2);
  param_5 = lVar4 + param_5;
  lVar4 = lVar4 + param_6;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 4) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 0xf) != 0)) * 0x10
     ) {
    dataCacheBlockTouch(param_5 + 0x80);
    dataCacheBlockTouch(uVar5 + 0x80 + param_5);
    dataCacheBlockTouch((uVar5 + 0x40) * 2 + param_5);
    dataCacheBlockTouch(uVar5 * 3 + 0x80 + param_5);
    dataCacheBlockTouch((uVar5 + 0x20) * 4 + param_5);
    dataCacheBlockTouch(uVar5 * 5 + 0x80 + param_5);
    dataCacheBlockTouch(uVar5 * 6 + 0x80 + param_5);
    dataCacheBlockTouch(uVar5 * 7 + 0x80 + param_5);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar7 = uVar7 & 3;
  (**(code **)(((uVar9 & 3) * 4 + uVar7 + 0x101) * 4 + param_1))
            (param_5,uVar5,param_8,uVar5,uVar8 & 3,uVar7,*(undefined1 *)(param_1 + 0x23),1);
  uVar5 = (ulonglong)*(ushort *)(param_1 + 0x4c);
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 4) + (uint)((int)lbl_83232464 < 0 && (lbl_83232464 & 0xf) != 0)) * 0x10
     ) {
    dataCacheBlockTouch(lVar4 + 0x80);
    dataCacheBlockTouch(uVar5 + 0x80 + lVar4);
    dataCacheBlockTouch((uVar5 + 0x40) * 2 + lVar4);
    dataCacheBlockTouch(uVar5 * 3 + 0x80 + lVar4);
    dataCacheBlockTouch((uVar5 + 0x20) * 4 + lVar4);
    dataCacheBlockTouch(uVar5 * 5 + 0x80 + lVar4);
    dataCacheBlockTouch(uVar5 * 6 + 0x80 + lVar4);
    dataCacheBlockTouch(uVar5 * 7 + 0x80 + lVar4);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  (**(code **)(((uVar9 & 3) * 4 + uVar7 + 0x101) * 4 + param_1))
            (lVar4,uVar5,in_stack_00000054,uVar5,uVar8 & 3,uVar7,*(undefined1 *)(param_1 + 0x23),1);
  return;
}

