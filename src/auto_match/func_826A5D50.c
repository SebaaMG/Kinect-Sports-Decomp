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
extern unsigned int *auStack_80;
extern int fn_826A19C0();
extern int fn_826A29C0();
extern int fn_826A2A40();
extern int fn_826A54F0();
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


undefined4 *
fn_826A5D50(undefined4 *param_1,undefined8 param_2,undefined4 param_3,int *param_4,
             undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  undefined1 auStack_80 [128];
  
  *param_1 = (int)param_2;
  param_1[1] = param_3;
  param_1[2] = (int)param_5;
  param_1[3] = (int)param_6;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  fn_826A54F0(param_1 + 4,param_4[1]);
  uVar5 = 0;
  if (param_1[5] != 0) {
    lVar3 = 0;
    iVar4 = 0;
    do {
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uVar1 = param_1[4];
      uVar2 = fn_826A29C0(auStack_80,param_2,*(undefined4 *)(*param_4 + iVar4),&uStack_90,param_5,
                            param_6);
      fn_826A19C0((ulonglong)uVar1 + lVar3,uVar2);
      fn_826A2A40(auStack_80);
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
      lVar3 = lVar3 + 0x1c;
    } while (uVar5 < (uint)param_1[5]);
  }
  return param_1;
}

