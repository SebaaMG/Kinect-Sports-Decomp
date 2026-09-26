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
extern int fn_827D4370();
extern int fn_827D4EF8();
extern int fn_82F691F0();
extern int fn_82F8CFE8();


undefined8 fn_82F8BB40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 2;
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 8);
      if (*(int *)(iVar1 + 0x18) < 0) {
        *(int *)(iVar1 + 0x18) = -*(int *)(iVar1 + 0x18);
      }
      *(uint *)(iVar1 + 4) = (-(uint)(*(int *)(iVar1 + 0x18) != 0) & 0xffffffb9) + 0x71;
      if (*(int *)(iVar1 + 0x18) == 2) {
        uVar2 = fn_827D4EF8();
      }
      else {
        uVar2 = fn_827D4370(0,0,0);
      }
      *(undefined4 *)(param_1 + 0x30) = uVar2;
      *(undefined4 *)(iVar1 + 0x28) = 0;
      fn_82F8CFE8(iVar1);
      *(int *)(iVar1 + 0x3c) = *(int *)(iVar1 + 0x2c) << 1;
      *(undefined2 *)(*(int *)(iVar1 + 0x4c) * 2 + *(int *)(iVar1 + 0x44) + -2) = 0;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(iVar1 + 0x44),0,
                   ((ulonglong)*(uint *)(iVar1 + 0x4c) - 1 & 0x7fffffff) << 1);
    }
  }
  return 0xfffffffffffffffe;
}

