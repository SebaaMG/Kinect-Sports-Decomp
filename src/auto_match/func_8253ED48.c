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
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern int fn_822E83E0();
extern int fn_8240DEC0();
extern int fn_82D8B6C8();


void fn_8253ED48(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_r0;
  bool bVar4;
  uint uVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  iVar1 = *(int *)(param_1 + 0x7c0);
  if (iVar1 != 0) {
    uVar5 = (uint)*(byte *)(iVar1 + 0xe8);
    if (*(int *)(param_1 + 0x7d8) == 0) {
      iVar2 = *(int *)(param_1 + 0x7e0);
      if ((iVar2 == 4) || (bVar4 = true, iVar2 == 0)) {
        bVar4 = false;
      }
      if ((uVar5 == 4) && (bVar4)) {
        fn_82D8B6C8(iVar1,iVar2,1,0);
      }
    }
    else if ((uVar5 != 5) && (uVar5 != 4)) {
      *(uint *)(param_1 + 0x7e0) = uVar5;
      fn_82D8B6C8(iVar1,4,1,0);
      puVar3 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
      *puVar3 = in_register_000104d0;
      puVar3[1] = in_register_000104d4;
      puVar3[2] = in_register_000104d8;
      puVar3[3] = in_vr77;
      fn_822E83E0(iVar1,auStack_30);
      puVar3 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
      *puVar3 = in_register_000104d0;
      puVar3[1] = in_register_000104d4;
      puVar3[2] = in_register_000104d8;
      puVar3[3] = in_vr77;
      fn_8240DEC0(iVar1,auStack_20);
    }
  }
  return;
}

