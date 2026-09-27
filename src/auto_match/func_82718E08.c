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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_82695608();
extern int fn_82695DA0();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_8269BAF8();
extern int fn_826C1398();
extern int fn_82715660();
extern int fn_82718BD8();
extern int fn_827459D8();
extern unsigned int lbl_82005710;
extern float lbl_8200571C;
extern unsigned int lbl_83155428;


undefined8 fn_82718E08(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar2;
  int iVar3;
  char cVar5;
  undefined8 uVar1;
  int iVar4;
  float *pfVar6;
  longlong lVar7;
  uint uVar8;
  int aiStack_90 [4];
  undefined1 auStack_80 [16];
  struct { float first; float second; } stack_pair_70;

  float fStack_68;
  float fStack_64;
  undefined1 auStack_60 [16];
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  fn_82695DA0(auStack_80,param_3);
  iVar2 = (**(code **)(*param_1 + 0x5c))(param_1);
  iVar4 = (int)param_2;
  if ((((0x15 < iVar4) && (iVar2 != 0)) && (iVar3 = fn_82718BD8(param_1), iVar3 != 0)) &&
     (*(int *)(param_1[0x2f] + 0x28) != 0)) {
    auStack_60[0] = 0;
    fn_82681728(aiStack_90,(ulonglong)*(uint *)(iVar2 + 0x78) + 0x254,
                      (&lbl_83155428)[iVar4 * 3]);
    cVar5 = fn_826C1398(param_1[0x2f],iVar2,aiStack_90,auStack_80,auStack_60);
    lVar7 = (ulonglong)*(uint *)(aiStack_90[0] + 8) - 1;
    *(int *)(aiStack_90[0] + 8) = (int)lVar7;
    if (lVar7 == 0) {
      fn_826944C8(aiStack_90[0]);
    }
    if (cVar5 != '\0') {
      fn_82695FA0(auStack_80,auStack_60);
    }
    fn_82696330(auStack_60);
  }
  cVar5 = fn_8269BAF8(param_1,param_2,auStack_80,param_4);
  if (cVar5 != '\0') {
LAB_82718f0c:
    fn_82696330(auStack_80);
    return 1;
  }
  if (iVar4 == 0x24) {
    iVar2 = (**(code **)(*param_1 + 0x5c))(param_1);
    if (7 < *(byte *)(iVar2 + 0x7c)) {
      uVar1 = (**(code **)(*param_1 + 0x5c))(param_1);
      iVar2 = fn_82696958(auStack_80,uVar1);
      if ((iVar2 == 0) ||
         (iVar4 = (**(code **)(*(int *)(iVar2 + 0x10) + 8))(iVar2 + 0x10), iVar4 != 0x11)) {
        pfVar6 = (float *)0x0;
      }
      else {
        dStack_50 = lbl_82005710;
        dStack_48 = lbl_82005710;
        dStack_40 = lbl_82005710;
        dStack_38 = lbl_82005710;
        fn_827459D8(iVar2,uVar1,&dStack_50);
        pfVar6 = &stack_pair_70.first;
        stack_pair_70.first = (float)dStack_50 * lbl_8200571C;
        stack_pair_70.second = (float)dStack_48 * lbl_8200571C;
        fStack_68 = (float)(dStack_40 - dStack_50) * lbl_8200571C;
        fStack_64 = (float)(dStack_38 - dStack_48) * lbl_8200571C;
      }
      fn_82715660(param_1,pfVar6);
      goto LAB_82718f0c;
    }
  }
  else if ((iVar4 == 0x45) &&
          (iVar2 = (**(code **)(*param_1 + 0x5c))(param_1),
          *(char *)(*(int *)(iVar2 + 0x78) + 0x2a4) == '\x01')) {
    uVar1 = (**(code **)(*param_1 + 0x5c))(param_1);
    cVar5 = fn_82695608(auStack_80,uVar1);
    if (cVar5 == '\0') {
      uVar8 = param_1[0x23] & 0xfffff7ff;
    }
    else {
      uVar8 = param_1[0x23] | 0x800;
    }
    param_1[0x23] = uVar8;
    uVar1 = 1;
    goto LAB_82718f94;
  }
  uVar1 = 0;
LAB_82718f94:
  fn_82696330(auStack_80);
  return uVar1;
}

