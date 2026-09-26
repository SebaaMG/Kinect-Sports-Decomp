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
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_826A7398();
extern int fn_82713EE8();
extern int fn_8271D378();
extern int fn_8271D8E0();


undefined8 fn_8271D978(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  bool bVar2;
  char cVar6;
  int *piVar4;
  undefined8 uVar3;
  float *pfVar5;
  longlong lVar7;
  uint *puVar8;
  int aiStack_80 [4];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float afStack_60 [4];
  float afStack_50 [20];
  
  puVar8 = (uint *)(param_2 + 0x78);
  if (*(char *)(*(int *)(param_2 + 0x78) + 0x2a4) != '\x01') {
LAB_8271dc10:
    uVar3 = fn_82713EE8(param_1,param_2,param_3,param_4);
    return uVar3;
  }
  bVar1 = *(byte *)(param_2 + 0x7c);
  fn_82681728(aiStack_80,(ulonglong)*puVar8 + 0x254,0xffffffff8200ffc8);
  cVar6 = fn_8271D378(aiStack_80,param_3,-(6 < bVar1) & 1);
  lVar7 = (ulonglong)*(uint *)(aiStack_80[0] + 8) - 1;
  *(int *)(aiStack_80[0] + 8) = (int)lVar7;
  if (lVar7 == 0) {
    fn_826944C8(aiStack_80[0]);
  }
  if (cVar6 == '\0') {
    bVar1 = *(byte *)(param_2 + 0x7c);
    fn_82681728(aiStack_80,(ulonglong)*puVar8 + 0x254,0xffffffff8200ffbc);
    cVar6 = fn_8271D378(aiStack_80,param_3,-(6 < bVar1) & 1);
    lVar7 = (ulonglong)*(uint *)(aiStack_80[0] + 8) - 1;
    *(int *)(aiStack_80[0] + 8) = (int)lVar7;
    if (lVar7 == 0) {
      fn_826944C8(aiStack_80[0]);
    }
    if (cVar6 == '\0') {
      bVar1 = *(byte *)(param_2 + 0x7c);
      fn_82681728(aiStack_80,(ulonglong)*puVar8 + 0x254,0xffffffff8200ffac);
      cVar6 = fn_8271D378(aiStack_80,param_3,-(6 < bVar1) & 1);
      lVar7 = (ulonglong)*(uint *)(aiStack_80[0] + 8) - 1;
      *(int *)(aiStack_80[0] + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8(aiStack_80[0]);
      }
      if (cVar6 == '\0') goto LAB_8271dc10;
      piVar4 = (int *)fn_826A7398(param_2);
      piVar4 = (int *)(**(code **)(*piVar4 + 4))();
      (**(code **)(*piVar4 + 0x28))(afStack_50,piVar4);
      uVar3 = fn_8271D8E0(afStack_60,param_2,afStack_50);
      fn_82695FA0(param_4,uVar3);
      pfVar5 = afStack_60;
      goto LAB_8271da4c;
    }
    piVar4 = (int *)fn_826A7398(param_2);
    (**(code **)(*piVar4 + 0x80))(&fStack_70,piVar4);
    if ((fStack_68 <= fStack_70) || (bVar2 = false, fStack_64 <= fStack_6c)) {
      bVar2 = true;
    }
    if (bVar2) {
      piVar4 = (int *)fn_826A7398(param_2);
      pfVar5 = (float *)(**(code **)(*piVar4 + 0x7c))(afStack_50,piVar4);
      fStack_64 = pfVar5[3];
      fStack_68 = pfVar5[2];
      fStack_6c = pfVar5[1];
      fStack_70 = *pfVar5;
    }
    pfVar5 = &fStack_70;
  }
  else {
    piVar4 = (int *)fn_826A7398(param_2);
    (**(code **)(*piVar4 + 0x7c))(afStack_60,piVar4);
    pfVar5 = afStack_60;
  }
  uVar3 = fn_8271D8E0(afStack_50,param_2,pfVar5);
  fn_82695FA0(param_4,uVar3);
  pfVar5 = afStack_50;
LAB_8271da4c:
  fn_82696330(pfVar5);
  return 1;
}

