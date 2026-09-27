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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FEF878();
extern int fn_830137C8();
extern int fn_8303A7D8();
extern int fn_8303B378();
extern unsigned int lbl_8217DB90;
extern unsigned int lbl_831BC770;
extern unsigned int lbl_83265044;


undefined4 * fn_8304C998(undefined4 *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar6;
  ulonglong uVar5;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined4 auStack_50;
  undefined1 auStack_48 [5];
  char cStack_43;
  
  fn_8303A7D8();
  auStack_50 = 0;
  *param_1 = &lbl_8217DB90;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[4] = 0;
  param_1[0xf] = 0;
  iVar7 = param_1[2];
  iVar6 = fn_830137C8(0xffffffff831bc7fc,*(undefined4 *)(iVar7 + 0x128),&auStack_50);
  if (iVar6 != 1) goto LAB_8304cb98;
  param_1[4] = auStack_50;
  uVar5 = fn_82FA5060(lbl_831BC770,0x10);
  if ((uVar5 & 0xffffffff) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = fn_8303B378(uVar5,param_2,lbl_83265044);
  }
  param_1[0xf] = iVar6;
  if (iVar6 == 0) goto LAB_8304cb98;
  if ((*(byte *)(param_1[2] + 0xda) & 2) == 0) {
    param_1[0x10] = 48000;
    param_1[0x11] = 0x12023;
  }
  else {
    param_1[0x10] = 0x177;
    param_1[0x11] = 0x12023;
  }
  (**(code **)(*(int *)param_1[4] + 0xc))((int *)param_1[4],auStack_48);
  if (cStack_43 != '\0') goto LAB_8304cb98;
  lVar8 = (ulonglong)(uint)param_1[0xf] + 4;
  if ((ulonglong)(uint)param_1[0xf] == 0) {
    lVar8 = 0;
  }
  iVar7 = (**(code **)(*(int *)param_1[4] + 0x14))
                    ((int *)param_1[4],0xffffffff831bc7fc,lVar8,*(undefined4 *)(iVar7 + 300),
                     param_1 + 0x10);
  bVar9 = true;
  uVar3 = (uint)param_1[0x11] >> 0xe;
  if (uVar3 < 0x34) {
    if (uVar3 != 0x33) {
      switch(uVar3) {
      case 3:
      case 4:
      case 7:
      case 8:
      case 0xb:
      case 0xc:
      case 0xf:
        break;
      default:
        goto LAB_8304cb68;
      }
    }
  }
  else if (((uVar3 != 0x37) && (uVar3 != 0x3b)) && (uVar3 != 0x3f)) {
LAB_8304cb68:
    bVar9 = false;
  }
  if ((bVar9) && (iVar7 == 1)) {
    fn_82FEF878(param_1[2],param_1 + 0x10);
    return param_1;
  }
LAB_8304cb98:
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1,0xffffffff831bc7fc);
    uVar4 = lbl_831BC770;
    puVar2 = (undefined4 *)param_1[0xf];
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      fn_82FA5190(uVar4,puVar2);
      param_1[0xf] = 0;
    }
    param_1[4] = 0;
  }
  return param_1;
}

