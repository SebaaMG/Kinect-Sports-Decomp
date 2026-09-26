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
extern int fn_822315A0();
extern int fn_8232C8B8();
extern int fn_82331168();
extern int fn_82331698();
extern int fn_824CCD80();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;


void fn_823309A8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x2c);
    uVar2 = fn_824CCD80(*(undefined4 *)(param_1 + 0x2c));
    puStack_2c = (undefined4 *)fn_8265C9E0(0xe0);
    if (puStack_2c == (undefined4 *)0x0) {
LAB_82330a94:
      puStack_2c = (undefined4 *)0x0;
    }
    else {
      puStack_2c[1] = 1;
      *puStack_2c = &lbl_821A8D8C;
      puStack_2c[2] = 1;
      if (puStack_2c + 4 != (undefined4 *)0x0) {
        fn_82331168(puStack_2c + 4,param_1 + 0x40,*(undefined4 *)(param_1 + 0xd4),
                          param_1 + 0x54,param_1 + 0x6c,param_1 + 0xd8,uVar2,uVar1);
      }
    }
  }
  else {
    if (param_2 != 1) goto LAB_82330ac0;
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x2c);
    uVar2 = fn_824CCD80(*(undefined4 *)(param_1 + 0x2c));
    puStack_2c = (undefined4 *)fn_8265C9E0(0x100);
    if (puStack_2c == (undefined4 *)0x0) goto LAB_82330a94;
    puStack_2c[1] = 1;
    *puStack_2c = &lbl_821A8D8C;
    puStack_2c[2] = 1;
    if (puStack_2c + 4 != (undefined4 *)0x0) {
      fn_82331698(puStack_2c + 4,param_1 + 0x40,*(undefined4 *)(param_1 + 0xd4),param_1 + 0x54
                        ,param_1 + 0x78,param_1 + 0xd8,uVar2,uVar1);
    }
  }
  puStack_30 = puStack_2c + 4;
  fn_8232C8B8(param_1,&puStack_30);
  if (puStack_2c != (undefined4 *)0x0) {
    fn_822315A0();
  }
LAB_82330ac0:
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  return;
}

