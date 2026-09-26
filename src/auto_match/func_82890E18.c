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
extern unsigned int *auStack_4c;
extern int fn_8288D478();
extern int fn_8288E0C8();
extern int fn_8288FBF0();
extern unsigned int iStack_20;
extern unsigned int iStack_30;
extern unsigned int iStack_40;
extern unsigned int stack0x00000026;
extern unsigned int uStack00000026;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


void fn_82890E18(longlong param_1,uint param_2,undefined2 param_3)

{
  int iVar1;
  int *piVar2;
  undefined2 uStack00000026;
  uint uStack_50;
  undefined1 auStack_4c [4];
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int *apiStack_28 [2];
  int iStack_20;
  
  uStack_50 = param_2 & 0xffff;
  uStack00000026 = param_3;
  piVar2 = (int *)fn_8288E0C8(auStack_4c,param_1 + 0x7c,&uStack_50);
  iVar1 = *piVar2;
  uStack_44 = 0;
  uStack_34 = 0;
  iStack_30 = *(int *)(iVar1 + 0x1c);
  uStack_48 = *(undefined4 *)(iVar1 + 0x10);
  iStack_40 = iStack_30 + *(int *)(iVar1 + 0x20);
  uStack_38 = uStack_48;
  fn_8288D478(apiStack_28,&uStack_38,&uStack_48,&stack0x00000026);
  if (iStack_20 != *(int *)(iVar1 + 0x1c) + *(int *)(iVar1 + 0x20)) {
    uStack_48 = 0;
    uStack_44 = 0;
    if ((apiStack_28[0] != (int *)0x0) && ((undefined4 *)*apiStack_28[0] != (undefined4 *)0x0)) {
      uStack_48 = *(undefined4 *)*apiStack_28[0];
    }
    iStack_40 = iStack_20;
    fn_8288FBF0(apiStack_28,(undefined4 *)(iVar1 + 0x10),&uStack_48);
  }
  return;
}

