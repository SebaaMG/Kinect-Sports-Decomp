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
extern unsigned int *auStack_50;
extern int fn_8267B890();
extern int fn_82687270();
extern int fn_82689840();
extern int fn_826D7C00();
extern int fn_826DC448();
extern int fn_826F3790();
extern unsigned int iStack_44;
extern unsigned int iStack_48;


undefined8
fn_826F3F28(undefined8 param_1,int param_2,int *param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar2;
  ulonglong uVar1;
  int iVar3;
  int *piVar4;
  undefined4 auStack_50 [2];
  int iStack_48;
  int iStack_44;
  
  piVar4 = *(int **)(param_2 + 0xc);
  if (piVar4 == (int *)0x0) {
    auStack_50[0] = *(undefined4 *)(param_2 + 8);
    iStack_48 = 0;
    iStack_44 = 0;
    fn_826DC448(*(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(param_3[1] + 0x2c) + 0x1c) + 0xc) + 0x20),
                      &iStack_48,auStack_50);
    piVar2 = (int *)fn_826D7C00(&iStack_48,param_3[1]);
    if ((piVar2 != (int *)0x0) &&
       (uVar1 = (**(code **)(*piVar2 + 8))(piVar2), (uVar1 & 0xff00) == 0x100)) {
      piVar4 = piVar2;
    }
    if ((iStack_48 == 0) && (iStack_44 != 0)) {
      fn_82687270();
    }
    if (piVar4 == (int *)0x0) {
      return 0;
    }
  }
  piVar2 = (int *)piVar4[3];
  iVar3 = (**(code **)(*piVar2 + 0x18))(piVar2);
  if (iVar3 == 0) {
    fn_82689840(piVar2,0);
  }
  uVar1 = fn_8267B890(param_5,0x30,0);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    auStack_50[0] = 0;
    iVar3 = fn_826F3790(uVar1,piVar4,auStack_50,param_2 + 0x10,param_5);
  }
  if (*param_3 != 0) {
    fn_82687270();
  }
  *param_3 = iVar3;
  return 1;
}

