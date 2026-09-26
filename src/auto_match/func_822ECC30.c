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
extern int fn_82230300();
extern int fn_8223DEF8();
extern int fn_8223E0E0();
extern int fn_8223F468();
extern int fn_8223F508();
extern int fn_8223F5A0();
extern int fn_822ED920();
extern int fn_822EE628();
extern int fn_822EF1A0();
extern int fn_822EF458();
extern int fn_82F632D8();
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000028;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack_8c;


undefined8 *
fn_822ECC30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5,uint *param_6,char *param_7)

{
  int iVar1;
  int *piVar4;
  undefined4 *puVar5;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar6;
  ulonglong uVar7;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  int iStack_b0;
  int iStack_ac;
  undefined4 ***apppuStack_a8 [2];
  undefined4 ***apppuStack_a0 [5];
  uint uStack_8c;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  uVar7 = 0xffffffffffffffff;
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  if ((*(uint *)(param_5 + 0x14) & 0x4000) == 0) {
    iStack_b0 = 0;
    iVar1 = **(int **)(param_5 + 0x30);
    iStack_ac = iVar1;
    fn_8223F508(iVar1);
    uVar2 = fn_822ED920(param_2,apppuStack_a0,&stack0x00000020,&stack0x00000028,
                            *(undefined4 *)(param_5 + 0x14),&iStack_ac);
    uVar3 = fn_82F632D8(apppuStack_a0,apppuStack_a8,uVar2,&iStack_b0);
    if (iVar1 != 0) {
      puVar5 = (undefined4 *)fn_8223F5A0(iVar1);
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    if ((((undefined4 ****)apppuStack_a8[0] != apppuStack_a0) && (iStack_b0 == 0)) &&
       ((uVar3 & 0xffffffff) < 2)) {
      uVar7 = uVar3;
    }
  }
  else {
    iVar1 = **(int **)(param_5 + 0x30);
    iStack_b0 = iVar1;
    fn_8223F508(iVar1);
    piVar4 = (int *)fn_8223F468(&iStack_b0);
    if (iVar1 != 0) {
      puVar5 = (undefined4 *)fn_8223F5A0(iVar1);
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    fn_82230300(apppuStack_a0,0,0);
    fn_822EE628(apppuStack_a0,1,0);
    (**(code **)(*piVar4 + 0x10))(auStack_80,piVar4);
    fn_8223DEF8(apppuStack_a0,auStack_80,0,0xffffffffffffffff);
    fn_82230300(auStack_80,1,0);
    fn_8223E0E0(apppuStack_a0,1,0);
    (**(code **)(*piVar4 + 0x14))(auStack_60,piVar4);
    fn_8223DEF8(apppuStack_a0,auStack_60,0,0xffffffffffffffff);
    fn_82230300(auStack_60,1,0);
    if (uStack_8c < 0x10) {
      apppuStack_a0[0] = apppuStack_a0;
    }
    uVar7 = fn_822EF1A0(&stack0x00000020,&stack0x00000028,2,apppuStack_a0[0]);
    fn_82230300(apppuStack_a0,1,0);
  }
  cVar6 = fn_822EF458(&stack0x00000020,&stack0x00000028);
  if (cVar6 != '\0') {
    *param_6 = *param_6 | 1;
  }
  if ((int)uVar7 < 0) {
    *param_6 = *param_6 | 2;
  }
  else {
    *param_7 = '\x01' - (uVar7 == 0);
  }
  *param_1 = uStack00000020;
  return param_1;
}

