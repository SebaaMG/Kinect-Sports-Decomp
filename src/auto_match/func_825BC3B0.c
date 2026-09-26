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
extern unsigned int *auStack_20;
extern int fn_82535298();
extern int fn_825359D8();
extern int fn_82569980();


void fn_825BC3B0(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 auStack_20 [2];
  
  iVar2 = -1;
  if (*(uint *)(param_2 + 0x20) != 0xffffffff) {
    iVar2 = fn_82569980(param_3,*(uint *)(param_2 + 0x20) & 0xff);
  }
  iVar1 = **(int **)((int)param_3 + 0x60);
  if (iVar2 == -1) {
    auStack_20[0] = *(undefined4 *)(param_2 + 0x14);
    uVar3 = fn_82535298(auStack_20,*(undefined4 *)(iVar1 + 0x84c),0xffffffff83296bc0,
                              0xffffffff83296bd0);
  }
  else {
    auStack_20[0] = *(undefined4 *)(param_2 + 0x14);
    uVar3 = fn_825359D8(auStack_20,
                              *(undefined4 *)(*(int *)((int)param_3 + 0xd8) + iVar2 * 0x30 + 0x10),4
                              ,*(undefined4 *)(iVar1 + 0x84c),0xffffffff83296bc0,0xffffffff83296bd0)
    ;
  }
  *(undefined4 *)(*(int *)(param_2 + 0x10) * 4 + param_1) = uVar3;
  return;
}

