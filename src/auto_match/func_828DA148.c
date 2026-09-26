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
extern unsigned int *auStack_ac;
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223DBE8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int lbl_8315A138;


undefined8 fn_828DA148(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_b0;
  undefined1 auStack_ac [76];
  undefined **appuStack_60 [18];
  
  puStack_b0 = &lbl_821AA8E0;
  appuStack_60[0] = &lbl_82020F40;
  fn_8223CD08(appuStack_60,auStack_ac,0);
  *(undefined ***)(auStack_ac + *(int *)(puStack_b0 + 4) + -4) = &lbl_82021284;
  fn_8223CF38(auStack_ac,2);
  puVar1 = (&lbl_8315A138)[*(int *)(param_2 + 0x80)];
  uVar2 = fn_82240158(&puStack_b0,0xffffffff82026df0);
  uVar2 = fn_82240158(uVar2,puVar1);
  fn_82240158(uVar2,0xffffffff82196fb0);
  fn_822403C8(param_1,auStack_ac);
  fn_8223DBE8(appuStack_60);
  appuStack_60[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_60);
  return param_1;
}

