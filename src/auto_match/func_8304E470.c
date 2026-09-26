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
extern int fn_8304DF58();
extern int fn_8304E098();
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


undefined8 fn_8304E470(int *param_1)

{
  float fVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  undefined8 uStack_80;
  undefined4 uStack_70;
  uint uStack_6c;
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
  
  if (*(char *)((int)param_1 + 0x41) == '\0') {
    iVar3 = param_1[2];
    iVar7 = *(int *)(iVar3 + 0x6c);
    if ((*(int *)(iVar7 + 0x18) != 0) || (*(int *)(iVar7 + 8) != -1)) {
      uVar2 = *(undefined2 *)(iVar3 + 0xd4);
      uStack_44 = 0;
      bVar5 = false;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_50 = lbl_82002AE0;
      fVar1 = *(float *)(iVar3 + 0xdc);
      uStack_80 = ((((U64)(uStack_80)) & (~(((U64)0xFF) << 56))) | ((((U64)((undefined1)(int)fVar1)) & ((U64)0xFF)) << 56));
      uStack_40 = (undefined1)uStack_80;
      if (((*(uint *)(*(int *)(iVar3 + 0x6c) + 0x14) >> 0x1e & 1) != 0) &&
         ((*(byte *)(iVar3 + 0xdb) & 0x80) == 0)) {
        iVar4 = *(int *)(iVar3 + 0x138);
        param_1[0xd] = iVar4;
        iVar3 = *(int *)(iVar3 + 0x13c);
        param_1[0xf] = iVar3;
        if ((iVar4 == 0) || (bVar5 = true, iVar3 == 0)) {
          bVar5 = false;
        }
      }
      uStack_70 = 0;
      uStack_6c = (uint)*(ushort *)(iVar7 + 0x1c);
      piVar8 = param_1 + 10;
      uStack_64 = 0;
      uStack_68 = 0;
      bStack_60 = (byte)((uint)*(undefined4 *)(iVar7 + 0x14) >> 0x1f);
      uStack_5e = 0;
      uStack_5d = 0;
      uStack_80 = (longlong)(int)fVar1;
      uVar6 = (**(code **)(*lbl_83265044 + 0x10))
                        (lbl_83265044,*(undefined4 *)(iVar7 + 8),&uStack_70,&uStack_50,0,piVar8,0);
      if ((int)uVar6 != 1) {
        return uVar6;
      }
      if (!bVar5) {
        *(undefined1 *)((int)param_1 + 0x41) = 1;
        (**(code **)(*(int *)*piVar8 + 0x1c))();
        goto LAB_8304e678;
      }
      uVar6 = (**(code **)(*param_1 + 0x38))(param_1,uVar2);
      if ((int)uVar6 != 1) {
        return uVar6;
      }
      iVar3 = param_1[0xf];
      iVar7 = (**(code **)(*(int *)*piVar8 + 0x28))((int *)*piVar8,iVar3,0,&uStack_80);
      if (iVar7 == 1) {
        param_1[0x15] = param_1[0xc];
        fn_8304DF58(param_1);
        if (*(char *)(param_1 + 0x16) == '\0') {
          param_1[0x11] = (int)uStack_80;
          param_1[0x15] = iVar3 - (int)uStack_80;
        }
        (**(code **)(*(int *)*piVar8 + 0x1c))();
        return 1;
      }
    }
    uVar6 = 2;
  }
  else {
LAB_8304e678:
    uVar6 = fn_8304E098(param_1);
  }
  return uVar6;
}

