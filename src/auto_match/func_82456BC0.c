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
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_822315A0();
extern int fn_8248F890();
extern int fn_8248F9F8();
extern int fn_82522588();
extern unsigned int iStack_48;
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int lbl_821BEC10;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82456BC0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_60 [4];
  int iStack_5c;
  undefined1 auStack_58 [4];
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  
  if (param_1[0x1c] != 0) {
    iVar8 = param_2 + 4;
    iVar1 = *(int *)(param_1[0x1c] + 0x1c);
    uStack_50 = param_1[iVar8 * 4];
    uStack_4c = param_1[iVar8 * 4 + 1];
    iVar2 = param_1[iVar8 * 4 + 2];
    uStack_44 = param_1[iVar8 * 4 + 3];
    if ((iVar1 == 0) || (*(int *)(iVar1 + 8) <= iVar2)) {
      iStack_48 = iVar2;
      puVar6 = (undefined4 *)fn_8248F890(100);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6[1] = param_2;
        puVar6[2] = iVar2;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[7] = 0xffffffff;
        puVar6[9] = uStack_50;
        puVar6[8] = 0xffffffff;
        puVar6[10] = uStack_4c;
        puVar6[0xb] = uStack_44;
        puVar6[0xc] = 0;
        *puVar6 = &lbl_821BEC10;
        fn_82230110(puVar6 + 0xf,0xffffffff821ba9c4);
        puVar6[0x17] = param_1;
        puVar6[0x16] = 0;
        puVar6[0x18] = 0;
      }
      puVar3 = (undefined4 *)param_1[0x1c];
      fn_8248F9F8(puVar6,*puVar3,puVar6[0xc]);
      puVar4 = (undefined4 *)puVar3[7];
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      puVar3[7] = puVar6;
      puVar5 = (uint *)*param_1;
      for (uVar9 = (ulonglong)*puVar5; (uVar9 & 0xffffffff) != (ulonglong)puVar5[1];
          uVar9 = uVar9 + 8) {
        piVar7 = (int *)fn_82522588(auStack_60,uVar9);
        *(int *)(*piVar7 + 0x2d4) = param_2;
        if (iStack_5c != 0) {
          fn_822315A0();
        }
        piVar7 = (int *)fn_82522588(auStack_58,uVar9);
        *(undefined4 *)(*piVar7 + 0x2d8) = param_3;
        if (iStack_54 != 0) {
          fn_822315A0();
        }
        puVar5 = (uint *)*param_1;
      }
    }
  }
  return;
}

