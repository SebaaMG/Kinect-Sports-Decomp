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
extern unsigned int *auStack_820;
extern unsigned int *auStack_8bc;
extern unsigned int *auStack_8c0;
extern int fn_822943F0();
extern int fn_82294590();
extern int fn_82294750();
extern int fn_822950D8();
extern int fn_82296618();
extern int fn_822967A0();
extern int fn_82297DB0();
extern int fn_82299AC8();
extern int fn_82358FD8();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int uStack_8cc;


void fn_82294320(int param_1,undefined8 param_2)

{
  undefined4 ***apppuStack_8e0 [5];
  uint uStack_8cc;
  undefined1 auStack_8c0 [4];
  undefined1 auStack_8bc [76];
  undefined **appuStack_870 [20];
  undefined1 auStack_820 [2056];
  
  fn_82294590(auStack_8c0);
  fn_82358FD8(*(undefined4 *)(param_1 + 0x1c),auStack_820,0x400,0xffffffff821aa7f8);
  fn_82296618(auStack_8c0,auStack_820);
  fn_822967A0(auStack_8c0,0xffffffff821aa89c);
  fn_822943F0(auStack_8c0,param_2);
  fn_822950D8(apppuStack_8e0,auStack_8bc);
  if (uStack_8cc < 8) {
    apppuStack_8e0[0] = apppuStack_8e0;
  }
  fn_82299AC8(param_1 + 0x68,apppuStack_8e0[0]);
  fn_82297DB0(apppuStack_8e0,1,0);
  fn_82294750(appuStack_870);
  appuStack_870[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_870);
  return;
}

