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
extern int fn_82C038C8();
extern int fn_82C09CA0();
extern int fn_82C1D908();
extern int fn_82F68CC0();


undefined8 fn_82C0B000(int param_1,int *param_2,uint *param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  byte *apbStack_70 [28];
  
  apbStack_70[0] = (byte *)0x0;
  *(undefined4 *)(param_4 + 4) = 0;
  uVar7 = 0x80;
  if (param_1 != 0) {
    if (param_2 == (int *)0x0) goto LAB_82c0b618;
    if (param_3 != (uint *)0x0) {
      *param_2 = 0;
      *param_3 = 0;
      cVar1 = *(char *)(param_1 + 0x20d);
      while (cVar1 != '\x01') {
        if (*(int *)(param_1 + 0x1a4) == 0) {
          if (*(longlong *)(param_1 + 0x198) != 0) {
LAB_82c0b0b0:
            if (*(int *)(param_1 + 0x1a4) == 0) {
              if (*(longlong *)(param_1 + 0x198) == 0) {
                return 3;
              }
              *(undefined4 *)(param_1 + 0x1a0) = 1;
              *(ulonglong *)(param_1 + 0x198) =
                   *(longlong *)(param_1 + 0x198) - (ulonglong)*(uint *)(param_1 + 0x48);
              *(uint *)(param_1 + 0x1a4) = *(uint *)(param_1 + 0x48);
            }
            goto LAB_82c0b0dc;
          }
          uVar3 = *(undefined4 *)(param_1 + 0x188);
          *(undefined4 *)(param_1 + 0x188) = 7;
          iVar4 = fn_82C09CA0(param_1);
          if (iVar4 == 0x12) goto LAB_82c0b5fc;
          *(undefined4 *)(param_1 + 0x188) = uVar3;
          if (*(char *)(param_1 + 0x20d) != '\x01') {
            if (iVar4 == 6) {
              *param_3 = 0;
              return 0xffffffff80040005;
            }
            if (iVar4 != 0) {
              return 3;
            }
            goto LAB_82c0b0b0;
          }
        }
        else {
LAB_82c0b0dc:
          if (*(uint *)(param_1 + 0x1a4) < uVar7) {
            uVar7 = *(uint *)(param_1 + 0x1a4);
          }
          uVar5 = fn_82C038C8(param_1,*(undefined8 *)(param_1 + 400),uVar7,param_2);
          *param_3 = uVar5;
          if (uVar5 != uVar7) {
            return 0xffffffff80040005;
          }
          if (*(int *)(param_1 + 0x228) == 0) {
            if (0x100 < uVar5) goto LAB_82c0b5ec;
            fn_82F68CC0(*(undefined4 *)(param_1 + 0x264),*param_2);
            *param_2 = *(int *)(param_1 + 0x264);
          }
          else {
            uVar6 = (ulonglong)*(ushort *)(param_1 + 0x206);
            if (*(uint *)(param_1 + 0x18) < uVar6) {
              return 0xffffffff80004005;
            }
            if ((ulonglong)*(uint *)(param_1 + 0x18) <
                ((uVar6 - *(uint *)(param_1 + 0x1a4) & 0xffffffff) - *(ulonglong *)(param_1 + 0x198)
                ) + (ulonglong)uVar5) {
              return 0xffffffff80004005;
            }
            fn_82F68CC0(((uVar6 - (*(ulonglong *)(param_1 + 0x198) & 0xffffffff)) -
                         (ulonglong)*(uint *)(param_1 + 0x1a4)) +
                         (ulonglong)*(uint *)(param_1 + 0x264),*param_2);
          }
          *(ulonglong *)(param_1 + 400) = (ulonglong)*param_3 + *(longlong *)(param_1 + 400);
          iVar4 = *(int *)(param_1 + 0x1a4) - *param_3;
          *(int *)(param_1 + 0x1a4) = iVar4;
          if (*(int *)(param_1 + 0x224) != 0) {
            return 3;
          }
          if (*(int *)(param_1 + 0x228) != 0) {
            if ((iVar4 == 0) && (*(longlong *)(param_1 + 0x198) == 0)) {
              iVar4 = fn_82C1D908(*(undefined4 *)(param_1 + 0x250),
                                        *(undefined4 *)(param_1 + 0x264),
                                        *(undefined2 *)(param_1 + 0x206),param_1 + 600);
              if (iVar4 < 0) goto LAB_82c0b510;
              *param_2 = *(int *)(param_1 + 0x264);
              *param_3 = (uint)*(ushort *)(param_1 + 0x206);
            }
            else {
              *param_2 = 0;
              *param_3 = 0;
            }
          }
          if (*(int *)(param_1 + 0x1a0) != 0) {
            *(undefined4 *)(param_1 + 0x1a0) = 0;
            if (*(ulonglong *)(param_1 + 0x198) ==
                ((ulonglong)*(ushort *)(param_1 + 0x206) - (ulonglong)*(uint *)(param_1 + 0x48) &
                0xffffffff)) {
              *(undefined4 *)(param_4 + 4) = 1;
              *(ulonglong *)(param_4 + 8) =
                   ((ulonglong)*(uint *)(param_1 + 0x200) - (ulonglong)*(uint *)(param_1 + 0x24) &
                   0xffffffff) * 10000;
            }
            if (*(int *)(param_1 + 0x228) == 0) {
              return 3;
            }
          }
          if (*(int *)(param_1 + 0x228) == 0) {
            return 0;
          }
          if (*param_2 != 0) {
            return 3;
          }
        }
        cVar1 = *(char *)(param_1 + 0x20d);
      }
      bVar2 = *(byte *)(param_1 + 0x20c);
      do {
        uVar6 = (ulonglong)bVar2 - 1;
        if (3 < (uVar6 & 0xffffffff)) {
          return 3;
        }
        if ((int)uVar6 == 0) {
          iVar4 = fn_82C038C8(param_1,*(undefined8 *)(param_1 + 400),1,apbStack_70);
          if (iVar4 != 1) {
            return 0xffffffff80040005;
          }
          if (apbStack_70[0] == (byte *)0x0) {
            return 0xffffffff80040005;
          }
          *(undefined2 *)(param_1 + 0x218) = 0;
          *(undefined4 *)(param_1 + 0x1a0) = 1;
          *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x48);
          *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + 1;
          bVar2 = *apbStack_70[0];
          *(ushort *)(param_1 + 0x210) = (ushort)bVar2;
          *(byte *)(param_1 + 0x20e) = bVar2;
          if (bVar2 != 0) {
            *(ushort *)(param_1 + 0x210) = (ushort)bVar2 - (short)*(undefined4 *)(param_1 + 0x48);
          }
          bVar2 = *(byte *)(param_1 + 0x20e);
          if ((ushort)bVar2 < *(ushort *)(param_1 + 0x20a)) {
            *(undefined1 *)(param_1 + 0x20c) = 2;
            *(ushort *)(param_1 + 0x208) = bVar2 + 1;
          }
          else {
            if (*(ushort *)(param_1 + 0x20a) == (ushort)bVar2) {
              *(ushort *)(param_1 + 0x208) = (ushort)bVar2;
            }
            *(undefined1 *)(param_1 + 0x20c) = 2;
          }
        }
        else if (uVar6 == 1) {
          if (*(int *)(param_1 + 0x1a4) != 0) {
LAB_82c0b4d0:
            if (*(uint *)(param_1 + 0x1a4) < uVar7) {
              uVar7 = *(uint *)(param_1 + 0x1a4);
            }
            uVar5 = fn_82C038C8(param_1,*(undefined8 *)(param_1 + 400),uVar7,param_2);
            *param_3 = uVar5;
            if (uVar5 != uVar7) {
              return 0xffffffff80040005;
            }
            if (*(int *)(param_1 + 0x228) != 0) {
LAB_82c0b510:
              *param_2 = 0;
              *param_3 = 0;
              return 3;
            }
            if ((uVar5 < 0x101) && (*param_2 != 0)) {
              fn_82F68CC0(*(undefined4 *)(param_1 + 0x264));
              *param_2 = *(int *)(param_1 + 0x264);
              *(ulonglong *)(param_1 + 400) = (ulonglong)*param_3 + *(longlong *)(param_1 + 400);
              *(uint *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) - *param_3;
              if (*(int *)(param_1 + 0x224) != 0) {
                return 3;
              }
              if (*(int *)(param_1 + 0x1a0) == 0) {
                return 0;
              }
              if ((uint)*(ushort *)(param_1 + 0x210) ==
                  (uint)*(byte *)(param_1 + 0x20e) - *(int *)(param_1 + 0x48)) {
                *(undefined4 *)(param_4 + 4) = 1;
                *(ulonglong *)(param_4 + 8) =
                     (((longlong)*(int *)(param_1 + 0x214) *
                       (longlong)(int)(uint)*(ushort *)(param_1 + 0x218) -
                      (ulonglong)*(uint *)(param_1 + 0x24)) + (ulonglong)*(uint *)(param_1 + 0x200)
                     & 0xffffffff) * 10000;
                *(short *)(param_1 + 0x218) = *(short *)(param_1 + 0x218) + 1;
              }
              *(undefined4 *)(param_1 + 0x1a0) = 0;
              return 3;
            }
LAB_82c0b5ec:
            *param_2 = 0;
            return 3;
          }
          if (*(short *)(param_1 + 0x210) != 0) {
            if (*(short *)(param_1 + 0x210) == 0) {
              return 3;
            }
            *(undefined4 *)(param_1 + 0x1a0) = 1;
            *(short *)(param_1 + 0x210) =
                 *(short *)(param_1 + 0x210) - (short)*(undefined4 *)(param_1 + 0x48);
            *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x48);
            goto LAB_82c0b4d0;
          }
          *(undefined1 *)(param_1 + 0x20c) = 3;
        }
        else if (uVar6 == 2) {
          if (*(ushort *)(param_1 + 0x208) < *(ushort *)(param_1 + 0x20a)) {
            iVar4 = fn_82C038C8(param_1,*(undefined8 *)(param_1 + 400),1,apbStack_70);
            if (iVar4 != 1) {
              return 0xffffffff80040005;
            }
            if (apbStack_70[0] == (byte *)0x0) {
              return 0xffffffff80040005;
            }
            *(undefined4 *)(param_1 + 0x1a0) = 1;
            *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + 1;
            *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x48);
            bVar2 = *apbStack_70[0];
            *(ushort *)(param_1 + 0x210) = (ushort)bVar2;
            *(byte *)(param_1 + 0x20e) = bVar2;
            if (bVar2 != 0) {
              *(ushort *)(param_1 + 0x210) = (ushort)bVar2 - (short)*(undefined4 *)(param_1 + 0x48);
            }
            *(undefined1 *)(param_1 + 0x20c) = 2;
            *(ushort *)(param_1 + 0x208) =
                 (ushort)*(byte *)(param_1 + 0x20e) + *(short *)(param_1 + 0x208) + 1;
          }
          else {
            *(undefined1 *)(param_1 + 0x20c) = 4;
          }
        }
        else {
          uVar3 = *(undefined4 *)(param_1 + 0x188);
          *(undefined1 *)(param_1 + 0x20c) = 0;
          *(undefined8 *)(param_1 + 0x198) = 0;
          *(undefined1 *)(param_1 + 0x20d) = 0;
          *(undefined4 *)(param_1 + 0x188) = 7;
          iVar4 = fn_82C09CA0(param_1);
          if (iVar4 == 0x12) {
LAB_82c0b5fc:
            *param_3 = 0;
            return 0;
          }
          *(undefined4 *)(param_1 + 0x188) = uVar3;
          if (iVar4 != 0) {
            return 3;
          }
        }
        bVar2 = *(byte *)(param_1 + 0x20c);
      } while( true );
    }
  }
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
LAB_82c0b618:
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  return 0xffffffff80070057;
}

