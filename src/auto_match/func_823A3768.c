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
extern int fn_82359698();
extern int fn_82535298();
extern int fn_82536288();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83276570;


void fn_823A3768(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 auStack_20 [4];
  
  fVar4 = lbl_821CC160;
  fVar1 = (float)((double)*(float *)(param_2 + 0xc) - param_1);
  iVar2 = *(int *)(param_2 + 8);
  *(float *)(param_2 + 0xc) = fVar1;
  if (fVar4 < fVar1) {
    return;
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    if (*(int *)(param_2 + 0x14) == 0) {
      iVar3 = *(int *)(*(int *)(iVar2 + 0xd4) + 0x14);
      if (*(int *)(iVar3 + 0x14) != 0) {
        return;
      }
      if (*(int *)(iVar3 + 0x18) != 0) {
        return;
      }
      auStack_20[0] = *(undefined4 *)(param_2 + 0x1c);
      auStack_20[0] =
           fn_82535298(auStack_20,*(undefined4 *)(*(int *)(iVar2 + 0x174) + 0x84c),
                             0xffffffff83296bc0,0xffffffff83296bd0);
      fn_82536288(auStack_20);
      iVar2 = *(int *)(*(int *)(param_2 + 8) + 0x94);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x3c) = 1;
        *(undefined4 *)(iVar2 + 0x48) = 0;
      }
      if (*(int *)(*(int *)(param_2 + 8) + 0x864) != 0) {
        *(undefined4 *)(*(int *)(param_2 + 8) + 0x864) = 0;
      }
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0x14) = 1;
      *(undefined4 *)(param_2 + 0xc) = lbl_83276570;
      return;
    }
    if (*(int *)(iVar2 + 0x864) == 0) {
      return;
    }
  }
  fn_82359698(iVar2,8);
  return;
}

