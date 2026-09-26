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
extern unsigned int iStack_2c;
extern unsigned int lbl_82192480;


undefined4 * fn_82284118(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = lbl_82192480;
  uVar1 = fn_8266EC60();
  uVar1 = fn_8266EE08(auStack_30,uVar1,param_2,0,param_3,0);
  fn_823F2E20(param_1,uVar1);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  puVar2 = param_1 + -0x82;
  lVar3 = 6;
  do {
    puVar2[0x8b] = 0;
    puVar2[0x8c] = 0;
    puVar2[0x8f] = 0;
    puVar2 = puVar2 + 0x8d;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return param_1;
}

