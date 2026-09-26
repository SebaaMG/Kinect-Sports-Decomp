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
extern int fn_82552B50();
extern unsigned int *lbl_8327F868;
extern unsigned int *lbl_8327F86C;


void fn_82552890(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if ((int *)*param_2 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*(int *)*param_2 + 0x20))();
    if (piVar3 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar3 + 0x4c))();
      puVar2 = lbl_8327F86C;
      iVar4 = *(int *)(iVar4 + 8);
      bVar5 = false;
      piVar3 = (int *)*lbl_8327F86C;
      while (piVar3 != (int *)puVar2[1]) {
        iVar1 = *piVar3;
        if ((*(int *)(iVar1 + 8) == iVar4) && (*(int *)(iVar1 + 0xc) == 0)) {
          *(undefined4 *)(iVar1 + 8) = param_3;
          bVar5 = true;
        }
        else {
          piVar3 = piVar3 + 1;
        }
      }
      if ((longlong)-(ulonglong)!bVar5 < 0) {
        (**(code **)(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0x847,0xffffffff821c3e08);
      }
    }
  }
  fn_82552B50(param_2,0);
  return;
}

