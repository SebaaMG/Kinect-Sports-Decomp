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
extern int fn_82BE52B8();
extern int fn_82BEB628();
extern int fn_82BEF6C0();
extern int fn_830B4CB8();


undefined8 fn_82BEF738(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar4;
  ulonglong uVar3;
  undefined8 uVar5;
  undefined4 uVar6;
  
  if (param_2 == 0) {
    uVar2 = fn_82BE5240(param_1,500,0xffffffff82196582);
    return uVar2;
  }
  if ((*(int *)(param_1 + 0x34) == 0x10) && (*(int *)(param_1 + 0x28) != 0)) {
    uVar6 = *(undefined4 *)(param_1 + 0x14);
    uVar2 = 0xffffffff820eb240;
  }
  else {
    iVar4 = fn_82BEF6C0(param_1,param_2);
    if (iVar4 == 0) {
      uVar3 = thunk_FUN_82be5550(0xc);
      if ((uVar3 & 0xffffffff) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = fn_82BEB628(uVar3,param_2);
      }
      if (iVar4 != 0) {
        fn_82BE52B8(param_1 + 0x1c);
        fn_830B4CB8(param_2,param_1);
        if (*(int *)(param_1 + 0x10) == 2) {
          iVar4 = *(int *)(param_1 + 0x2c);
          if ((((iVar4 == 0) || (iVar1 = *(int *)(iVar4 + 0x38), iVar1 == 0)) ||
              (*(int *)(iVar1 + 8) == 0)) || (*(int *)(iVar1 + 0xc) == 0)) {
            uVar6 = 0x10;
          }
          else {
            uVar6 = 0x12;
            *(int *)(param_1 + 0x30) = iVar4;
          }
          *(undefined4 *)(param_1 + 0x10) = uVar6;
        }
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      uVar5 = 0x65;
      uVar6 = *(undefined4 *)(param_2 + 4);
      uVar2 = 0xffffffff820eb1d0;
      goto LAB_82bef798;
    }
    uVar6 = *(undefined4 *)(param_2 + 4);
    uVar2 = 0xffffffff820eb230;
  }
  uVar5 = 0x1f5;
LAB_82bef798:
  uVar2 = fn_82BE5240(param_1,uVar5,uVar2,uVar6);
  return uVar2;
}

