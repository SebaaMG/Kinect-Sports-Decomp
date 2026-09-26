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
extern int fn_82437DA8();
extern int fn_8243E0D8();
extern int fn_8265CA20();
extern unsigned int lbl_821B932C;


void fn_82433418(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar1 = param_1[0x10];
  *param_1 = &lbl_821B932C;
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(iVar1 + 0x200);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    uVar4 = (ulonglong)*(uint *)(iVar1 + 0x138);
    if (uVar4 != 0) {
      uVar3 = *(uint *)(iVar1 + 0x13c);
      for (; (uVar4 & 0xffffffff) != (ulonglong)uVar3; uVar4 = uVar4 + 0x18) {
        fn_8243E0D8(uVar4);
      }
      fn_8265CA20(*(undefined4 *)(iVar1 + 0x138));
    }
    *(undefined4 *)(iVar1 + 0x138) = 0;
    *(undefined4 *)(iVar1 + 0x13c) = 0;
    *(undefined4 *)(iVar1 + 0x140) = 0;
    fn_8243E0D8(iVar1 + 0x120);
    fn_8265CA20(iVar1);
  }
  fn_82437DA8(param_1);
  return;
}

