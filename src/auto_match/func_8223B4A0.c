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
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_8223FBB0();
extern int fn_8223FCD8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_82F62578();


undefined8 fn_8223B4A0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [188];
  
  fn_8223CFC0(auStack_c0,2,1);
  iVar3 = param_4 + 8;
  if (4 < *(uint *)(param_4 + 0xc)) {
    iVar3 = *(int *)(param_4 + 8);
  }
  uVar1 = fn_82240158(auStack_c0,0xffffffff82196fc4);
  uVar1 = fn_82520AC8(uVar1,0xc1);
  fn_82240158(uVar1,0xffffffff82196fbc);
  uVar4 = 0;
  do {
    uVar1 = fn_82F62578(auStack_d0,2);
    piVar2 = (int *)fn_8223FCD8(auStack_c0,uVar1);
    *(undefined1 *)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x40) = 0x30;
    *(uint *)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x14) =
         *(uint *)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x14) & 0xfffff1ff | 0x800;
    fn_8223FBB0(piVar2,*(undefined1 *)(iVar3 + uVar4));
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x19);
  fn_82240158(auStack_c0,0xffffffff82196fb0);
  fn_822403C8(param_1,auStack_bc);
  fn_8223DCC8(auStack_c0);
  return param_1;
}

