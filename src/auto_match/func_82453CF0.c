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
extern unsigned int *auStack_30;
extern int fn_8242C1B8();
extern int fn_824C8210();
extern int fn_8255E0B0();


void fn_82453CF0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_30 [32];
  
  if ((*(int *)(param_1 + 0x14) < 0xe) || (0xf < *(int *)(param_1 + 0x14))) {
    iVar2 = fn_8242C1B8(**(undefined4 **)(param_1 + 0x40));
    fn_8255E0B0(*(undefined4 *)(iVar2 + 0x14),4,auStack_30);
    fn_824C8210(*(undefined4 *)(**(int **)(param_1 + 0x40) + 0xa8));
  }
  else {
    iVar2 = *(int *)(param_1 + 0x44);
    iVar3 = 0x50;
    fn_824C8210(*(undefined4 *)(**(int **)(param_1 + 0x40) + 0xa8));
    if (**(int **)(iVar2 + 4) != 0) {
      puVar1 = (undefined4 *)(**(int **)(iVar2 + 4) + iVar3 & 0xfffffff0);
      in_register_000104d0 = *puVar1;
      in_register_000104d4 = puVar1[1];
      in_register_000104d8 = puVar1[2];
      in_vr77 = puVar1[3];
    }
    iVar2 = fn_8242C1B8(**(undefined4 **)(param_1 + 0x40));
    iVar2 = *(int *)(iVar2 + 0x118);
    puVar1 = (undefined4 *)(iVar2 + 0xa0U & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    *(undefined4 *)(iVar2 + 0xb0) = 1;
  }
  return;
}

