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
extern int fn_82FB7980();
extern int fn_82FB8288();


undefined2 fn_82FB8420(int param_1,int *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined2 uVar3;
  int iVar2;
  int iVar4;
  int *piVar5;
  bool bVar6;
  
  *param_3 = 0;
  if ((*(int *)(*param_2 + 0x1c) == 1) || (*(int *)(*param_2 + 0x1c) == 3)) {
    iVar2 = fn_82FB7980();
  }
  else {
    iVar2 = param_2[2];
  }
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = *param_2;
    if (((*(ushort *)(param_1 + 0x28) & 0x8000) != 0) && (iVar2 == *(int *)(iVar1 + 0x20))) {
      fn_82FB8288(param_1,iVar1,iVar2);
    }
    iVar4 = *(short *)(iVar2 + 0xe) + 1;
    if (iVar4 == *(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x10) >> 2) {
      piVar5 = param_2 + 1;
      *(undefined2 *)(iVar2 + 0xe) = 0;
      bVar6 = false;
      if (piVar5 == (int *)0x0) {
        bVar6 = true;
      }
      else if ((*(byte *)((int)param_2 + 6) & 0x80) != 0) {
        if ((*(byte *)((int)param_2 + 6) & 0x40) == 0) {
          bVar6 = (short)(*(short *)piVar5 + -1) != 0;
          *(short *)piVar5 = *(short *)piVar5 + -1;
        }
        else {
          bVar6 = true;
        }
      }
      if (!bVar6) {
        *param_3 = 1;
        return 0;
      }
    }
    else {
      *(short *)(iVar2 + 0xe) = (short)iVar4;
    }
    uVar3 = *(undefined2 *)(iVar2 + 0xe);
  }
  return uVar3;
}

