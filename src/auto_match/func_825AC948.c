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
extern unsigned int *auStack_e0;
extern int fn_82230300();
extern int fn_8223B728();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_828B5B28();


undefined8 fn_825AC948(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [188];
  
  fn_8223CFC0(auStack_c0,2,1);
  uVar2 = fn_828B5B28(auStack_e0,param_2 + 0x84,param_3);
  uVar1 = *(undefined4 *)(param_2 + 0x80);
  uVar3 = fn_82240158(auStack_c0,0xffffffff821c8084);
  uVar3 = fn_82520AC8(uVar3,uVar1);
  uVar3 = fn_82240158(uVar3,0xffffffff821c8078);
  fn_8223B728(uVar3,uVar2);
  fn_82230300(auStack_e0,1,0);
  fn_822403C8(param_1,auStack_bc);
  fn_8223DCC8(auStack_c0);
  return param_1;
}

