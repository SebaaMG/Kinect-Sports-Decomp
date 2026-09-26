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
extern int fn_82E23F08();
extern int fn_82E40F90();
extern int fn_82E43358();
extern int fn_82E46180();


longlong fn_82E24948(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *apiStack_60 [24];
  
  piVar4 = (int *)0x0;
  apiStack_60[0] = (int *)0x0;
  puVar5 = (undefined4 *)(param_1 + 0x108);
  if (((*(int *)(param_1 + 0x108) == 0) && (*(int *)(param_1 + 0x10c) == 0)) &&
     (puVar3 = (undefined4 *)(param_1 + 0x100), *(int *)(param_1 + 0x100) == 0)) {
    lVar2 = fn_82E46180(puVar5);
    if (lVar2 < 0) {
      return lVar2;
    }
    lVar2 = fn_82E23F08(param_1,apiStack_60,param_2,param_3,param_4,param_5);
    piVar4 = apiStack_60[0];
    if ((((-1 < lVar2) &&
         (lVar2 = (**(code **)(*(int *)*puVar5 + 0x1c))((int *)*puVar5,apiStack_60[0]), -1 < lVar2))
        && ((lVar2 = fn_82E43358((undefined4 *)(param_1 + 0x10c)), -1 < lVar2 &&
            ((piVar1 = *(int **)(param_1 + 0x10c),
             lVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,*puVar5), -1 < lVar2 &&
             (lVar2 = fn_82E40F90(puVar3), -1 < lVar2)))))) &&
       (lVar2 = (**(code **)(*(int *)*puVar3 + 0xc))((int *)*puVar3,1), -1 < lVar2)) {
      lVar2 = (**(code **)(*(int *)*puVar3 + 0x14))((int *)*puVar3,*puVar5);
    }
  }
  else {
    lVar2 = -0x7fff0001;
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  return lVar2;
}

