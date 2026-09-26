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
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_82240158();
extern int fn_822403C8();
extern unsigned int lbl_821AFBA4;
extern unsigned int lbl_821AFBC0;


undefined8 fn_82321A10(undefined8 param_1,int param_2,int param_3)

{
  undefined *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [188];
  
  fn_8223CFC0(auStack_c0,2,1);
  puVar1 = (&lbl_821AFBA4)[param_2];
  pcVar2 = (&lbl_821AFBC0)[param_2];
  if (param_3 == 0) {
    uVar4 = 0xffffffff821afb58;
  }
  else if (param_3 == 1) {
    uVar4 = 0xffffffff821afb60;
  }
  else if (param_3 == 9) {
    uVar4 = 0xffffffff821afb50;
  }
  else {
    uVar4 = 0xffffffff82196582;
  }
  uVar3 = fn_82240158(auStack_c0,0xffffffff821afb78);
  uVar3 = fn_82240158(uVar3,puVar1);
  uVar3 = fn_82240158(uVar3,0xffffffff821ac4b4);
  fn_82240158(uVar3,uVar4);
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    uVar4 = fn_82240158(auStack_c0,0xffffffff821ac4b4);
    fn_82240158(uVar4,pcVar2);
  }
  fn_822403C8(param_1,auStack_bc);
  fn_8223DCC8(auStack_c0);
  return param_1;
}

