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
extern int fn_8257A9F0();
extern int fn_8265C9E0();
extern int fn_8305D7B8();
extern int fn_8305D7C0();
extern int fn_8305D7C8();
extern int fn_8305E0F8();
extern int fn_8305EC98();
extern int fn_8305F2E8();
extern int fn_8305F320();
extern int fn_83066810();
extern int fn_83068418();
extern unsigned int lbl_8217E6BC;
extern unsigned int stack0x0000003c;


void fn_83068960(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined4 *param_7)

{
  char cVar4;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar1;
  undefined4 *puStack0000003c;
  char cStack_60;
  
  puStack0000003c = param_7;
  while( true ) {
    if ((param_6 == 0) || (cVar4 = fn_83068418(param_6), cVar4 != '\0')) {
      if (((param_3 & 0xff) == 0) && (param_6 == 0)) {
        if (param_7 != (undefined4 *)0x0) {
          (**(code **)*param_7)(param_7,1);
        }
      }
      else {
        param_7[0x11] = param_6;
        fn_8257A9F0(param_2,&stack0x0000003c);
      }
      return;
    }
    iVar2 = fn_83066810(param_1,param_6 + 0x10,param_7);
    if (iVar2 == 3) break;
    if (cStack_60 != '\0') {
      puVar3 = (undefined4 *)fn_8265C9E0(0x48);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        fn_8305F2E8(puVar3);
        *puVar3 = &lbl_8217E6BC;
      }
      uVar1 = fn_8305D7C8(param_7);
      fn_8305E0F8(puVar3,uVar1);
      fn_8305EC98(puVar3,param_7);
      puVar3[0x11] = param_7[0x11];
      fn_8305D7B8(param_7,1);
      fn_8305D7B8(puVar3,1);
      goto LAB_83068aa4;
    }
    if (iVar2 == 1) {
      param_6 = *(int *)(param_6 + 0x30);
    }
    else {
      param_6 = *(int *)(param_6 + 0x34);
    }
  }
  puVar3 = (undefined4 *)fn_8265C9E0(0x48);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    fn_8305F2E8(puVar3);
    *puVar3 = &lbl_8217E6BC;
  }
  uVar1 = fn_8305D7C8(param_7);
  fn_8305E0F8(puVar3,uVar1);
  fn_8305EC98(puVar3,param_7);
  puVar3[0x11] = param_7[0x11];
  uVar1 = fn_8305D7C0(param_7);
  fn_8305D7B8(puVar3,uVar1);
  fn_8305F320(param_1,param_7,param_6 + 0x10,puVar3,param_7);
LAB_83068aa4:
  fn_83068960(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(param_6 + 0x30),param_7);
  fn_83068960(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(param_6 + 0x34),puVar3);
  return;
}

