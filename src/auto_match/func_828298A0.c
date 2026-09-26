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
extern int fn_82829C48();


void fn_828298A0(uint *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *apiStack_40 [16];
  
  *param_3 = 0;
  if (*(int *)(*(int *)(param_2 + 0x304) + 8) != 0) {
    piVar1 = *(int **)(*(int *)(param_2 + 0x304) + 4);
    piVar2 = (int *)*piVar1;
    apiStack_40[0] = piVar1;
    if (*(char *)(piVar1[1] + 0x15) == '\0') {
      piVar3 = (int *)piVar1[1];
      do {
        if ((uint)piVar3[3] < *param_1) {
          piVar4 = (int *)piVar3[2];
        }
        else {
          piVar4 = (int *)*piVar3;
          apiStack_40[0] = piVar3;
        }
        piVar3 = piVar4;
      } while (*(char *)((int)piVar4 + 0x15) == '\0');
    }
    if ((apiStack_40[0] == piVar1) && (apiStack_40[0] != piVar2)) {
      fn_82829C48(apiStack_40);
    }
    uVar5 = *param_1;
    if ((uVar5 < *(uint *)(apiStack_40[0][4] + 0x18)) && (apiStack_40[0] != piVar2)) {
      fn_82829C48(apiStack_40);
    }
    if ((*(uint *)(apiStack_40[0][4] + 0x18) <= uVar5) &&
       (uVar5 <= *(uint *)(apiStack_40[0][4] + 0x1c))) {
      *param_3 = apiStack_40[0][4];
      param_1[1] = *param_1 - *(int *)(apiStack_40[0][4] + 0x18);
      *(undefined1 *)(param_1 + 2) = 0;
    }
  }
  return;
}

