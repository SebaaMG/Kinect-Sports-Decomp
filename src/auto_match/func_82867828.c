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
extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82230360();
extern int fn_8223B688();
extern int fn_822B27E8();
extern int fn_822BD338();
extern int fn_82864898();
extern int fn_828648F0();
extern int fn_8286A188();
extern int fn_8286B2A8();
extern unsigned int iStack_110;


undefined8 fn_82867828(int *param_1)

{
  char cVar3;
  undefined8 uVar1;
  ulonglong uVar2;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 auStack_120 [16];
  int iStack_110;
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  fn_8223B688(auStack_e0);
  fn_82230300(auStack_120,0,0);
  fn_82230300(auStack_100,0,0);
  iVar8 = 0;
  puVar7 = (undefined4 *)0x83157758;
  uVar6 = 0;
  while (cVar3 = fn_8286A188(*puVar7,auStack_e0), cVar3 == '\0') {
    uVar6 = uVar6 + 0xc;
    iVar8 = iVar8 + 1;
    puVar7 = puVar7 + 3;
    if (0x6b < uVar6) goto LAB_8286794c;
  }
  iVar8 = iVar8 * 0xc;
  uVar1 = fn_82230110(auStack_c0,*(undefined4 *)(iVar8 + -0x7cea88a4));
  cVar3 = fn_822BD338(uVar1,0xffffffff82020ea8);
  pcVar4 = "EnglishStreams";
  pcVar5 = pcVar4;
  if (cVar3 == '\0') {
    pcVar4 = *(char **)(iVar8 + -0x7cea88a4);
    pcVar5 = pcVar4;
  }
  do {
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  fn_82230360(auStack_120,pcVar5,pcVar4 + (-1 - (int)pcVar5));
  fn_82230300(auStack_c0,1,0);
  pcVar4 = *(char **)(iVar8 + -0x7cea88a4);
  pcVar5 = pcVar4;
  do {
    cVar3 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar3 != '\0');
  fn_82230360(auStack_100,pcVar4,pcVar5 + (-1 - (int)pcVar4));
  *(bool *)(param_1 + 0x134) = *(char *)(iVar8 + -0x7cea88a0) == '\0';
LAB_8286794c:
  if (iStack_110 == 0) {
    fn_82230360(auStack_120,0xffffffff82020ec4,0xe);
    fn_82230360(auStack_100,0xffffffff82020ed4,0xb);
  }
  iVar8 = *(int *)param_1[0x124];
  uVar1 = fn_8286B2A8(auStack_80,auStack_100,0x5c);
  uVar2 = (**(code **)(iVar8 + 4))(param_1[0x124],uVar1);
  fn_82230300(auStack_80,1,0);
  if ((uVar2 & 0xffffffff) >> 0x1f == 0) {
    iVar8 = *param_1;
    uVar1 = fn_822B27E8(auStack_a0,auStack_120,0xffffffff82020ee0);
    uVar1 = fn_828648F0(auStack_60,uVar1);
    uVar2 = (**(code **)(iVar8 + 0x44))(param_1,uVar1);
    fn_82864898(auStack_60);
    fn_82230300(auStack_a0,1,0);
    if ((uVar2 & 0xffffffff) >> 0x1f == 0) {
      uVar1 = 0x200a0000;
    }
    else {
      uVar1 = 0xffffffffa00a0000;
    }
    fn_82230300(auStack_100,1,0);
    fn_82230300(auStack_120,1,0);
    fn_82230300(auStack_e0,1,0);
  }
  else {
    fn_82230300(auStack_100,1,0);
    fn_82230300(auStack_120,1,0);
    fn_82230300(auStack_e0,1,0);
    uVar1 = 0xffffffffa00a0000;
  }
  return uVar1;
}

