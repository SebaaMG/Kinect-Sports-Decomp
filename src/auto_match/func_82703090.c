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
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern int fn_8267C498();
extern int fn_8267C4C8();
extern int fn_82687270();
extern int fn_826F6BD0();
extern int fn_82702AF8();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int iStack_80;
extern unsigned int lbl_82002AE0;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_64;
extern unsigned int uStack_68;


undefined8 fn_82703090(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iStack_80;
  int *piStack_7c;
  longlong lStack_78;
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  
  uVar3 = 0;
  iVar1 = (int)param_2;
  if (param_1[0x18] != 0) {
    iVar4 = 0;
    do {
      if (iVar1 <= *(int *)(iVar4 + param_1[0x17])) {
        if (*(int *)(uVar3 * 8 + param_1[0x17]) == iVar1) {
          return 0;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 8;
    } while (uVar3 < (uint)param_1[0x18]);
  }
  param_1[0x2c0] = param_1[0x2c0] | 0x100;
  if (param_3 != (int *)0x0) {
    param_3[1] = param_3[1] + 1;
  }
  iStack_80 = iVar1;
  piStack_7c = param_3;
  fn_82702AF8(param_1 + 0x17,uVar3,&iStack_80);
  (**(code **)(*param_3 + 0x154))(param_3,param_2);
  if (iVar1 == 0) {
    param_1[0x1a] = (int)param_3;
    iVar1 = (**(code **)(*param_3 + 0x48))(param_3);
    if (iVar1 != 0) {
      fn_8267C4C8(iVar1);
    }
    if (param_1[0x1b] != 0) {
      fn_82687270();
    }
    param_1[0x1b] = iVar1;
    fn_826F6BD0(param_1[0x40],*(undefined4 *)(iVar1 + 0x10));
    dVar5 = (double)(**(code **)(*(int *)param_1[0x1b] + 0x24))();
    dVar9 = (double)lbl_82002AE0;
    param_1[0x4f] = (int)(float)(dVar9 / dVar5);
    if ((param_1[0x2c0] & 1U) == 0) {
      piVar2 = (int *)(**(code **)(*param_3 + 0x48))(param_3);
      dVar5 = (double)(**(code **)(*piVar2 + 0x1c))();
      lStack_78 = (longlong)(int)dVar5;
      dVar6 = (double)(**(code **)(*piVar2 + 0x18))(piVar2);
      lStack_78 = (longlong)(int)dVar6;
      dVar7 = (double)(**(code **)(*piVar2 + 0x1c))(piVar2);
      lStack_78 = (longlong)(int)dVar7;
      dVar8 = (double)(**(code **)(*piVar2 + 0x18))(piVar2);
      iStack_70 = (int)dVar8;
      lStack_78 = (longlong)iStack_70;
      fStack_44 = (float)dVar9;
      fStack_48 = (float)dVar9;
      uStack_68 = 0;
      uStack_64 = 0;
      uStack_40 = 0;
      uStack_4c = 0;
      uStack_50 = 0;
      uStack_54 = 0;
      uStack_58 = 0;
      iStack_6c = (int)dVar7;
      iStack_60 = (int)dVar6;
      iStack_5c = (int)dVar5;
      (**(code **)(*param_1 + 100))(param_1,&iStack_70);
    }
  }
  param_1[0x2c0] = param_1[0x2c0] | 0x80;
  if (piStack_7c != (int *)0x0) {
    fn_8267C498();
  }
  return 1;
}

