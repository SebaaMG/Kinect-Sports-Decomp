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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_30;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_82F68CC0();
extern unsigned int uStack_3b;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_823F9C58(int param_1,undefined8 param_2,int param_3)

{
  int in_r0;
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 auStack_90 [8];
  undefined4 auStack_70 [8];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 auStack_30 [48];
  
  uStack_4c = 0xffffffff;
  uStack_50 = 0xffffffff;
  uStack_3c = 0;
  uStack_3b = 0;
  puVar1 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  uStack_44 = 0xffffffff;
  puVar1 = auStack_90;
  uStack_40 = 0xffffffff;
  lVar2 = 7;
  uStack_a0 = 0xffffffff;
  uStack_9c = 1;
  auStack_90[0] = 0;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0xffffffff;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  puVar1 = auStack_70;
  auStack_70[0] = 0;
  lVar2 = 7;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0xffffffff;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  (**(code **)(**(int **)(param_1 + 0x18) + 0x14))(*(int **)(param_1 + 0x18),param_2,&uStack_50);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(*(int **)(param_1 + 0x20),param_2,&uStack_a0);
  (**(code **)(**(int **)(param_1 + 0x28) + 0x14))(*(int **)(param_1 + 0x28),param_2,auStack_90);
  (**(code **)(**(int **)(param_1 + 0x30) + 0x14))(*(int **)(param_1 + 0x30),param_2,auStack_70);
  if (param_3 != 0) {
    fn_82F68CC0(*(int *)(param_1 + 8) + param_3,&uStack_50,0x30);
    *(ulonglong *)(*(int *)(param_1 + 0xc) + param_3) = CONCAT44(uStack_a0,uStack_9c);
    fn_82F68CC0(*(int *)(param_1 + 0x10) + param_3,auStack_90,0x20);
    fn_82F68CC0(*(int *)(param_1 + 0x14) + param_3,auStack_70,0x20);
  }
  return;
}

