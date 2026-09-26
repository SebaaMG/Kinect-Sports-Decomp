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
extern int fn_8223A0D0();
extern int fn_8223A4D8();
extern int fn_8223AAC0();
extern int fn_822C5B18();
extern int fn_82365BD8();
extern unsigned int lbl_82196BE0;
extern unsigned int lbl_82196BE8;
extern unsigned int lbl_82196BF8;
extern unsigned int lbl_82196C08;
extern unsigned int lbl_82196C18;
extern unsigned int lbl_82196C28;
extern unsigned int lbl_82196C58;


undefined4 * fn_82239D08(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  fn_8223A0D0();
  *param_1 = &lbl_82196BE0;
  fn_8223A4D8(param_1 + 10,param_2 + 0x28);
  param_1[10] = &lbl_82196C58;
  fn_822C5B18(param_1 + 0x18,param_2 + 0x60);
  fn_822C5B18(param_1 + 0x1e,param_2 + 0x78);
  param_1[10] = &lbl_82196BE8;
  fn_82365BD8(param_1 + 0x24,param_2 + 0x90);
  fn_82365BD8(param_1 + 0x26,param_2 + 0x98);
  fn_82365BD8(param_1 + 0x28,param_2 + 0xa0);
  fn_82365BD8(param_1 + 0x2a,param_2 + 0xa8);
  fn_82365BD8(param_1 + 0x2c,param_2 + 0xb0);
  fn_82365BD8(param_1 + 0x2e,param_2 + 0xb8);
  param_1[10] = &lbl_82196BE8;
  fn_8223A4D8(param_1 + 0x30,param_2 + 0xc0);
  param_1[0x30] = &lbl_82196C58;
  fn_822C5B18(param_1 + 0x3e,param_2 + 0xf8);
  fn_822C5B18(param_1 + 0x44,param_2 + 0x110);
  param_1[0x30] = &lbl_82196BF8;
  fn_82365BD8(param_1 + 0x4a,param_2 + 0x128);
  fn_82365BD8(param_1 + 0x4c,param_2 + 0x130);
  fn_82365BD8(param_1 + 0x4e,param_2 + 0x138);
  fn_82365BD8(param_1 + 0x50,param_2 + 0x140);
  fn_82365BD8(param_1 + 0x52,param_2 + 0x148);
  fn_82365BD8(param_1 + 0x54,param_2 + 0x150);
  fn_82365BD8(param_1 + 0x56,param_2 + 0x158);
  fn_82365BD8(param_1 + 0x58,param_2 + 0x160);
  param_1[0x30] = &lbl_82196BF8;
  fn_8223A4D8(param_1 + 0x5a,param_2 + 0x168);
  param_1[0x5a] = &lbl_82196C58;
  fn_822C5B18(param_1 + 0x68,param_2 + 0x1a0);
  fn_822C5B18(param_1 + 0x6e,param_2 + 0x1b8);
  param_1[0x5a] = &lbl_82196C08;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  iVar1 = *(int *)(param_2 + 0x1d4);
  uVar2 = *(undefined4 *)(param_2 + 0x1d0);
  if ((iVar1 != 0) && (cVar3 = fn_8223AAC0(iVar1), cVar3 != '\0')) {
    if (param_1[0x75] != 0) {
      fn_822315A0();
    }
    param_1[0x75] = iVar1;
    param_1[0x74] = uVar2;
  }
  param_1[0x5a] = &lbl_82196C08;
  fn_8223A4D8(param_1 + 0x76,param_2 + 0x1d8);
  param_1[0x76] = &lbl_82196C58;
  fn_822C5B18(param_1 + 0x84,param_2 + 0x210);
  fn_822C5B18(param_1 + 0x8a,param_2 + 0x228);
  param_1[0x76] = &lbl_82196C18;
  fn_82365BD8(param_1 + 0x90,param_2 + 0x240);
  fn_82365BD8(param_1 + 0x92,param_2 + 0x248);
  fn_82365BD8(param_1 + 0x94,param_2 + 0x250);
  fn_82365BD8(param_1 + 0x96,param_2 + 600);
  fn_82365BD8(param_1 + 0x98,param_2 + 0x260);
  param_1[0x76] = &lbl_82196C18;
  fn_8223A4D8(param_1 + 0x9a,param_2 + 0x268);
  param_1[0x9a] = &lbl_82196C58;
  fn_822C5B18(param_1 + 0xa8,param_2 + 0x2a0);
  fn_822C5B18(param_1 + 0xae,param_2 + 0x2b8);
  param_1[0x9a] = &lbl_82196C28;
  fn_82365BD8(param_1 + 0xb4,param_2 + 0x2d0);
  fn_82365BD8(param_1 + 0xb6,param_2 + 0x2d8);
  fn_82365BD8(param_1 + 0xb8,param_2 + 0x2e0);
  fn_82365BD8(param_1 + 0xba,param_2 + 0x2e8);
  fn_82365BD8(param_1 + 0xbc,param_2 + 0x2f0);
  fn_82365BD8(param_1 + 0xbe,param_2 + 0x2f8);
  fn_82365BD8(param_1 + 0xc0,param_2 + 0x300);
  fn_82365BD8(param_1 + 0xc2,param_2 + 0x308);
  fn_82365BD8(param_1 + 0xc4,param_2 + 0x310);
  param_1[0x9a] = &lbl_82196C28;
  return param_1;
}

