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
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_82696D38();
extern unsigned int uStack_30;


void fn_826BDB08(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  byte bVar4;
  longlong lVar5;
  byte bVar6;
  int aiStack_40 [4];
  undefined1 uStack_30;
  byte bStack_2f;
  
  if (*(int *)(param_1 + 0x1c) < 1) {
    puVar2 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar2);
    *puVar2 = 2;
    puVar2[4] = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    fn_82696D38(aiStack_40,uVar3,uVar1,0xffffffffffffffff,0);
    bVar4 = (**(code **)(**(int **)(param_1 + 8) + 0x24))
                      (*(int **)(param_1 + 8),(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,aiStack_40
                       ,0);
    bVar6 = 0;
    if (bVar4 != 0) {
      uStack_30 = 0;
      bStack_2f = 0;
      (**(code **)(**(int **)(param_1 + 8) + 0x14))
                (*(int **)(param_1 + 8),(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,aiStack_40,
                 &uStack_30);
      bVar6 = -((bStack_2f & 1) == 0) & bVar4;
      fn_82696330(&uStack_30);
    }
    puVar2 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar2);
    puVar2[4] = bVar6;
    *puVar2 = 2;
    lVar5 = (ulonglong)*(uint *)(aiStack_40[0] + 8) - 1;
    *(int *)(aiStack_40[0] + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(aiStack_40[0]);
    }
  }
  return;
}

