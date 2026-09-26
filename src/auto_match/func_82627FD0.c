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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_8c;
extern int fn_8256D3A8();
extern int fn_8256D798();
extern int fn_827D9630();
extern int fn_827D96A0();
extern int fn_827D9FB0();
extern int fn_82811438();
extern unsigned int lbl_821CAC50;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


undefined4 * fn_82627FD0(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 auStack_8c [3];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  uStack_a0 = 0;
  fn_82811438(auStack_80,&uStack_a0,0x10);
  puVar1 = (undefined4 *)
           (**(code **)(*(int *)lbl_83156AA0 + 0xc))(lbl_83156AA0,0x80,auStack_80);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = fn_827D96A0(param_2);
    uStack_90 = 0;
    auStack_8c[0] = 0;
    fn_8256D3A8(auStack_60,0xffffffff82196582);
    fn_827D9FB0(puVar1,auStack_60,auStack_8c,&uStack_90,&uStack_94,&uStack_98,&uStack_9c);
    fn_8256D798(auStack_60,1,0);
    *puVar1 = &lbl_821CAC50;
    fn_827D9630(puVar1 + 0x1a,param_2);
  }
  return puVar1;
}

