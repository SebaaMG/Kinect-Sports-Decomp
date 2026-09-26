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
extern unsigned int *auStack_30;
extern int fn_82A46368();
extern int fn_82A46C78();


undefined8 fn_82A46D70(int param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint auStack_30 [12];
  
  iVar1 = *param_2;
  iVar3 = 0;
  uVar4 = 0;
  auStack_30[0] = 0;
  if (iVar1 == 0x100) {
    uVar4 = fn_82A46C78(param_1 + -0x8c);
  }
  else if (iVar1 == 0x200) {
    if (*(int *)(param_1 + 0x204) == 0) {
      *(undefined4 *)(param_1 + 0x144) = 1;
    }
    else {
      if (*(undefined4 **)(param_1 + 0x200) == (undefined4 *)0x0) {
        puVar2 = (uint *)0x0;
      }
      else {
        puVar2 = (uint *)**(undefined4 **)(param_1 + 0x200);
      }
      *puVar2 = *puVar2 | 0x40;
    }
  }
  else {
    auStack_30[0] = (uint)(iVar1 == 0x400);
    fn_82A46368(param_1 + -0x8c,auStack_30);
    if (auStack_30[0] == 1) {
      iVar3 = 0x1000;
    }
  }
  *param_2 = iVar3;
  return uVar4;
}

