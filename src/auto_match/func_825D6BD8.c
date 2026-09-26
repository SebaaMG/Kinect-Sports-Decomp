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
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82837D98();
extern int fn_8284C860();


void fn_825D6BD8(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar2;
  ulonglong uVar1;
  undefined4 auStack_30 [12];
  
  if (*(int *)(param_1 + 0x120) != 0) {
    fn_8251FA58();
  }
  *(undefined4 *)(param_1 + 0x11c) = *param_2;
  iVar2 = fn_8251F720(param_2,0);
  *(int *)(param_1 + 0x120) = iVar2;
  uVar1 = fn_8284C860(*(undefined4 *)(iVar2 + 0x14));
  fn_82837D98(*(undefined4 *)(*(int *)(param_1 + 0x120) + 0x14),(uVar1 & 0xffffffff) >> 1 & 0x7f,
               auStack_30);
  *(undefined4 *)(param_1 + 0x124) = auStack_30[0];
  if ((param_3 != (int *)0x0) && (*param_3 != 0)) {
    if (*(int *)(param_1 + 300) != 0) {
      fn_8251FA58();
    }
    *(int *)(param_1 + 0x128) = *param_3;
    iVar2 = fn_8251F720(param_3,0);
    *(int *)(param_1 + 300) = iVar2;
    uVar1 = fn_8284C860(*(undefined4 *)(iVar2 + 0x14));
    fn_82837D98(*(undefined4 *)(*(int *)(param_1 + 300) + 0x14),(uVar1 & 0xffffffff) >> 1 & 0x7f,
                 auStack_30);
    *(undefined4 *)(param_1 + 0x130) = auStack_30[0];
  }
  return;
}

