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
extern int fn_826CC3C8();
extern int fn_826CDA28();
extern int fn_826D0660();


void fn_826D0FD8(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 auStack_30 [12];
  
  uVar1 = *(ushort *)(param_1 + 1);
  (**(code **)(*param_1 + 0x1c))(param_1,0xffffffff821cc86c);
  iVar2 = fn_826CC3C8(param_2,uVar1,auStack_30);
  if (iVar2 != 0) {
    if (*(char *)(iVar2 + 0x34) != '\0') {
      fn_826D0660(param_2,auStack_30[0]);
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      if (((*(int **)(iVar2 + 0x10) != (int *)0x0) && (*(int *)(param_2 + 0x30) == 0)) &&
         (piVar3 = (int *)(**(code **)(**(int **)(iVar2 + 0x10) + 0x24))(), piVar3 != (int *)0x0)) {
        uVar4 = 0;
        if (piVar3[1] != 0) {
          iVar5 = 0;
          do {
            if ((**(uint **)(iVar5 + *piVar3) & 4) != 0) {
              pbVar6 = (byte *)(iVar2 + 0x35);
              iVar2 = 0;
              *pbVar6 = *pbVar6 | 2;
              break;
            }
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 4;
          } while (uVar4 < (uint)piVar3[1]);
        }
      }
      if (iVar2 != 0) {
        fn_826D0660(param_2,auStack_30[0]);
        return;
      }
    }
  }
  if (*(int *)(param_2 + 0x30) == 0) {
    iVar2 = fn_826CDA28(param_2,uVar1);
    *(uint *)(iVar2 + 0xc) = (uint)uVar1;
    *(undefined1 *)(iVar2 + 0x34) = 3;
    *(byte *)(iVar2 + 0x35) = *(byte *)(iVar2 + 0x35) | 2;
  }
  return;
}

