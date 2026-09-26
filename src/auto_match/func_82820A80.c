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
extern int fn_82815268();
extern int fn_82816480();
extern int fn_82820970();
extern int (*lbl_8320A5D4)();
extern unsigned int lbl_8320A5D8;


void fn_82820A80(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_3 != 0) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x10000;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x20000;
    fn_82820970(param_2);
    if ((*(uint *)(param_2 + 0x10) & 2) == 0) {
      if ((lbl_8320A5D4 != (code *)0x0) &&
         (iVar2 = (*lbl_8320A5D4)(*(undefined4 *)(param_2 + 0x18)), iVar2 != 0)) {
        *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x400;
      }
      lbl_8320A5D8 = lbl_8320A5D8 + -1;
    }
    else {
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        (**(code **)(param_1 + 0x10))(*(undefined4 *)(param_2 + 0x18));
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    }
    if (*(int *)(param_2 + 0xc) == 0) {
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x801;
      *(undefined4 *)(*(int *)(param_2 + 0x20) + 0x24) = 0;
      puVar1 = *(undefined4 **)(param_2 + 0x20);
      fn_82816480(param_1,*puVar1,puVar1[5],puVar1[6],param_2 + 0x20,puVar1[4],puVar1[1],1);
      return;
    }
  }
  fn_82815268(param_1,param_2,*(undefined4 *)(param_2 + 0x14));
  return;
}

