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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82F68CC0();


undefined8 fn_82DF71E8(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1[1];
  iVar1 = fn_82CE5410();
  if ((int)(param_3[2] & 0x3fffffffU) < iVar5) {
    iVar2 = (param_3[2] & 0x3fffffffU) << 1;
    if (iVar2 <= iVar5) {
      iVar2 = iVar5;
    }
    fn_82CE6310(*(undefined4 *)(iVar1 + 0x10),param_3,iVar2,4);
  }
  param_3[1] = iVar5;
  iVar5 = 0;
  if (0 < param_1[1]) {
    iVar1 = 0;
    do {
      iVar2 = fn_82CE5410();
      puVar3 = (undefined4 *)
               (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x200);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = 0;
      }
      *(undefined4 **)(iVar1 + *param_3) = puVar3;
      fn_82F68CC0(*(undefined4 *)(iVar1 + *param_3),*(undefined4 *)(*param_1 + iVar1),0x200);
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar5 < param_1[1]);
  }
  iVar5 = 0;
  if (0 < param_1[4]) {
    iVar1 = 0;
    do {
      iVar2 = *(int *)(param_1[3] + iVar1);
      iVar4 = *(int *)(*(int *)(iVar2 + 0x18) * 4 + *param_3) + *(int *)(iVar2 + 0x1c);
      if ((undefined4 *)(iVar4 + 0x10) != (undefined4 *)0x0) {
        *(undefined4 *)(iVar4 + 0x10) = 0;
        *(undefined4 *)(iVar4 + 0x14) = 0;
        *(undefined4 *)(iVar4 + 0x18) = 0x80000000;
      }
      iVar2 = ((int (*)())fn_82DF71E8)(iVar2,param_2);
      if (iVar2 == 1) {
        return 1;
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar5 < param_1[4]);
  }
  return 0;
}

