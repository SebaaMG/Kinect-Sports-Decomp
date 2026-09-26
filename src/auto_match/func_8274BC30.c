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
extern int fn_8267C4F0();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696D38();
extern int fn_826A7398();


void fn_8274BC30(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar5;
  int *piVar6;
  undefined8 uVar4;
  undefined1 uVar7;
  undefined4 *apuStack_30 [12];
  
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar5 = fn_826A7398();
    piVar6 = (int *)(**(code **)(*(int *)(iVar5 + 8) + 0xc))((int *)(iVar5 + 8),0x1b);
    uVar7 = 0;
    if (piVar6 != (int *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,0);
      fn_82696D38(apuStack_30,uVar4,uVar1,0xffffffffffffffff,0);
      uVar7 = (**(code **)(*piVar6 + 0x3c))(piVar6,*apuStack_30[0]);
      uVar2 = apuStack_30[0][2];
      apuStack_30[0][2] = (int)((ulonglong)uVar2 - 1);
      if ((ulonglong)uVar2 - 1 == 0) {
        fn_826944C8(apuStack_30[0]);
      }
    }
    puVar3 = *(undefined1 **)(param_1 + 4);
    fn_826959C8(puVar3);
    puVar3[4] = uVar7;
    *puVar3 = 2;
    if (piVar6 != (int *)0x0) {
      fn_8267C4F0(piVar6);
    }
  }
  return;
}

