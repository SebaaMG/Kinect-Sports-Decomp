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
extern int fn_82C107F8();
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


ulonglong fn_82C4DC18(int param_1,undefined8 param_2,int param_3,uint *param_4,uint *param_5,
                       uint *param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  uint uStack_78;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 8);
  uVar3 = *(uint *)(iVar2 + 8);
  uVar4 = *(uint *)(iVar2 + 0xc);
  uVar7 = uVar3;
  if ((*(uint *)(param_1 + 4) & 2) != 0) {
    uVar7 = *(uint *)(param_1 + 0xc);
  }
  uVar6 = uVar4;
  if ((*(uint *)(param_1 + 4) & 4) != 0) {
    uVar6 = *(uint *)(param_1 + 0x10);
  }
  if (uVar3 < uVar7) {
    uStack_88 = uVar7;
    uStack_84 = uVar3;
    uVar5 = fn_82C107F8(param_2,uVar1,0x90090,&uStack_88);
    if ((int)uVar5 < 0) {
      if (((uVar5 & 0xffffffff) != 0x80500003) && ((uVar5 & 0xffffffff) != 0x805000b6)) {
        return uVar5;
      }
      goto LAB_82c4dcd4;
    }
  }
  else {
LAB_82c4dcd4:
    if (uVar7 != uVar3) {
      return 0xffffffff80500002;
    }
  }
  uStack_90 = uVar7;
  if (uVar4 < uVar6) {
    uStack_88 = uVar6;
    uStack_84 = uVar4;
    uVar5 = fn_82C107F8(param_2,uVar1,0x900a0,&uStack_88);
    if (-1 < (int)uVar5) goto LAB_82c4dd24;
    if (((uVar5 & 0xffffffff) != 0x80500003) && ((uVar5 & 0xffffffff) != 0x805000b6)) {
      return uVar5;
    }
  }
  if (uVar7 != uVar3) {
    return 0xffffffff80500002;
  }
LAB_82c4dd24:
  uStack_8c = uVar6;
  uVar5 = fn_82C107F8(param_2,uVar1,590000,&uStack_90);
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  *param_5 = uStack_8c;
  *param_4 = uStack_90;
  if ((((uStack_90 & 1) == 0) && ((uStack_8c & 1) == 0)) && (param_3 == 0xc)) {
    uStack_78 = uStack_8c;
    uStack_80 = 1;
    uStack_7c = uStack_90 * 0xc + 7 >> 3;
    uVar5 = fn_82C107F8(param_2,uVar1,0x90070,&uStack_80);
    if (-1 < (int)uVar5) {
      *param_6 = uStack_8c * uStack_90 * 3 >> 1 & 0x1fffffff;
      return uVar5;
    }
    return uVar5;
  }
  return 0xffffffff80500002;
}

