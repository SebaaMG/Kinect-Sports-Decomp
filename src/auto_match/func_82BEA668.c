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
extern int fn_82BE5240();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE6590();
extern int fn_82BE66A0();
extern int fn_82BEA590();
extern int fn_82BEB9B8();
extern int fn_82BF18C8();
extern int fn_82BF5528();


ulonglong fn_82BEA668(int param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int *piVar4;
  longlong lVar3;
  undefined8 uVar5;
  
  if ((*(int *)(param_1 + 0x4c) == 0) && (uVar2 = fn_82BEA590(), (uVar2 & 0xffffffff) != 0)) {
    return uVar2;
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    fn_82BE5240(param_1,0x131,0xffffffff82196582);
    return 0x131;
  }
  fn_82BE5340();
  while (*(int *)(*(int *)(param_1 + 0x44) + 8) != 0) {
    fn_82BE5378(*(undefined4 *)(param_1 + 0x44));
    fn_82BF18C8();
    fn_82BE5350(*(undefined4 *)(param_1 + 0x44));
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    fn_82BE5240(param_1,0x130,0xffffffff82196582);
    return 0x130;
  }
  fn_82BE5340();
  while (*(int *)(*(int *)(param_1 + 0x40) + 8) != 0) {
    piVar4 = (int *)fn_82BE5378(*(undefined4 *)(param_1 + 0x40));
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))();
    }
    fn_82BE5350(*(undefined4 *)(param_1 + 0x40));
  }
  puVar1 = *(undefined4 **)(param_1 + 0x4c);
  if (puVar1 != (undefined4 *)0x0) {
    if ((*(short *)(puVar1 + 0x14) != 0) || (*(short *)((int)puVar1 + 0x52) != 0)) {
      fn_82BF5528();
      lVar3 = fn_82BE6590(*(undefined4 *)(param_1 + 0x4c));
      if (lVar3 == 0) {
        lVar3 = fn_82BEB9B8(param_1,*(undefined4 *)(param_1 + 0x4c));
        if (lVar3 == 0) goto LAB_82bea798;
        *(undefined4 *)(param_1 + 0x10) = 0;
        fn_82BE66A0(*(undefined4 *)(param_1 + 0x4c));
        puVar1 = *(undefined4 **)(param_1 + 0x4c);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        uVar5 = 0xffffffff820eabc0;
      }
      else {
        puVar1 = *(undefined4 **)(param_1 + 0x4c);
        *(undefined4 *)(param_1 + 0x10) = 0;
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        uVar5 = 0xffffffff820eac0c;
      }
      *(undefined4 *)(param_1 + 0x4c) = 0;
      uVar2 = fn_82BE5240(param_1,lVar3,uVar5);
      return uVar2;
    }
    (**(code **)*puVar1)(puVar1,1);
    if (*(int *)(param_1 + 0x10) == 0xf) {
      *(undefined4 *)(param_1 + 0x10) = 4;
    }
  }
LAB_82bea798:
  *(undefined4 *)(param_1 + 0x4c) = 0;
  uVar2 = fn_82BEA590(param_1);
  return uVar2;
}

