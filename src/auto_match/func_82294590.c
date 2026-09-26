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
extern int fn_8223C7F0();
extern int fn_8223F508();
extern int fn_8223F5A0();
extern int fn_82240070();
extern int fn_82297388();
extern int fn_8265C9E0();
extern int fn_82F624E8();
extern int fn_82F62800();
extern int fn_82F62CD0();
extern unsigned int lbl_821AA8A0;
extern unsigned int lbl_821AA8DC;
extern unsigned int lbl_821AA8E0;
extern unsigned int lbl_821AA928;
extern unsigned int lbl_821AA92C;
extern unsigned int lbl_821AA968;


int * fn_82294590(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined2 uVar5;
  undefined4 uVar4;
  int iVar6;
  int *piVar7;
  int aiStack_40 [16];
  
  *param_1 = (int)&lbl_821AA8E0;
  param_1[0x14] = (int)&lbl_821AA928;
  *(undefined ***)(*(int *)(*param_1 + 4) + (int)param_1) = &lbl_821AA968;
  iVar6 = *(int *)(*param_1 + 4) + (int)param_1;
  fn_8223C7F0(iVar6);
  piVar7 = param_1 + 1;
  *(undefined4 *)(iVar6 + 0x3c) = 0;
  *(int **)(iVar6 + 0x38) = piVar7;
  iVar1 = **(int **)(iVar6 + 0x30);
  aiStack_40[0] = iVar1;
  fn_8223F508(iVar1);
  piVar2 = (int *)fn_82297388(aiStack_40);
  if (iVar1 != 0) {
    puVar3 = (undefined4 *)fn_8223F5A0(iVar1);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  uVar5 = (**(code **)(*piVar2 + 0x28))(piVar2,0x20);
  *(undefined2 *)(iVar6 + 0x40) = uVar5;
  if (*(int *)(iVar6 + 0x38) == 0) {
    fn_82240070(iVar6,*(uint *)(iVar6 + 0xc) | 4,0);
  }
  *(undefined ***)(*(int *)(*param_1 + 4) + (int)param_1) = &lbl_821AA8DC;
  *piVar7 = (int)&lbl_821AA92C;
  fn_82F624E8(param_1 + 2);
  puVar3 = (undefined4 *)fn_8265C9E0(4);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar4 = fn_82F62CD0();
    *puVar3 = uVar4;
    fn_82F62800();
    fn_8223F508();
  }
  param_1[0xf] = (int)puVar3;
  param_1[6] = (int)(param_1 + 4);
  param_1[5] = (int)(param_1 + 3);
  param_1[9] = (int)(param_1 + 7);
  param_1[0xe] = (int)(param_1 + 0xc);
  param_1[0xd] = (int)(param_1 + 0xb);
  param_1[10] = (int)(param_1 + 8);
  param_1[4] = 0;
  *(undefined4 *)param_1[10] = 0;
  *(undefined4 *)param_1[0xe] = 0;
  *(undefined4 *)param_1[5] = 0;
  *(undefined4 *)param_1[9] = 0;
  *(undefined4 *)param_1[0xd] = 0;
  *piVar7 = (int)&lbl_821AA8A0;
  param_1[0x10] = 0;
  param_1[0x11] = 4;
  return param_1;
}

