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
extern int fn_82A43C30();
extern int fn_82A43C88();
extern int fn_82A44488();
extern int fn_82A50210();


longlong fn_82A44B50(int param_1,undefined8 param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  (**(code **)(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 8))(*(int *)(param_1 + 0x34) + 0x2c);
  lVar5 = 0;
  if ((*(int *)(param_1 + 8) != 0) || ((param_3 & 0xffffffff) != 0)) {
    if ((param_3 & 0xffffffff) == 0) {
      uVar4 = 0x1337f001;
    }
    else {
      iVar3 = fn_82A43C30(param_1,param_3);
      uVar4 = param_3;
      if (iVar3 < 0) goto LAB_82a44c80;
    }
    lVar5 = (**(code **)**(undefined4 **)(param_1 + 0x90))(*(undefined4 **)(param_1 + 0x90),uVar4);
    if (-1 < lVar5) {
      puVar1 = *(undefined4 **)(param_1 + 0x88);
      if (puVar1 != (undefined4 *)0x0) {
        lVar5 = (**(code **)*puVar1)(puVar1,uVar4);
      }
      if (-1 < (int)lVar5) {
        if (*(int *)(param_1 + 8) != 2) {
          lVar5 = fn_82A50210(param_1 + 4,uVar4);
        }
        if (-1 < (int)lVar5) {
          if ((param_3 & 0xffffffff) == 0) {
            piVar2 = *(int **)(*(int *)(param_1 + 0x34) + 0xb0);
            lVar5 = (**(code **)(*piVar2 + 0x48))(piVar2,uVar4);
            if (-1 < lVar5) {
              fn_82A43C88(param_1);
            }
          }
          else {
            lVar5 = fn_82A44488(param_1,1,0,param_3);
          }
        }
      }
    }
  }
LAB_82a44c80:
  (**(code **)(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 0x14))(*(int *)(param_1 + 0x34) + 0x2c);
  return lVar5;
}

