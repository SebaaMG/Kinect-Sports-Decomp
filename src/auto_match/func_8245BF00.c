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
extern unsigned int *auStack_2c;
extern int fn_8245BC50();
extern unsigned int iStack_30;


void fn_8245BF00(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iStack_30;
  undefined4 auStack_2c [11];
  
  if (*(int *)(param_1 + 0x574) == 0) {
    RtlEnterCriticalSection();
    puVar6 = (undefined4 *)(param_1 + 0x568);
    iVar5 = 0;
    *(undefined4 *)(param_1 + 0x570) = 0;
    do {
      iVar3 = (**(code **)(*(int *)*puVar6 + 0xc))();
      if ((iVar3 != 0) && ((*(int *)(param_1 + 0x570) == 0 || (iVar5 == 1)))) {
        *(undefined4 *)(param_1 + 0x570) = *puVar6;
      }
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar5 < 2);
    RtlLeaveCriticalSection(param_1);
    piVar1 = *(int **)(param_1 + 0x570);
    if (piVar1 == (int *)0x0) {
      return;
    }
    iStack_30 = 0;
    auStack_2c[0] = 0;
    uVar4 = (**(code **)(*piVar1 + 8))(piVar1,&iStack_30,auStack_2c);
    *(undefined4 *)(param_1 + 0x71c) = uVar4;
    if (iStack_30 == 0) {
      return;
    }
    uVar4 = 0;
    uVar2 = auStack_2c[0];
    iVar5 = iStack_30;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x5c4);
    *(undefined4 *)(param_1 + 0x578) = 1;
    uVar2 = *(undefined4 *)(param_1 + 0x5d0);
    iVar5 = *(int *)(param_1 + 0x5cc);
  }
  fn_8245BC50(param_1,uVar4,iVar5,uVar2);
  return;
}

