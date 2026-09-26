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
extern unsigned int *auStack_50;
extern int fn_82822E38();
extern int fn_828233A8();
extern int fn_828299A8();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_5c;


void fn_8282B3B0(int param_1,undefined4 *param_2)

{
  int iStack_70;
  int iStack_6c;
  int aiStack_68 [2];
  undefined4 *puStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_50 [16];
  undefined4 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puStack_60 = param_2;
  fn_828299A8(&puStack_60,param_1,&iStack_70);
  puStack_60 = (undefined4 *)*param_2;
  fn_828299A8(&puStack_60,param_1,&iStack_6c);
  uStack_3c = *(undefined4 *)(iStack_70 + 0xc);
  uStack_38 = *(undefined4 *)(iStack_6c + 0xc);
  uStack_34 = uStack_5c;
  puStack_40 = param_2;
  fn_828233A8(param_1 + 0x344,aiStack_68,0xffffffff8282af88,auStack_50);
  if (aiStack_68[0] != 0) {
    fn_82822E38();
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  }
  return;
}

