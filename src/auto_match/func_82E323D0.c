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
extern int fn_82A6C3A0();
extern int fn_82C2B590();
extern int fn_82C2B5A0();
extern int fn_82C2B5C0();
extern int fn_82C2B7F0();
extern int fn_82E32310();
extern int fn_82E66FE0();
extern int fn_82E68FA8();


undefined8 fn_82E323D0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  int iVar6;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    fn_82E68FA8(param_1[0x423b]);
    fn_82E66FE0(param_1 + 0x41fe);
    piVar5 = param_1 + 0x4235;
    if (*piVar5 != 0) {
      if ((ulonglong)*(ushort *)(param_1 + 0x4234) != 0xffffffffffffffff) {
        uVar2 = 0;
        do {
          if (iVar1 != 0) {
            if ((*(int *)(*piVar5 + uVar2 * 0x270 + 0x10) != 0) && (0 < param_1[0x4236])) {
              uVar4 = 0;
              do {
                fn_82A6C3A0((ulonglong)*(uint *)(*piVar5 + uVar2 * 0x270 + 0x10) +
                                  uVar4 * 0x40 + 0x34,*(undefined2 *)(iVar1 + 0x22));
                uVar4 = uVar4 + 1 & 0xffff;
              } while ((int)uVar4 < param_1[0x4236]);
            }
          }
          iVar3 = uVar2 * 0x270;
          if (*(int *)(*piVar5 + iVar3 + 0x10) != 0) {
            fn_82C2B590();
            *(undefined4 *)(*piVar5 + iVar3 + 0x10) = 0;
          }
          fn_82C2B5A0(*(undefined4 *)(*piVar5 + iVar3 + 0x1bc));
          fn_82C2B5A0(*(undefined4 *)(*piVar5 + iVar3 + 500));
          fn_82C2B5A0(*(undefined4 *)(*piVar5 + iVar3 + 0x200));
          fn_82E32310(param_1,*(undefined4 *)(*piVar5 + iVar3 + 0x214));
          if (*(int *)(*piVar5 + iVar3 + 0x214) != 0) {
            fn_82C2B590();
            *(undefined4 *)(*piVar5 + iVar3 + 0x214) = 0;
          }
          *(undefined4 *)(*piVar5 + iVar3 + 0x214) = 0;
          if (*(int *)(*piVar5 + iVar3 + 0x218) != 0) {
            fn_82C2B590();
            *(undefined4 *)(*piVar5 + iVar3 + 0x218) = 0;
          }
          if (*(int *)(*piVar5 + iVar3 + 0x220) != 0) {
            fn_82C2B590();
            *(undefined4 *)(*piVar5 + iVar3 + 0x220) = 0;
          }
          if (*(int *)(*piVar5 + iVar3 + 0x228) != 0) {
            fn_82C2B590();
            *(undefined4 *)(*piVar5 + iVar3 + 0x228) = 0;
          }
          if (*(int *)(*piVar5 + iVar3 + 0x25c) != 0) {
            fn_82C2B590();
            *(undefined4 *)(*piVar5 + iVar3 + 0x25c) = 0;
          }
          if (*(int *)(*piVar5 + iVar3 + 0x264) != 0) {
            fn_82C2B590();
            *(undefined4 *)(*piVar5 + iVar3 + 0x264) = 0;
          }
          uVar2 = uVar2 + 1 & 0xffff;
        } while (uVar2 < *(ushort *)(param_1 + 0x4234) + 1);
      }
    }
    if (*piVar5 != 0) {
      fn_82C2B590();
      *piVar5 = 0;
    }
    if (iVar1 != 0) {
      if ((param_1[0x1d95] != 0) && (*(short *)(iVar1 + 0x22) != 0)) {
        uVar2 = 0;
        do {
          iVar3 = *(int *)(param_1[0x1d95] + uVar2 * 4);
          if (iVar3 != 0) {
            fn_82C2B590(iVar3);
            *(undefined4 *)(param_1[0x1d95] + uVar2 * 4) = 0;
          }
          uVar2 = uVar2 + 1 & 0xffff;
        } while (uVar2 < *(ushort *)(iVar1 + 0x22));
      }
      if ((param_1[0x1d96] != 0) && (*(short *)(iVar1 + 0x22) != 0)) {
        uVar2 = 0;
        iVar3 = 0;
        do {
          fn_82C2B5A0(*(undefined4 *)(iVar3 + param_1[0x1d96]));
          uVar2 = uVar2 + 1 & 0xffff;
          iVar3 = uVar2 << 2;
        } while (uVar2 < *(ushort *)(iVar1 + 0x22));
      }
      if ((param_1[0x1d97] != 0) && (*(short *)(iVar1 + 0x22) != 0)) {
        uVar2 = 0;
        iVar3 = 0;
        do {
          fn_82C2B5A0(*(undefined4 *)(iVar3 + param_1[0x1d97]));
          uVar2 = uVar2 + 1 & 0xffff;
          iVar3 = uVar2 << 2;
        } while (uVar2 < *(ushort *)(iVar1 + 0x22));
      }
    }
    if (param_1[0x1d95] != 0) {
      fn_82C2B590();
      param_1[0x1d95] = 0;
    }
    if (param_1[0x1d96] != 0) {
      fn_82C2B590();
      param_1[0x1d96] = 0;
    }
    if (param_1[0x1d97] != 0) {
      fn_82C2B590();
      param_1[0x1d97] = 0;
    }
    if (param_1[0x1d98] != 0) {
      fn_82C2B590();
      param_1[0x1d98] = 0;
    }
    if (param_1[0x1d99] != 0) {
      fn_82C2B590();
      param_1[0x1d99] = 0;
    }
    fn_82C2B5A0(param_1[0x1da9]);
    uVar2 = 0;
    do {
      if (param_1[uVar2 + 0x1daa] != 0) {
        fn_82C2B590();
        param_1[uVar2 + 0x1daa] = 0;
      }
      uVar2 = uVar2 + 1 & 0xffff;
    } while (uVar2 < 8);
    fn_82C2B5A0(param_1[0x1db2]);
    if (param_1[0x423c] != 0) {
      fn_82C2B590();
      param_1[0x423c] = 0;
    }
    if (param_1[0x423d] != 0) {
      fn_82C2B590();
      param_1[0x423d] = 0;
    }
    if (param_1[0x1db3] != 0) {
      fn_82C2B590();
      param_1[0x1db3] = 0;
    }
    fn_82C2B5A0(param_1[0x1db4]);
    fn_82C2B5A0(param_1[0x1db5]);
    fn_82C2B5A0(param_1[0x1db6]);
    fn_82C2B5A0(param_1[0x1db7]);
    fn_82C2B5A0(param_1[0x1df4]);
    fn_82C2B5A0(param_1[0x1df5]);
    fn_82C2B5A0(param_1[0x1dd5]);
    fn_82C2B5A0(param_1[0x1dd6]);
    fn_82C2B5A0(param_1[0x1df6]);
    fn_82C2B5A0(param_1[0x1dfb]);
    fn_82C2B5A0(param_1[0x1df7]);
    fn_82C2B5A0(param_1[0x1dfa]);
    if (param_1[0x1df8] != 0) {
      fn_82C2B590();
      param_1[0x1df8] = 0;
    }
    if (param_1[0x1df9] != 0) {
      fn_82C2B590();
      param_1[0x1df9] = 0;
    }
    if (param_1[0x1dfc] != 0) {
      fn_82C2B590();
      param_1[0x1dfc] = 0;
    }
    if (param_1[0x1dfd] != 0) {
      fn_82C2B590();
      param_1[0x1dfd] = 0;
    }
    if (param_1[0x1dfe] != 0) {
      fn_82C2B590();
      param_1[0x1dfe] = 0;
    }
    if (param_1[0x1dff] != 0) {
      fn_82C2B590();
      param_1[0x1dff] = 0;
    }
    if (param_1[15999] != 0) {
      fn_82C2B590();
      param_1[15999] = 0;
    }
    if (param_1[16000] != 0) {
      fn_82C2B590();
      param_1[16000] = 0;
    }
    if (param_1[0x3e81] != 0) {
      fn_82C2B590();
      param_1[0x3e81] = 0;
    }
    fn_82C2B5A0(param_1[0x1e01]);
    if (param_1[0x1e02] != 0) {
      if ((iVar1 != 0) && (1 < *(int *)(iVar1 + 0xf4))) {
        uVar2 = 1;
        iVar3 = 4;
        do {
          fn_82C2B5A0(*(undefined4 *)(iVar3 + param_1[0x1e02]));
          uVar2 = uVar2 + 1 & 0xffff;
          iVar3 = uVar2 << 2;
        } while ((int)uVar2 < *(int *)(iVar1 + 0xf4));
      }
      if (param_1[0x1e02] != 0) {
        fn_82C2B590();
        param_1[0x1e02] = 0;
      }
    }
    piVar5 = param_1 + 0x41ca;
    if (*piVar5 != 0) {
      if (iVar1 != 0) {
        iVar3 = 0;
        if (0 < (longlong)*(int *)(iVar1 + 0xf4) * (longlong)*(int *)(iVar1 + 0xf4)) {
          iVar6 = 0;
          do {
            if (*(int *)(*piVar5 + iVar6) != 0) {
              fn_82C2B590(*(int *)(*piVar5 + iVar6));
              *(undefined4 *)(*piVar5 + iVar6) = 0;
            }
            iVar3 = iVar3 + 1;
            iVar6 = iVar6 + 4;
          } while (iVar3 < *(int *)(iVar1 + 0xf4) * *(int *)(iVar1 + 0xf4));
        }
      }
      if (*piVar5 != 0) {
        fn_82C2B590();
        *piVar5 = 0;
      }
    }
    if (param_1[0x41cb] != 0) {
      fn_82C2B5A0();
    }
    if (param_1[0x41f7] != 0) {
      fn_82C2B590();
      param_1[0x41f7] = 0;
    }
    if (param_1[0x41f8] != 0) {
      fn_82C2B590();
      param_1[0x41f8] = 0;
    }
    if (param_1[0x41f9] != 0) {
      fn_82C2B590();
      param_1[0x41f9] = 0;
    }
    if (param_1[0x41fa] != 0) {
      fn_82C2B590();
      param_1[0x41fa] = 0;
    }
    if (param_1[0x41fb] != 0) {
      fn_82C2B590();
      param_1[0x41fb] = 0;
    }
    if (param_1[0x1dd9] != 0) {
      fn_82C2B5A0();
    }
    if (param_1[0x1dd9] != 0) {
      fn_82C2B5A0(param_1[0x1dda]);
    }
    if (param_1[0x1ddd] != 0) {
      fn_82C2B590();
      param_1[0x1ddd] = 0;
    }
    if (param_1[0x1dde] != 0) {
      fn_82C2B590();
      param_1[0x1dde] = 0;
    }
    if (param_1[0x41cd] != 0) {
      fn_82C2B590();
      param_1[0x41cd] = 0;
    }
    if (param_1[0x4270] != 0) {
      if (param_1[0x1de1] != 0) {
        fn_82C2B590();
        param_1[0x1de1] = 0;
      }
      if (param_1[0x1de2] != 0) {
        fn_82C2B590();
        param_1[0x1de2] = 0;
      }
      if (param_1[0x1de3] != 0) {
        fn_82C2B590();
        param_1[0x1de3] = 0;
      }
    }
    if (param_1[0x1de4] != 0) {
      fn_82C2B590();
      param_1[0x1de4] = 0;
    }
    if (param_1[0x1de5] != 0) {
      fn_82C2B590();
      param_1[0x1de5] = 0;
    }
    if (param_1[0x1de6] != 0) {
      fn_82C2B590();
      param_1[0x1de6] = 0;
    }
    if (param_1[0x1ddc] != 0) {
      fn_82C2B590();
      param_1[0x1ddc] = 0;
    }
    if (param_1[0x1ded] != 0) {
      fn_82C2B590();
      param_1[0x1ded] = 0;
    }
    if (param_1[0x1dee] != 0) {
      fn_82C2B590();
      param_1[0x1dee] = 0;
    }
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x118) != 0)) {
      fn_82C2B5A0(*(undefined4 *)(iVar1 + 0x1ac));
      *(undefined4 *)(iVar1 + 0x1b0) = 0;
      *(undefined4 *)(iVar1 + 0x1b4) = 0;
    }
    if (param_1[0x4238] != 0) {
      fn_82C2B590();
      param_1[0x4238] = 0;
    }
    piVar5 = param_1 + 0x4237;
    fn_82E32310(param_1,*piVar5);
    fn_82C2B7F0(iVar1,*piVar5);
    *piVar5 = 0;
    if (param_1[0x426f] != 0) {
      fn_82C2B590();
      param_1[0x426f] = 0;
    }
    if (param_1[0x4248] != 0) {
      fn_82C2B590();
      param_1[0x4248] = 0;
    }
    piVar5 = param_1 + 0x424e;
    if ((*piVar5 != 0) && (iVar1 != 0)) {
      if (*(short *)(iVar1 + 0x22) != 0) {
        uVar2 = 0;
        do {
          iVar3 = *(int *)(uVar2 * 4 + *piVar5);
          if (iVar3 != 0) {
            fn_82C2B590(iVar3);
            *(undefined4 *)(uVar2 * 4 + *piVar5) = 0;
          }
          uVar2 = uVar2 + 1 & 0xffff;
        } while (uVar2 < *(ushort *)(iVar1 + 0x22));
      }
      if (*piVar5 != 0) {
        fn_82C2B590();
        *piVar5 = 0;
      }
    }
    piVar5 = param_1 + 0x424f;
    if ((*piVar5 != 0) && (iVar1 != 0)) {
      if (*(short *)(iVar1 + 0x22) != 0) {
        uVar2 = 0;
        do {
          iVar3 = *(int *)(*piVar5 + uVar2 * 4);
          if (iVar3 != 0) {
            fn_82C2B590(iVar3);
            *(undefined4 *)(*piVar5 + uVar2 * 4) = 0;
          }
          uVar2 = uVar2 + 1 & 0xffff;
        } while (uVar2 < *(ushort *)(iVar1 + 0x22));
      }
      if (*piVar5 != 0) {
        fn_82C2B590();
        *piVar5 = 0;
      }
    }
    piVar5 = param_1 + 0x4250;
    if ((*piVar5 != 0) && (iVar1 != 0)) {
      iVar3 = 0;
      do {
        if ((*(int *)(iVar3 + *piVar5) != 0) && (*(short *)(iVar1 + 0x22) != 0)) {
          uVar2 = 0;
          do {
            iVar6 = *(int *)(*(int *)(iVar3 + *piVar5) + uVar2 * 4);
            if (iVar6 != 0) {
              fn_82C2B590(iVar6);
              *(undefined4 *)(*(int *)(iVar3 + *piVar5) + uVar2 * 4) = 0;
            }
            uVar2 = uVar2 + 1 & 0xffff;
          } while (uVar2 < *(ushort *)(iVar1 + 0x22));
        }
        if (*(int *)(iVar3 + *piVar5) != 0) {
          fn_82C2B590(*(int *)(iVar3 + *piVar5));
          *(undefined4 *)(iVar3 + *piVar5) = 0;
        }
        iVar3 = iVar3 + 4;
      } while (iVar3 < 0x70);
      if (*piVar5 != 0) {
        fn_82C2B590();
        *piVar5 = 0;
      }
    }
    if (param_1[0x4251] != 0) {
      fn_82C2B590();
      param_1[0x4251] = 0;
    }
    if (param_1[0x42b6] != 0) {
      fn_82C2B590();
      param_1[0x42b6] = 0;
    }
    if (param_1[0x42b3] != 0) {
      fn_82C2B590();
      param_1[0x42b3] = 0;
    }
    if (param_1[0x42b4] != 0) {
      fn_82C2B590();
      param_1[0x42b4] = 0;
    }
    if (param_1[0x42b5] != 0) {
      fn_82C2B590();
      param_1[0x42b5] = 0;
    }
    if (param_1[0x42b7] != 0) {
      fn_82C2B590();
      param_1[0x42b7] = 0;
    }
    if (param_1[0x42b8] != 0) {
      fn_82C2B590();
      param_1[0x42b8] = 0;
    }
    if (param_1[0x42b9] != 0) {
      fn_82C2B590();
      param_1[0x42b9] = 0;
    }
    if (param_1[0x42ba] != 0) {
      fn_82C2B590();
      param_1[0x42ba] = 0;
    }
    if (*param_1 != 0) {
      fn_82C2B5C0();
      *param_1 = 0;
    }
  }
  return 0;
}

