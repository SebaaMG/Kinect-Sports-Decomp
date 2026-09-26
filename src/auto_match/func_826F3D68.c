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
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_8267C4C8();
extern int fn_82687270();
extern int fn_826E4D70();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined8
fn_826F3D68(undefined8 param_1,undefined4 param_2,int *param_3,int param_4,undefined8 param_5)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  uStack_48 = *(undefined4 *)(param_4 + 0x20);
  uStack_44 = *(undefined4 *)(param_4 + 0xc);
  uStack_40 = *(undefined4 *)(param_4 + 0x24);
  uStack_3c = *(undefined4 *)(param_4 + 0x2c);
  uStack_60 = 1;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_54 = 1;
  uStack_4c = 0;
  if ((*(char *)(param_4 + 0x44) != '\0') || (uStack_34 = 0, *(int *)(param_4 + 0x18) != 0)) {
    uStack_34 = 1;
  }
  uStack_38 = (undefined4)param_5;
  piVar1 = *(int **)(*(int *)(param_4 + 8) + 0x10);
  if ((piVar1 != (int *)0x0) &&
     (uStack_50 = param_2, lVar2 = (**(code **)(*piVar1 + 4))(piVar1,&uStack_60), lVar2 != 0)) {
    uVar3 = fn_8267B890(param_5,0x1c,0);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_826E4D70(uVar3,lVar2,1);
    }
    if ((uVar3 & 0xffffffff) == 0) {
      uVar4 = 0;
    }
    else {
      fn_8267C4C8(uVar3);
      if (*param_3 != 0) {
        fn_82687270();
      }
      *param_3 = (int)uVar3;
      fn_82687270(uVar3);
      uVar4 = 1;
    }
    fn_8267C498(lVar2);
    return uVar4;
  }
  return 0;
}

