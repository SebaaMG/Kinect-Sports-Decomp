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
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_82230300();
extern int fn_8223F468();
extern int fn_8223F508();
extern int fn_8223F5A0();
extern int fn_8223F670();
extern int fn_8223F7A8();
extern int fn_822402F8();
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


undefined8
fn_8223EBB8(undefined8 param_1,int *param_2,undefined8 param_3,int param_4,undefined8 param_5,
             char param_6)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int aiStack_c0 [4];
  undefined4 ***apppuStack_b0 [4];
  uint uStack_a0;
  uint uStack_9c;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  if ((*(uint *)(param_4 + 0x14) & 0x4000) == 0) {
    (**(code **)(*param_2 + 0x1c))();
  }
  else {
    iVar1 = **(int **)(param_4 + 0x30);
    aiStack_c0[0] = iVar1;
    fn_8223F508(iVar1);
    piVar3 = (int *)fn_8223F468(aiStack_c0);
    if (iVar1 != 0) {
      puVar4 = (undefined4 *)fn_8223F5A0(iVar1);
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    fn_82230300(apppuStack_b0,0,0);
    if (param_6 == '\0') {
      (**(code **)(*piVar3 + 0x10))(auStack_70,piVar3);
      fn_822402F8(apppuStack_b0,auStack_70);
      puVar5 = auStack_70;
    }
    else {
      (**(code **)(*piVar3 + 0x14))(auStack_90);
      fn_822402F8(apppuStack_b0,auStack_90);
      puVar5 = auStack_90;
    }
    fn_82230300(puVar5,1,0);
    uVar8 = (ulonglong)uStack_a0;
    if (((longlong)*(ulonglong *)(param_4 + 0x20) < 1) ||
       (uVar2 = *(ulonglong *)(param_4 + 0x20) & 0xffffffff, lVar9 = uVar2 - uVar8, uVar2 <= uVar8))
    {
      lVar9 = 0;
    }
    if ((*(uint *)(param_4 + 0x14) & 0x1c0) != 0x40) {
      puVar6 = (undefined8 *)fn_8223F7A8(aiStack_c0,param_2,param_3,param_5,lVar9);
      param_3 = *puVar6;
      uVar8 = (ulonglong)uStack_a0;
      lVar9 = 0;
    }
    if (uStack_9c < 0x10) {
      apppuStack_b0[0] = apppuStack_b0;
    }
    puVar6 = (undefined8 *)fn_8223F670(aiStack_c0,param_2,param_3,apppuStack_b0[0],uVar8);
    uVar7 = *puVar6;
    *(undefined8 *)(param_4 + 0x20) = 0;
    fn_8223F7A8(param_1,param_2,uVar7,param_5,lVar9);
    fn_82230300(apppuStack_b0,1,0);
  }
  return param_1;
}

