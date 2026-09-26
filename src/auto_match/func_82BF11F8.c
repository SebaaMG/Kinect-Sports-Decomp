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
extern int fn_82BE1A10();
extern int fn_82BE1FF8();
extern int fn_82BE5240();
extern int fn_82BE5A90();
extern int fn_82BE8A38();
extern int fn_82BE8D50();
extern int fn_82BEB838();
extern int fn_82BF6D88();


void fn_82BF11F8(int param_1,int param_2)

{
  int iVar1;
  int iVar4;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar5;
  undefined4 auStack_30 [12];
  
  if (*(int *)(param_2 + 0x14) == 0x54) {
    iVar1 = *(int *)(param_2 + 0x24);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0x18;
      fn_82BE5240(param_1,0x25f,0xffffffff820eb550,0);
    }
    else {
      auStack_30[0] = 0;
      iVar4 = fn_82BE5A90(param_2,auStack_30);
      if (iVar4 == 0) {
        fn_82BE5240(param_1,0x25a,0xffffffff820eb524);
        *(undefined4 *)(param_1 + 0x10) = 0x18;
      }
      else {
        if (*(int *)(param_1 + 0x38) != 0) {
          fn_82BE8D50();
        }
        uVar2 = thunk_FUN_82be5550(0x1c);
        if ((uVar2 & 0xffffffff) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = fn_82BF6D88(uVar2,auStack_30[0],iVar1);
        }
        *(int *)(param_1 + 0x38) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 0x10) = 0x18;
          fn_82BE5240(param_1,0x65,0xffffffff820eb4e0);
        }
        else {
          *(undefined4 *)(param_1 + 0x10) = 0x17;
          fn_82BE8A38(param_1);
          uVar5 = *(undefined8 *)(param_2 + 0x38);
          uVar3 = fn_82BE1A10();
          fn_82BE1FF8(uVar3,iVar1,uVar5);
        }
      }
    }
  }
  fn_82BEB838(param_1,param_2);
  return;
}

