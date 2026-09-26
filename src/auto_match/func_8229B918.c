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
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_8266EC60();
extern int fn_8266EE08();
extern int fn_8266F628();
extern int fn_8266F640();
extern int fn_8266F658();
extern int fn_8266F660();
extern int fn_82673A28();
extern int fn_82673BC0();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int iStack_44;
extern unsigned int lbl_821CC160;


void fn_8229B918(undefined4 *param_1)

{
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar1;
  undefined4 *puVar4;
  longlong lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined1 auStack_40 [40];
  
  uVar2 = lbl_821CC160;
  puVar4 = param_1 + 0xe;
  lVar5 = 2;
  do {
    puVar4[1] = uVar2;
    puVar4 = puVar4 + 2;
    *puVar4 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  param_1[0x2e] = 1;
  param_1[0x2f] = 1;
  fn_82864988(auStack_40,0xffffffff821a7cd8);
  uVar2 = fn_828647D8();
  param_1[0xb] = uVar2;
  fn_82864898(auStack_40);
  fn_82864988(auStack_40,0xffffffff821a7cfc);
  uVar2 = fn_828647D8();
  param_1[0xc] = uVar2;
  fn_82864898(auStack_40);
  fn_82520158(0xffffffff821aade0,auStack_50,0);
  iVar3 = fn_8251F720(auStack_50,0);
  param_1[10] = *(undefined4 *)(iVar3 + 4);
  uVar1 = fn_8266EC60();
  uVar1 = fn_8266EE08(auStack_48,uVar1,iVar3,0,1,0);
  fn_823F2E20(param_1,uVar1);
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  fn_8266F660(*param_1,1);
  fn_8266F658(*param_1,1);
  fn_8266F640(*param_1,1);
  fn_8266F628(*param_1,1);
  fn_82673BC0(*param_1,0xffffffff8229c8a0,param_1);
  fn_82673A28(*param_1,0xffffffff822a13c8,param_1);
  fn_8251FA58(iVar3);
  return;
}

