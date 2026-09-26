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
extern int fn_822A0C98();
extern int fn_82359698();
extern int fn_82535298();
extern int fn_82536288();


void fn_823A1758(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 auStack_20 [4];
  
  iVar2 = *(int *)(param_2 + 8);
  if ((*(int *)(iVar2 + 0x58) == *(int *)(iVar2 + 0x54)) || (*(int *)(iVar2 + 0x58) == 0)) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x1c) + param_1);
    *(float *)(param_2 + 0x1c) = fVar1;
    if (*(float *)(param_2 + 0x18) <= fVar1) {
      if ((*(int *)(param_2 + 0x10) != 0) && (*(int *)(param_2 + 0x14) == 0)) {
        auStack_20[0] = *(undefined4 *)(param_2 + 0x10);
        auStack_20[0] =
             fn_82535298(auStack_20,*(undefined4 *)(*(int *)(iVar2 + 0x174) + 0x84c),
                               0xffffffff83296bc0,0xffffffff83296bd0);
        fn_82536288(auStack_20);
        *(undefined4 *)(param_2 + 0x14) = 1;
      }
      uVar3 = (ulonglong)*(uint *)(param_2 + 8);
      iVar2 = fn_822A0C98(*(undefined4 *)(*(uint *)(param_2 + 8) + 0xd4));
      if (iVar2 == 0) {
        fn_82359698(uVar3,8);
      }
    }
  }
  return;
}

