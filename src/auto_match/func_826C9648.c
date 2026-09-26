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
extern unsigned int *auStack_40;
extern int fn_8267C498();
extern int fn_8269F500();
extern int fn_826C7308();
extern int fn_826C8D00();
extern int fn_826DCF88();
extern unsigned int uStack_34;


void fn_826C9648(int param_1,int param_2,undefined8 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 auStack_40 [2];
  int *piStack_38;
  undefined4 uStack_34;
  
  auStack_40[0] = *(undefined4 *)(param_2 + 0x44);
  fn_826DCF88(&piStack_38,*(undefined4 *)(param_1 + 0x7c),auStack_40);
  if (piStack_38 == (int *)0x0) {
    iVar2 = *(int *)(param_1 + 0x80);
    uVar1 = *(undefined2 *)(param_2 + 0x46);
    if (iVar2 == 0) {
      iVar2 = fn_8269F500(param_1);
    }
    fn_826C8D00(param_1 + 0xc,0xffffffff8200be10,**(undefined4 **)(iVar2 + 0xc),uVar1);
  }
  else {
    auStack_40[0] = *(undefined4 *)(param_2 + 0x44);
    iVar2 = (**(code **)(*piStack_38 + 0x24))(piStack_38,param_1,auStack_40,uStack_34);
    fn_826C7308(param_1,param_2,iVar2,param_3);
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_1 + 0xbc);
    fn_8267C498(iVar2);
  }
  return;
}

