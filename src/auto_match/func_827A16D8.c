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
extern unsigned int *auStack_40;
extern int fn_82791070();
extern int fn_827A0BD0();
extern unsigned int iStack_34;


longlong fn_827A16D8(int param_1,uint param_2,uint *param_3)

{
  int *piVar1;
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  int *piVar5;
  uint auStack_40 [2];
  int *piStack_38;
  int iStack_34;
  
  if (param_3 != (uint *)0x0) {
    fn_827A0BD0();
    piVar5 = (int *)(param_1 + 0x24);
    if (((piVar5 == (int *)0x0) || (*(uint *)(param_1 + 0x28) <= param_2)) ||
       (bVar2 = false, (int)param_2 < 0)) {
      bVar2 = true;
    }
    if (!bVar2) {
      piVar1 = *(int **)(*piVar5 + param_2 * 4);
      if (*piVar1 < 0) {
        uVar3 = (ulonglong)(uint)piVar1[2] & 0xffffff;
        if (uVar3 == 0xffffff) {
          uVar3 = 0xffffffffffffffff;
        }
      }
      else {
        uVar3 = (ulonglong)(uint)piVar1[2];
      }
      auStack_40[0] = 0;
      fn_82791070(&piStack_38,*(undefined4 *)(param_1 + 8),uVar3,auStack_40);
      if (((piStack_38 == (int *)0x0) || (iStack_34 < 0)) ||
         (bVar2 = false, piStack_38[1] <= iStack_34)) {
        bVar2 = true;
      }
      if (!bVar2) {
        piVar5 = *(int **)(*piVar5 + param_2 * 4);
        if (*piVar5 < 0) {
          uVar4 = (uint)*(byte *)(piVar5 + 2);
        }
        else {
          uVar4 = piVar5[8];
        }
        *param_3 = uVar4;
        return (ulonglong)**(uint **)(iStack_34 * 4 + *piStack_38) +
               ((ulonglong)auStack_40[0] & 0x7fffffff) * 2;
      }
    }
  }
  return 0;
}

