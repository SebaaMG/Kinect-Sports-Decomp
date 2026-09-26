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
extern unsigned int *auStack_44;
extern unsigned int *auStack_50;
extern unsigned int *auStack_5c;
extern unsigned int *auStack_60;
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_828A2058();
extern int fn_828A7F70();
extern int fn_828E2F58();
extern int fn_828E35B8();
extern int fn_828E3D60();
extern int fn_828E4F28();
extern int fn_82BA02A8();
extern unsigned int uStack_34;


undefined4 * fn_828A0428(undefined4 *param_1,undefined8 param_2)

{
  bool bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [4];
  undefined4 auStack_5c [3];
  undefined4 auStack_50 [3];
  undefined1 auStack_44 [4];
  undefined4 *puStack_40;
  undefined1 uStack_34;
  
  auStack_5c[0] = 0;
  uVar2 = fn_8265C9E0(0x10);
  bVar1 = (uVar2 & 0xffffffff) == 0;
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    fn_828A2058(auStack_50,auStack_60);
    fn_828E2F58(auStack_44,auStack_60,auStack_60);
    uStack_34 = auStack_60[0];
    uVar3 = fn_828A7F70(uVar2,auStack_50,param_2);
  }
  *param_1 = (int)uVar3;
  fn_828E35B8(param_1 + 1,uVar3);
  fn_82BA02A8(param_1,uVar3,uVar3);
  if (!bVar1) {
    fn_828E4F28(auStack_5c,auStack_44,*puStack_40);
    fn_8265CA20(puStack_40);
    fn_828E3D60(auStack_50);
    fn_8265CA20(auStack_50[0]);
  }
  param_1[2] = **(undefined4 **)*param_1;
  RtlInitializeCriticalSection(param_1 + 3);
  return param_1;
}

