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
extern unsigned int *auStack_110;
extern unsigned int *auStack_90;
extern int fn_82358FD8();
extern int fn_82528EE0();
extern float lbl_82192488;


undefined8 fn_823ABD00(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_110 [128];
  undefined1 auStack_90 [128];
  
  fn_82358FD8(param_2,auStack_90,0x40,0xffffffff821b5960);
  uVar4 = 0xffffffffU - ((int)*(float *)(param_1 + 0x8c) >> 0x1f) & (int)*(float *)(param_1 + 0x8c);
  if (0x62 < (int)uVar4) {
    uVar4 = 99;
  }
  uVar3 = (uint)((*(float *)(param_1 + 0x8c) - (float)(longlong)(int)*(float *)(param_1 + 0x8c)) *
                lbl_82192488);
  uVar3 = 0xffffffffU - ((int)uVar3 >> 0x1f) & uVar3;
  if (0x62 < (int)uVar3) {
    uVar3 = 99;
  }
  uVar2 = 0xffffffff821b597c;
  if (9 < (int)uVar3) {
    uVar2 = 0xffffffff82196582;
  }
  uVar1 = 0xffffffff82196582;
  if ((int)uVar4 < 10) {
    uVar1 = 0xffffffff821b597c;
  }
  fn_82528EE0(auStack_110,0x40,0xffffffff821b5980,uVar1,uVar4,uVar3,uVar2);
  fn_82528EE0(0xffffffff832991b8,0x40,auStack_90,auStack_110);
  return 0xffffffff832991b8;
}

