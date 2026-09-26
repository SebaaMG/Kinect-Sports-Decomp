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
extern unsigned int *auStack_60;
extern unsigned int *auStack_f8;
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223FBB0();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_8265CA20();
extern int fn_82F62528();
extern int fn_82F62578();
extern int fn_82F62680();
extern int fn_82F626D0();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_8202115C;
extern unsigned int lbl_820211D4;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


/* WARNING: Type propagation algorithm not settling */

undefined8 fn_828B7940(undefined8 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 auStack_110 [16];
  undefined **appuStack_100 [2];
  undefined1 auStack_f8 [12];
  undefined4 *apuStack_ec [4];
  undefined4 *puStack_dc;
  undefined4 *puStack_d8;
  undefined4 *puStack_cc;
  undefined4 *puStack_c8;
  uint *puStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined **appuStack_b0 [20];
  undefined1 auStack_60 [96];
  
  appuStack_b0[0] = &lbl_82020F40;
  appuStack_100[0] = (undefined **)&lbl_821AA8E0;
  fn_8223CD08(appuStack_b0,appuStack_100 + 1,0);
  *(undefined ***)((int)appuStack_100 + (int)appuStack_100[0][1]) = &lbl_82021284;
  fn_8223CF38(appuStack_100 + 1,2);
  fn_82240158(appuStack_100,0xffffffff821c7f30);
  uVar4 = 0;
  do {
    puVar3 = (undefined4 *)fn_82F62578(auStack_60,2);
    (*(code *)*puVar3)((undefined *)((int)appuStack_100 + (int)appuStack_100[0][1]),
                       *(undefined8 *)(puVar3 + 2));
    uVar1 = *(undefined1 *)(uVar4 + param_2);
    *(undefined1 *)((int)&uStack_c0 + (int)appuStack_100[0][1]) = 0x30;
    *(uint *)((int)apuStack_ec + (int)appuStack_100[0][1]) =
         *(uint *)((int)apuStack_ec + (int)appuStack_100[0][1]) & 0xfffff1ff | 0x800;
    fn_8223FBB0(appuStack_100,uVar1);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  fn_822403C8(param_1,appuStack_100 + 1);
  *(undefined ***)((int)appuStack_100 + (int)appuStack_100[0][1]) = &lbl_82021284;
  appuStack_100[1] = &lbl_820211D4;
  if ((uStack_bc & 1) != 0) {
    fn_8265CA20(*apuStack_ec[0]);
  }
  *apuStack_ec[0] = 0;
  *puStack_dc = 0;
  *puStack_cc = 0;
  *apuStack_ec[1] = 0;
  *puStack_d8 = 0;
  *puStack_c8 = 0;
  uStack_bc = uStack_bc & 0xfffffffe;
  uStack_c0 = 0;
  appuStack_100[1] = &lbl_8202115C;
  if (puStack_c4 != (uint *)0x0) {
    uVar4 = *puStack_c4;
    if (uVar4 != 0) {
      fn_82F62680(auStack_110,0);
      iVar2 = *(int *)(uVar4 + 4);
      if ((iVar2 != 0) && (iVar2 != -1)) {
        *(int *)(uVar4 + 4) = iVar2 + -1;
      }
      puVar3 = (undefined4 *)(-(uint)(*(int *)(uVar4 + 4) == 0) & uVar4);
      fn_82F626D0(auStack_110);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    fn_8265CA20(puStack_c4);
  }
  fn_82F62528(auStack_f8);
  *(undefined ***)((int)appuStack_100 + (int)appuStack_100[0][1]) = &lbl_82020F40;
  appuStack_b0[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_b0);
  return param_1;
}

