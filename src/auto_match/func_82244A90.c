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
extern int fn_82381BC0();
extern int fn_82A4AAA8();


longlong fn_82244A90(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *apuStack_30 [12];
  
  lVar6 = 1;
  puVar1 = *(undefined4 **)(param_1[4] + 0x230);
  apuStack_30[0] = (undefined4 *)*puVar1;
  do {
    puVar3 = apuStack_30[0];
    if (apuStack_30[0] == puVar1) {
      return lVar6;
    }
    uVar4 = fn_82A4AAA8(apuStack_30[0][4]);
    if (uVar4 == 0) {
LAB_82244ad8:
      lVar6 = 0;
    }
    else if (uVar4 == 1) {
      uVar2 = puVar3[4];
      iVar5 = (**(code **)(*param_1 + 4))(param_1);
      iVar5 = (**(code **)(*(int *)(iVar5 + 0x9c) + 0x38))((int *)(iVar5 + 0x9c),uVar2);
      if ((lVar6 == 0) || (lVar6 = 1, iVar5 != param_2)) {
        lVar6 = 0;
      }
    }
    else if (2 < uVar4) goto LAB_82244ad8;
    fn_82381BC0(apuStack_30);
    puVar1 = *(undefined4 **)(param_1[4] + 0x230);
  } while( true );
}

