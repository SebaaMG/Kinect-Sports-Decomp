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
#define _uStack00000028 ((*(U64*)&uStack00000028))
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern int fn_82FF5400();
extern int fn_82FF59A8();
extern unsigned int lbl_82005328;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_8216CBF0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642F4;
extern unsigned int uStack00000028;
extern unsigned int uStack0000002c;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_5c;


void fn_82FF0478(int *param_1,char param_2,undefined8 param_3,undefined8 param_4,ulonglong param_5
                  )

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  int *piStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  
  _uStack00000028 = param_4;
  RtlEnterCriticalSection(0xffffffff83264558);
  if (param_2 == '\0') {
    iVar3 = param_1[0x17];
  }
  else {
    iVar3 = param_1[0x16];
  }
  if (iVar3 == 0) {
    if (param_2 == '\0') {
      bVar4 = *(byte *)((int)param_1 + 0xd7);
    }
    else {
      bVar4 = *(byte *)((int)param_1 + 0xd6);
    }
    uStack_5c = (undefined4)param_3;
    piVar5 = param_1 + 3;
    param_5 = param_5 & 0xff;
    fStack_58 = (float)bVar4 * lbl_8216CBF0 * lbl_82005328 - lbl_8216CBF0;
    fStack_54 = lbl_821AAD20;
    if (param_5 != 0) {
      fStack_54 = lbl_8216C698;
    }
    uVar2 = uStack00000028;
    uStack_48 = 1;
    uStack_4c = uStack0000002c;
    uStack_50 = uStack00000028;
    piStack_60 = piVar5;
    iVar3 = fn_82FF59A8(lbl_832642F4,&piStack_60,1,0);
    if (param_2 == '\0') {
      param_1[0x17] = iVar3;
      bVar4 = (byte)(param_5 << 6) & 0x40 | *(byte *)(param_1 + 0x18) & 0xbf;
    }
    else {
      param_1[0x16] = iVar3;
      bVar4 = (byte)(param_5 << 7) | *(byte *)(param_1 + 0x18) & 0x7f;
    }
    *(byte *)(param_1 + 0x18) = bVar4;
    (**(code **)(*param_1 + 0x38))(param_1,0xe,uVar2);
    if (iVar3 == 0) {
      (**(code **)*piVar5)((double)fStack_54,piVar5,uStack_5c);
      RtlLeaveCriticalSection(0xffffffff83264558);
      return;
    }
  }
  else {
    fVar1 = lbl_821AAD20;
    if ((param_5 & 0xff) != 0) {
      fVar1 = lbl_8216C698;
    }
    fn_82FF5400((double)fVar1,lbl_832642F4,iVar3,param_3);
  }
  RtlLeaveCriticalSection(0xffffffff83264558);
  return;
}

