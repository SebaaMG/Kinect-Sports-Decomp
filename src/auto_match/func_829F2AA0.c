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
extern unsigned int iStack00000028;
extern unsigned int iStack0000002c;
extern unsigned int iStack00000030;
extern unsigned int iStack00000034;


void fn_829F2AA0(int param_1,int param_2,ushort param_3,longlong param_4,longlong param_5,
                  int param_6)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iStack00000028;
  int iStack0000002c;
  int iStack00000030;
  int iStack00000034;
  
  iStack00000030 = (int)((ulonglong)param_5 >> 0x20);
  if (param_5 < 0) {
    return;
  }
  if (0x4f < iStack00000030) {
    return;
  }
  iStack00000034 = (int)param_5;
  if (iStack00000034 < 0) {
    return;
  }
  if (0x3b < iStack00000034) {
    return;
  }
  iStack00000028 = (int)((ulonglong)param_4 >> 0x20);
  if (param_4 < 0) {
    return;
  }
  if (0xb < iStack00000028) {
    return;
  }
  iStack0000002c = (int)param_4;
  if (iStack0000002c < 0) {
    return;
  }
  if (0xb < iStack0000002c) {
    return;
  }
  iVar4 = (iStack00000034 * param_2 + iStack00000030) * 2;
  iVar5 = iVar4 + param_1;
  uVar2 = (uint)(*(ushort *)(iVar4 + param_1) >> 3);
  if ((0 < iStack00000030) && (0 < iStack00000028)) {
    if ((0 < iStack00000034) &&
       ((((0 < iStack0000002c &&
          (iVar4 = iStack0000002c * 0xc + iStack00000028,
          *(int *)((iVar4 + -0xd) * 4 + param_6) != 0)) &&
         (uVar1 = *(ushort *)(((iStack00000034 + -1) * param_2 + iStack00000030) * 2 + param_1 + -2)
         , (int)(uVar2 - ((int)(uint)uVar1 >> 3)) < 0x50)) && ((uVar1 & 7) == param_3))))
    goto LAB_829f2d5c;
    iVar4 = iStack0000002c * 0xc + iStack00000028;
    puVar3 = (undefined4 *)(iVar4 * 4 + param_6);
    if ((((puVar3[-1] != 0) &&
         (uVar1 = *(ushort *)(iVar5 + -2), (int)(uVar2 - ((int)(uint)uVar1 >> 3)) < 0x50)) &&
        ((uVar1 & 7) == param_3)) ||
       (((iStack00000034 < 0x3b && (iStack0000002c < 0xb)) &&
        ((*(int *)((iVar4 + 0xb) * 4 + param_6) != 0 &&
         ((uVar1 = *(ushort *)(((iStack00000034 + 1) * param_2 + iStack00000030) * 2 + param_1 + -2)
          , (int)(uVar2 - ((int)(uint)uVar1 >> 3)) < 0x50 && ((uVar1 & 7) == param_3))))))))
    goto LAB_829f2e08;
  }
  if (((iStack00000034 < 1) ||
      ((((iStack0000002c < 1 ||
         (iVar4 = iStack0000002c * 0xc + iStack00000028, *(int *)((iVar4 + -0xc) * 4 + param_6) == 0
         )) || (uVar1 = *(ushort *)
                         (((iStack00000034 + -1) * param_2 + iStack00000030) * 2 + param_1),
               0x4f < (int)(uVar2 - ((int)(uint)uVar1 >> 3)))) || ((uVar1 & 7) != param_3)))) &&
     (((0x3a < iStack00000034 || (10 < iStack0000002c)) ||
      ((iVar4 = iStack0000002c * 0xc + iStack00000028, *(int *)((iVar4 + 0xc) * 4 + param_6) == 0 ||
       ((uVar1 = *(ushort *)(((iStack00000034 + 1) * param_2 + iStack00000030) * 2 + param_1),
        0x4f < (int)(uVar2 - ((int)(uint)uVar1 >> 3)) || ((uVar1 & 7) != param_3)))))))) {
    if (0x4e < iStack00000030) {
      return;
    }
    if (10 < iStack00000028) {
      return;
    }
    if ((((iStack00000034 < 1) || (iStack0000002c < 1)) ||
        (iVar4 = iStack0000002c * 0xc + iStack00000028, *(int *)((iVar4 + -0xb) * 4 + param_6) == 0)
        ) || ((uVar1 = *(ushort *)
                        (((iStack00000034 + -1) * param_2 + iStack00000030 + 1) * 2 + param_1),
              0x4f < (int)(uVar2 - ((int)(uint)uVar1 >> 3)) || ((uVar1 & 7) != param_3)))) {
      iStack00000028 = iStack0000002c * 0xc + iStack00000028;
      puVar3 = (undefined4 *)(iStack00000028 * 4 + param_6);
      if ((puVar3[1] == 0) ||
         ((uVar1 = *(ushort *)(iVar5 + 2), 0x4f < (int)(uVar2 - ((int)(uint)uVar1 >> 3)) ||
          ((uVar1 & 7) != param_3)))) {
        if (0x3a < iStack00000034) {
          return;
        }
        if (10 < iStack0000002c) {
          return;
        }
        if (*(int *)((iStack00000028 + 0xd) * 4 + param_6) == 0) {
          return;
        }
        uVar1 = *(ushort *)(((iStack00000034 + 1) * param_2 + iStack00000030 + 1) * 2 + param_1);
        if (0x4f < (int)(uVar2 - ((int)(uint)uVar1 >> 3))) {
          return;
        }
        if ((uVar1 & 7) != param_3) {
          return;
        }
      }
LAB_829f2e08:
      *puVar3 = 1;
      return;
    }
  }
LAB_829f2d5c:
  *(undefined4 *)(iVar4 * 4 + param_6) = 1;
  return;
}

