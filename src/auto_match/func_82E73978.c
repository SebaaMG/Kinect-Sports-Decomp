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
extern unsigned int *auStack_48;
extern int fn_82E738D0();
extern unsigned int uStack_50;


longlong fn_82E73978(int param_1,ulonglong param_2,undefined4 *param_3)

{
  bool bVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uStack_50;
  int *piStack_4c;
  undefined8 auStack_48 [9];
  
  if (param_3 == (undefined4 *)0x0) {
    lVar3 = -0x7fffbffd;
  }
  else {
    bVar1 = false;
    lVar3 = 0;
    piStack_4c = (int *)0x0;
    auStack_48[0] = 0;
    *param_3 = *(undefined4 *)(param_1 + 0x1c);
    for (; (param_2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x1c); param_2 = param_2 + 1) {
      iVar4 = fn_82E738D0(param_1 + 0x10,param_2,auStack_48,&piStack_4c);
      piVar2 = piStack_4c;
      if (iVar4 == 0) {
        return -0x7fff0001;
      }
      uStack_50 = 0;
      lVar3 = (**(code **)(**(int **)(param_1 + 0x1d8) + 0x10))
                        (*(int **)(param_1 + 0x1d8),*(undefined2 *)(piStack_4c + 8),
                         *(undefined1 *)((int)piStack_4c + 0x22),piStack_4c[0xd],&uStack_50);
      if (lVar3 < 0) {
        return lVar3;
      }
      if (piVar2[10] == 0) {
        uVar5 = (**(code **)(*piVar2 + 0x10))(piVar2);
        if (uVar5 <= uStack_50) goto LAB_82e73a30;
      }
      else if (uStack_50 != 0) {
LAB_82e73a30:
        *param_3 = (int)param_2;
        bVar1 = true;
        break;
      }
    }
    if ((-1 < (int)lVar3) && (!bVar1)) {
      lVar3 = -0x3ff2c94b;
    }
  }
  return lVar3;
}

