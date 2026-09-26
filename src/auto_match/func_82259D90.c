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
extern unsigned int *auStack_14c;
extern unsigned int *auStack_150;
extern unsigned int *auStack_170;
extern unsigned int *auStack_ac;
extern unsigned int *auStack_b0;
extern int fn_82230300();
extern int fn_8223B728();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_8223FBB0();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82F646C8();


undefined8 fn_82259D90(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [4];
  undefined1 auStack_14c [156];
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [148];
  
  fn_8223CFC0(auStack_b0,2,1);
  if (*(uint *)(param_4 + 0xc) < 5) {
    puVar3 = (undefined4 *)(param_4 + 8);
  }
  else {
    puVar3 = *(undefined4 **)(param_4 + 8);
  }
  fn_8223CFC0(auStack_150,2,1);
  fn_8223FBB0(auStack_150,*puVar3);
  fn_822403C8(auStack_170,auStack_14c);
  fn_8223DCC8(auStack_150);
  uVar1 = fn_82F646C8(0xffffffff831d7480,0xffffffff8326338c);
  uVar2 = fn_82240158(auStack_b0,0xffffffff821976d0);
  uVar1 = fn_82240158(uVar2,uVar1);
  uVar1 = fn_82240158(uVar1,0xffffffff821976c8);
  uVar1 = fn_8223B728(uVar1,auStack_170);
  fn_82240158(uVar1,0xffffffff82196fb0);
  fn_82230300(auStack_170,1,0);
  fn_822403C8(param_1,auStack_ac);
  fn_8223DCC8(auStack_b0);
  return param_1;
}

