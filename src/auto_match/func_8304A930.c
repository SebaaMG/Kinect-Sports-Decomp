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
extern int fn_83049F40();
extern int fn_8304A158();
extern int fn_8304A3A8();
extern int fn_8304A420();
extern int fn_8304A498();
extern int fn_8307DE78();
extern int fn_8307E060();
extern int fn_8307E6E0();


undefined8 fn_8304A930(int param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if (param_3 != '\0') {
      fn_8304A420();
      fn_83049F40(param_1);
      iVar2 = *(int *)(param_1 + 8);
      uVar1 = (uint)(((ulonglong)*(uint *)(*(int *)(iVar2 + 0x6c) + 0x20) *
                     (ulonglong)*(uint *)(iVar2 + 0xd0)) / 48000);
      *(uint *)(param_1 + 0x5c) = uVar1;
      *(uint *)(iVar2 + 0xd0) = uVar1 & 0x7f;
      *(byte *)(iVar2 + 0xdb) = *(byte *)(iVar2 + 0xdb) & 0x7f;
    }
    if ((*(int *)(param_1 + 0x28) == 0) &&
       (iVar2 = fn_8304A498(param_1,*(undefined4 *)(param_1 + 0x5c)), iVar2 != 1)) {
      return 2;
    }
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x1c))();
  if (iVar2 != 1) {
    return 2;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar2 = fn_8304A3A8(param_1);
    if (iVar2 != 1) {
      return 2;
    }
    fn_8307DE78(*(undefined4 *)(param_1 + 0x28));
    fn_8307E6E0(*(undefined4 *)(param_1 + 0x28));
    fn_8304A158(param_1);
    fn_8307E060(*(undefined4 *)(param_1 + 0x28));
  }
  return 1;
}

