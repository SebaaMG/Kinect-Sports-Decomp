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
extern unsigned int *auStack_38;
extern int fn_822315A0();
extern int fn_82356F98();
extern int fn_82365BD8();
extern int fn_823F2E20();
extern int fn_82469C10();
extern int fn_82469CD8();
extern int fn_8246E850();
extern int fn_824713F8();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int stack0x00000024;
extern unsigned int stack0x0000002c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_40;


void fn_8246EC90(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  undefined4 uStack_40;
  int iStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  fn_824713F8(&uStack_40,param_2,&stack0x00000024,&stack0x0000002c);
  fn_82469C10(uStack_40,**(undefined4 **)(param_1 + 0x90));
  fn_82469CD8(uStack_40,*(undefined4 *)(*(int *)(param_1 + 0x90) + 0x14));
  uVar1 = fn_82365BD8(auStack_38,&uStack_40);
  fn_8246E850(param_1,uVar1,param_5,param_6,0,3);
  fn_82356F98(auStack_38);
  fn_823F2E20(&uStack_40,auStack_38);
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  return;
}

