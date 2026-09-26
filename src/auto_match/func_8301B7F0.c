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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_83029C80();
extern unsigned int lbl_831BC768;


undefined4 * fn_8301B7F0(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  
  if (*(uint *)(param_1 + 0x10) <= (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2)) {
    return (undefined4 *)0x0;
  }
  uVar3 = fn_82FA5060(lbl_831BC768,0x6c);
  if ((uVar3 & 0xffffffff) != 0) {
    puVar4 = (undefined4 *)fn_83029C80(uVar3,param_2);
    if (puVar4 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    puVar1 = *(undefined4 **)(param_1 + 8);
    if (((uint)((int)puVar1 - *(int *)(param_1 + 4) >> 2) < *(uint *)(param_1 + 0xc)) &&
       (*(undefined4 **)(param_1 + 8) = puVar1 + 1, puVar1 != (undefined4 *)0x0)) {
      *puVar1 = puVar4;
      return puVar4;
    }
    uVar2 = lbl_831BC768;
    (**(code **)*puVar4)(puVar4,0);
    fn_82FA5190(uVar2,puVar4);
  }
  return (undefined4 *)0x0;
}

