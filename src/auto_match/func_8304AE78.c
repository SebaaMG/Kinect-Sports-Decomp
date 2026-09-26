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
extern int fn_8304A3A8();
extern int fn_8304A498();
extern int fn_8304AA48();
extern int fn_8304AAD0();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


undefined8 fn_8304AE78(int param_1)

{
  uint uVar1;
  int iVar3;
  undefined8 uVar2;
  ulonglong uVar4;
  uint uStack_20;
  uint uStack_1c;
  
  iVar3 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x2c))
                    (*(int **)(param_1 + 0x2c),&uStack_1c,&uStack_20,0);
  if (iVar3 != 0x2e) {
    if ((iVar3 != 0x2d) && (iVar3 != 0x11)) {
      return 2;
    }
    uVar2 = fn_8304AAD0(param_1,uStack_1c,uStack_20);
    if ((int)uVar2 != 1) {
      return uVar2;
    }
    uVar2 = fn_8304A3A8(param_1);
    if ((int)uVar2 != 1) {
      return uVar2;
    }
    iVar3 = *(int *)(param_1 + 8);
    if ((*(byte *)(iVar3 + 0xdb) & 0x80) == 0) {
      if (((ulonglong)uStack_20 - (ulonglong)*(uint *)(param_1 + 0x54) & 0xffffffff) != 0) {
        *(undefined1 *)(param_1 + 0x7d) = 0;
        *(uint *)(param_1 + 100) = uStack_1c;
        uVar2 = fn_8304AA48(param_1,(ulonglong)*(uint *)(param_1 + 0x54) +
                                          (ulonglong)uStack_1c);
        return uVar2;
      }
    }
    else {
      uVar1 = *(uint *)(*(int *)(iVar3 + 0x6c) + 0x20);
      *(byte *)(iVar3 + 0xdb) = *(byte *)(iVar3 + 0xdb) & 0x7f;
      uVar4 = ((ulonglong)uVar1 * (ulonglong)*(uint *)(iVar3 + 0xd0)) / 48000;
      uVar1 = (uint)uVar4;
      *(uint *)(iVar3 + 0xd0) = uVar1 & 0x7f;
      uVar2 = fn_8304A498(param_1,uVar4 & 0xffffffff);
      if ((int)uVar2 != 1) {
        return uVar2;
      }
      *(uint *)(param_1 + 0x5c) = uVar1;
    }
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x30))();
  }
  return 0x3f;
}

