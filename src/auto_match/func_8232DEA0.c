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
extern unsigned int *auStack_dc;
extern unsigned int *auStack_e0;
extern int fn_82230040();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223B728();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_82240158();
extern int fn_822402F8();
extern int fn_822403C8();
extern int fn_822C70F0();
extern int fn_82511668();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B07D4;
extern unsigned int lbl_821B07E8;
extern unsigned int lbl_821C2424;
extern unsigned int uStack_120;
extern unsigned int uStack_124;


undefined4 *
fn_8232DEA0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  undefined **ppuStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined4 *puStack_118;
  undefined4 *puStack_110;
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [220];
  
  fn_822C70F0();
  param_1[0x15] = param_4;
  *param_1 = &lbl_821B07D4;
  param_1[0x16] = *(int *)(param_4 + 0x118) + 0x24;
  fn_8223B688(param_1 + 0x17,param_5);
  fn_8223B688(param_1 + 0x1e,param_5);
  param_1[0x25] = param_6;
  param_1[0x26] = param_7;
  param_1[0x27] = param_8;
  param_1[0x28] = 4;
  param_1[0x2a] = &lbl_821C2424;
  param_1[0x30] = 0;
  fn_8223CFC0(auStack_e0,2,1);
  fn_8223B728(auStack_e0,param_1 + 0x17);
  fn_82240158(auStack_e0,0xffffffff821b07cc);
  fn_822403C8(auStack_100,auStack_dc);
  fn_822402F8(param_1 + 0x1e,auStack_100);
  fn_82230300(auStack_100,1,0);
  uStack_120 = 0x8232e24800000000;
  puStack_118 = param_1;
  puVar1 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &lbl_821B07E8;
    fn_82F68CC0(puVar1 + 2,&uStack_120,0x18);
    puStack_110 = puVar1;
    fn_82511668(param_1 + 0x2a,&uStack_120);
    fn_8223DCC8(auStack_e0);
    return param_1;
  }
  uStack_124 = 0;
  ppuStack_128 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_128);
}

