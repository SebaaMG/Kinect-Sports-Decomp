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
extern unsigned int *auStack_b0;
extern int fn_827F9E08();
extern int fn_82805590();
extern int fn_828079D8();
extern int fn_82807A48();
extern int fn_82807A50();
extern int fn_82807A58();
extern int fn_82807A68();
extern int fn_82807A70();
extern int fn_82807A78();
extern int fn_82807A88();
extern int fn_82807A90();
extern int fn_82807A98();
extern int fn_82807AA0();
extern int fn_82807AA8();
extern int fn_82807AB0();
extern int fn_82807AB8();
extern int fn_82808638();


void fn_82801F78(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 in_stack_0000005c;
  undefined1 auStack_b0 [176];
  
  fn_828079D8(auStack_b0);
  fn_82807A50(auStack_b0,param_9);
  fn_82807AB0(param_1,auStack_b0);
  fn_82807A70(auStack_b0,param_9);
  fn_82807A58(auStack_b0,0xc);
  fn_82807A68(auStack_b0,1);
  fn_82807AA0(auStack_b0,0xffffffff83156d30);
  fn_82807AA8(auStack_b0,0xc);
  fn_82807A98(auStack_b0,param_8);
  fn_82805590(auStack_b0,in_stack_0000005c);
  fn_82807A48(auStack_b0,*(undefined4 *)(param_2 + 0x9c));
  iVar1 = fn_827F9E08(param_2);
  if (iVar1 == 0) {
    fn_82807A88(auStack_b0,0xffffffff83156cd0);
    uVar2 = 2;
  }
  else {
    if (iVar1 != 1) goto LAB_82802088;
    fn_82807A78(auStack_b0,0xffffffff83156c40);
    fn_82807A88(auStack_b0,0xffffffff83156d00);
    uVar2 = 6;
  }
  fn_82807A90(auStack_b0,uVar2);
LAB_82802088:
  fn_82808638(auStack_b0,param_4,param_5,param_7);
  if ((param_6 & 0xffffffff) != 0) {
    fn_82807AB8(auStack_b0,param_4,param_6,1);
  }
  return;
}

