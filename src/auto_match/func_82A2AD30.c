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
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_82A2A370();
extern int fn_82A2B760();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


undefined8 fn_82A2AD30(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 auStack_70 [2];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  longlong lStack_40;
  longlong lStack_38;
  int iStack_30;
  int iStack_2c;
  
  RtlInitAnsiString(auStack_68,param_1);
  puStack_54 = auStack_68;
  uStack_58 = 0xfffffffd;
  uStack_50 = 0x40;
  iVar3 = NtOpenFile(auStack_70,0x100001,&uStack_58,auStack_60,3,0x800021);
  if (iVar3 < 0) {
    fn_82A2B760();
    iVar3 = thunk_FUN_82a2b798();
    if (iVar3 == 2) {
      fn_82A2A370(3);
    }
  }
  else {
    uVar2 = NtQueryVolumeInformationFile(auStack_70[0],auStack_60,&lStack_40,0x18,3);
    NtClose(auStack_70[0]);
    if (-1 < (int)uVar2) {
      uVar1 = (longlong)iStack_30 * (longlong)iStack_2c & 0xffffffff;
      lStack_38 = lStack_38 * uVar1;
      if (param_2 != (longlong *)0x0) {
        *param_2 = lStack_38;
      }
      if (param_3 != (longlong *)0x0) {
        *param_3 = lStack_40 * uVar1;
      }
      if (param_4 != (longlong *)0x0) {
        *param_4 = lStack_38;
      }
      return 1;
    }
    fn_82A2B760(uVar2);
  }
  return 0;
}

