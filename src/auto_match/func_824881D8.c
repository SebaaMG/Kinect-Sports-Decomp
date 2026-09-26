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
extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern int fn_82230300();
extern int fn_822A8A50();
extern int fn_822A8D30();
extern int fn_82536CC8();
extern int fn_825529B0();
extern int fn_82552B50();
extern int fn_828647F0();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_821BE980;
extern unsigned int lbl_821C2CCC;
extern unsigned int lbl_8327F874;


void fn_824881D8(undefined4 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [80];
  
  *param_1 = &lbl_821BE980;
  fn_828647F0(auStack_80,*(undefined4 *)(param_1[10] + 0x84c));
  uVar3 = (ulonglong)lbl_8327F874;
  if (uVar3 == 0) {
    uVar3 = fn_82536CC8();
    lbl_8327F874 = (uint)uVar3;
  }
  uVar1 = fn_82864988(auStack_50,0xffffffff821be96c);
  uVar3 = fn_822A8D30(uVar3,auStack_80);
  if ((uVar3 & 0xffffffff) != 0) {
    fn_822A8A50(uVar3,uVar1);
  }
  fn_82864898(auStack_50);
  iVar2 = fn_825529B0(param_1 + 0x19);
  if (iVar2 != 0) {
    fn_82552B50(param_1 + 0x19,1);
  }
  fn_82864898(auStack_80);
  *param_1 = &lbl_821C2CCC;
  fn_82230300(param_1 + 3,1,0);
  return;
}

