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
extern int fn_82E39C50();
extern int fn_82E59158();
extern int fn_82F3CCA8();


longlong fn_82F3CEA8(int param_1,int *param_2,undefined4 *param_3)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte *pbVar4;
  int *piStack_50;
  byte *pbStack_4c;
  byte *pbStack_48;
  byte *apbStack_44 [17];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return -0x3ff2c94a;
  }
  if (param_2 != (int *)0x0) {
    pbStack_48 = (byte *)0x0;
    apbStack_44[0] = (byte *)0x0;
    lVar2 = (**(code **)(*param_2 + 0x14))(param_2,&pbStack_48,apbStack_44);
    if (lVar2 < 0) {
      return lVar2;
    }
    if ((param_3 != (undefined4 *)0x0) &&
       ((apbStack_44[0] == (byte *)0x0 || (pbStack_48 != (byte *)0x0)))) {
      *param_3 = 0;
      pbVar4 = (byte *)0x0;
      if (*(int *)(param_1 + 0x160) == 0) {
        if (apbStack_44[0] < (byte *)0x1e) {
          *param_3 = 0x1e;
          return -0x3ff2c94f;
        }
        lVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0x20))
                          (*(int **)(param_1 + 0x54),0xffffffff8202e618);
        pbStack_4c = pbStack_48;
        fn_82E39C50(param_1 + 0x10,&pbStack_4c);
        uVar3 = ((ulonglong)pbStack_4c[7] << 0x18 | (ulonglong)pbStack_4c[6] << 0x10 |
                 (ulonglong)pbStack_4c[5] << 8 | (ulonglong)pbStack_4c[4]) << 0x20 |
                (ulonglong)pbStack_4c[3] << 0x18 | (ulonglong)pbStack_4c[2] << 0x10 |
                (ulonglong)pbStack_4c[1] << 8 | (ulonglong)*pbStack_4c;
        *(ulonglong *)(param_1 + 0x20) = uVar3;
        if (0x9fffff < uVar3) {
          return -0x3ff2c566;
        }
        *(uint *)(param_1 + 0x50) =
             (uint)pbStack_4c[0xb] << 0x18 | (uint)pbStack_4c[10] << 0x10 | (uint)pbStack_4c[9] << 8
             | (uint)pbStack_4c[8];
        *(byte *)(param_1 + 0x4c) = pbStack_4c[0xc];
        bVar1 = pbStack_4c[0xd];
        *(byte *)(param_1 + 0x4d) = bVar1;
        if (bVar1 != 2) {
          return -0x3ff2c566;
        }
        pbVar4 = (byte *)0x1e;
        *(undefined4 *)(param_1 + 0x160) = 1;
        if (0x1e < uVar3) {
          lVar2 = 0x400d3a98;
        }
      }
      piStack_50 = (int *)0x0;
      if (pbVar4 < apbStack_44[0]) {
        pbStack_4c = (byte *)0x0;
        if (pbVar4 == (byte *)0x0) {
          piStack_50 = param_2;
          (**(code **)(*param_2 + 4))(param_2);
        }
        else {
          lVar2 = fn_82E59158(param_2,pbVar4,&piStack_50);
          if (lVar2 < 0) goto LAB_82f3d094;
        }
        lVar2 = (**(code **)(**(int **)(param_1 + 0x54) + 0x28))
                          (*(int **)(param_1 + 0x54),*(undefined4 *)(param_1 + 0xc),piStack_50,
                           &pbStack_4c);
        if (-1 < lVar2) {
          pbVar4 = pbStack_4c + (int)pbVar4;
        }
      }
LAB_82f3d094:
      *param_3 = pbVar4;
      if ((int)lVar2 == 0) {
        lVar2 = fn_82F3CCA8(param_1);
      }
      if (piStack_50 != (int *)0x0) {
        (**(code **)(*piStack_50 + 8))(piStack_50);
        return lVar2;
      }
      return lVar2;
    }
  }
  return -0x7ff8ffa9;
}

