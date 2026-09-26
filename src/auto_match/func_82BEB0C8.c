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
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BEA2F0();
extern int fn_82BEAC00();
extern int fn_82BF4B98();
extern int fn_82F65AC0();


bool fn_82BEB0C8(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar5;
  int *piVar4;
  
  if (param_2 == 0) {
LAB_82beb0e4:
    bVar5 = false;
  }
  else {
    if (*(int *)(param_1 + 0x3c) != 0) {
      for (puVar1 = (undefined4 *)fn_82BE5340(); puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)*puVar1) {
        iVar3 = puVar1[2];
        if ((iVar3 != 0) &&
           (iVar2 = fn_82F65AC0(*(undefined4 *)(iVar3 + 0x14),*(undefined4 *)(param_2 + 4)),
           iVar2 == 0)) {
          piVar4 = (int *)fn_82BF4B98(iVar3,param_1);
          if (piVar4 != (int *)0x0) {
            iVar3 = (**(code **)(*piVar4 + 0x18))(piVar4,param_2);
            if ((iVar3 == 0) && (iVar3 = fn_82BEAC00(param_1,piVar4), iVar3 != 0)) {
              return true;
            }
            (**(code **)*piVar4)(piVar4,1);
          }
          goto LAB_82beb0e4;
        }
      }
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      fn_82BE5340();
      while (*(int *)(*(int *)(param_1 + 0x40) + 8) != 0) {
        iVar3 = fn_82BE5378();
        if (iVar3 != 0) {
          iVar3 = fn_82BE5378(*(undefined4 *)(param_1 + 0x40));
          iVar3 = fn_82F65AC0(*(undefined4 *)(param_2 + 4),*(undefined4 *)(iVar3 + 0x14));
          if (iVar3 == 0) {
            piVar4 = (int *)fn_82BE5378(*(undefined4 *)(param_1 + 0x40));
            iVar3 = (**(code **)(*piVar4 + 0x18))(piVar4,param_2);
            goto LAB_82beb200;
          }
        }
        fn_82BE5350(*(undefined4 *)(param_1 + 0x40));
      }
    }
    iVar3 = fn_82BEA2F0(param_1,param_2);
LAB_82beb200:
    bVar5 = iVar3 == 0;
  }
  return bVar5;
}

