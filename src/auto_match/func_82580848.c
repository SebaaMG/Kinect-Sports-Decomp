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
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_8256D3A8();
extern int fn_8256D798();
extern int fn_82599418();
extern int fn_825D61E0();
extern int fn_827D9FB0();
extern int fn_827DB6D0();
extern int fn_827DB868();
extern int fn_827DC748();
extern int fn_82811400();
extern unsigned int lbl_83156AA0;
extern unsigned int lbl_8326B7C8;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_82580848(undefined4 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 auStack_b0 [4];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [128];
  
  uVar4 = 0;
  auStack_b0[0] = 0;
  iVar1 = *(int *)lbl_83156AA0;
  uVar2 = fn_82811400(auStack_a0,4);
  lVar3 = (**(code **)(iVar1 + 0xc))(lbl_83156AA0,0x68,uVar2);
  if (lVar3 != 0) {
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0xffffffff;
    uStack_b4 = 0;
    auStack_b0[0] = 0;
    fn_8256D3A8(auStack_80,param_2);
    uVar4 = fn_827D9FB0(lVar3,auStack_80,auStack_b0,&uStack_b4,&uStack_b8,&uStack_bc,
                              &uStack_c0);
    fn_8256D798(auStack_80,1,0);
  }
  uVar4 = fn_827DC748(lbl_8326B7C8,uVar4);
  *param_1 = (int)uVar4;
  if (param_3 == 0x40000000) {
    fn_827DB868();
  }
  else {
    fn_827DB6D0(lbl_8326B7C8,uVar4,2,0,0,0);
  }
  fn_82599418();
  fn_825D61E0(0);
  return;
}

