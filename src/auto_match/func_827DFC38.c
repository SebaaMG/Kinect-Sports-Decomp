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
extern int fn_827D96A0();
extern int fn_827E0250();
extern int fn_827E0438();
extern int fn_827E0658();
extern int fn_827E1220();
extern int fn_827E2598();
extern int fn_827E8720();
extern unsigned int iStack_38;
extern unsigned int uStack_34;


void fn_827DFC38(int param_1,ulonglong param_2)

{
  int iVar2;
  undefined8 uVar1;
  int aiStack_40 [2];
  int iStack_38;
  undefined4 uStack_34;
  
  fn_827E2598(param_2);
  iVar2 = fn_827D96A0();
  aiStack_40[0] = iVar2;
  fn_827E0658(&iStack_38,param_1,aiStack_40);
  if ((iStack_38 != *(int *)(param_1 + 4)) &&
     ((ulonglong)*(uint *)(iStack_38 + 0xc) == (param_2 & 0xffffffff))) {
    uVar1 = fn_827E0250(param_1,iStack_38 + 8);
    fn_827E0438(param_1,iStack_38,uVar1);
    fn_827E8720(&iStack_38,param_1 + 4,iStack_38);
    uStack_34 = (undefined4)param_2;
    iStack_38 = iVar2;
    fn_827E1220(aiStack_40,param_1 + 0x78,&iStack_38);
  }
  return;
}

