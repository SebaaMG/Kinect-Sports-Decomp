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


double fn_83089B00(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auStack_30 [48];
  
  iVar3 = *(char *)(param_2 + 5) + param_2;
  iVar1 = *(int *)(*(char *)(param_2 + 5) + param_2);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x14) != iVar3)) {
    pcVar2 = (char *)(**(code **)(**(int **)(param_1 + 8) + 4))
                               (auStack_30,*(int **)(param_1 + 8),*(int *)(param_1 + 0x14),iVar3);
    if (*pcVar2 != '\0') {
      (**(code **)((uint)*(byte *)((*(int *)(param_1 + 0x18) + 0xd) * 0x20 + *(int *)(iVar1 + 0xc) +
                                  *(int *)(param_1 + 0x20)) * 0x14 + *(int *)(param_1 + 0x20) +
                  0x9ac))(*(undefined4 *)(param_1 + 0x14),iVar3,param_1 + 0x20,
                          *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    }
  }
  return (double)*(float *)(*(int *)(param_1 + 0xc) + 4);
}

