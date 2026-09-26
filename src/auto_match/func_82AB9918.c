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
extern int fn_82AB15D0();
extern int fn_82AB68E0();
extern int fn_82AB9358();
extern int fn_82B6B128();
extern int fn_82F68CC0();


undefined4 * fn_82AB9918(undefined4 *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined4 *puVar2;
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d74d0,0xffffffff820d74e0,0x71);
  }
  puVar2 = (undefined4 *)fn_82B6B128(*param_1);
  if (puVar2 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7594,0xffffffff820d74e0,0x79);
  }
  else {
    *puVar2 = param_1[4];
    param_1[4] = param_1[4] + 1;
    puVar2[4] = 1;
    puVar2[2] = (int)((param_3 & 0xffffffff) >> 2);
    uVar1 = (*(code *)param_1[2])(param_1[1],param_3);
    puVar2[1] = (int)uVar1;
    if ((uVar1 & 0xffffffff) == 0) {
      uVar5 = 0x8a;
      uVar4 = 0xffffffff820d7580;
    }
    else {
      fn_82F68CC0(uVar1,param_2,param_3);
      iVar3 = fn_82AB68E0(param_1[1],param_1[2],param_1[3],3);
      puVar2[3] = iVar3;
      if (iVar3 != 0) {
        return puVar2;
      }
      uVar5 = 0x9b;
      uVar4 = 0xffffffff820d756c;
    }
    fn_82AB15D0(0,0xffffffff820d2ea4,uVar4,0xffffffff820d74e0,uVar5);
    fn_82AB9358(param_1,puVar2);
  }
  return (undefined4 *)0x0;
}

