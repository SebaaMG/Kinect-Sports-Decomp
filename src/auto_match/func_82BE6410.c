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
extern int fn_82BE5240();


undefined8 fn_82BE6410(int param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x1c) == 0) || (*(int *)(param_1 + 0x28) < 1)) {
    uVar1 = 0xffffffff820e9668;
  }
  else if (*(int *)(param_1 + 0x24) < param_2 + param_3) {
    uVar1 = 0xffffffff820e962c;
  }
  else {
    if (param_3 != 0) {
      iVar3 = param_2;
      if (param_2 + param_3 < *(int *)(param_1 + 0x24)) {
        do {
          puVar2 = (undefined1 *)(iVar3 + *(int *)(param_1 + 0x1c));
          iVar3 = iVar3 + 1;
          *puVar2 = puVar2[param_3];
        } while (iVar3 + param_3 < *(int *)(param_1 + 0x24));
      }
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - param_3;
      if (param_2 < *(int *)(param_1 + 0x20)) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - param_3;
      }
      return 1;
    }
    uVar1 = 0xffffffff820e9608;
  }
  fn_82BE5240(param_1,0x65,uVar1);
  return 0;
}

