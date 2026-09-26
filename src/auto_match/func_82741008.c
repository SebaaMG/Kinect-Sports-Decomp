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
extern int fn_826C30F8();
extern int fn_8273FE38();


void fn_82741008(int param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  
  fn_8273FE38();
  fn_826C30F8(param_1 + 0x48);
  fn_826C30F8(param_1 + 0x54);
  if ((*(int *)(param_1 + 0x60) != 0) &&
     (uVar2 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x60) + 4), uVar2 != 0)) {
    iVar4 = 0;
    do {
      puVar1 = *(undefined4 **)(**(int **)(param_1 + 0x60) + iVar4);
      if (puVar1 != (undefined4 *)0x0) {
        uVar3 = puVar1[2] + 1;
        puVar1[2] = uVar3;
        if ((uVar3 & 0x70000000) != 0) {
          puVar1[2] = uVar3 & 0x8fffffff;
          (**(code **)*puVar1)(puVar1,2);
        }
      }
      uVar2 = uVar2 - 1;
      iVar4 = iVar4 + 4;
    } while (uVar2 != 0);
  }
  return;
}

