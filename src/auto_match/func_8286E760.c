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
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern char cRam832116e9;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_8223FCD8();
extern int fn_82240158();
extern int fn_82520AC8();
extern int fn_828647D8();
extern int fn_828648B8();
extern int fn_82A1F2F8();
extern int fn_82F62578();


undefined8 fn_8286E760(int param_1)

{
  int iVar1;
  undefined4 *puVar6;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar7;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [208];
  
  piVar7 = *(int **)(param_1 + 4);
  while( true ) {
    if (piVar7 == *(int **)(param_1 + 8)) {
      return 1;
    }
    iVar1 = *piVar7;
    if (((*(char *)(iVar1 + 0x29) == '\0') && (*(char *)(iVar1 + 0x2a) == '\0')) &&
       (*(char *)(iVar1 + 0x2b) == '\0')) break;
    piVar7 = piVar7 + 1;
  }
  if (cRam832116e9 != '\0') {
    fn_8223CFC0(auStack_d0,2,1);
    fn_828648B8(auStack_120,iVar1);
    puVar6 = (undefined4 *)fn_8223B688(auStack_100,auStack_120);
    if (0xf < (uint)puVar6[5]) {
      puVar6 = (undefined4 *)*puVar6;
    }
    uVar2 = fn_828647D8(iVar1);
    uVar3 = fn_82A1F2F8();
    uVar4 = fn_82F62578(auStack_e0,8);
    uVar5 = fn_82240158(auStack_d0,0xffffffff82021a28);
    uVar4 = fn_8223FCD8(uVar5,uVar4);
    uVar3 = fn_82520AC8(uVar4,uVar3);
    uVar3 = fn_82240158(uVar3,0xffffffff82021a24);
    uVar3 = fn_82240158(uVar3,0xffffffff82021a00);
    uVar3 = fn_82240158(uVar3,puVar6);
    uVar3 = fn_82240158(uVar3,0xffffffff820219fc);
    uVar2 = fn_82520AC8(uVar3,uVar2);
    fn_82240158(uVar2,0xffffffff820219f8);
    fn_82230300(auStack_100,1,0);
    fn_82230300(auStack_120,1,0);
    fn_8223DCC8(auStack_d0);
  }
  return 0;
}

