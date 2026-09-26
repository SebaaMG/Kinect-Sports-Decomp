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
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern unsigned int *auStack_a0;
extern int fn_82CE52E0();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CEAB00();
extern int fn_82CEAC20();
extern int fn_82CEAC28();
extern int fn_82CEB3D8();
extern int fn_82CFC288();
extern int fn_82CFFC80();
extern int fn_82CFFD70();
extern int fn_82CFFD78();
extern int fn_82CFFDD8();
extern int fn_82CFFDE8();
extern int fn_82CFFEB8();
extern int fn_82CFFF50();
extern int fn_82E1A8D0();
extern int fn_82E1A9D8();
extern int fn_82E1B0A8();
extern int fn_82E1B190();


int fn_82E1B428(int *param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar8;
  int iVar9;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 uVar7;
  longlong lVar12;
  int *piVar13;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [104];
  
  iVar8 = fn_82CE5410();
  uVar1 = param_1[1];
  lVar12 = (ulonglong)uVar1 + 1;
  iVar9 = (int)lVar12;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar9) {
    lVar4 = ((ulonglong)(uint)param_1[2] & 0x3fffffff) << 1;
    if (iVar9 < (int)lVar4) {
      lVar12 = lVar4;
    }
    fn_82CE6310(*(undefined4 *)(iVar8 + 0x10),param_1,lVar12,0x10);
  }
  iVar8 = param_1[1] * 0x10 + *param_1;
  if (iVar8 != 0) {
    *(undefined4 *)(iVar8 + 4) = 0;
    *(undefined4 *)(iVar8 + 8) = 0;
    *(undefined4 *)(iVar8 + 0xc) = 0xffffffff;
    iVar9 = fn_82CE5410();
    fn_82CEAB00(iVar8 + 4,*(undefined4 *)(iVar9 + 0x10),0);
  }
  piVar13 = (int *)(uVar1 * 0x10 + *param_1);
  param_1[1] = param_1[1] + 1;
  iVar8 = fn_82CE5410();
  iVar8 = fn_82CE52E0(*(undefined4 *)(iVar8 + 0x10),0x30);
  *piVar13 = iVar8;
  iVar8 = fn_82CEAC28(param_2);
  if (iVar8 != 0) {
    fn_82CFFF50(auStack_98,*piVar13,0xffffffff8323ae68);
    fn_82CFFC80(auStack_90,auStack_98,0xffffffff821307c4);
    uVar5 = fn_82CFFD70(auStack_90);
    uVar6 = fn_82CEAC28(param_2);
    fn_82E1B0A8(param_4,uVar6,uVar5);
  }
  fn_82CFFF50(auStack_a0,param_2,0xffffffff8323ae68);
  if ((param_3 & 0xffffffff) == 0) {
    param_3 = fn_82CEAC20(param_2);
  }
  uVar5 = fn_82CFC288(param_3);
  fn_82CFFC80(auStack_88,auStack_a0,0xffffffff8213078c);
  puVar10 = (undefined4 *)fn_82CFFEB8(auStack_88,0);
  uVar6 = fn_82E1A8D0(param_1,*puVar10,puVar10[1]);
  fn_82CFFC80(auStack_80,auStack_a0,0xffffffff8213077c);
  puVar11 = (undefined4 *)fn_82CFFEB8(auStack_80,0);
  fn_82E1B190(param_1,*puVar11,puVar11[1],*puVar10,uVar6,puVar10[1],piVar13 + 1,param_4);
  fn_82CFFC80(auStack_78,auStack_a0,0xffffffff82130770);
  puVar11 = (undefined4 *)fn_82CFFD78(auStack_78,0);
  fn_82E1A9D8(param_1,param_2,*puVar11);
  iVar8 = *piVar13;
  if (iVar8 != 0) {
    fn_82CFFC80(auStack_70,auStack_a0,0xffffffff8213075c);
    fn_82CFFC80(auStack_68,auStack_a0,0xffffffff8213079c);
    fn_82CFFDE8(auStack_70,0);
    puVar11 = (undefined4 *)fn_82CFFDD8(auStack_68,0);
    uVar2 = puVar10[1];
    uVar3 = *puVar11;
    uVar7 = fn_82CEAC28(param_2);
    fn_82CEB3D8(iVar8,uVar5,uVar7,0,0,uVar3,uVar6,uVar2);
  }
  return *piVar13;
}

