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
extern int fn_82230360();
extern int fn_82A1E0C0();
extern int fn_82A1E2C0();
extern int fn_82A1E508();
extern int fn_82A1E5B8();
extern int fn_82A1E6A0();
extern int fn_82E1D550();
extern int fn_82E1DE08();
extern int fn_82E1DE88();
extern int fn_82E1DF00();


void fn_82E22608(int param_1)

{
  char cVar1;
  int iVar3;
  char *pcVar4;
  undefined2 uVar7;
  undefined1 uVar8;
  undefined4 uVar5;
  undefined8 uVar2;
  undefined4 uVar6;
  char *pcVar9;
  
  iVar3 = fn_82E1D550();
  uVar6 = *(undefined4 *)(iVar3 + 8);
  pcVar4 = (char *)fn_82E1DE08(uVar6,0xffffffff8214b90c,0xffffffff821a6774);
  pcVar9 = pcVar4;
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  fn_82230360(param_1,pcVar4,pcVar9 + (-1 - (int)pcVar4));
  pcVar4 = (char *)fn_82E1DE08(uVar6,0xffffffff8214b89c,0xffffffff82196582);
  pcVar9 = pcVar4;
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  fn_82230360(param_1 + 0x1c,pcVar4,pcVar9 + (-1 - (int)pcVar4));
  pcVar4 = (char *)fn_82E1DE08(uVar6,0xffffffff8214befc,0xffffffff82196582);
  pcVar9 = pcVar4;
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  fn_82230360(param_1 + 0x38,pcVar4,pcVar9 + (-1 - (int)pcVar4));
  uVar7 = fn_82E1DE88(uVar6,0xffffffff8214b878,0x50);
  *(undefined2 *)(param_1 + 0x54) = uVar7;
  uVar8 = fn_82E1DF00(uVar6,0xffffffff8214b964,0);
  *(undefined1 *)(param_1 + 0x56) = uVar8;
  uVar8 = fn_82E1DF00(uVar6,0xffffffff8214b894,0);
  *(undefined1 *)(param_1 + 0x57) = uVar8;
  uVar5 = fn_82E1DE88(uVar6,0xffffffff8214b8f0,0);
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  uVar2 = fn_82E1DE88(uVar6,0xffffffff8214b8bc,0xffffffffffffffff);
  RtlInitializeCriticalSection(param_1 + 0x6c);
  uVar6 = fn_82A1E6A0(0,1,1,0);
  *(undefined4 *)(param_1 + 100) = uVar6;
  uVar6 = fn_82A1E6A0(0,1,0,0);
  *(undefined4 *)(param_1 + 0x68) = uVar6;
  uVar6 = fn_82A1E0C0(0,0,0xffffffff82e22570,param_1,4,0);
  *(undefined4 *)(param_1 + 0x60) = uVar6;
  if (5 < (int)uVar2) {
    uVar2 = 0xffffffffffffffff;
  }
  if ((int)uVar2 < 0) {
    uVar2 = fn_82A1E5B8();
  }
  fn_82A1E508(*(undefined4 *)(param_1 + 0x60),uVar2);
  fn_82A1E2C0(*(undefined4 *)(param_1 + 0x60));
  return;
}

