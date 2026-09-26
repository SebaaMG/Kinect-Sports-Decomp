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
extern int fn_829B7788();
extern int fn_829BB598();
extern int fn_829BB5A8();
extern int fn_829BB848();
extern int fn_829BBAA8();
extern int fn_829BC5A8();
extern int fn_82D7E470();


void fn_829BC638(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar5;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  puVar5 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x74);
  *(undefined4 **)(param_1 + 0x1b0) = puVar5;
  iVar7 = 0;
  puVar5[0x1c] = 0;
  *puVar5 = fn_829BB598;
  puVar5[2] = fn_829BC5A8;
  if (param_2 == 0) {
    iVar7 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,0x500);
    puVar5[8] = iVar7;
    puVar5[9] = iVar7 + 0x80;
    puVar5[10] = iVar7 + 0x100;
    puVar5[0xb] = iVar7 + 0x180;
    puVar5[0xc] = iVar7 + 0x200;
    puVar5[0xd] = iVar7 + 0x280;
    puVar5[0xe] = iVar7 + 0x300;
    puVar5[0xf] = iVar7 + 0x380;
    puVar5[0x10] = iVar7 + 0x400;
    puVar5[0x11] = iVar7 + 0x480;
    puVar5[1] = fn_82D7E470;
    puVar5[3] = fn_829BB5A8;
    puVar5[4] = 0;
  }
  else {
    if (0 < *(int *)(param_1 + 0x24)) {
      puVar10 = (undefined4 *)(*(int *)(param_1 + 0xdc) + -0x34);
      puVar9 = puVar5 + 0x11;
      do {
        uVar8 = (ulonglong)(uint)puVar10[0x10];
        if (*(int *)(param_1 + 0xe0) != 0) {
          uVar8 = uVar8 + ((ulonglong)(uint)puVar10[0x10] & 0x7fffffff) * 2;
        }
        uVar6 = puVar10[0x14];
        uVar1 = puVar10[0xf];
        puVar10 = puVar10 + 0x15;
        iVar2 = *(int *)(param_1 + 4);
        uVar3 = fn_829B7788(*puVar10);
        uVar4 = fn_829B7788(uVar6,uVar1);
        uVar6 = (**(code **)(iVar2 + 0x14))(param_1,1,1,uVar4,uVar3,uVar8);
        iVar7 = iVar7 + 1;
        puVar9 = puVar9 + 1;
        *puVar9 = uVar6;
      } while (iVar7 < *(int *)(param_1 + 0x24));
    }
    puVar5[1] = fn_829BB848;
    puVar5[3] = fn_829BBAA8;
    puVar5[4] = puVar5 + 0x12;
  }
  return;
}

