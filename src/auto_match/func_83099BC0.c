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


double fn_83099BC0(int param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_30 [48];
  
  iVar2 = *param_2;
  if ((iVar2 != 0) && (*(int **)(param_1 + 0x20) != param_2)) {
    pcVar3 = (char *)(**(code **)(*(int *)(*(int *)(param_1 + 0x18) + 8) + 4))
                               (auStack_30,*(int *)(param_1 + 0x18) + 8,*(int **)(param_1 + 0x20),
                                param_2);
    if (*pcVar3 != '\0') {
      (**(code **)((uint)*(byte *)((*(int *)(param_1 + 0x24) + 0xd) * 0x20 + *(int *)(iVar2 + 0xc) +
                                  *(int *)(param_1 + 0x30)) * 0x14 + *(int *)(param_1 + 0x30) +
                  0x9ac))(*(undefined4 *)(param_1 + 0x20),param_2,param_1 + 0x30,
                          *(undefined4 *)(param_1 + 0x1c),0);
      fVar1 = *(float *)(*(int *)(param_1 + 0x1c) + 4);
      goto switchD_82dbea0c_default;
    }
  }
  fVar1 = *(float *)(*(int *)(param_1 + 0x1c) + 4);
switchD_82dbea0c_default:
  return (double)fVar1;
}

