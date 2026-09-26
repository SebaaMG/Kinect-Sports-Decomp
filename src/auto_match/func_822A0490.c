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
extern int fn_823F2E20();
extern int fn_8266EC60();
extern int fn_8266EE08();
extern int fn_8266F628();
extern int fn_8266F640();
extern int fn_82673A28();
extern int fn_82673BC0();
extern unsigned int iStack_2c;
extern unsigned int lbl_821ABBA4;
extern unsigned int lbl_821CC160;


undefined4 * fn_822A0490(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  *param_1 = &lbl_821ABBA4;
  param_1[1] = 0;
  uVar1 = lbl_821CC160;
  param_1[2] = 0;
  param_1[4] = uVar1;
  param_1[3] = 0;
  param_1[5] = 0;
  puVar3 = param_1 + 1;
  param_1[6] = 0;
  uVar2 = fn_8266EC60();
  uVar2 = fn_8266EE08(auStack_30,uVar2,param_2,0,1,0);
  fn_823F2E20(puVar3,uVar2);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  fn_8266F640(*puVar3,1);
  fn_8266F628(*puVar3,1);
  fn_82673A28(*puVar3,0xffffffff822a0790,param_1);
  fn_82673BC0(*puVar3,0xffffffff82291208,param_1);
  return param_1;
}

