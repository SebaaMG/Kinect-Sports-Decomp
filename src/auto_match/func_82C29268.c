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
extern int fn_82C10B28();


undefined8 fn_82C29268(int param_1,ulonglong param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *apiStack_30 [12];
  
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar3 = 0;
  if ((*(int *)(iVar1 + 0x18) != 0) &&
     (apiStack_30[0] = *(int **)(iVar1 + 0x14), *(int **)(iVar1 + 0x14) != *(int **)(iVar1 + 0x10)))
  {
    do {
      if (apiStack_30[0] == (int *)0x0) {
        return uVar3;
      }
      if (param_2 < *(ulonglong *)(*apiStack_30[0] + 8)) {
        return uVar3;
      }
      piVar2 = (int *)apiStack_30[0][3];
      if (apiStack_30[0][1] == 0) {
        uVar3 = (**(code **)(*(int *)(iVar1 + 0x34) + 8))(*(int *)(iVar1 + 0x34));
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        *(int *)(iVar1 + 0x78) = *(int *)(iVar1 + 0x78) - *(int *)(iVar1 + 0x74);
        *(int *)(apiStack_30[0][3] + 8) = apiStack_30[0][2];
        if (apiStack_30[0][2] == 0) {
          *(int *)(iVar1 + 0x14) = apiStack_30[0][3];
        }
        else {
          *(int *)(apiStack_30[0][2] + 0xc) = apiStack_30[0][3];
        }
        lVar4 = (ulonglong)*(uint *)(iVar1 + 0x18) - 1;
        *(int *)(iVar1 + 0x18) = (int)lVar4;
        if (lVar4 == 0) {
          *(undefined4 *)(*(int *)(iVar1 + 0x10) + 8) = 0;
          *(undefined4 *)(iVar1 + 0x14) = 0;
        }
        uVar3 = fn_82C10B28(*(undefined4 *)(iVar1 + 0x30),0x1e,apiStack_30);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
      }
      apiStack_30[0] = piVar2;
    } while (piVar2 != *(int **)(iVar1 + 0x10));
  }
  return uVar3;
}

