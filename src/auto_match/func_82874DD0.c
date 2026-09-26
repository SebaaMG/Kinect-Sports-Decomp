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
extern unsigned int *auStack_110;
extern unsigned int *auStack_120;
extern unsigned int *auStack_140;
extern unsigned int *auStack_160;
extern unsigned int *auStack_180;
extern unsigned int *auStack_dc;
extern unsigned int *auStack_e0;
extern char cRam832116e7;
extern char cRam832116ea;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_8223FCD8();
extern int fn_82240158();
extern int fn_82240378();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_82864898();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_82866420();
extern int fn_82A1F2F8();
extern int fn_82F62578();
extern unsigned int uStack_18c;


undefined8 fn_82874DD0(int param_1,int *param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar6;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar7;
  undefined8 uVar8;
  undefined4 ****appppuStack_1a0 [5];
  uint uStack_18c;
  undefined1 auStack_180 [32];
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [48];
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [220];
  
  uVar7 = 1 << (param_2[0xb] & 0x3fU);
  if (param_3 == '\0') {
    uVar7 = uVar7 | *(uint *)(param_1 + 0x28);
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x28) & ~uVar7;
  }
  *(uint *)(param_1 + 0x28) = uVar7;
  if (cRam832116ea != '\0') {
    fn_8223CFC0(auStack_e0,2,1);
    uVar8 = 0xffffffff82022440;
    if (param_3 == '\0') {
      uVar8 = 0xffffffff82022448;
    }
    uVar3 = (**(code **)(*param_2 + 0x20))(auStack_110,param_2);
    fn_828648B8(auStack_160,uVar3);
    puVar6 = (undefined4 *)fn_82240378(auStack_140,auStack_160);
    if (0xf < (uint)puVar6[5]) {
      puVar6 = (undefined4 *)*puVar6;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    iVar2 = param_2[0xb];
    uVar3 = fn_82A1F2F8();
    uVar4 = fn_82F62578(auStack_120,8);
    uVar5 = fn_82240158(auStack_e0,0xffffffff820224a4);
    uVar4 = fn_8223FCD8(uVar5,uVar4);
    uVar3 = fn_82520AC8(uVar4,uVar3);
    uVar3 = fn_82240158(uVar3,0xffffffff820224a0);
    uVar3 = fn_82240158(uVar3,0xffffffff82022474);
    uVar3 = fn_82240158(uVar3,0xffffffff8202246c);
    uVar3 = fn_82240158(uVar3,puVar6);
    uVar3 = fn_82240158(uVar3,0xffffffff8202245c);
    uVar3 = fn_82520AC8(uVar3,iVar2);
    uVar3 = fn_82240158(uVar3,0xffffffff82022450);
    uVar8 = fn_82240158(uVar3,uVar8);
    uVar8 = fn_82240158(uVar8,0xffffffff8202242c);
    uVar8 = fn_82520AC8(uVar8,uVar1);
    fn_82240158(uVar8,0xffffffff82022424);
    fn_82230300(auStack_140,1,0);
    fn_82230300(auStack_160,1,0);
    fn_82864898(auStack_110);
    if (cRam832116e7 != '\0') {
      fn_822403C8(appppuStack_1a0,auStack_dc);
      if (uStack_18c < 0x10) {
        appppuStack_1a0[0] = appppuStack_1a0;
      }
      fn_82230110(auStack_180,appppuStack_1a0[0]);
      uVar8 = fn_82865170();
      fn_82866420(uVar8,auStack_180,0);
      fn_82230300(auStack_180,1,0);
      fn_82230300(appppuStack_1a0,1,0);
    }
    fn_8223DCC8(auStack_e0);
  }
  return 0x20260000;
}

