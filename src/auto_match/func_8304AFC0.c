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
extern int fn_8304A158();
extern int fn_8304A3A8();
extern int fn_8304AA48();
extern int fn_8304AAD0();
extern int fn_8304AE78();
extern int fn_8307DE78();
extern int fn_8307E060();
extern int fn_8307E188();
extern int fn_8307E6E0();
extern unsigned int lbl_82002AE0;
extern unsigned int *lbl_83265044;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_5d;
extern unsigned int uStack_5e;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_90;


longlong fn_8304AFC0(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  byte bStack_60;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  
  if (*(char *)(param_1 + 0x7d) == '\0') {
    *(undefined1 *)(param_1 + 0x7d) = 1;
    uStack_50 = lbl_82002AE0;
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x6c);
    *(undefined4 *)(param_1 + 0x30) = 0;
    uStack_44 = 2;
    uStack_4c = 0;
    uStack_48 = 0;
    iVar4 = (int)*(float *)(*(int *)(param_1 + 8) + 0xdc);
    uStack_90 = ((((U64)(uStack_90)) & (~(((U64)0xFF) << 56))) | ((((U64)((undefined1)iVar4)) & ((U64)0xFF)) << 56));
    uStack_70 = 0;
    uStack_6c = 3;
    puVar5 = (undefined4 *)(param_1 + 0x2c);
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_40 = (undefined1)uStack_90;
    uStack_88 = 0;
    uStack_84 = 0x2000;
    uStack_80 = 0x1000;
    bStack_60 = (byte)((uint)*(undefined4 *)(iVar1 + 0x14) >> 0x1f);
    uStack_5e = 0;
    uStack_5d = 0;
    uStack_90 = (longlong)iVar4;
    lVar3 = (**(code **)(*lbl_83265044 + 0x10))
                      (lbl_83265044,*(undefined4 *)(iVar1 + 8),&uStack_70,&uStack_50,&uStack_88,
                       puVar5,0);
    if ((int)lVar3 != 1) {
      return lVar3;
    }
    iVar4 = *(int *)(param_1 + 8);
    if (((*(uint *)(*(int *)(iVar4 + 0x6c) + 0x14) >> 0x1e & 1) != 0) &&
       ((*(byte *)(iVar4 + 0xdb) & 0x80) == 0)) {
      uVar6 = (ulonglong)*(uint *)(iVar4 + 0x138);
      if ((uVar6 != 0) && (*(uint *)(iVar4 + 0x13c) != 0)) {
        uVar2 = (ulonglong)*(uint *)(iVar4 + 0x13c) & 0xfffff800;
        lVar3 = fn_8304AAD0(param_1,uVar6,uVar2);
        if ((int)lVar3 != 1) {
          return lVar3;
        }
        iVar4 = (**(code **)(*(int *)*puVar5 + 0x28))((int *)*puVar5,uVar2,0,&uStack_90);
        if (iVar4 != 1) {
          return 2;
        }
        *(int *)(param_1 + 0x30) = (int)uVar2 - (int)uStack_90;
        lVar3 = fn_8304A3A8(param_1);
        if ((int)lVar3 != 1) {
          return lVar3;
        }
        if (uVar2 == *(uint *)(param_1 + 0x54)) {
          lVar3 = 0x3f;
        }
        else {
          lVar3 = fn_8304AA48(param_1,*(uint *)(param_1 + 0x54) + uVar6);
        }
        (**(code **)(*(int *)*puVar5 + 0x1c))();
        return lVar3;
      }
    }
    (**(code **)(*(int *)*puVar5 + 0x1c))();
  }
  else if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x60) == 0) {
      fn_8307DE78(*(undefined4 *)(param_1 + 0x28));
      fn_8307E6E0(*(undefined4 *)(param_1 + 0x28));
      fn_8304A158(param_1);
      fn_8307E060(*(undefined4 *)(param_1 + 0x28));
    }
    lVar3 = fn_8307E188(*(undefined4 *)(param_1 + 0x28),0);
    return ((-(ulonglong)(lVar3 != 0) & 0xfffffffe) << 0x20 | -(ulonglong)(lVar3 != 0) & 0xffffffc2)
           + 0x3f;
  }
  lVar3 = fn_8304AE78(param_1);
  return lVar3;
}

