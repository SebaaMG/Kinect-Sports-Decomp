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
extern int fn_82814F70();
extern int (*lbl_8320A5D4)();
extern unsigned int lbl_8320A5D8;


uint fn_82815268(int param_1,int param_2,code *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    uVar3 = 2;
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x24);
    uVar3 = *(uint *)(param_2 + 0xc);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_2 + 0x18);
    }
  }
  if (param_2 != 0) {
    if ((*(uint *)(param_2 + 0x10) & 2) == 0) {
      if ((((uVar3 & 0x10) == 0) && (lbl_8320A5D4 != (code *)0x0)) &&
         (iVar1 = (*lbl_8320A5D4)(*(undefined4 *)(param_2 + 0x18)), iVar1 != 0)) {
        uVar3 = uVar3 | 0x400;
      }
      lbl_8320A5D8 = lbl_8320A5D8 + -1;
    }
    else {
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        (**(code **)(param_1 + 0x10))(*(undefined4 *)(param_2 + 0x18));
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    }
    fn_82814F70(param_2);
  }
  if (param_3 != (code *)0x0) {
    (*param_3)(0,iVar2,uVar3);
  }
  return uVar3;
}

