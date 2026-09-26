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
extern int fn_82FA8F10();
extern int fn_82FACFD8();
extern int fn_82FAE0B0();
extern int fn_82FB0888();
extern int fn_82FB3480();
extern int fn_8300D168();


undefined8 fn_82FACE68(int param_1)

{
  undefined8 uVar1;
  ushort uVar4;
  int iVar2;
  undefined2 uVar5;
  undefined2 *puVar3;
  ushort uVar6;
  
  fn_82FA8F10();
  uVar1 = fn_82FB3480(param_1 + 0x38);
  if ((int)uVar1 == 1) {
    uVar4 = (**(code **)(**(int **)(param_1 + 0x60) + 0x158))();
    iVar2 = fn_8300D168(param_1 + 0x6c,uVar4);
    if (iVar2 == 1) {
      if (uVar4 != 0) {
        uVar6 = 0;
        do {
          fn_82FAE0B0(*(undefined4 *)(param_1 + 0x60),uVar6);
          uVar5 = fn_82FB0888();
          puVar3 = (undefined2 *)fn_82FACFD8(param_1 + 0x6c);
          if (puVar3 != (undefined2 *)0x0) {
            *puVar3 = uVar5;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar4);
      }
    }
    else {
      uVar1 = 0x34;
    }
  }
  return uVar1;
}

