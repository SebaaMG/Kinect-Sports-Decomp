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
extern unsigned int *auStack_40;
extern int fn_82CFA0B8();


undefined8
fn_82CFA1A8(int *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6)

{
  bool bVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_40 [64];
  
  if (((int)param_3 == -1) && (param_1[6] != 0)) {
    param_3 = (ulonglong)*(uint *)(param_1[6] * 4 + param_1[5] + -4);
  }
  pcVar2 = (char *)(**(code **)(*param_1 + 0x14))(auStack_40,param_1,param_3);
  if (*pcVar2 == '\0') {
    return 0;
  }
  uVar4 = 0;
  uVar3 = 0xffffffff82196582;
  iVar5 = (int)param_2;
  if ((param_2 & 0xffffffff) < 4) {
    bVar1 = iVar5 != 0;
    if (param_2 == 1 && bVar1) {
      uVar3 = 0xffffffff82133a70;
    }
    else {
      if (param_2 == 2 && bVar1) {
        uVar3 = 0xffffffff82133a68;
      }
      else {
        if (!bVar1) {
          uVar3 = 0xffffffff82133a78;
          goto LAB_82cfa280;
        }
        uVar3 = 0xffffffff8200de44;
      }
      uVar4 = 1;
    }
  }
LAB_82cfa280:
  fn_82CFA0B8(param_1,uVar3,param_3,param_4,param_5,param_6,uVar4);
  if ((iVar5 == 2) || (uVar3 = 0, iVar5 == 3)) {
    uVar3 = 1;
  }
  return uVar3;
}

