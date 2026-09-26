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
extern int fn_82637AF8();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82637F58();
extern int fn_82637FC0();
extern int fn_826381E0();
extern int fn_82638288();
extern int fn_82638790();
extern int fn_826390F8();
extern int fn_82639EA8();
extern int fn_82639F28();
extern int fn_8263A7E0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_8266C540(int param_1)

{
  undefined4 uVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  fn_82639F28(*(undefined4 *)(param_1 + 0xcc),param_1 + 0xb0);
  uVar1 = fn_8263A7E0(*(undefined4 *)(param_1 + 0xcc),0);
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  uStack_24 = *(undefined4 *)(param_1 + 0xd4);
  uStack_28 = *(undefined4 *)(param_1 + 0xd0);
  uStack_30 = 0;
  uStack_20 = lbl_82002AE0;
  uStack_2c = 0;
  uStack_1c = lbl_821AAD20;
  fn_82637C50(*(undefined4 *)(param_1 + 0xcc),6);
  fn_82637CE0(*(undefined4 *)(param_1 + 0xcc),7);
  fn_82637AF8(*(undefined4 *)(param_1 + 0xcc),1);
  fn_82637F58(*(undefined4 *)(param_1 + 0xcc),0);
  fn_82637FC0(*(undefined4 *)(param_1 + 0xcc),4);
  fn_826390F8(*(undefined4 *)(param_1 + 0xcc),0);
  fn_82638288(*(undefined4 *)(param_1 + 0xcc),0);
  fn_82638790(*(undefined4 *)(param_1 + 0xcc),7);
  fn_826381E0(*(undefined4 *)(param_1 + 0xcc),0);
  fn_82639EA8(*(undefined4 *)(param_1 + 0xcc),&uStack_30);
  return;
}

