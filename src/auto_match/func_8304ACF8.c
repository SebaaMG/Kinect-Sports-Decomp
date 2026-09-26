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
extern unsigned int *auStack_40;
extern int fn_83049F40();
extern int fn_8304A158();
extern int fn_8304A3A8();
extern int fn_8304A420();
extern int fn_8304A498();
extern int fn_8304D6F0();
extern int fn_8307DE78();
extern int fn_8307E060();
extern int fn_8307E6E0();
extern unsigned int iStack_38;
extern unsigned int iStack_3c;


undefined8 fn_8304ACF8(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined1 auStack_40 [4];
  int iStack_3c;
  int iStack_38;
  
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x20))();
  fn_8304A420(param_1);
  fn_83049F40(param_1);
  fn_8304D6F0(param_1,((ulonglong)*(uint *)(*(int *)(*(int *)(param_1 + 8) + 0x6c) + 0x20) *
                       (ulonglong)*(uint *)(*(int *)(param_1 + 8) + 0xd0)) / 48000 & 0xffffffff,
               (uint *)(param_1 + 0x5c),(ushort *)(param_1 + 0x1c));
  *(undefined1 *)(param_1 + 0x7e) = 0;
  if ((*(uint *)(param_1 + 0x5c) < *(uint *)(param_1 + 0x78)) &&
     (iVar2 = fn_8304A498(param_1), iVar2 == 1)) {
    iVar2 = *(int *)(param_1 + 8);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(param_1 + 0x5c) & 0x7f;
    *(byte *)(iVar2 + 0xdb) = *(byte *)(iVar2 + 0xdb) & 0x7f;
    iVar2 = fn_8304A3A8(param_1);
    if (iVar2 != 0) {
      (**(code **)(**(int **)(param_1 + 0x2c) + 0xc))(*(int **)(param_1 + 0x2c),auStack_40);
      uVar1 = *(ushort *)(param_1 + 0x1c);
      if ((uVar1 == 0) || (1 < uVar1)) {
        iStack_3c = *(int *)(param_1 + 0x54);
        iStack_38 = *(int *)(param_1 + 0x58) + iStack_3c;
      }
      else {
        iStack_3c = 0;
        iStack_38 = 0;
      }
      (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))(*(int **)(param_1 + 0x2c),auStack_40);
      iVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x1c))();
      if (iVar2 == 1) {
        fn_8307DE78(*(undefined4 *)(param_1 + 0x28));
        fn_8307E6E0(*(undefined4 *)(param_1 + 0x28));
        fn_8304A158(param_1);
        fn_8307E060(*(undefined4 *)(param_1 + 0x28));
        return 1;
      }
    }
  }
  return 2;
}

