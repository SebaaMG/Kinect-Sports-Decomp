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
extern int fn_82631F00();
extern int fn_82636580();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


ulonglong fn_826362C0(int param_1,longlong param_2,ulonglong param_3,undefined4 *param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x4dbc);
  if (-1 < (int)*(uint *)(param_1 + 0x4dbc)) {
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uVar3 = fn_82636580(param_1,&uStack_60);
    *(int *)(param_1 + 0x4dbc) = (int)uVar3;
    if (-1 < (int)uVar3) {
      uVar3 = (ulonglong)uStack_40;
      uVar2 = (ulonglong)uStack_54;
      if ((param_3 & 0xffffffff) < (uVar3 + uVar2 & 0xffffffff)) {
        uVar3 = 0xffffffff8007000e;
      }
      else {
        fn_82631F00(&uStack_60,param_2,uVar3,uVar3 + param_2);
        iVar1 = fn_82636580(param_1,&uStack_60);
        *(int *)(param_1 + 0x4dbc) = iVar1;
        if ((-1 < iVar1) && (param_4 != (undefined4 *)0x0)) {
          *param_4 = (int)(uVar3 + uVar2);
        }
        uVar3 = (ulonglong)*(uint *)(param_1 + 0x4dbc);
      }
    }
  }
  return uVar3;
}

