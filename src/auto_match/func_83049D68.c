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
extern unsigned int *auStack_40;
extern unsigned int iStack_3c;
extern unsigned int uStack_28;


undefined8 fn_83049D68(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  
  uVar4 = param_2 + *(int *)(param_1 + 0x34);
  *(uint *)(param_1 + 0x34) = uVar4;
  if (*(uint *)(param_1 + 0x58) <= uVar4) {
    sVar1 = *(short *)(param_1 + 0x1c);
    if (sVar1 == 1) {
      (**(code **)(**(int **)(param_1 + 0x2c) + 0xc))(*(int **)(param_1 + 0x2c),auStack_30);
      uStack_28 = 0;
      (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))(*(int **)(param_1 + 0x2c),auStack_30);
      *(undefined1 *)(param_1 + 0x7c) = 1;
    }
    else {
      if (sVar1 != 0) {
        *(short *)(param_1 + 0x1c) = sVar1 + -1;
      }
      iVar2 = *(int *)(param_1 + 0x54);
      *(char *)(param_1 + 0x7e) = *(char *)(param_1 + 0x7e) + '\x01';
      iVar3 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x28))
                        (*(int **)(param_1 + 0x2c),iVar2,0,auStack_40);
      if (iVar3 != 1) {
        return 2;
      }
      *(int *)(param_1 + 0x34) = iVar2 - *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x30) = iVar2 - iStack_3c;
    }
  }
  return 1;
}

