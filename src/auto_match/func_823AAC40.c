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
extern unsigned int *auStack_90;
extern int fn_82358FD8();
extern int fn_82528EE0();


undefined8 fn_823AAC40(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_90 [128];
  
  uVar3 = *(int *)(param_1 + 0x28) - 1;
  piVar1 = *(int **)**(int **)(param_2 + 8);
  piVar2 = (int *)((int *)**(int **)(param_2 + 8))[1];
  if (((uint)(int)*(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20) < uVar3) ||
     ((uint)(int)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20) < uVar3)) {
    fn_82358FD8(param_2,auStack_90,0x40,0xffffffff821b5728);
    iVar4 = *(int *)(param_1 + 0x28);
  }
  else {
    if ((*(int *)(param_2 + 0xa0) != 0) && (*(int *)(*(int *)(param_2 + 0xa0) + 0x40) == 1)) {
      fn_82358FD8(param_2,auStack_90,0x40,0xffffffff821b56ec);
      fn_82528EE0(0xffffffff83299338,0x40,auStack_90);
      return 0xffffffff83299338;
    }
    iVar4 = *(int *)(param_1 + 0x2c);
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    fn_82358FD8(param_2,auStack_90,0x40,0xffffffff821b5708);
  }
  fn_82528EE0(0xffffffff83299338,0x40,auStack_90,iVar4);
  return 0xffffffff83299338;
}

