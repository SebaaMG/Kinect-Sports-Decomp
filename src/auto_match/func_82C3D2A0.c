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
extern int fn_82C3CD98();
extern int fn_82C4D608();


undefined8
fn_82C3D2A0(int param_1,longlong param_2,uint param_3,undefined4 *param_4,undefined4 *param_5,
             undefined8 *param_6,undefined4 *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((param_3 < *(uint *)(iVar1 + 0x6c)) || (uVar2 = *(uint *)(iVar1 + 0x24), (uVar2 & 1) != 0)) {
    uVar5 = 0xffffffff80500006;
  }
  else {
    uVar3 = *(uint *)(iVar1 + 0x20);
    uVar4 = uVar3 >> 1;
    iVar6 = fn_82C4D608(*(undefined4 *)(iVar1 + 0x44),1,param_2,
                              (longlong)(int)uVar2 * (longlong)(int)uVar3 + param_2,
                              (((longlong)(int)uVar2 * (longlong)(int)uVar4 & 0xffffffffU) >> 1) +
                              (longlong)(int)uVar2 * (longlong)(int)uVar3 + param_2,uVar3,uVar4,
                              uVar4);
    if (iVar6 == 0) {
      *param_4 = *(undefined4 *)(iVar1 + 0x6c);
      *param_5 = 0;
    }
    else if (iVar6 == 2) {
      *param_4 = 0;
      *param_5 = 0;
    }
    *param_6 = *(undefined8 *)(iVar1 + 0x48);
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = 1;
    }
    uVar5 = fn_82C3CD98();
  }
  return uVar5;
}

