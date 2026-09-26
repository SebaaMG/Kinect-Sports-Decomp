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
extern int fn_82DAD000();
extern int fn_82DAE118();
extern unsigned int iStack_28;
extern unsigned int iStack_30;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int iStack_4c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_32;
extern unsigned int uStack_33;
extern unsigned int uStack_34;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


void fn_82DAB7E8(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iStack_4c = *(int *)(param_2 + 0xc);
  uStack_48 = *(undefined4 *)(param_2 + 0x10);
  iStack_3c = param_2 + 0x50;
  iStack_30 = param_2 + 4;
  iStack_38 = param_2 + 0x18;
  uStack_32 = 0;
  iStack_28 = param_2 + 0x2c;
  uStack_34 = 0;
  uStack_40 = 0;
  uStack_50 = 2;
  uStack_33 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_44 = param_1;
  uStack_2c = param_3;
  fn_82DAE118(*(undefined4 *)(iStack_4c + 8),&uStack_50);
  uStack_50 = 0;
  if (*(short *)(*(int *)(param_2 + 0xc) + 0x204) != 0) {
    fn_82DAD000(*(int *)(param_2 + 0xc),&uStack_50);
  }
  uStack_50 = 1;
  if (*(short *)(*(int *)(param_2 + 0x10) + 0x204) != 0) {
    fn_82DAD000(*(int *)(param_2 + 0x10),&uStack_50);
  }
  return;
}

