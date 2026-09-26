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
extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_82356F98();
extern int fn_82365BD8();
extern int fn_823F2E20();
extern int fn_82469C10();
extern int fn_82469CD8();
extern int fn_8246E850();
extern int fn_824714C8();
extern int fn_8265C9E0();
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


void fn_8246EB78(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined4 *puVar3;
  undefined8 uVar2;
  int aiStack_50 [2];
  undefined4 auStack_48 [2];
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  iStack_38 = param_1 + 0x400;
  auStack_48[0] = 1;
  uStack_40 = 1;
  aiStack_50[0] = param_1;
  uVar1 = fn_8265C9E0(0x150);
  if ((uVar1 & 0xffffffff) == 0) {
    iStack_34 = 0;
  }
  else {
    iStack_34 = fn_824714C8(uVar1,param_2,&iStack_38,&uStack_40,auStack_48,aiStack_50);
  }
  iStack_38 = iStack_34 + 0x10;
  puVar3 = (undefined4 *)fn_82365BD8(&uStack_40,&iStack_38);
  fn_82469C10(*puVar3,**(undefined4 **)(param_1 + 0x90));
  fn_82469CD8(*puVar3,*(undefined4 *)(*(int *)(param_1 + 0x90) + 0x14));
  uVar2 = fn_82365BD8(auStack_48,puVar3);
  fn_8246E850(param_1,uVar2,param_3,param_4,0,3);
  if (puVar3[1] != 0) {
    fn_822315A0();
  }
  fn_82356F98(&uStack_40);
  fn_823F2E20(&iStack_38,&uStack_40);
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  return;
}

