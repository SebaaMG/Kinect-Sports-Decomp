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
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_8269CEE0();
extern int fn_826FE670();
extern int fn_82711A18();


void fn_826FE738(int param_1,int *param_2)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int aiStack_30 [12];
  
  uVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))(param_1 + 8,0x1b);
  if (uVar1 != 0) {
    fn_8269CEE0(aiStack_30,param_1 + 0xad8);
    if (aiStack_30[0] != 0) {
      *(int *)(aiStack_30[0] + 4) = *(int *)(aiStack_30[0] + 4) + 1;
      fn_8267C498(aiStack_30[0]);
    }
    param_2 = (int *)fn_82711A18(uVar1,param_1,aiStack_30[0],param_2,0);
    if (aiStack_30[0] != 0) {
      fn_8267C498(aiStack_30[0]);
    }
  }
  if ((param_2 == (int *)0x0) || (iVar2 = (**(code **)(*param_2 + 0x9c))(param_2), iVar2 != 4)) {
    uVar4 = *(uint *)(param_1 + 0xb00) | 0x10000;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0xb00) & 0xfffeffff;
  }
  *(uint *)(param_1 + 0xb00) = uVar4;
  *(undefined2 *)(param_1 + 0xae0) = 0;
  fn_826FE670(param_1,param_2);
  if ((*(ushort *)(param_1 + 0xb00) & 1) != 0) {
    while ((param_2 != (int *)0x0 && (cVar3 = (**(code **)(*param_2 + 8))(param_2), cVar3 != '\0')))
    {
      param_2 = (int *)param_2[8];
    }
    if (param_2 == (int *)0x0) {
      uVar4 = *(uint *)(param_1 + 0xb00) | 0x10000;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0xb00) & 0xfffeffff;
    }
    *(uint *)(param_1 + 0xb00) = uVar4;
  }
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8267C4F0(uVar1);
  }
  return;
}

