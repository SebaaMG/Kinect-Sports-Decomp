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
extern int fn_822315A0();
extern int fn_823303F0();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern int fn_8288B760();
extern unsigned int lbl_821B0948;


void fn_82330068(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar7;
  ulonglong uVar6;
  undefined4 *puVar8;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else if (param_2 == 1) {
    iVar1 = *(int *)(param_1 + 0xc);
    uVar2 = *(undefined4 *)(iVar1 + 0x24);
    if (*(int *)(iVar1 + 0x790) != *(int *)(param_1 + 0x58)) {
      if (*(int *)(iVar1 + 0x168) == 0) {
        uVar7 = *(uint *)(iVar1 + 0x16c);
      }
      else {
        uVar7 = fn_8288B760();
        uVar7 = uVar7 & 0xff;
      }
      if (uVar7 == 0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      else {
        uVar6 = fn_8251F720(param_1 + 0x10,0);
        uVar3 = *(undefined4 *)(param_1 + 0xc);
        uVar4 = *(undefined4 *)(param_1 + 0x24);
        uVar5 = *(undefined4 *)(param_1 + 0x20);
        puVar8 = (undefined4 *)fn_8265C9E0(0x118);
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          puVar8[1] = 1;
          *puVar8 = &lbl_821B0948;
          puVar8[2] = 1;
          if (puVar8 + 4 != (undefined4 *)0x0) {
            fn_823303F0(puVar8 + 4,uVar6,*(undefined4 *)(param_1 + 0x1c),uVar3,uVar2,uVar5,uVar4
                            ,param_1 + 0x40);
          }
        }
        iVar1 = *(int *)(param_1 + 0x18);
        *(undefined4 **)(param_1 + 0x18) = puVar8;
        *(undefined4 **)(param_1 + 0x14) = puVar8 + 4;
        if (iVar1 != 0) {
          fn_822315A0();
        }
        if ((uVar6 & 0xffffffff) != 0) {
          fn_8251FA58(uVar6);
        }
      }
    }
  }
  *(int *)(param_1 + 0x28) = param_2;
  return;
}

