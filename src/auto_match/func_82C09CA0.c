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
extern int fn_82C15DF0();
extern int fn_82C16418();


undefined8 fn_82C09CA0(ulonglong *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x31);
  do {
    uVar4 = (ulonglong)uVar3 - 3;
    if (5 < (uVar4 & 0xffffffff)) {
      return 0x11;
    }
    bVar1 = (int)uVar4 != 0;
    if (uVar4 == 1 && bVar1) {
      if (*(uint *)((int)param_1 + 0x21c) < *(uint *)((int)param_1 + 0x1ec)) {
        iVar2 = fn_82C16418(param_1);
        if (iVar2 != 0) goto LAB_82c09e30;
        *(short *)(param_1 + 0x44) =
             (*(short *)((int)param_1 + 0x1f2) - *(short *)((int)param_1 + 0x206)) +
             *(short *)(param_1 + 0x3e);
        if (*(char *)((int)param_1 + 0x204) == '\x01') {
          *(undefined4 *)(param_1 + 0x31) = 8;
          *(undefined1 *)((int)param_1 + 0x20d) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x31) = 5;
          *(undefined1 *)((int)param_1 + 0x20d) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x31) = 3;
      }
    }
    else if (uVar4 == 2 && bVar1) {
      if ((ushort)*(byte *)((int)param_1 + 500) == *(ushort *)((int)param_1 + 0xe4)) {
        uVar3 = *(uint *)(param_1 + 9);
        iVar2 = *(int *)((int)param_1 + 0x224);
        param_1[0x32] = (ulonglong)*(ushort *)(param_1 + 0x44) + *param_1;
        param_1[0x33] = (ulonglong)*(ushort *)((int)param_1 + 0x206) - (ulonglong)uVar3 & 0xffffffff
        ;
LAB_82c09df4:
        *(uint *)((int)param_1 + 0x1a4) = uVar3;
        *(undefined4 *)(param_1 + 0x34) = 1;
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x31) = 6;
          return 0;
        }
        return 0xe;
      }
LAB_82c09e30:
      *(undefined4 *)(param_1 + 0x31) = 7;
    }
    else {
      if (uVar4 == 3 && bVar1) {
        return 0x11;
      }
      if (uVar4 == 4 && bVar1) {
        *(undefined4 *)(param_1 + 0x31) = 4;
        *(int *)((int)param_1 + 0x21c) = *(int *)((int)param_1 + 0x21c) + 1;
      }
      else {
        if (bVar1) {
          if ((ushort)*(byte *)((int)param_1 + 500) == *(ushort *)((int)param_1 + 0xe4)) {
            iVar2 = *(int *)((int)param_1 + 0x224);
            uVar3 = *(uint *)(param_1 + 9);
            *(undefined2 *)(param_1 + 0x41) = 0;
            param_1[0x32] = (ulonglong)*(ushort *)(param_1 + 0x44) + *param_1;
            *(undefined1 *)((int)param_1 + 0x20c) = 1;
            goto LAB_82c09df4;
          }
          goto LAB_82c09e30;
        }
        uVar4 = param_1[1];
        if (param_1[6] < uVar4) {
          return 6;
        }
        *param_1 = uVar4;
        param_1[1] = *(uint *)((int)param_1 + 0x14) + uVar4;
        iVar2 = fn_82C15DF0(param_1);
        if (iVar2 == 3) {
          param_1[1] = *param_1;
          return 0x12;
        }
        if (iVar2 != 0) {
          return 4;
        }
        if ((*(int *)(param_1 + 0x36) == 0) || (*(int *)(param_1 + 0x35) == 0)) {
          *(undefined4 *)(param_1 + 0x31) = 4;
          *(undefined4 *)((int)param_1 + 0x21c) = 0;
        }
      }
    }
    uVar3 = *(uint *)(param_1 + 0x31);
  } while( true );
}

