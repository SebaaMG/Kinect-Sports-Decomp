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
extern unsigned int *auStack_60;
extern unsigned int *auStack_6c;
extern int fn_82230300();
extern int fn_82230360();
extern int fn_8225C590();
extern int fn_8225D288();
extern int fn_8225F160();
extern int fn_822883D0();
extern int fn_82289670();
extern int fn_8228ABB8();
extern int fn_8234F298();
extern int fn_823AB478();
extern unsigned int lbl_83265988;
extern unsigned int uStack_70;


void fn_8228A190(int param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_70;
  undefined4 auStack_6c [3];
  undefined1 auStack_60 [96];
  
  uVar2 = (**(code **)(**(int **)(param_2[3] + 0x8c0) + 100))();
  *(undefined4 *)(param_1 + 0x7c0) = 1;
  fn_82289670(param_1,*(undefined4 *)(param_1 + 0x6a0));
  iVar1 = *param_2;
  if (iVar1 != 0) {
    uVar3 = fn_8225C590();
    fn_82230300(auStack_60,0,0);
    fn_82230360(auStack_60,0xffffffff821a9340,8);
    fn_8225D288(uVar3,auStack_60,uVar2);
    iVar4 = fn_823AB478();
    fn_82230300(auStack_60,1,0);
  }
  else {
    iVar4 = param_2[1];
  }
  *(uint *)(*(int *)(param_1 + 0x6a0) * 0x40 + param_1 + 0x6a8) = (uint)(iVar1 != 0);
  *(int *)(*(int *)(param_1 + 0x6a0) * 0x40 + param_1 + 0x6ac) = iVar4;
  fn_8225F160();
  if ((lbl_83265988 == 0) ||
     ((*(byte *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + 8) & 0x10) == 0)) {
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x6a0);
    auStack_6c[0] = 0;
    uStack_70 = 0;
    if (*(int *)(*(int *)(param_1 + 0x11f0) + 0x18b8) == 1) {
      uVar5 = -((ulonglong)(uVar5 < 2) - 1);
    }
    fn_8234F298(*(int *)(param_1 + 0x11f0) + 0x234,uVar5,auStack_6c,&uStack_70);
    puVar7 = &uStack_70;
    puVar6 = auStack_6c;
  }
  else {
    puVar7 = (undefined4 *)0x0;
    puVar6 = (undefined4 *)0x0;
  }
  fn_8228ABB8(param_1,*(undefined4 *)(param_1 + 0x6a0),uVar2,puVar6,puVar7);
  fn_822883D0(param_1,*(int *)(param_1 + 0x6a0),
                    *(undefined4 *)((*(int *)(param_1 + 0x6a0) + 0x1b) * 0x40 + param_1));
  *(undefined4 *)(param_1 + 0x604) = 1;
  *(undefined4 *)(param_1 + 0x7c0) = 0;
  return;
}

