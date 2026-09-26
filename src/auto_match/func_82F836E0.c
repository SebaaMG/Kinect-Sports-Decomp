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
extern int fn_82F7C468();
extern int fn_82F816D0();
extern int fn_82F817C0();
extern int fn_82F8385C();
extern unsigned int lbl_831BBF60;
extern unsigned int lbl_8329F620;
extern unsigned int uStack_50;


ulonglong fn_82F836E0(code *param_1,int param_2,longlong param_3,undefined8 param_4,
                       undefined8 param_5)

{
  undefined4 *puVar2;
  uint uVar3;
  undefined8 uVar1;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uStack_50;
  
  iVar6 = 0;
  uStack_50 = 0;
  if ((param_2 == 0) || (param_3 == param_3 + -1 + (ulonglong)(param_3 == 0))) {
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    return 0xffffffffffffffff;
  }
  fn_82F6AC80(param_2);
  if ((*(uint *)(param_2 + 0xc) & 0x40) == 0) {
    uVar3 = fn_82F7C468(param_2);
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
      if ((puVar5[0x28] & 1) == 0) goto LAB_82f83808;
    }
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    iVar6 = -1;
    uStack_50 = 0xffffffff;
  }
LAB_82f83808:
  if (iVar6 == 0) {
    uVar1 = fn_82F816D0(param_2);
    uStack_50 = (*param_1)(param_2,param_3,param_4,param_5);
    fn_82F817C0(uVar1,param_2);
  }
  fn_82F8385C();
  return (ulonglong)uStack_50;
}

