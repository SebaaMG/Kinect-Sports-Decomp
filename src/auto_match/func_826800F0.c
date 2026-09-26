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


undefined8 fn_826800F0(int *param_1,uint *param_2,undefined4 *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint *puVar8;
  int iVar7;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = uVar1 >> 0x10;
  if ((uVar3 & 0x200) != 0) {
    param_1[2] = (uVar2 >> 0x10 | uVar2 & 0xffff0000) >> 8 & 0xffff |
                 ((uVar2 << 0x10 | uVar2 & 0xffff) & 0xffff00) << 8;
  }
  uVar2 = param_2[2];
  if ((uVar3 & 0x400) != 0) {
    param_1[1] = (uVar2 >> 0x10 | uVar2 & 0xffff0000) >> 8 & 0xffff |
                 ((uVar2 << 0x10 | uVar2 & 0xffff) & 0xffff00) << 8;
  }
  uVar2 = param_2[3];
  uVar4 = ((ulonglong)uVar3 & 0x800) >> 8;
  uVar6 = ((ulonglong)(uVar2 >> 0x10) | (ulonglong)uVar2 & 0xffffffffffff0000) >> 8 & 0xffff |
          ((((ulonglong)uVar2 & 0xffff) << 0x10 | (ulonglong)uVar2 & 0xffffffff0000ffff) & 0xffff00)
          << 8;
  iVar7 = (int)uVar6;
  if (uVar4 == 0) {
    if ((uVar1 & 0x800) != 0) {
      trapWord(6,(ulonglong)(uint)param_1[2],0);
      iVar7 = (int)(uVar6 / (uint)param_1[2] << 2);
      goto LAB_826801bc;
    }
  }
  else {
LAB_826801bc:
    param_1[3] = iVar7;
  }
  uVar2 = param_2[5];
  if ((uVar1 & 0x200) != 0) {
    param_1[6] = (uVar2 >> 0x10 | uVar2 & 0xffff0000) >> 8 & 0xffff |
                 ((uVar2 << 0x10 | uVar2 & 0xffff) & 0xffff00) << 8;
  }
  if ((uVar1 & 0x100000) == 0) {
    puVar8 = param_2 + 0x19;
LAB_82680440:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = puVar8 + 5;
    }
    uVar5 = 1;
  }
  else {
    uVar1 = param_2[0x11];
    if ((((ulonglong)(uVar1 >> 0x10) | (ulonglong)uVar1 & 0xffffffffffff0000) >> 8 & 0xffff |
        ((((ulonglong)uVar1 & 0xffff) << 0x10 | (ulonglong)uVar1 & 0xffffffff0000ffff) & 0xffff00)
        << 8) == 0x20) {
      uVar1 = param_2[0x13];
      uVar2 = param_2[0x12] >> 0x18;
      puVar8 = param_2 + 0x14;
      uVar6 = ((ulonglong)(uVar1 >> 0x10) | (ulonglong)uVar1 & 0xffffffffffff0000) >> 8 & 0xffff |
              ((((ulonglong)uVar1 & 0xffff) << 0x10 | (ulonglong)uVar1 & 0xffffffff0000ffff) &
              0xffff00) << 8;
      if ((uVar2 & 4) == 0) {
        if (((uVar2 & 0x40) != 0) || ((uVar2 & 2) != 0)) {
          uVar1 = *puVar8;
          uVar6 = ((ulonglong)(uVar1 >> 0x10) | (ulonglong)uVar1 & 0xffffffffffff0000) >> 8 & 0xffff
                  | ((((ulonglong)uVar1 & 0xffff) << 0x10 | (ulonglong)uVar1 & 0xffffffff0000ffff) &
                    0xffff00) << 8;
          if (param_4 != (uint *)0x0) {
            *param_4 = (uint)uVar6;
          }
          if (uVar6 == 8) {
            if ((uVar2 & 2) != 0) {
              iVar7 = 9;
              goto LAB_82680344;
            }
          }
          else if (uVar6 == 0x18) {
            iVar7 = 2;
LAB_82680344:
            *param_1 = iVar7;
          }
          else if (uVar6 == 0x20) {
            *param_1 = 1;
          }
          if (uVar4 == 0) {
            param_1[3] = ((uint)uVar6 >> 3) * param_1[1];
          }
          uVar1 = param_2[0x15];
          if (param_4 != (uint *)0x0) {
            param_4[1] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
                         ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
          }
          uVar1 = param_2[0x16];
          if (param_4 != (uint *)0x0) {
            param_4[2] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
                         ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
          }
          uVar1 = param_2[0x17];
          if (param_4 != (uint *)0x0) {
            param_4[3] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
                         ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
          }
          uVar1 = param_2[0x18];
          puVar8 = param_2 + 0x19;
          if ((param_4 != (uint *)0x0) && ((uVar2 & 1) != 0)) {
            *(undefined1 *)(param_4 + 5) = 1;
            param_4[4] = (uVar1 >> 0x10 | uVar1 & 0xffff0000) >> 8 & 0xffff |
                         ((uVar1 << 0x10 | uVar1 & 0xffff) & 0xffff00) << 8;
          }
        }
      }
      else {
        if (uVar6 == 0x35545844) {
          iVar7 = 0xc;
LAB_826802c0:
          *param_1 = iVar7;
        }
        else {
          if (uVar6 == 0x33545844) {
            iVar7 = 0xb;
            goto LAB_826802c0;
          }
          if (uVar6 == 0x31545844) {
            iVar7 = 10;
            goto LAB_826802c0;
          }
        }
        puVar8 = param_2 + 0x19;
      }
      if (*param_1 != 0) goto LAB_82680440;
    }
    uVar5 = 0;
  }
  return uVar5;
}

