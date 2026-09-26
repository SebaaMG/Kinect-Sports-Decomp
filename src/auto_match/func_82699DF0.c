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
extern int fn_8267C498();
extern int fn_82698C48();
extern int fn_82698CC0();
extern int fn_82699C58();
extern int fn_82F68CC0();


void fn_82699DF0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  ulonglong uVar5;
  int *piVar6;
  int aiStack_40 [16];
  
  iVar1 = param_2[0x10];
  uVar2 = param_1[1];
  aiStack_40[0] = iVar1;
  uVar4 = fn_82698C48(param_1,0,uVar2,aiStack_40,0xffffffff82698c28);
  if ((uVar4 < uVar2) &&
     (piVar6 = (int *)(uVar4 * 4 + *param_1),
     *(int *)(*(int *)(uVar4 * 4 + *param_1) + 0x14) == iVar1)) {
    param_1[3] = 0;
    piVar3 = (int *)*piVar6;
    if (piVar3 != (int *)0x0) {
      piVar3[1] = piVar3[1] + 1;
    }
    param_3[5] = iVar1;
    (**(code **)(*param_3 + 100))(param_3);
    *(byte *)(*piVar6 + 0x66) = *(byte *)(*piVar6 + 0x66) & 0xbf;
    fn_82698CC0(piVar6,param_3);
    piVar6 = param_2 + 1;
    if ((*(byte *)((int)param_2 + 0x4b) & 8) == 0) {
      piVar6 = piVar3 + 9;
    }
    fn_82F68CC0(param_3 + 9,piVar6,0x20);
    (**(code **)(*param_3 + 4))(param_3);
    piVar6 = param_2 + 9;
    if ((*(byte *)((int)param_2 + 0x4b) & 4) == 0) {
      piVar6 = piVar3 + 0x11;
    }
    param_3[0x11] = *piVar6;
    param_3[0x12] = piVar6[1];
    param_3[0x13] = piVar6[2];
    param_3[0x14] = piVar6[3];
    param_3[0x15] = piVar6[4];
    param_3[0x16] = piVar6[5];
    if ((*(byte *)((int)param_2 + 0x4b) & 0x80) == 0) {
      uVar5 = (**(code **)(*piVar3 + 0xc))(piVar3);
    }
    else {
      uVar5 = (ulonglong)*(byte *)((int)param_2 + 0x4a);
    }
    (**(code **)(*param_3 + 0x18))(param_3,uVar5);
    param_3[7] = param_2[0xf];
    *(undefined2 *)(param_3 + 0x19) = *(undefined2 *)(param_2 + 0x12);
    if (*param_2 != 0) {
      (**(code **)(*param_3 + 0x1c))(param_3);
    }
    (**(code **)(*piVar3 + 0x74))(piVar3);
    fn_8267C498(piVar3);
    return;
  }
  fn_82699C58(param_1,param_2,param_3,1);
  return;
}

