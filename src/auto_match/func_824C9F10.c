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
extern int fn_824C9FB8();
extern int fn_82F63108();


undefined8 fn_824C9F10(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar3 = (undefined4 *)(param_2 + 8);
  if (0xf < *(uint *)(param_2 + 0x1c)) {
    puVar3 = (undefined4 *)*puVar3;
  }
  iVar2 = fn_824C9FB8(param_2,puVar3);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x68) == 0)) {
    puVar3 = (undefined4 *)(in_r0 + (int)param_3 & 0xfffffff0);
    uVar4 = puVar3[1];
    uVar5 = puVar3[2];
    uVar6 = puVar3[3];
    puVar1 = (undefined4 *)(in_r0 + (int)param_1 & 0xfffffff0);
    *puVar1 = *puVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
  }
  else {
    if (*(int *)(iVar2 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(code **)(**(int **)(iVar2 + 0x68) + 4))(param_1,*(int **)(iVar2 + 0x68),param_3);
  }
  return param_1;
}

