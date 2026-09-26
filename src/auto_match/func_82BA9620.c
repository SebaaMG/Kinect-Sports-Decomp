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
extern int fn_82BBFE28();
extern int fn_82BC5AB0();


undefined8 fn_82BA9620(int param_1,undefined1 *param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  *param_2 = 0;
  iVar1 = fn_82BBFE28((ulonglong)*(uint *)(param_1 + 0x94) + 0x14);
  if (((iVar1 < 3) && (iVar1 = fn_82BBFE28((ulonglong)*(uint *)(param_1 + 0x90) + 0x14), iVar1 < 3)
      ) && (iVar1 = fn_82BC5AB0(*(undefined4 *)(param_1 + 0x94)), iVar1 == 1)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x94) + 0x38);
    if (*(int *)(iVar1 + 4) == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)(iVar1 + 8);
    }
    if ((*piVar3 == *(int *)(param_1 + 0x98)) &&
       (iVar1 = fn_82BC5AB0(*(undefined4 *)(param_1 + 0x90)), iVar1 == 1)) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x90) + 0x38);
      if (*(int *)(iVar1 + 4) == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = *(undefined4 **)(iVar1 + 8);
      }
      cVar2 = (**(code **)(*(int *)*puVar4 + 0x1c))();
      if (cVar2 != '\0') {
        return 1;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x90) + 0x38);
      if (*(int *)(iVar1 + 4) == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = *(undefined4 **)(iVar1 + 8);
      }
      cVar2 = (**(code **)(*(int *)*puVar4 + 0x20))();
      if (cVar2 != '\0') {
        *param_2 = 1;
        return 1;
      }
    }
  }
  return 0;
}

