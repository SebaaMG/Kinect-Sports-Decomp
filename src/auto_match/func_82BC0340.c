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
extern int fn_82BC0088();


undefined4 fn_82BC0340(int *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = (*(code *)param_1[4])(param_2);
  iVar2 = *(int *)((*param_1 - 1U & uVar3) * 4 + param_1[2]);
  if (iVar2 != 0) {
    uVar3 = 0;
    if (*(int *)(iVar2 + 4) != 0) {
      iVar6 = 0;
      if (*(int *)(iVar2 + 4) == 0) {
        puVar4 = (undefined4 *)fn_82BC0088(iVar2,0);
        goto LAB_82bc03b8;
      }
      do {
        puVar4 = (undefined4 *)(*(int *)(iVar2 + 8) + iVar6);
LAB_82bc03b8:
        uVar1 = *puVar4;
        iVar5 = (*(code *)param_1[3])(uVar1,param_2);
        if (iVar5 == 0) {
          return uVar1;
        }
        uVar3 = uVar3 + 1;
        iVar6 = iVar6 + 4;
      } while (uVar3 < *(uint *)(iVar2 + 4));
    }
  }
  return 0;
}

