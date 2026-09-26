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
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82697610();
extern int fn_826C6748();


void fn_826A6CB8(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  if (0 < *(int *)(param_1 + 0x1c)) {
    puVar1 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar1);
    uVar6 = 0;
    *puVar1 = 2;
    puVar1[4] = 0;
    if (*(int **)(param_1 + 8) == (int *)0x0) {
      uVar6 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x74);
    }
    else {
      iVar4 = (**(code **)(**(int **)(param_1 + 8) + 8))();
      if (iVar4 != 2) {
        return;
      }
      if ((ulonglong)*(uint *)(param_1 + 8) != 0) {
        uVar6 = (ulonglong)*(uint *)(param_1 + 8) - 0x68;
      }
    }
    if ((uVar6 & 0xffffffff) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      iVar4 = fn_82697610(uVar3,uVar2);
      iVar5 = fn_826C6748(uVar6);
      if (iVar4 < iVar5) {
        puVar1 = *(undefined1 **)(param_1 + 4);
        fn_826959C8(puVar1);
        *puVar1 = 2;
        puVar1[4] = 1;
      }
    }
  }
  return;
}

