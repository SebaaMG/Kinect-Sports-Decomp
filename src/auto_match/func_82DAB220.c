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
extern unsigned int fStack_40;
extern int fn_82DAD288();
extern int fn_82DAEFD0();
extern unsigned int iStack_44;
extern unsigned int iStack_50;
extern unsigned int iStack_58;
extern unsigned int uStack_48;
extern unsigned int uStack_54;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


int fn_82DAB220(double param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined8 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int iVar1;
  int iVar2;
  undefined4 *in_stack_00000054;
  int in_stack_0000005c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  int iStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  float fStack_40;
  
  fStack_40 = (float)param_1;
  uStack_68 = 0;
  *(undefined1 *)(in_stack_0000005c + 0xc) = 0;
  *(undefined1 *)(in_stack_0000005c + 0xe) = 0;
  *(undefined1 *)(in_stack_0000005c + 0xd) = 0;
  *(undefined1 *)(in_stack_0000005c + 0xf) = 1;
  uStack_54 = *in_stack_00000054;
  iStack_58 = in_stack_0000005c;
  iStack_50 = 0;
  iVar1 = param_2[5];
  iVar2 = param_2[4];
  uStack_70 = param_3;
  uStack_6c = param_4;
  uStack_60 = param_8;
  uStack_5c = param_9;
  piStack_4c = param_2;
  uStack_48 = param_5;
  iStack_44 = param_6;
  fn_82DAEFD0(param_2[3],&uStack_70);
  if (*(short *)(iVar2 + 0x204) != 0) {
    fn_82DAD288(iVar2,&uStack_70);
  }
  if (*(short *)(iVar1 + 0x204) != 0) {
    fn_82DAD288(iVar1,&uStack_70);
  }
  if (iStack_50 == 1) {
    (**(code **)(*param_2 + 0x20))(param_2,*(undefined4 *)(param_6 + 4),in_stack_0000005c);
  }
  else {
    *in_stack_00000054 = uStack_54;
  }
  return iStack_50;
}

