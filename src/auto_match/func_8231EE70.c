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
extern int fn_822B6FF0();
extern int fn_822B9390();
extern int fn_8231EF10();
extern int fn_8231F518();


void fn_8231EE70(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  fn_8231EF10();
  iVar4 = fn_8231F518(param_1,param_2);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_2 + 0x10);
    if (*(int *)(iVar4 + 0x42c) != 3) {
      iVar1 = *(int *)(iVar4 + 0x9a0);
      uVar2 = *(undefined4 *)(iVar4 + 0xe10);
      if ((iVar1 != 0) && (iVar5 = fn_822B6FF0(iVar1,uVar2), iVar5 == 0)) {
        fn_822B9390(*(undefined4 *)(iVar1 + 0x11c),uVar2,0x21);
        iVar1 = *(int *)(iVar4 + 0xe10);
        puVar3 = (undefined4 *)(iVar1 + 0xbd0U & 0xfffffff0);
        *puVar3 = in_register_000104d0;
        puVar3[1] = in_register_000104d4;
        puVar3[2] = in_register_000104d8;
        puVar3[3] = in_vr77;
        puVar3 = (undefined4 *)(iVar1 + 0xc30U & 0xfffffff0);
        *puVar3 = in_register_000104d0;
        puVar3[1] = in_register_000104d4;
        puVar3[2] = in_register_000104d8;
        puVar3[3] = in_vr77;
      }
    }
    *(undefined4 *)(iVar4 + 0x42c) = 3;
  }
  return;
}

