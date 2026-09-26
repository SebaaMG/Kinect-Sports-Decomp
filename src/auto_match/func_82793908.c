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
extern int fn_82791070();
extern int fn_82793650();
extern unsigned int iStack_34;


undefined8 fn_82793908(int param_1,undefined4 *param_2,int *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  undefined4 auStack_40 [2];
  int *piStack_38;
  int iStack_34;
  
  fn_82791070(&piStack_38,param_1,param_4,auStack_40);
  iVar4 = 0;
  uVar1 = 0;
  if (((piStack_38 == (int *)0x0) || (iStack_34 < 0)) || (bVar3 = false, piStack_38[1] <= iStack_34)
     ) {
    bVar3 = true;
  }
  if (!bVar3) {
    iVar4 = *(int *)(iStack_34 * 4 + *piStack_38);
    uVar2 = fn_82793650(iVar4,auStack_40[0]);
    iVar4 = *(int *)(iVar4 + 0xc);
    uVar1 = 1;
    if (uVar2 != 0) goto LAB_8279399c;
  }
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x1c);
LAB_8279399c:
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x18);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = (int)uVar2;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar4;
  }
  return uVar1;
}

