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
extern int fn_82FAB9C0();
extern int fn_82FF86A8();
extern int fn_82FF8ED8();
extern int fn_830080D8();
extern int fn_8302B840();
extern int fn_8302BE60();
extern unsigned int lbl_832642E0;


undefined8 fn_82FFAD90(longlong param_1,int param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  uVar5 = 1;
  puVar3 = (undefined4 *)fn_82FF8ED8(param_1 + 4,*(undefined4 *)(param_2 + 4));
  if (puVar3 == (undefined4 *)0x0) {
    return 2;
  }
  uVar1 = *puVar3;
  iVar2 = puVar3[1];
  piVar4 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 0x998,uVar1);
  if (piVar4 == (int *)0x0) {
    RtlEnterCriticalSection(0xffffffff8326434c);
    piVar4 = (int *)fn_8302B840(iVar2,uVar1);
    if (piVar4 == (int *)0x0) {
      uVar5 = 2;
    }
    else {
      uVar5 = fn_8302BE60(piVar4,puVar3,*(undefined4 *)(param_2 + 4));
      if ((int)uVar5 != 1) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
    }
LAB_82ffaec0:
    RtlLeaveCriticalSection(0xffffffff8326434c);
    if ((int)uVar5 != 1) goto LAB_82ffaee0;
  }
  else if ((iVar2 == 0x4011) && (((uint)piVar4[5] >> 2 & 1) == 0)) {
    RtlEnterCriticalSection(0xffffffff8326434c);
    uVar5 = fn_8302BE60(piVar4,puVar3,*(undefined4 *)(param_2 + 4));
    if ((int)uVar5 != 1) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    goto LAB_82ffaec0;
  }
  puVar3 = (undefined4 *)fn_830080D8(param_3 + 0x34);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = piVar4;
  }
LAB_82ffaee0:
  fn_82FF86A8(param_1 + 4);
  return uVar5;
}

