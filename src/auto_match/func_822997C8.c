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
extern unsigned int *auStack_28;
extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_82517978();
extern int fn_82520158();
extern int fn_8256E1D8();
extern int fn_8266EC60();
extern int fn_8266EE08();
extern int fn_8266F6A8();
extern int fn_82673A28();
extern int fn_82673BC0();
extern unsigned int iStack_24;
extern unsigned int iStack_2c;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83276534;
extern unsigned int lbl_832845F8;
extern unsigned int lbl_832845FC;
extern unsigned int uStack_30;


undefined4 * fn_822997C8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 uStack_30;
  int iStack_2c;
  undefined1 auStack_28 [4];
  int iStack_24;
  
  *param_1 = 0;
  uVar1 = lbl_821CC160;
  param_1[1] = 0;
  param_1[0x487] = uVar1;
  param_1[0x483] = 0;
  param_1[0x484] = 6;
  param_1[2] = lbl_83276534;
  lbl_83276534 = lbl_83276534 + 1;
  param_1[0x485] = 0;
  param_1[0x486] = 0;
  param_1[0x488] = 0;
  param_1[0x489] = 0;
  param_1[0x48a] = 0;
  param_1[0x48b] = 0;
  if ((lbl_832845FC == 0) || (bVar3 = false, *(int *)(lbl_832845FC + 4) == 0)) {
    bVar3 = true;
  }
  if (bVar3) {
    fn_82520158(0xffffffff821aac84,&uStack_30,0);
    uVar2 = fn_8266EC60();
    uVar2 = fn_8266EE08(auStack_28,uVar2,&uStack_30,0,1,0);
    fn_823F2E20(param_1,uVar2);
    if (iStack_24 != 0) {
      fn_822315A0();
    }
    fn_8266F6A8(*param_1,8);
    fn_8256E1D8(0xffffffff832845f8,*param_1,param_1[1]);
  }
  else {
    uStack_30 = 0;
    iStack_2c = 0;
    fn_82517978(&uStack_30,lbl_832845F8,lbl_832845FC,0);
    fn_823F2E20(param_1,&uStack_30);
    if (iStack_2c != 0) {
      fn_822315A0();
    }
  }
  fn_82673A28(*param_1,0xffffffff8229a2f8,param_1);
  fn_82673BC0(*param_1,0xffffffff8229a4c8,param_1);
  return param_1;
}

