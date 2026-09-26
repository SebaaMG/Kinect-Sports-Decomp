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
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F6AC80();
extern int fn_82F6CFD0();
extern int fn_82F709B8();
extern int fn_82F7C468();
extern int fn_82F816D0();
extern int fn_82F817C0();
extern unsigned int lbl_831BBF60;
extern unsigned int lbl_8329F620;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack_40;


ulonglong fn_82F6CE40(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar2;
  uint uVar3;
  undefined8 uVar1;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  uint uStack_40;
  
  iVar6 = 0;
  uStack_40 = 0;
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  if ((param_1 == 0) || (param_2 == param_2 + -1 + (ulonglong)(param_2 == 0))) {
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    return 0xffffffffffffffff;
  }
  fn_82F6AC80(param_1);
  if ((*(uint *)(param_1 + 0xc) & 0x40) == 0) {
    uVar3 = fn_82F7C468(param_1);
    if ((uVar3 == 0xffffffff) || (uVar3 == 0xfffffffe)) {
      puVar4 = &lbl_831BBF60;
    }
    else {
      puVar4 = (undefined *)((&lbl_8329F620)[(int)uVar3 >> 5] + (uVar3 & 0x1f) * 0x48);
    }
    puVar5 = &lbl_831BBF60;
    if ((puVar4[0x28] & 0xfe) == 0) {
      if ((uVar3 != 0xffffffff) && (uVar3 != 0xfffffffe)) {
        puVar5 = (undefined *)((&lbl_8329F620)[(int)uVar3 >> 5] + (uVar3 & 0x1f) * 0x48);
      }
      if ((puVar5[0x28] & 1) == 0) goto LAB_82f6cf80;
    }
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    iVar6 = -1;
    uStack_40 = 0xffffffff;
  }
LAB_82f6cf80:
  if (iVar6 == 0) {
    uVar1 = fn_82F816D0(param_1);
    uStack_40 = fn_82F709B8(param_1,param_2,0,&stack0x00000020);
    fn_82F817C0(uVar1,param_1);
  }
  fn_82F6CFD0();
  return (ulonglong)uStack_40;
}

