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
extern int fn_82A43D00();
extern int fn_82A44488();
extern int fn_82A4FAC0();


longlong fn_82A44CA8(int param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  longlong lVar4;
  
  (**(code **)(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 8))(*(int *)(param_1 + 0x34) + 0x2c);
  lVar4 = 0;
  if (((*(int *)(param_1 + 8) != 1) || ((param_3 & 0xffffffff) != 0)) &&
     ((*(int *)(param_1 + 8) != 2 || (((param_2 & 0x20) == 0 || ((param_3 & 0xffffffff) != 0)))))) {
    if ((param_3 & 0xffffffff) == 0) {
      uVar2 = 0x1337f001;
    }
    else {
      iVar1 = fn_82A43C30(param_1,param_3);
      uVar2 = param_3;
      if (iVar1 < 0) goto LAB_82a44e7c;
    }
    lVar4 = (**(code **)(**(int **)(param_1 + 0x90) + 4))(*(int **)(param_1 + 0x90),param_2,uVar2);
    if (-1 < lVar4) {
      piVar3 = *(int **)(param_1 + 0x88);
      if ((piVar3 != (int *)0x0) && (*(int *)(param_1 + 8) != 2)) {
        lVar4 = (**(code **)(*piVar3 + 4))(piVar3,0,uVar2);
      }
      if (-1 < (int)lVar4) {
        if ((param_2 & 0x20) == 0) {
          piVar3 = *(int **)(param_1 + 0x24);
          while (piVar3 != (int *)0x0) {
            if ((int)lVar4 < 0) goto LAB_82a44e7c;
            if (piVar3 == (int *)0x0) {
              iVar1 = 0;
            }
            else {
              iVar1 = *piVar3;
              piVar3 = (int *)piVar3[1];
            }
            lVar4 = (**(code **)(*(int *)**(undefined4 **)(iVar1 + 8) + 4))
                              ((int *)**(undefined4 **)(iVar1 + 8),0,uVar2);
          }
          if ((int)lVar4 < 0) goto LAB_82a44e7c;
          if (*(int *)(param_1 + 0x38) != 0) {
            lVar4 = fn_82A4FAC0(*(int *)(param_1 + 0x38),uVar2);
          }
        }
        if (-1 < (int)lVar4) {
          if ((param_3 & 0xffffffff) == 0) {
            piVar3 = *(int **)(*(int *)(param_1 + 0x34) + 0xb0);
            lVar4 = (**(code **)(*piVar3 + 0x48))(piVar3,uVar2);
            if (-1 < lVar4) {
              fn_82A43D00(param_1,((int)(param_2 & 0x20) != 0) + '\x01');
            }
          }
          else {
            lVar4 = fn_82A44488(param_1,0,param_2,param_3);
          }
        }
      }
    }
  }
LAB_82a44e7c:
  (**(code **)(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 0x14))(*(int *)(param_1 + 0x34) + 0x2c);
  return lVar4;
}

