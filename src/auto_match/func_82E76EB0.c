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
extern unsigned int *auStack_38;
extern int fn_82E65EE8();
extern int fn_82F691F0();
extern unsigned int iStack_3c;


longlong fn_82E76EB0(int param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piStack_40;
  int iStack_3c;
  undefined4 auStack_38 [14];
  
  if (param_2 == (int *)0x0) {
    return -0x7ff8ffa9;
  }
  iVar1 = *(int *)(param_1 + 0x168);
  if (iVar1 == 0) {
    return 0;
  }
  piStack_40 = (int *)0x0;
  iStack_3c = 0;
  if (*(int *)(param_1 + 0x160) == 0) {
    (**(code **)(*param_2 + 0xb4))(param_2,&iStack_3c);
    iVar1 = *(int *)(param_1 + 0x168);
    if (iVar1 + iStack_3c != *(int *)(param_1 + 0x148)) {
      lVar2 = -0x3ff2c945;
      goto LAB_82e76fd4;
    }
  }
  lVar2 = fn_82E65EE8(iVar1,&piStack_40);
  if ((-1 < lVar2) &&
     (lVar2 = (**(code **)(*piStack_40 + 0x18))(piStack_40,*(undefined4 *)(param_1 + 0x168)),
     -1 < lVar2)) {
    auStack_38[0] = 0;
    lVar2 = (**(code **)(*piStack_40 + 0xc))(piStack_40,auStack_38,0,0);
    if (-1 < lVar2) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_38[0],0xcc,*(undefined4 *)(param_1 + 0x168));
    }
  }
LAB_82e76fd4:
  if (piStack_40 != (int *)0x0) {
    (**(code **)(*piStack_40 + 8))();
  }
  return lVar2;
}

