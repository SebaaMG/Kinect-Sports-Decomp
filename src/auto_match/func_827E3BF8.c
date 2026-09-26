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
extern int fn_827DA3B0();
extern int fn_827E3BB0();
extern int fn_827E42E8();
extern int fn_827E4580();
extern int fn_827E4628();


undefined8 fn_827E3BF8(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar5;
  undefined8 uVar4;
  int iVar6;
  undefined4 *puVar7;
  int aiStack_40 [16];
  
  puVar7 = *(undefined4 **)(param_1 + 4);
  puVar1 = (undefined4 *)*puVar7;
  do {
    if (puVar1 == puVar7) {
      return 0;
    }
    iVar6 = puVar1[2];
    *param_2 = *param_2 + 1;
    piVar2 = *(int **)(iVar6 + 0x24);
    uVar3 = (**(code **)(*piVar2 + 0x20))(piVar2);
    iVar5 = (**(code **)(*piVar2 + 0xc))(piVar2,iVar6);
    *(int *)(iVar6 + 0x20) = iVar5;
    puVar1 = (undefined4 *)*puVar1;
    aiStack_40[0] = iVar6;
    if ((iVar5 != 0x3e5) && (iVar5 != 0x3e4)) {
      uVar4 = (**(code **)(*piVar2 + 0x10))(piVar2,iVar6);
      if ((uVar3 & 0xffffffff) == 0) {
        fn_827E3BB0(param_1,aiStack_40);
      }
      else {
        fn_827E42E8(uVar3);
      }
      iVar6 = (**(code **)(*piVar2 + 0x18))(piVar2);
      iVar5 = (int)uVar4;
      if (iVar5 == 0) {
        fn_827E4580(piVar2);
        fn_827DA3B0(*(undefined4 *)(param_1 + 0x58),piVar2);
      }
      else if ((iVar5 != 0x3e5) && (iVar5 != 0x3e4)) {
        fn_827E4628(piVar2,uVar4);
        fn_827DA3B0(*(undefined4 *)(param_1 + 0x58),piVar2);
        return uVar4;
      }
      if (iVar6 == 0x10e1) {
        return 0x10e1;
      }
    }
    puVar7 = *(undefined4 **)(param_1 + 4);
  } while( true );
}

