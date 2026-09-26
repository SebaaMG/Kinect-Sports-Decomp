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
extern unsigned int *auStack_50;
extern int fn_82C07228();
extern int fn_82C07C18();
extern int fn_82C10F40();
extern int fn_82C11AD0();


/* WARNING: Type propagation algorithm not settling */

undefined8
fn_82C09238(int param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4,ulonglong param_5,
             undefined4 *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_50 [4];
  int aiStack_4c [19];
  
  aiStack_4c[1] = 0;
  auStack_50[0] = 0;
  aiStack_4c[0] = 0;
  if (((((param_1 != 0) && ((param_2 & 0xffffffff) != 0)) && ((param_4 & 0xffffffff) != 0)) &&
      ((param_6 != (undefined4 *)0x0 && ((param_5 & 0xffffffff) != 0)))) &&
     (*param_6 = 1, *(int *)(param_1 + 0x210) != 0)) {
    if (*(int *)(param_1 + 0x218) == 0) {
      uVar1 = fn_82C07C18(0xffffffff805000a8);
      return uVar1;
    }
    iVar2 = fn_82C11AD0(*(int *)(param_1 + 0x218),auStack_50);
    if ((-1 < iVar2) &&
       (iVar2 = fn_82C10F40(*(undefined4 *)(*(int *)(param_1 + 4) + 0x7c),auStack_50[0],aiStack_4c)
       , -1 < iVar2)) {
      if (*(int *)(aiStack_4c[0] + 4) != 2) {
        return 4;
      }
      fn_82C07228(param_1,param_2,param_3,param_4,aiStack_4c + 1,param_5,param_6,param_7);
    }
    uVar1 = fn_82C07C18();
    return uVar1;
  }
  return 4;
}

