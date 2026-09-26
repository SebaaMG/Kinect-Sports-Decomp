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
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_82233428();
extern int fn_82236DA0();
extern int fn_82236E18();
extern int fn_8223A7A8();
extern int fn_8238F748();
extern int fn_823F2E20();
extern int fn_8265C9E0();
extern int fn_828ABF58();
extern int fn_828E2688();
extern int fn_828E3508();
extern unsigned int iStack_4c;
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int iStack_64;
extern unsigned int lbl_821968A4;
extern unsigned int lbl_82196C50;
extern unsigned int lbl_82196C68;
extern unsigned int lbl_82196C78;
extern unsigned int lbl_82196E48;
extern unsigned int lbl_82197F34;
extern unsigned int uStack_68;


undefined4 * fn_82232F50(undefined4 *param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  char cVar6;
  undefined4 *puVar5;
  undefined4 *puVar7;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  int iStack_64;
  undefined1 auStack_60 [4];
  int iStack_5c;
  undefined1 auStack_58 [4];
  int iStack_54;
  undefined1 auStack_50 [4];
  int iStack_4c;
  
  fn_82233428();
  *param_1 = &lbl_82196C50;
  param_1[10] = &lbl_821968A4;
  fn_8238F748(param_1 + 0xc);
  puVar5 = param_1 + 0xd2;
  fn_828E3508(puVar5);
  param_1[0xe4] = 0;
  param_1[0xea] = 0;
  param_1[0xd2] = &lbl_82197F34;
  uVar2 = fn_8265C9E0(0x18);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_828ABF58(uVar2,1,0,0xffffffffffffffff);
  }
  fn_8223A7A8(param_1 + 0xec,uVar3);
  uVar2 = fn_8265C9E0(0x18);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_828ABF58(uVar2,1,0,0xffffffffffffffff);
  }
  fn_8223A7A8(param_1 + 0xee,uVar3);
  puVar7 = param_1 + 0xf0;
  *puVar5 = &lbl_82197F34;
  fn_828E3508(puVar7);
  param_1[0x102] = 0;
  param_1[0x108] = 0;
  param_1[0xf0] = &lbl_82196C68;
  puVar4 = (undefined4 *)fn_8265C9E0(8);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = 0;
    *puVar4 = &lbl_82196E48;
  }
  fn_8223A7A8(param_1 + 0x10a,puVar4);
  *puVar7 = &lbl_82196C68;
  fn_828E3508(param_1 + 0x10c);
  param_1[0x11e] = 0;
  param_1[0x124] = 0;
  auStack_70[0] = 0;
  param_1[0x10c] = &lbl_82196C78;
  puVar4 = (undefined4 *)fn_82236DA0(auStack_60,auStack_70);
  uStack_68 = *puVar4;
  iVar1 = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  iStack_64 = iVar1;
  cVar6 = fn_828E2688(puVar5);
  if (cVar6 == '\0') {
    fn_823F2E20(param_1 + 0xec,&uStack_68);
    iVar1 = iStack_64;
  }
  if (iVar1 != 0) {
    fn_822315A0(iVar1);
  }
  if (iStack_5c != 0) {
    fn_822315A0();
  }
  auStack_70[0] = 0;
  puVar4 = (undefined4 *)fn_82236DA0(auStack_58,auStack_70);
  uStack_68 = *puVar4;
  iVar1 = puVar4[1];
  *puVar4 = 0;
  puVar4[1] = 0;
  iStack_64 = iVar1;
  cVar6 = fn_828E2688(puVar5);
  if (cVar6 == '\0') {
    fn_823F2E20(param_1 + 0xee,&uStack_68);
    iVar1 = iStack_64;
  }
  if (iVar1 != 0) {
    fn_822315A0(iVar1);
  }
  if (iStack_54 != 0) {
    fn_822315A0();
  }
  puVar5 = (undefined4 *)fn_82236E18(auStack_50,0xffffffff8219674c,0xffffffff82198048);
  uStack_68 = *puVar5;
  iVar1 = puVar5[1];
  *puVar5 = 0;
  puVar5[1] = 0;
  iStack_64 = iVar1;
  cVar6 = fn_828E2688(puVar7);
  if (cVar6 == '\0') {
    fn_823F2E20(param_1 + 0x10a,&uStack_68);
    iVar1 = iStack_64;
  }
  if (iVar1 != 0) {
    fn_822315A0(iVar1);
  }
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  return param_1;
}

