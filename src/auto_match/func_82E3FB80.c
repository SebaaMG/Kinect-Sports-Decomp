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
extern int fn_82E3B888();
extern int fn_82E3C118();
extern int fn_82E3DC18();
extern int fn_82E3F8D0();
extern int fn_82E59440();


longlong fn_82E3FB80(int param_1,undefined4 *param_2)

{
  longlong lVar1;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *apiStack_34 [13];
  
  if (((*(uint *)(param_1 + 0x44) & 1) == 0) || (*(int *)(param_1 + 0x6c) != 0)) {
    return -0x3ff2c94e;
  }
  piStack_3c = (int *)0x0;
  piStack_38 = (int *)0x0;
  apiStack_34[0] = (int *)0x0;
  piStack_40 = (int *)0x0;
  lVar1 = fn_82E3F8D0(param_1);
  if (-1 < lVar1) {
    *(undefined4 *)(param_1 + 0x6c) = 1;
    lVar1 = (**(code **)*param_2)(param_2,0xffffffff8215ed68,&piStack_3c);
    if ((((-1 < lVar1) &&
         (lVar1 = (**(code **)(*piStack_3c + 0x28))(piStack_3c,&piStack_38), -1 < lVar1)) &&
        (lVar1 = fn_82E59440(piStack_38,0xffffffff820ed018,0xffffffff82154c58,apiStack_34),
        -1 < lVar1)) &&
       (((lVar1 = (**(code **)*apiStack_34[0])(apiStack_34[0],0xffffffff82154c18,&piStack_40),
         -1 < lVar1 && (lVar1 = fn_82E3B888(param_1,param_2,piStack_40), -1 < lVar1)) &&
        ((lVar1 = fn_82E3DC18(param_1,piStack_40), -1 < lVar1 &&
         (lVar1 = fn_82E3C118(param_1,piStack_40), -1 < lVar1)))))) goto LAB_82e3fcbc;
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
LAB_82e3fcbc:
  if (piStack_3c != (int *)0x0) {
    (**(code **)(*piStack_3c + 8))();
    piStack_3c = (int *)0x0;
  }
  if (piStack_38 != (int *)0x0) {
    (**(code **)(*piStack_38 + 8))();
    piStack_38 = (int *)0x0;
  }
  if (apiStack_34[0] != (int *)0x0) {
    (**(code **)(*apiStack_34[0] + 8))();
    apiStack_34[0] = (int *)0x0;
  }
  if (piStack_40 != (int *)0x0) {
    (**(code **)(*piStack_40 + 8))();
  }
  return lVar1;
}

