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
extern int fn_823AB478();
extern int fn_82569980();
extern int fn_82594298();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265988;
extern unsigned int lbl_83296AE0;


void fn_8260E250(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_20 [16];
  
  if ((param_5 == 0) && (*(int *)(param_3 + 0x14) != 0)) {
    iVar3 = fn_82569980(param_1,*(undefined1 *)(param_3 + 0x10));
    if (iVar3 == -1) {
      if (lbl_83296AE0 != 0) {
        puVar1 = (undefined4 *)(lbl_83296AE0 + 0x10U & 0xfffffff0);
        in_register_000104d0 = *puVar1;
        in_register_000104d4 = puVar1[1];
        in_register_000104d8 = puVar1[2];
        in_vr77 = puVar1[3];
      }
      puVar1 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
      *puVar1 = in_register_000104d0;
      puVar1[1] = in_register_000104d4;
      puVar1[2] = in_register_000104d8;
      puVar1[3] = in_vr77;
    }
    else {
      puVar1 = (undefined4 *)
               (*(int *)(*(int *)((int)param_1 + 0xd8) + iVar3 * 0x30 + 0x10) + 0x50U & 0xfffffff0);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)((uint)(auStack_20 + in_r0) & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
    }
    if (lbl_83265988 != 0) {
      fn_823AB478();
      fn_82594298((double)lbl_821CA460,param_3 + 0x14,auStack_20);
    }
  }
  return;
}

