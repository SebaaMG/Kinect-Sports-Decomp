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
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_82266D28();
extern int fn_823F2E20();
extern int fn_8266EC60();
extern int fn_8266EF20();
extern int fn_8266F628();
extern int fn_8266F640();
extern int fn_8266F658();
extern int fn_8266F660();
extern int fn_82673A28();
extern int fn_82673C58();
extern unsigned int iStack_2c;
extern unsigned int lbl_821CC160;


undefined4 * fn_822A1018(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  *param_1 = 0;
  param_1[1] = 0;
  fn_82266D28(param_1,0);
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  uVar1 = lbl_821CC160;
  param_1[8] = lbl_821CC160;
  param_1[9] = uVar1;
  uVar2 = fn_8266EC60();
  uVar2 = fn_8266EF20(auStack_30,uVar2,param_2,0,0,0x18280143);
  fn_823F2E20(param_1,uVar2);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  fn_8266F658(*param_1,1);
  fn_8266F660(*param_1,1);
  fn_8266F640(*param_1,1);
  fn_8266F628(*param_1,1);
  fn_82673C58(*param_1,0xffffffff822a1100,param_1,0);
  fn_82673A28(*param_1,0xffffffff822a1178,param_1);
  return param_1;
}

