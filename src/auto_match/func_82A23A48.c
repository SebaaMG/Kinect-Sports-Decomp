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
extern int fn_82A1C510();
extern int fn_82A1CFC8();
extern int fn_82A1D008();
extern int fn_82A1D310();
extern int fn_82A22EB8();
extern unsigned int lbl_83219B8C;
extern unsigned int uStack_30;
extern unsigned int uStack_38;


undefined8 fn_82A23A48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 auStack_50 [2];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  
  fn_82A1D008();
  uVar1 = fn_82A1C510();
  fn_82A1D310(uVar1,1,0x8000,0x4b000,0xffffffff8315d2d8);
  RtlInitAnsiString(auStack_48,0xffffffff820892cc);
  uStack_38 = 0xfffffffd;
  puStack_34 = auStack_48;
  uStack_30 = 0x40;
  (**(code **)(lbl_83219B8C + 0xc))(auStack_50,0x100001,&uStack_38,auStack_40,0,0x80,0,2);
  (**(code **)(lbl_83219B8C + 4))(auStack_50[0]);
  fn_82A22EB8(param_1,param_2);
  fn_82A1CFC8();
  return 0;
}

