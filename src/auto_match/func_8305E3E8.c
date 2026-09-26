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
extern int fn_82F68CC0();
extern unsigned int lbl_831BCA54;


void fn_8305E3E8(int param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 6) {
    iVar3 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x2c) = param_1 + 0x14;
    if ((0 < iVar3) && (*(int *)(param_1 + 0x10) != 0)) {
      if (param_2 < iVar3) {
        iVar3 = param_2;
      }
      fn_82F68CC0(param_1 + 0x14,*(int *)(param_1 + 0x10),iVar3 << 2);
      (**(code **)(*(int *)lbl_831BCA54 + 4))(lbl_831BCA54,*(undefined4 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(int *)(param_1 + 0x30) = param_2;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x30);
    uVar1 = (*(code *)**(undefined4 **)lbl_831BCA54)(lbl_831BCA54,param_2 << 2);
    *(int *)(param_1 + 0x30) = param_2;
    *(int *)(param_1 + 0x2c) = (int)uVar1;
    if (0 < iVar3) {
      if (param_2 <= iVar3) {
        iVar3 = param_2;
      }
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 == 0) {
        iVar2 = param_1 + 0x14;
      }
      fn_82F68CC0(uVar1,iVar2,iVar3 << 2);
      if (*(int *)(param_1 + 0x10) != 0) {
        (**(code **)(*(int *)lbl_831BCA54 + 4))();
      }
    }
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x2c);
  }
  return;
}

