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
extern unsigned int *auStack_230;
extern unsigned int *auStack_240;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE128();
extern int fn_82CEE578();
extern int fn_82E07840();
extern unsigned int *lbl_8323B464;


undefined8 fn_82E07FB0(undefined8 param_1,undefined8 param_2,char param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar4;
  undefined8 uVar3;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [560];
  
  iVar4 = fn_82E07840(param_1,param_2,0xffffffff8323f2ec);
  if (iVar4 == 0) {
    if (param_3 != '\0') {
      fn_82CEE578(auStack_240,auStack_230,0x200);
      uVar3 = fn_82CEDB38(auStack_240,0xffffffff82149f3c);
      uVar3 = fn_82CEDB38(uVar3,param_2);
      uVar3 = fn_82CEDB38(uVar3,0xffffffff82149ec8);
      uVar3 = fn_82CEE128(uVar3,param_1);
      fn_82CEDB38(uVar3,0xffffffff82149eb4);
      (**(code **)(*lbl_8323B464 + 0xc))
                (lbl_8323B464,1,0xffffffffabbaab81,auStack_230,0xffffffff82149e90,0xc4);
      fn_82CED958(auStack_240);
    }
    uVar3 = 1;
  }
  else {
    iVar4 = *(int *)(iVar4 + 8);
    uVar3 = 0;
    puVar1 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar2 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    puVar1 = (undefined4 *)(iVar4 + 0x10U & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar2 = (undefined4 *)(param_4 + 0x10U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    puVar1 = (undefined4 *)(iVar4 + 0x20U & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar2 = (undefined4 *)(param_4 + 0x20U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    puVar1 = (undefined4 *)(iVar4 + 0x30U & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar2 = (undefined4 *)(param_4 + 0x30U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
  }
  return uVar3;
}

