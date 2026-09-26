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
extern int fn_82CE5410();
extern int fn_82DC73A8();
extern int fn_82DC74A8();
extern int fn_82DC7568();


int fn_82DC7748(int param_1,int param_2,undefined1 *param_3)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  
  if ((int)(((uint)*(ushort *)(param_1 + 4) + param_2) * 2) <= (int)(uint)*(ushort *)(param_1 + 6))
  {
    iVar2 = fn_82DC74A8(*(ushort *)(param_1 + 6) >> 1,*(undefined1 *)(param_1 + 8),
                          *(undefined1 *)(param_1 + 9),*(undefined2 *)(param_1 + 0xc));
    fn_82DC7568(iVar2,param_1);
    uVar1 = fn_82DC73A8(*(undefined2 *)(param_1 + 2));
    iVar3 = fn_82CE5410();
    (**(code **)(**(int **)(iVar3 + 0x10) + 8))(*(int **)(iVar3 + 0x10),param_1,uVar1);
    *param_3 = 1;
    param_1 = iVar2;
  }
  return param_1;
}

