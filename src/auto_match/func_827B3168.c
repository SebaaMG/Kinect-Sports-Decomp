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
extern int fn_827B0A40();
extern int fn_827B19D8();
extern int fn_827B1A38();
extern int fn_827B1A90();
extern int fn_827B1B10();


void fn_827B3168(int param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  char acStack_50 [80];
  
  acStack_50[0] = *param_2;
  while( true ) {
    if (acStack_50[0] == '\0') break;
    fn_827B19D8(*(undefined4 *)(param_1 + 8),acStack_50);
    param_2 = param_2 + 1;
    acStack_50[0] = *param_2;
  }
  iVar1 = param_1 + 8;
  acStack_50[0] = '\0';
  fn_827B19D8(*(undefined4 *)(param_1 + 8),acStack_50);
  *(undefined4 *)(param_1 + 0x6c) = **(undefined4 **)(param_1 + 8);
  fn_827B1A38(iVar1,param_3);
  fn_827B1A38(iVar1,param_4);
  fn_827B1B10(iVar1,param_5);
  fn_827B1B10(iVar1,param_6);
  fn_827B1B10(iVar1,param_7);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = **(undefined4 **)(param_1 + 8);
  fn_827B1A90(iVar1,0);
  fn_827B1A90(iVar1,0);
  fn_827B0A40(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}

