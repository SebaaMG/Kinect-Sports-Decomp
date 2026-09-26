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
extern unsigned int fStack_60;
extern int fn_82DAC508();
extern int fn_82DAD288();
extern int fn_82DAEFD0();
extern unsigned int iStack_64;
extern unsigned int iStack_70;
extern unsigned int uStack_68;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


int fn_82DAB970(double param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined8 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  uint uVar1;
  uint uVar2;
  undefined4 *in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int *piStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  float fStack_60;
  
  uVar1 = fn_82DAC508();
  fStack_60 = (float)param_1;
  uStack_88 = 0;
  iStack_70 = 0;
  uStack_74 = *in_stack_00000054;
  uStack_78 = in_stack_0000005c;
  uVar2 = param_2[0x17] ^ param_2[0x16] ^ uVar1;
  uStack_90 = param_3;
  uStack_8c = param_4;
  uStack_80 = param_8;
  uStack_7c = param_9;
  piStack_6c = param_2;
  uStack_68 = param_5;
  iStack_64 = param_6;
  fn_82DAEFD0(param_2[3],&uStack_90);
  if (*(short *)(uVar1 + 0x204) != 0) {
    fn_82DAD288(uVar1,&uStack_90);
  }
  if (*(short *)(uVar2 + 0x204) != 0) {
    fn_82DAD288(uVar2,&uStack_90);
  }
  if (iStack_70 == 1) {
    (**(code **)(*param_2 + 0x20))(param_2,*(undefined4 *)(param_6 + 4),in_stack_0000005c);
  }
  else {
    *in_stack_00000054 = uStack_74;
  }
  return iStack_70;
}

