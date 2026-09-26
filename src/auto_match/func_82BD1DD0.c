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
extern int fn_82B7BD28();
extern int fn_82BD1B18();
extern int fn_82BD1BE8();
extern int fn_82BD1CA0();


void fn_82BD1DD0(int *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar2 = fn_82BD1B18(param_1,param_3,param_4);
  iVar6 = 0;
  if (iVar2 == 0) {
    do {
      iVar2 = fn_82BD1CA0(param_1,param_4);
      uVar1 = *(undefined4 *)(param_1[3] + 0x5b0);
      puVar3 = (undefined4 *)fn_82B7BD28(uVar1,0x28);
      puVar5 = puVar3 + 1;
      *puVar3 = uVar1;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar3[3] = 0;
        puVar3[7] = 0;
        puVar3[2] = 0x40000000;
        puVar3[8] = 0;
      }
      *puVar5 = (int)param_3;
      puVar5[5] = 0;
      puVar5[4] = *(undefined4 *)(iVar2 + 0x14);
      puVar5[8] = 0;
      *(undefined4 **)(iVar2 + 0x14) = puVar5;
      if (iVar6 != 0) {
        *(int *)(iVar6 + 0x20) = iVar2;
      }
      iVar6 = *(int *)(*param_1 + 0x20);
      *param_1 = iVar6;
      if (iVar6 == 0) {
        if (param_1[1] <= param_1[2]) {
          *param_1 = param_2;
          param_1[1] = param_1[1] + 1;
        }
      }
      fn_82BD1BE8(param_1,param_4);
      iVar4 = fn_82BD1B18(param_1,param_3,param_4);
      iVar6 = iVar2;
    } while (iVar4 == 0);
    *(int *)(iVar2 + 0x20) = *param_1;
  }
  return;
}

