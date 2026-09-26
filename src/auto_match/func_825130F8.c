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
extern int fn_822315A0();
extern int fn_8223B688();
extern int fn_82511928();
extern int fn_82513D20();
extern int fn_825154B8();
extern int fn_825156F8();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_821C24F4;
extern unsigned int lbl_821C2524;
extern unsigned int lbl_83297810;


undefined4 * fn_825130F8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined4 *apuStack_40 [16];
  
  *param_1 = &lbl_821C24F4;
  param_1[1] = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  fn_82F68CC0(param_1 + 4,param_2 + 2,8);
  param_1[6] = 0;
  piVar8 = param_1 + 6;
  fn_8223B688(param_1 + 7,param_2 + 4);
  uVar5 = param_2[1];
  uVar3 = fn_825154B8();
  puVar4 = (undefined4 *)fn_825156F8(uVar3,uVar5);
  uVar5 = (*(code *)puVar4[8])(*puVar4,puVar4 + 1,puVar4[0xd]);
  puVar4 = (undefined4 *)fn_8265C9E0(0x14);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[3] = uVar5;
    puVar4[1] = 1;
    *puVar4 = &lbl_821C2524;
    puVar4[2] = 1;
  }
  iVar1 = param_1[3];
  param_1[3] = puVar4;
  param_1[2] = uVar5;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  (*(code *)**(undefined4 **)param_1[2])();
  piVar6 = (int *)(*(code *)param_2[0xc])(apuStack_40,param_1);
  if (piVar8 != piVar6) {
    puVar4 = (undefined4 *)*piVar6;
    *piVar6 = 0;
    puVar2 = (undefined4 *)*piVar8;
    if (puVar4 != puVar2) {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      *piVar8 = (int)puVar4;
    }
  }
  if (apuStack_40[0] != (undefined4 *)0x0) {
    (**(code **)*apuStack_40[0])(apuStack_40[0],1);
  }
  uVar5 = param_1[1];
  uVar7 = (ulonglong)lbl_83297810;
  if (uVar7 == 0) {
    uVar7 = fn_82511928();
  }
  fn_82513D20(uVar7,uVar5,0);
  return param_1;
}

