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
extern unsigned int *auStack_140;
extern unsigned int *auStack_250;
extern unsigned int *auStack_290;
extern unsigned int *auStack_2b0;
extern unsigned int *auStack_2f0;
extern unsigned int *auStack_2f8;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_82526C70();
extern int fn_8256D3A8();
extern int fn_8256D798();
extern int fn_82599418();
extern int fn_825B7B58();
extern int fn_827D59F0();
extern int fn_827D9FB0();
extern int fn_827DC748();
extern int fn_82811400();
extern int fn_82A1F4F8();
extern unsigned int iStack_2f4;
extern unsigned int lbl_83156AA0;
extern unsigned int lbl_83265A24;
extern unsigned int lbl_8326B7C8;
extern unsigned int uStack_2fc;
extern unsigned int uStack_300;
extern unsigned int uStack_304;
extern unsigned int uStack_308;
extern unsigned int uStack_30c;
extern unsigned int uStack_310;


void fn_825B7500(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar5;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined1 auStack_2f8 [4];
  int iStack_2f4;
  undefined1 auStack_2f0 [64];
  undefined1 auStack_2b0 [32];
  undefined1 auStack_290 [64];
  undefined1 auStack_250 [272];
  undefined1 auStack_140 [320];
  
  uStack_310 = 0;
  fn_82526C70(auStack_140,0x104,0xffffffff821c84fc,0xffffffff831c0ee8,0xffffffff821c84f8,
                    param_1);
  fn_82526C70(auStack_250,0x104,0xffffffff821b0c70,auStack_140,0xffffffff821c8504);
  uVar5 = fn_82A1F4F8(auStack_250);
  if (uVar5 == 0xffffffff) {
    uVar5 = thunk_FUN_82a2b798();
  }
  else {
    uVar5 = -(uint)((uVar5 & 0x10) != 0) & 0x10b;
  }
  if (uVar5 == 0) {
    iVar1 = *(int *)lbl_83156AA0;
    uVar2 = fn_82811400(auStack_2b0,4);
    lVar3 = (**(code **)(iVar1 + 0xc))(lbl_83156AA0,0x68,uVar2);
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uStack_300 = 0;
      uStack_2fc = 0;
      uStack_308 = 0xffffffff;
      uStack_304 = 0;
      uStack_310 = 0;
      fn_8256D3A8(auStack_2f0,auStack_250);
      uVar2 = fn_827D9FB0(lVar3,auStack_2f0,&uStack_310,&uStack_304,&uStack_308,&uStack_2fc,
                                &uStack_300);
      fn_8256D798(auStack_2f0,1,0);
    }
    uVar2 = fn_827DC748(lbl_8326B7C8,uVar2);
    uStack_310 = 0;
    uStack_304 = 4;
    uStack_308 = 2;
    uVar7 = *(undefined4 *)(lbl_83265A24 + 0x2c4);
    uVar4 = fn_8256D3A8(auStack_290,auStack_140);
    puVar6 = (undefined4 *)
             fn_825B7B58(auStack_2f8,uVar4,uVar2,&uStack_310,&uStack_304,&uStack_308,uVar7);
    uVar7 = *puVar6;
    iVar1 = puVar6[1];
    *puVar6 = 0;
    puVar6[1] = 0;
    if (iStack_2f4 != 0) {
      fn_822315A0();
    }
    fn_8256D798(auStack_290,1,0);
    uStack_310 = 0;
    uStack_30c = 0;
    fn_82517978(&uStack_310,uVar7,iVar1,0);
    uVar7 = fn_827D59F0(lbl_83265A24,&uStack_310,1,0,0,0);
    *param_2 = uVar7;
    fn_82599418();
    if (iVar1 != 0) {
      fn_822315A0(iVar1);
    }
  }
  return;
}

