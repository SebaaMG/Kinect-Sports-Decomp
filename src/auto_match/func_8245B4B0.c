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
extern unsigned int *auStack_50;
extern int fn_82A1DD38();


undefined8 fn_8245B4B0(int param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_50 [80];
  
  RtlEnterCriticalSection();
  if ((*(int *)(param_1 + 0x588) == 0) || (*(int *)(param_1 + 0x6a4) != 3)) {
    RtlLeaveCriticalSection(param_1);
  }
  else {
    RtlLeaveCriticalSection(param_1);
    if (param_4 == 1) {
      piVar1 = *(int **)(param_1 + 0x56c);
    }
    else {
      piVar1 = *(int **)(param_1 + 0x568);
    }
    if (piVar1 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar1 + 0x20))(piVar1);
      uVar4 = (**(code **)(*piVar1 + 0x24))(piVar1);
      if (uVar3 < uVar4) {
        *(undefined4 *)(*(int *)(param_1 + 0x564) + 8) = 0;
        puVar2 = *(uint **)(param_1 + 0x564);
        auStack_50[0] = 2;
        if (((ulonglong)puVar2[2] + 1 & 0xffffffff) <= (ulonglong)puVar2[1]) {
          fn_82A1DD38((ulonglong)*puVar2 + (ulonglong)puVar2[2],auStack_50,1);
          puVar2[2] = puVar2[2] + 1;
        }
        puVar2 = *(uint **)(param_1 + 0x564);
        if (((ulonglong)puVar2[2] + param_3 & 0xffffffff) <= (ulonglong)puVar2[1]) {
          fn_82A1DD38((ulonglong)*puVar2 + (ulonglong)puVar2[2],param_2,param_3);
          puVar2[2] = puVar2[2] + (int)param_3;
        }
        if (param_4 == 1) {
          (**(code **)*piVar1)();
        }
        else {
          (*(code *)((undefined4 *)*piVar1)[1])
                    (piVar1,**(undefined4 **)(param_1 + 0x564),
                     (*(undefined4 **)(param_1 + 0x564))[2]);
        }
        return 0;
      }
    }
  }
  return 0xffffffff80004005;
}

