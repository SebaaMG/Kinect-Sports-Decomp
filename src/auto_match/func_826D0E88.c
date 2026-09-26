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


void fn_826D0E88(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 auStack_30 [12];
  
  (**(code **)(*param_1 + 0x1c))(param_1,0xffffffff821cc86c);
  param_2 = param_2 & 0xffff;
  iVar1 = fn_826CC3C8(param_3,param_2,auStack_30);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x34) != '\0') {
      fn_826D0660(param_3,auStack_30[0]);
      iVar1 = 0;
    }
    if (iVar1 != 0) {
      if (((*(int **)(iVar1 + 0x10) != (int *)0x0) && (*(int *)(param_3 + 0x30) == 0)) &&
         (piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0x10) + 0x24))(), piVar2 != (int *)0x0)) {
        uVar3 = 0;
        if (piVar2[1] != 0) {
          iVar4 = 0;
          do {
            if ((**(uint **)(iVar4 + *piVar2) & 4) != 0) {
              pbVar5 = (byte *)(iVar1 + 0x35);
              iVar1 = 0;
              *pbVar5 = *pbVar5 | 2;
              break;
            }
            uVar3 = uVar3 + 1;
            iVar4 = iVar4 + 4;
          } while (uVar3 < (uint)piVar2[1]);
        }
      }
      if (iVar1 != 0) {
        fn_826D0660(param_3,auStack_30[0]);
        return;
      }
    }
  }
  if (*(int *)(param_3 + 0x30) == 0) {
    iVar1 = fn_826CDA28(param_3,param_2);
    *(uint *)(iVar1 + 0xc) = param_2;
    *(undefined1 *)(iVar1 + 0x34) = 3;
    *(byte *)(iVar1 + 0x35) = *(byte *)(iVar1 + 0x35) | 2;
  }
  return;
}

