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
extern int fn_8269CEE0();
extern int fn_826FD340();


void fn_826FE548(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *apiStack_30 [12];
  
  if (param_2 != 0) {
    if ((((*(char *)(param_2 + 0x1c) != '\0') && ((*(byte *)(param_1 + 0xac8) & 1) != 0)) &&
        (iVar5 = *(int *)(param_2 + 4), -1 < iVar5)) && (iVar5 < *(int *)(param_1 + 0xad0))) {
      piVar4 = *(int **)(iVar5 * 4 + *(int *)(param_1 + 0xacc));
      fn_8269CEE0(apiStack_30,param_1 + 0xad8);
      if (apiStack_30[0] != (int *)0x0) {
        apiStack_30[0][1] = apiStack_30[0][1] + 1;
        fn_8267C498(apiStack_30[0]);
      }
      if (apiStack_30[0] != piVar4) {
        *(undefined2 *)(param_1 + 0xae0) = *(undefined2 *)(param_2 + 0x18);
        uVar1 = *(undefined4 *)(param_2 + 0x14);
        uVar2 = *(undefined4 *)(param_2 + 0x10);
        uVar3 = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)(param_1 + 0xae4) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_1 + 0xae8) = uVar3;
        *(undefined4 *)(param_1 + 0xaec) = uVar2;
        *(undefined4 *)(param_1 + 0xaf0) = uVar1;
        fn_826FD340(param_1,piVar4,0,2);
        if ((piVar4 == (int *)0x0) || (iVar5 = (**(code **)(*piVar4 + 0x9c))(piVar4), iVar5 != 4)) {
          uVar6 = *(uint *)(param_1 + 0xb00) | 0x10000;
        }
        else {
          uVar6 = *(uint *)(param_1 + 0xb00) & 0xfffeffff;
        }
        *(uint *)(param_1 + 0xb00) = uVar6;
        *(uint *)(param_1 + 0xb00) = uVar6 | 0x400;
      }
      if (apiStack_30[0] != (int *)0x0) {
        fn_8267C498(apiStack_30[0]);
      }
    }
  }
  return;
}

