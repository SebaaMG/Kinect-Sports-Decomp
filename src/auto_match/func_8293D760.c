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
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_826355E8();
extern int fn_82635FE8();
extern int fn_826360E8();
extern int fn_82936530();
extern int fn_82937188();
extern int fn_82937A60();
extern int fn_8293AC38();
extern int fn_8293B0B0();
extern int fn_8293B1B8();
extern int fn_8293C408();
extern int fn_8293D470();
extern int fn_82A9F7E0();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 fn_8293D760(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar5;
  ulonglong uVar3;
  int iVar6;
  undefined8 uVar4;
  int iVar7;
  undefined8 uVar8;
  undefined4 auStack_60 [2];
  undefined1 auStack_58 [88];
  
  uVar8 = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  bVar2 = true;
  if (*(int *)(param_2 + 0x50) != 0) {
    fn_82937A60(param_1,0xffffffff82033d3c);
  }
  uVar1 = *(uint *)(param_2 + 0x34);
  if ((*(int *)(param_2 + 0x5c) != 0) &&
     ((uVar1 == 0 || (((2 < uVar1 && (uVar1 != 8)) && ((uVar1 < 0xfa || (0xfb < uVar1)))))))) {
    fn_82937A60(param_1,0xffffffff82033d14);
  }
  fn_8293C408(param_1,1);
  fn_826360E8();
  if ((1 << (uVar1 & 0x3f) & 0x4014U) != 0) {
    *(undefined4 *)(param_1 + 0x130) = 1;
  }
  if (0x1e < uVar1) {
    if (uVar1 == 0xfa) {
      fn_8293D470(param_1,param_2,0);
      uVar3 = fn_8293B0B0(param_1,param_2,0xffffffff82033c80,1);
      if ((uVar3 & 0xffffffff) == 0) goto LAB_8293dcf0;
      auStack_60[0] = 0;
      iVar6 = fn_82936530(uVar3,auStack_60);
      if (-1 < iVar6) goto LAB_8293dcf0;
      fn_82937A60(param_1,0xffffffff82033c4c);
code_r0x8293dce8:
      if ((int)uVar8 < 0) {
        return uVar8;
      }
      goto LAB_8293dcf0;
    }
    if (uVar1 != 0xfb) goto LAB_8293dcf0;
    uVar4 = 0;
    goto LAB_8293db20;
  }
  if (uVar1 == 0x1e) {
    bVar2 = false;
    if (*(int *)(*(int *)(param_2 + 0x60) + 0x10) != 0x12) {
      fn_82937A60(param_1,0xffffffff82033bf0);
      return 0xffffffff80004005;
    }
    iVar6 = *(int *)(*(int *)(param_2 + 0x60) + 0x18);
    fn_8293C408(param_1,1);
    uVar5 = fn_82635FE8();
    iVar7 = *(int *)(param_1 + 0x148);
    if (iVar7 != 0) {
      do {
        if (*(int *)(iVar7 + 0x14) == iVar6) break;
        iVar7 = *(int *)(iVar7 + 0xc);
      } while (iVar7 != 0);
      if (iVar7 != 0) {
        if (*(int *)(iVar7 + 0x10) != -1) {
          fn_82937A60(param_1,0xffffffff82033bdc,iVar6);
          return 0xffffffff80004005;
        }
        *(undefined4 *)(iVar7 + 0x10) = uVar5;
        goto LAB_8293dcf0;
      }
    }
    fn_82937188(param_1,iVar6);
    goto LAB_8293dcf0;
  }
  switch(uVar1) {
  case 1:
    fn_8293B1B8(param_1,param_2);
    break;
  case 2:
    fn_8293B1B8(param_1,param_2);
    break;
  case 3:
  case 4:
  case 0xd:
  case 0xe:
    fn_8293B1B8(param_1,param_2);
    if (*(int *)(*(int *)(param_2 + 0x60) + 0x10) == 0xe) break;
    uVar4 = 0xffffffff82033cec;
    goto code_r0x8293d958;
  case 7:
    if (*(int *)(*(int *)(param_2 + 0x60) + 0x10) != 7) {
      fn_82937A60(param_1,0xffffffff82033cc0);
    }
    fn_8293D470(param_1,param_2,1);
    uVar3 = fn_8293B0B0(param_1,param_2,0xffffffff82033cb8,1);
    if ((uVar3 & 0xffffffff) == 0) break;
    auStack_60[0] = 0;
    iVar6 = fn_82936530(uVar3,auStack_60);
    if (-1 < iVar6) break;
    uVar4 = 0xffffffff82033c8c;
code_r0x8293d958:
    fn_82937A60(param_1,uVar4);
    break;
  case 8:
    if (*(int *)(*(int *)(param_2 + 0x60) + 0x10) != 7) {
      fn_82937A60(param_1,0xffffffff82033cc0);
    }
    fn_8293D470(param_1,param_2,1);
    break;
  case 9:
code_r0x8293dac8:
    goto code_r0x8293dacc;
  case 0xb:
    uVar3 = fn_8293B0B0(param_1,param_2,0xffffffff82033c80,1);
    if ((uVar3 & 0xffffffff) == 0) goto code_r0x8293dac8;
    auStack_60[0] = 0;
    iVar6 = fn_82936530(uVar3,auStack_60);
    if (iVar6 < 0) {
      fn_82937A60(param_1,0xffffffff82033c4c);
      goto code_r0x8293dac8;
    }
code_r0x8293dacc:
    if (*(int *)(*(int *)(param_2 + 0x60) + 0x10) != 0xe) {
      fn_82937A60(param_1,0xffffffff82033c20);
    }
    uVar4 = 1;
LAB_8293db20:
    fn_8293D470(param_1,param_2,uVar4);
    break;
  case 0xc:
    uVar8 = fn_8293AC38(param_1,auStack_58,param_2);
    goto code_r0x8293dce8;
  }
LAB_8293dcf0:
  if (bVar2) {
    uVar4 = fn_8293C408(param_1,1);
    uVar4 = fn_826355E8(uVar4,auStack_58);
    if (*(int *)(param_1 + 0x144) != 0) {
      fn_82A9F7E0(*(undefined4 *)(param_1 + 0x13c),0,uVar4,*(undefined4 *)(param_2 + 0x20),
                      *(undefined4 *)(param_2 + 0x24),0xffffffffffffffff,0);
    }
  }
  return uVar8;
}

