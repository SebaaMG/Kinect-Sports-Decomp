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
extern int fn_822CCC78();
extern int fn_8236A360();
extern int fn_823CD840();


void fn_8230A9D0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(iVar1 + 0x42c) != 3) {
    iVar2 = *(int *)(iVar1 + 0x9a0);
    uVar3 = *(undefined4 *)(iVar1 + 0xe10);
    if ((iVar2 != 0) && (iVar5 = fn_822B6FF0(iVar2,uVar3), iVar5 == 0)) {
      fn_822B9390(*(undefined4 *)(iVar2 + 0x11c),uVar3,0x21);
      iVar2 = *(int *)(iVar1 + 0xe10);
      puVar4 = (undefined4 *)(iVar2 + 0xbd0U & 0xfffffff0);
      *puVar4 = in_register_000104d0;
      puVar4[1] = in_register_000104d4;
      puVar4[2] = in_register_000104d8;
      puVar4[3] = in_vr77;
      puVar4 = (undefined4 *)(iVar2 + 0xc30U & 0xfffffff0);
      *puVar4 = in_register_000104d0;
      puVar4[1] = in_register_000104d4;
      puVar4[2] = in_register_000104d8;
      puVar4[3] = in_vr77;
    }
  }
  *(undefined4 *)(iVar1 + 0x42c) = 3;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x234) = 1;
  fn_823CD840(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x28),
                    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2c));
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0xe10);
  puVar4 = (undefined4 *)(iVar1 + 0xbd0U & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  puVar4 = (undefined4 *)(iVar1 + 0xc30U & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  fn_822CCC78(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18),0xffffffff821af300);
  fn_8236A360(*(undefined4 *)(param_1 + 0x10),1);
  return;
}

