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
extern int fn_8265C940();
extern int fn_82A3FF60();
extern int fn_82A48578();


undefined8 fn_82A48CD8(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar2 = fn_8265C940(param_2,*(undefined4 *)(param_1 + 0xf8));
  *(int *)(param_1 + 0xfc) = iVar2;
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)fn_82A3FF60(0xffffffff83219d50,8,0x20970000,0);
    uVar4 = (undefined4)param_2;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0xfc);
      puVar3[1] = uVar4;
      *puVar3 = uVar1;
    }
    if (puVar3 != (undefined4 *)0x0) {
      fn_82A48578(param_1 + 0x7c);
      *(undefined4 *)(param_1 + 0x100) = uVar4;
      *(undefined4 *)(param_1 + 0x104) = uVar4;
      return 0;
    }
  }
  return 0xffffffff8007000e;
}

