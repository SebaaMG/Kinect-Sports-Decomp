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
extern int fn_822A1968();
extern int fn_82359698();
extern int fn_82372A58();
extern int fn_82535298();
extern int fn_82536288();


void fn_8238B098(double param_1,int param_2)

{
  float fVar1;
  int iVar3;
  undefined8 uVar2;
  ulonglong uVar4;
  undefined4 auStack_20 [4];
  
  iVar3 = *(int *)(param_2 + 8);
  if ((*(int *)(iVar3 + 0x58) != *(int *)(iVar3 + 0x54)) && (*(int *)(iVar3 + 0x58) != 0)) {
    return;
  }
  fVar1 = (float)((double)*(float *)(param_2 + 0x20) + param_1);
  *(float *)(param_2 + 0x20) = fVar1;
  if (fVar1 < *(float *)(param_2 + 0x1c)) {
    return;
  }
  if ((*(int *)(param_2 + 0x10) != 0) && (*(int *)(param_2 + 0x18) != 0)) {
    if (*(int *)(param_2 + 0x14) != 0) goto LAB_8238b140;
    auStack_20[0] = *(undefined4 *)(param_2 + 0x10);
    auStack_20[0] =
         fn_82535298(auStack_20,**(undefined4 **)(iVar3 + 0x9b8),0xffffffff83296bc0,
                           0xffffffff83296bd0);
    fn_82536288(auStack_20);
  }
  *(undefined4 *)(param_2 + 0x14) = 1;
LAB_8238b140:
  uVar4 = (ulonglong)*(uint *)(param_2 + 8);
  iVar3 = fn_822A1968(*(undefined4 *)(*(uint *)(param_2 + 8) + 0xd4));
  if ((iVar3 == 0) && (*(int *)(param_2 + 0x14) != 0)) {
    uVar2 = fn_82372A58(uVar4);
    fn_82359698(*(undefined4 *)(param_2 + 8),uVar2);
  }
  return;
}

