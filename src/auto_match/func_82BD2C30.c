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
extern unsigned int lbl_820E7F9E;
extern unsigned int lbl_820E83A8;
extern unsigned int lbl_8316FF50;


ulonglong fn_82BD2C30(int *param_1,byte *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  lVar3 = 0;
  uVar4 = 0;
  iVar1 = (**(code **)(*param_1 + 4))();
  if (0 < iVar1) {
    if ((&lbl_820E7F9E)[*(int *)(param_1[0x3b] + 0x50) * 0xc] != 0) {
      uVar4 = 1;
      if (*(char *)((int)param_1 + 0x9f) != '\0') {
        lVar3 = 1;
      }
    }
    uVar5 = (ulonglong)
            *(uint *)(&lbl_820E83A8 +
                     (uint)(byte)(&lbl_820E7F9E)[*(int *)(param_1[0x3b] + 0x50) * 0xc] * 4);
    if (*(uint *)(&lbl_820E83A8 +
                 (uint)(byte)(&lbl_820E7F9E)[*(int *)(param_1[0x3b] + 0x50) * 0xc] * 4) ==
        0xffffffff) goto LAB_82bd2df4;
  }
  if ((*(uint *)(&lbl_8316FF50 + param_1[6] * 0x34) >> 1 & 1) != 0) {
    iVar1 = (**(code **)(*param_1 + 4))(param_1);
    if (iVar1 < 2) {
      cVar2 = (**(code **)(*param_1 + 0x4c))(param_1);
      if (cVar2 == '\0') goto LAB_82bd2d7c;
    }
    cVar2 = (**(code **)(*param_1 + 0x4c))(param_1);
    if ((ulonglong)(byte)(&lbl_820E7F9E)[*(int *)(param_1[(cVar2 == '\0') + 0x3b] + 0x50) * 0xc] !=
        0) {
      uVar4 = uVar4 + 1;
      if (*(char *)((int)param_1 + (cVar2 == '\0') + 0x9f) != '\0') {
        lVar3 = lVar3 + 1;
      }
    }
    uVar5 = (ulonglong)
            *(uint *)(&lbl_820E83A8 +
                     (int)((uVar5 * 5 +
                            (ulonglong)
                            (byte)(&lbl_820E7F9E)
                                  [*(int *)(param_1[(cVar2 == '\0') + 0x3b] + 0x50) * 0xc] &
                           0xffffffff) << 2));
  }
LAB_82bd2d7c:
  if ((int)uVar5 != -1) {
    if (((*(uint *)(&lbl_8316FF50 + param_1[6] * 0x34) >> 1 & 1) != 0) &&
       (iVar1 = (**(code **)(*param_1 + 4))(param_1), 2 < iVar1)) {
      if ((ulonglong)(byte)(&lbl_820E7F9E)[*(int *)(param_1[0x3d] + 0x50) * 0xc] != 0) {
        uVar4 = uVar4 + 1;
        if (*(char *)((int)param_1 + 0xa1) != '\0') {
          lVar3 = lVar3 + 1;
        }
      }
      uVar5 = (ulonglong)
              *(uint *)(&lbl_820E83A8 +
                       (int)((uVar5 * 5 +
                              (ulonglong)(byte)(&lbl_820E7F9E)[*(int *)(param_1[0x3d] + 0x50) * 0xc]
                             & 0xffffffff) << 2));
    }
  }
LAB_82bd2df4:
  *param_2 = (byte)((ulonglong)-lVar3 >> 0x18) >> 7;
  cVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  if (((cVar2 != '\0') && (uVar4 != 0)) || ((*param_2 != 0 && ((uint)lVar3 < uVar4)))) {
    uVar5 = 0xffffffffffffffff;
  }
  return uVar5;
}

