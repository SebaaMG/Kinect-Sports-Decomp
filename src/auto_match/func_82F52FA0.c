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
extern int fn_82230110();
extern int fn_82230300();
extern int fn_824A2FC0();


undefined8 fn_82F52FA0(int param_1,int param_2)

{
  undefined8 uVar1;
  int aiStack_50 [4];
  undefined1 auStack_40 [40];
  
  uVar1 = fn_82230110(auStack_40);
  fn_824A2FC0(aiStack_50,param_1 + 8,uVar1);
  fn_82230300(auStack_40,1,0);
  if ((aiStack_50[0] != *(int *)(param_1 + 0xc)) &&
     (*(int *)(aiStack_50[0] + 0x2c) == *(int *)(param_2 + 0x40))) {
    uVar1 = (**(code **)(aiStack_50[0] + 0x28))(param_2);
    return uVar1;
  }
  return 0;
}

