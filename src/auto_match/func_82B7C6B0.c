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
extern int fn_82AB7FD0();
extern int fn_82B7C438();
extern int fn_82BA02A8();


void fn_82B7C6B0(int param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  uVar2 = fn_82BA02A8(param_4,0xffffffff820db4ec,param_2,param_3);
  puVar3 = (undefined4 *)fn_82B7C438(uVar2,0x20);
  puVar3[1] = (int)param_2;
  *puVar3 = 0;
  puVar3[2] = (int)param_3;
  puVar3[3] = param_5;
  puVar3[4] = 0;
  puVar3[5] = 1;
  puVar3[6] = 2;
  puVar3[7] = 3;
  if (*(char *)(param_4 + 0x564) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  fn_82AB7FD0(uVar1,puVar3);
  (**(code **)(param_4 + 0x59c))(*(undefined4 *)(param_4 + 0x5a4),puVar3);
  return;
}

