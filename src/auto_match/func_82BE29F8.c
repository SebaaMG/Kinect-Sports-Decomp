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
extern int fn_82BE1950();
extern int fn_82BE51E8();
extern int fn_82BE8CE0();
extern int fn_82BEA180();
extern int fn_82BEB6F8();
extern int fn_82BEB750();
extern int fn_82F691F0();
extern unsigned int lbl_820E8984;
extern unsigned int lbl_820E8990;
extern unsigned int lbl_820E8D68;
extern unsigned int lbl_820E8D6C;
extern unsigned int lbl_820E8D78;
extern unsigned int lbl_820E8D7C;
extern unsigned int lbl_820E8D9C;
extern unsigned int lbl_820E8DA4;
extern unsigned int lbl_820EBE90;
extern unsigned int lbl_821968A4;
extern unsigned int lbl_8322B130;


void fn_82BE29F8(undefined4 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    param_1[0xb] = &lbl_820E8DA4;
    param_1[0xd] = &lbl_820E8D9C;
    fn_82BE8CE0(param_1 + 100);
  }
  fn_82BEB750(param_1,0xffffffff820e8d88);
  param_1[10] = &lbl_820E8984;
  *(undefined ***)((int)param_1 + *(int *)(param_1[0xb] + 4) + 0x2c) =
       &lbl_820E8990;
  param_1[0xc] = &lbl_821968A4;
  *(undefined ***)((int)param_1 + *(int *)(param_1[0xd] + 4) + 0x34) =
       &lbl_820E8990;
  *param_1 = &lbl_820E8D6C;
  param_1[10] = &lbl_820E8D7C;
  param_1[0xc] = &lbl_820E8D68;
  *(undefined ***)((int)param_1 + *(int *)(param_1[0xb] + 4) + 0x2c) = &lbl_820E8D78;
  fn_82BEB6F8(param_1 + 0xe);
  fn_82BEA180(param_1 + 0x16,0xffffffff820e8d4c,1);
  fn_82BE1950(param_1 + 0x38);
  fn_82BE51E8(param_1 + 0x42,0xffffffff820e897c);
  param_1[0x42] = &lbl_820EBE90;
  fn_82BE51E8(param_1 + 0x48,0xffffffff820e897c);
  param_1[0x48] = &lbl_820EBE90;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  lbl_8322B130 = param_1;
  *(undefined2 *)(param_1 + 0x47) = 0;
  *(undefined2 *)(param_1 + 0x4d) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x24,0,0x50);
}

