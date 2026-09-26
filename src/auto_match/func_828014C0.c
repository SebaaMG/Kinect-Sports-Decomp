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
extern unsigned int *auStack_70;
extern int fn_827F9E08();
extern int fn_82802488();
extern int fn_828029E8();
extern int fn_82802A20();
extern int fn_82802A28();
extern int fn_82802A30();
extern int fn_82802A38();
extern int fn_82802A40();
extern int fn_82802A48();
extern int fn_82802A50();
extern int fn_82802A58();
extern int fn_82802A68();
extern int fn_82802A70();


void fn_828014C0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 in_stack_0000005c;
  undefined1 auStack_70 [112];
  
  fn_828029E8(auStack_70);
  fn_82802A58(auStack_70,param_9);
  fn_82802A50(param_1,auStack_70);
  fn_82802A30(auStack_70,0xffffffff83156c10);
  fn_82802A68(auStack_70,in_stack_0000005c);
  fn_82802A38(auStack_70,param_8);
  fn_82802A20(auStack_70,1);
  fn_82802A40(auStack_70,0xc);
  fn_82802A28(auStack_70,*(undefined4 *)(param_2 + 0x9c));
  iVar1 = fn_827F9E08(param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (iVar1 != 1) goto LAB_82801584;
    uVar2 = 1;
  }
  fn_82802A48(auStack_70,uVar2);
LAB_82801584:
  fn_82802A70(auStack_70,param_4,param_5,param_7);
  if ((param_6 & 0xffffffff) != 0) {
    fn_82802488(auStack_70,param_4,param_6,1);
  }
  return;
}

