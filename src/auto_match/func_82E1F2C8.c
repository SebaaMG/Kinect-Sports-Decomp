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
extern int fn_8265C9E0();
extern int fn_8265CA60();
extern int fn_8289DB78();
extern int fn_82A1E6A0();
extern int fn_82E1D550();
extern int fn_82E1DE08();
extern int fn_82E1DE88();
extern int fn_82E1DF00();
extern int fn_82E1EB30();
extern int fn_82E1F010();
extern int fn_82E1F690();
extern int fn_82E200A0();
extern int fn_82E20350();
extern int fn_82E20660();
extern int fn_82E20690();
extern int fn_82E206E0();
extern int fn_82E20C70();
extern int fn_82E20E58();
extern int fn_82E21028();


void fn_82E1F2C8(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar4;
  char cVar8;
  char *pcVar5;
  undefined4 uVar6;
  undefined1 uVar9;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar7;
  char *pcVar10;
  
  if (*(char *)(param_1 + 2) == '\0') {
    iVar4 = fn_82E1D550();
    uVar1 = *(undefined4 *)(iVar4 + 8);
    cVar8 = fn_82E1DF00(uVar1,0xffffffff8214b914,1);
    *(char *)((int)param_1 + 9) = cVar8;
    if (cVar8 != '\0') {
      pcVar5 = (char *)fn_82E1DE08(uVar1,0xffffffff8214b91c,0xffffffff82196582);
      pcVar10 = pcVar5;
      do {
        cVar8 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar8 != '\0');
      if ((int)pcVar10 - (int)pcVar5 != 1) {
        fn_82E200A0();
      }
      uVar6 = fn_82A1E6A0(0,1,1,0);
      param_1[0xf] = uVar6;
      iVar4 = fn_8265C9E0(0x1c);
      if (iVar4 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = fn_82E20660();
      }
      param_1[0x15] = uVar6;
      uVar9 = fn_82E1DF00(uVar1,0xffffffff8214b97c,0);
      if ((undefined1 *)param_1[0x15] != (undefined1 *)0x0) {
        *(undefined1 *)param_1[0x15] = uVar9;
      }
      uVar9 = fn_82E1DF00(uVar1,0xffffffff8214b958,0);
      if (param_1[0x15] != 0) {
        *(undefined1 *)(param_1[0x15] + 1) = uVar9;
      }
      uVar9 = fn_82E1DF00(uVar1,0xffffffff8214b904,0);
      if (param_1[0x15] != 0) {
        *(undefined1 *)(param_1[0x15] + 2) = uVar9;
      }
      uVar9 = fn_82E1DF00(uVar1,0xffffffff8214b8e4,0);
      *(undefined1 *)((int)param_1 + 0xd) = uVar9;
      uVar9 = fn_82E1DF00(uVar1,0xffffffff8214b8f8,1);
      *(undefined1 *)((int)param_1 + 0xe) = uVar9;
      RtlInitializeCriticalSection(param_1 + 8);
      cVar8 = fn_82E1DF00(uVar1,0xffffffff8214b86c,0);
      *(char *)((int)param_1 + 0xf) = cVar8;
      if (cVar8 != '\0') {
        uVar2 = fn_82E1DE88(uVar1,0xffffffff8214b85c,0xffffffffffffffff);
        fn_82E1EB30(param_1,uVar2);
      }
      uVar3 = fn_8265C9E0(0x14);
      if ((uVar3 & 0xffffffff) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = fn_82E21028(uVar3,500,*(undefined1 *)((int)param_1 + 0xd));
      }
      param_1[0x12] = uVar6;
      uVar2 = fn_82E1DE08(uVar1,0xffffffff8214b928,0xffffffff821a676c);
      fn_8289DB78(param_1[0x15],uVar2);
      if (*(char *)(param_1[0x15] + 2) == '\0') {
        uVar2 = fn_82E20350();
      }
      else {
        uVar2 = fn_82E1F690(0xffffffff821a6774);
      }
      fn_82E206E0(param_1[0x15],uVar2);
      fn_82E1DE08(uVar1,0xffffffff82197420,0xffffffff821a6774);
      uVar6 = fn_82E1F690();
      param_1[1] = uVar6;
      cVar8 = fn_82E1DF00(uVar1,0xffffffff8214b934,0);
      *(char *)(param_1 + 3) = cVar8;
      if (cVar8 == '\0') {
        param_1[0x13] = 0;
      }
      else {
        uVar7 = fn_82E1DE88(uVar1,0xffffffff8214b988,20000);
        param_1[0x10] = uVar7;
        if (uVar7 < 0x400) {
          param_1[0x10] = 0x400;
        }
        uVar6 = fn_8265CA60(param_1[0x10]);
        param_1[0x13] = uVar6;
      }
      cVar8 = fn_82E1DF00(uVar1,0xffffffff8214b994,0);
      *(char *)((int)param_1 + 0xb) = cVar8;
      if (cVar8 != '\0') {
        fn_82E20690(param_1[0x15]);
      }
      fn_82E20C70(param_1[0x15]);
      cVar8 = fn_82E1DF00(uVar1,0xffffffff8214b8ac,1);
      if (cVar8 != '\0') {
        fn_82E20E58(param_1[0x15]);
      }
      *param_1 = 0;
      fn_82E1F010(param_1);
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}

