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
extern int fn_82266DD8();
extern int fn_82286EA8();
extern int fn_82288ED8();
extern int fn_8228A540();
extern int fn_8228AF60();
extern int fn_8265C9E0();


void fn_82288DD8(undefined4 *param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[0x183] != 0) {
    fn_82286EA8();
  }
  uVar2 = fn_8265C9E0(0x5e0);
  if ((uVar2 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_82266DD8(uVar2,param_1 + 100,*param_1,param_1[0x1a6],0);
  }
  param_1[0x183] = iVar3;
  for (puVar1 = *(undefined4 **)**(int **)(iVar3 + 0x5c0);
      puVar1 != (undefined4 *)**(int **)(iVar3 + 0x5c0); puVar1 = (undefined4 *)*puVar1) {
    iVar4 = puVar1[2];
    if (*(int *)(iVar4 + 0x40) == 0) goto LAB_82288e5c;
  }
  iVar4 = 0;
LAB_82288e5c:
  fn_82288ED8(iVar4,0);
  for (puVar1 = *(undefined4 **)**(int **)(param_1[0x183] + 0x5c0);
      puVar1 != (undefined4 *)**(int **)(param_1[0x183] + 0x5c0); puVar1 = (undefined4 *)*puVar1) {
    iVar3 = puVar1[2];
    if (*(int *)(iVar3 + 0x40) == 1) goto LAB_82288e98;
  }
  iVar3 = 0;
LAB_82288e98:
  fn_82288ED8(iVar3,1);
  fn_8228A540(param_1,0xffffffff821a9424);
  fn_8228AF60(param_1,0xffffffff82196582);
  return;
}

