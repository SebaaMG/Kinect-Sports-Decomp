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
extern int fn_822A8A50();
extern int fn_822A8D30();
extern int fn_82520D38();
extern int fn_82536CC8();
extern int fn_828647F0();
extern int fn_82864898();
extern int fn_82864988();
extern int fn_82F68CC0();
extern unsigned int lbl_821BE980;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8327F874;
extern unsigned int uRam8327fab0;


undefined4 * fn_82488068(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  double dVar5;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [80];
  
  fn_82520D38();
  fVar2 = lbl_821CC160;
  dVar5 = (double)lbl_821CC160;
  *param_1 = &lbl_821BE980;
  param_1[0xb] = fVar2;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0xffffffff;
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  param_1[0xf] = fVar2;
  param_1[10] = uVar1;
  param_1[0x10] = fVar2;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0xc] = 2;
  param_1[0x19] = 0;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1a] = 0;
  fn_828647F0(auStack_80,*(undefined4 *)(param_1[10] + 0x84c));
  uVar4 = (ulonglong)lbl_8327F874;
  if (uVar4 == 0) {
    uVar4 = fn_82536CC8();
    lbl_8327F874 = (uint)uVar4;
  }
  uVar3 = fn_82864988(auStack_50,0xffffffff821be96c);
  uVar4 = fn_822A8D30(uVar4,auStack_80);
  if ((uVar4 & 0xffffffff) != 0) {
    fn_822A8A50(uVar4,uVar3);
  }
  fn_82864898(auStack_50);
  fn_82F68CC0(0xffffffff832657f8,0xffffffff8327faa8,0x54);
  uVar1 = uRam8327fab0;
  param_1[0x21] = (float)dVar5;
  param_1[0x1d] = (float)dVar5;
  param_1[0x1c] = uVar1;
  fn_82864898(auStack_80);
  return param_1;
}

