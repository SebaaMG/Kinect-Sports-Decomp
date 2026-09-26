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
extern unsigned int *auStack_bc;
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223DBE8();
extern int fn_8223FBB0();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;


undefined8 fn_828DBDB0(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined *puStack_c0;
  undefined1 auStack_bc [76];
  undefined **appuStack_70 [28];
  
  puStack_c0 = &lbl_821AA8E0;
  appuStack_70[0] = &lbl_82020F40;
  fn_8223CD08(appuStack_70,auStack_bc,0);
  *(undefined ***)(auStack_bc + *(int *)(puStack_c0 + 4) + -4) = &lbl_82021284;
  fn_8223CF38(auStack_bc,2);
  uVar1 = *(uint *)(param_2 + 0x80);
  if (uVar1 == 0) {
    uVar2 = 0xffffffff82026e34;
  }
  else if (uVar1 == 1) {
    uVar2 = 0xffffffff82026e40;
  }
  else {
    if (2 < uVar1) goto LAB_828dbe50;
    uVar2 = 0xffffffff82026e4c;
  }
  fn_82240158(&puStack_c0,uVar2);
LAB_828dbe50:
  if ((*(int *)(param_2 + 0x88) - *(int *)(param_2 + 0x84) & 0xfffffffcU) == 0) {
    fn_82240158(&puStack_c0,0xffffffff82026e24);
  }
  else {
    fn_82240158(&puStack_c0,0xffffffff82026e30);
    puVar3 = *(undefined4 **)(param_2 + 0x84);
    if (puVar3 != *(undefined4 **)(param_2 + 0x88)) {
      do {
        fn_8223FBB0(&puStack_c0,*puVar3);
        puVar3 = puVar3 + 1;
        if (puVar3 != *(undefined4 **)(param_2 + 0x88)) {
          fn_82240158(&puStack_c0,0xffffffff82196824);
        }
      } while (puVar3 != *(undefined4 **)(param_2 + 0x88));
    }
  }
  fn_822403C8(param_1,auStack_bc);
  fn_8223DBE8(appuStack_70);
  appuStack_70[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_70);
  return param_1;
}

