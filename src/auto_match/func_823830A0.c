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
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_82248B90();
extern int fn_8224E928();
extern int fn_8224ED20();
extern int fn_82383000();
extern int fn_8265CA20();
extern int fn_8288B760();
extern int fn_8288F948();
extern int fn_828A12E8();
extern unsigned int iStack_34;
extern unsigned int iStack_38;


undefined8 fn_823830A0(int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar5;
  int iVar3;
  uint uVar4;
  undefined4 *apuStack_40 [2];
  int iStack_38;
  int iStack_34;
  undefined1 auStack_30 [4];
  undefined4 *puStack_2c;
  
  fn_82383000(&iStack_38,param_1);
  if (iStack_38 == 0) {
LAB_823831a8:
    if (iStack_34 != 0) {
      fn_822315A0();
    }
    uVar2 = 0;
  }
  else {
    uVar2 = fn_828A12E8(*(undefined4 *)(param_1 + 0x10));
    uVar2 = fn_8288F948(uVar2,10);
    fn_8224E928(auStack_30,uVar2);
    apuStack_40[0] = (undefined4 *)*puStack_2c;
    while (apuStack_40[0] != puStack_2c) {
      piVar1 = (int *)apuStack_40[0][5];
      cVar5 = fn_8288B760(piVar1);
      if (cVar5 == '\0') {
        iVar3 = (**(code **)(*piVar1 + 8))(piVar1);
        uVar4 = (**(code **)(*(int *)(iVar3 + 0x2e8) + 0x3c))();
        if (uVar4 < *(uint *)(iStack_38 + 0x2180)) {
          fn_8224ED20(apuStack_40,auStack_30,*puStack_2c);
          fn_8265CA20(puStack_2c);
          goto LAB_823831a8;
        }
      }
      fn_82248B90(apuStack_40);
    }
    fn_8224ED20(apuStack_40,auStack_30,*puStack_2c);
    fn_8265CA20(puStack_2c);
    if (iStack_34 != 0) {
      fn_822315A0();
    }
    uVar2 = 1;
  }
  return uVar2;
}

